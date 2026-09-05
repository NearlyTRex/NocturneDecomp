#!/usr/bin/env python3
"""Compare frame captures the way research/17's method rules require.

Reports, for every image given: its own mean and percentile ladder. Then for
every adjacent pair: mean|d|, the fraction of bytes that are exactly equal, and
the largest single-byte difference.

Deliberately does NOT offer a differing-pixels mask or a paired-pixel fit.
research/13 retracted a chapter of conclusions built on those: masking to the
pixels that differ makes any two images look maximally different, and fitting
across two rasterizers that do not sample identically fits the sampling, not the
effect. Matched percentiles are the comparison that survived.

The exact-match fraction is the one that matters for a pass-through refactor: a
blit that only carries a finished image should be bit-identical on a still frame,
not merely close.

Usage:
    python3 compare_ppm.py /tmp/blit_0.ppm /tmp/blit_1.ppm /tmp/blit_2.ppm ...
"""

import sys


def read_ppm(path):
    """Binary P6, the format nocturne_dump_frontbuffer writes."""
    with open(path, "rb") as handle:
        data = handle.read()

    fields = []
    pos = 0
    while len(fields) < 4:
        while pos < len(data) and data[pos : pos + 1].isspace():
            pos += 1
        if data[pos : pos + 1] == b"#":
            while pos < len(data) and data[pos] != 0x0A:
                pos += 1
            continue
        start = pos
        while pos < len(data) and not data[pos : pos + 1].isspace():
            pos += 1
        fields.append(data[start:pos])
    pos += 1  # the single whitespace byte after maxval

    magic, width, height, maxval = fields
    if magic != b"P6" or int(maxval) != 255:
        raise ValueError("%s: expected binary P6 with maxval 255" % path)

    width, height = int(width), int(height)
    pixels = data[pos : pos + width * height * 3]
    if len(pixels) != width * height * 3:
        raise ValueError("%s: truncated (%d of %d bytes)"
                         % (path, len(pixels), width * height * 3))
    return width, height, pixels


def percentiles(values, points=(50, 70, 90, 95, 99)):
    ordered = sorted(values)
    last = len(ordered) - 1
    return [ordered[min(last, int(last * p / 100.0))] for p in points]


def main(argv):
    if not argv:
        print(__doc__)
        return 1

    images = []
    for path in argv:
        width, height, pixels = read_ppm(path)
        images.append((path, width, height, pixels))

    print("%-28s %8s %6s %6s %6s %6s %6s %6s"
          % ("", "mean", "p50", "p70", "p90", "p95", "p99", "max"))
    for path, width, height, pixels in images:
        p50, p70, p90, p95, p99 = percentiles(pixels)
        print("%-28s %8.3f %6d %6d %6d %6d %6d %6d"
              % (path.split("/")[-1], sum(pixels) / float(len(pixels)),
                 p50, p70, p90, p95, p99, max(pixels)))

    print()
    for i in range(len(images) - 1):
        a_path, a_w, a_h, a = images[i]
        b_path, b_w, b_h, b = images[i + 1]
        if (a_w, a_h) != (b_w, b_h):
            # Never compare across resolutions; say so rather than resample.
            print("%s vs %s: %dx%d vs %dx%d — NOT COMPARABLE"
                  % (a_path.split("/")[-1], b_path.split("/")[-1],
                     a_w, a_h, b_w, b_h))
            continue
        total = 0
        equal = 0
        worst = 0
        for x, y in zip(a, b):
            d = x - y if x > y else y - x
            total += d
            if d == 0:
                equal += 1
            elif d > worst:
                worst = d
        print("%-13s vs %-13s  mean|d| %7.4f   identical %6.2f%%   max|d| %3d"
              % (a_path.split("/")[-1], b_path.split("/")[-1],
                 total / float(len(a)), 100.0 * equal / len(a), worst))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
