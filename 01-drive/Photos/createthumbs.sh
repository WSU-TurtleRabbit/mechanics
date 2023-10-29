#! /bin/bash

for img in *.jpg; do
    sips --resampleHeight 300 "$img" --out "thumbnails/$img"
done
