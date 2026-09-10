#!/usr/bin/env python3
"""Render a top-down line map from a nocturne_dump_geometry capture.

The point is to answer two questions before any game code is written:

  1. Does a Nocturne level read as a floorplan at all? It was composed as a set
     of fixed camera views over pre-rendered backdrops, and nothing about that
     process guarantees the collision mesh looks like anything from above.
  2. How badly does collapsing Y ruin it? Stacked floors project on top of each
     other, and a height band around the hero is the obvious fix — this shows
     whether it is enough.

Everything here runs offline against one capture, so a bad idea costs a rerun of
this script rather than a rebuild of the game.

Capture with, from gdb, while standing in the level you care about:

    call (int)nocturne_dump_geometry("/tmp/geo.txt")

Then:

    python3 scripts/Python/automap_preview.py /tmp/geo.txt --out /tmp/map

writing <out>-full.png (everything) and, when the capture has a hero position,
<out>-band.png (a height band around him). Both are plain PNG, no dependencies.
"""

import argparse
import math
import struct
import sys
import zlib
from collections import Counter


# --- capture parsing ---------------------------------------------------------

class Capture:
    def __init__(self):
        self.bbox_min = self.bbox_max = None
        self.cell_size = self.grid_coord = None
        self.triangle_count = 0
        self.hero = None          # (x, y, z) or None
        self.area = None
        self.tris = []            # (v1, v2, v3, normal, dominant_axis, flags)


def parse(path):
    cap = Capture()
    section = None
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('['):
                section = line.strip('[]')
                continue
            parts = line.split()
            if section == 'grid':
                key = parts[0]
                if key == 'bbox_min':
                    cap.bbox_min = tuple(float(v) for v in parts[1:4])
                elif key == 'bbox_max':
                    cap.bbox_max = tuple(float(v) for v in parts[1:4])
                elif key == 'cell_size':
                    cap.cell_size = tuple(float(v) for v in parts[1:4])
                elif key == 'grid_coord':
                    cap.grid_coord = tuple(int(v) for v in parts[1:4])
                elif key == 'triangle_count':
                    cap.triangle_count = int(parts[1])
                elif key == 'hero' and parts[1] != 'none':
                    cap.hero = tuple(float(v) for v in parts[1:4])
                    if len(parts) >= 6 and parts[4] == 'area':
                        cap.area = int(parts[5])
            elif section == 'triangles':
                if len(parts) < 14:
                    continue
                n = [float(v) for v in parts[:12]]
                cap.tris.append((
                    tuple(n[0:3]), tuple(n[3:6]), tuple(n[6:9]),
                    tuple(n[9:12]), int(parts[12]), int(parts[13])))
    return cap


# --- geometry ----------------------------------------------------------------

def is_wall(normal, dominant_axis, max_ny):
    """A wall is a surface you cannot walk on.

    `dominant_axis` is the engine's own classification and is the cheap test;
    `max_ny` is the tunable one, and they are kept separate so the preview can
    show whether the engine's axis choice is good enough on its own.
    """
    if dominant_axis == 1:
        return False
    return abs(normal[1]) <= max_ny


def wall_segments(cap, max_ny, y_lo=None, y_hi=None, boundary_only=True,
                  grid=1.0):
    """2D segments from wall triangles, as an outline rather than a mesh.

    The mesh is triangulated, so a flat wall is a strip of quads and every quad
    contributes its own diagonal. Drawn naively that is visible as hatching
    across every surface, and it is what makes a raw projection look like a
    wireframe instead of a floorplan.

    The fix is the standard silhouette trick: count how many wall triangles use
    each edge and keep only those used ONCE. A quad's diagonal is shared by both
    of its triangles and disappears; so does the seam between two coplanar quads.
    What survives is the boundary of each connected surface — which, projected,
    is the floorplan.

    Endpoints are snapped to a grid before counting, because two triangles that
    meet along an edge do not necessarily agree to the last float bit, and an
    edge that fails to match its twin survives as a stray diagonal.
    """
    # Triangles must be deduped BEFORE edges are counted. The capture is written
    # per cube, and a triangle that straddles a cube boundary is stored in every
    # cube it touches — so its edges would be counted two or three times over,
    # the "used exactly once" test would reject them as interior seams, and long
    # walls would come out dashed wherever they happen to cross the grid.
    tris = {}
    for v1, v2, v3, normal, axis, _flags in cap.tris:
        if not is_wall(normal, axis, max_ny):
            continue
        # No band test on the triangle. Banding is done per EDGE below, on the
        # edge's own height, because a floorplan is the set of lines that exist
        # at your level -- not the set of surfaces centred there.
        #
        # Judging whole triangles fails at both ends. Keeping any triangle that
        # OVERLAPS the band drags in whole storeys through their stair shafts
        # and tower walls, which is what drew phantom rooms inside the room you
        # were in. Keeping only triangles CENTRED in the band throws away the
        # cliff you are standing on top of: a 91-unit drop has its centre 45
        # units beneath your feet, so the edge that stops you walking off it
        # disappears from the map.
        #
        # Per-edge keeps the cliff's top lip (an edge at your level) and drops
        # its face (edges far below), and does the same for a wall rising from
        # the storey below -- you see where its top meets your floor.
        key = tuple(sorted((
            (round(v1[0] / grid), round(v1[1] / grid), round(v1[2] / grid)),
            (round(v2[0] / grid), round(v2[1] / grid), round(v2[2] / grid)),
            (round(v3[0] / grid), round(v3[1] / grid), round(v3[2] / grid)))))
        tris[key] = None

    # Each segment keeps its own height as well as its footprint, so a caller
    # can band it later. Without that, "which floor is this wall on" is only
    # answerable by re-extracting, and the walk-through needs to re-band on
    # every frame as the hero climbs.
    counts = Counter()
    heights = {}
    for (a3, b3, c3) in tris:
        for a, b in ((a3, b3), (b3, c3), (c3, a3)):
            pa, pb = (a[0], a[2]), (b[0], b[2])
            if pa == pb:
                continue
            key = (pa, pb) if pa <= pb else (pb, pa)
            counts[key] += 1
            heights[key] = (a[1] + b[1]) * 0.5

    segs = []
    for (pa, pb), n in counts.items():
        if boundary_only and n != 1:
            continue
        y = heights[(pa, pb)] * grid
        if y_lo is not None and not (y_lo <= y <= y_hi):
            continue
        segs.append((pa[0] * grid, pa[1] * grid, pb[0] * grid, pb[1] * grid, y))
    return segs


# --- raster ------------------------------------------------------------------

class Image:
    def __init__(self, w, h, bg=(16, 16, 20)):
        self.w, self.h = w, h
        self.px = bytearray(bytes(bg) * (w * h))

    def set(self, x, y, rgb):
        if 0 <= x < self.w and 0 <= y < self.h:
            i = (y * self.w + x) * 3
            self.px[i:i + 3] = bytes(rgb)

    def line(self, x0, y0, x1, y1, rgb):
        dx, dy = abs(x1 - x0), -abs(y1 - y0)
        sx = 1 if x0 < x1 else -1
        sy = 1 if y0 < y1 else -1
        err = dx + dy
        while True:
            self.set(x0, y0, rgb)
            if x0 == x1 and y0 == y1:
                return
            e2 = 2 * err
            if e2 >= dy:
                err += dy
                x0 += sx
            if e2 <= dx:
                err += dx
                y0 += sy

    def disc(self, cx, cy, r, rgb):
        for y in range(-r, r + 1):
            for x in range(-r, r + 1):
                if x * x + y * y <= r * r:
                    self.set(cx + x, cy + y, rgb)

    def write_png(self, path):
        raw = bytearray()
        stride = self.w * 3
        for y in range(self.h):
            raw.append(0)                       # filter: none
            raw += self.px[y * stride:(y + 1) * stride]

        def chunk(tag, data):
            out = struct.pack('>I', len(data)) + tag + data
            return out + struct.pack('>I', zlib.crc32(tag + data) & 0xffffffff)

        png = b'\x89PNG\r\n\x1a\n'
        png += chunk(b'IHDR', struct.pack('>IIBBBBB', self.w, self.h, 8, 2, 0, 0, 0))
        png += chunk(b'IDAT', zlib.compress(bytes(raw), 9))
        png += chunk(b'IEND', b'')
        with open(path, 'wb') as f:
            f.write(png)


def render(segs, cap, size, path, hero=None, title='', extent=None, dim=()):
    if not segs and not dim and extent is None:
        print(f'  {path}: nothing to draw')
        return
    if extent is not None:
        x0, x1, z0, z1 = extent
    else:
        xs = [s[0] for s in segs] + [s[2] for s in segs]
        zs = [s[1] for s in segs] + [s[3] for s in segs]
        x0, x1, z0, z1 = min(xs), max(xs), min(zs), max(zs)
    span = max(x1 - x0, z1 - z0) or 1.0
    pad = 12
    scale = (size - 2 * pad) / span

    def to_px(x, z):
        # +Z away from the viewer, so flip it: a map reads north-up.
        return (int(pad + (x - x0) * scale),
                int(size - pad - (z - z0) * scale))

    img = Image(size, size)
    # Explored geometry on other storeys first, so the current floor always
    # draws over it rather than being lost in it.
    for s in dim:
        p, q = to_px(s[0], s[1]), to_px(s[2], s[3])
        img.line(p[0], p[1], q[0], q[1], (74, 92, 116))
    for s in segs:
        p, q = to_px(s[0], s[1]), to_px(s[2], s[3])
        img.line(p[0], p[1], q[0], q[1], (150, 190, 230))

    if hero is not None:
        # Drawn last and given a dark halo, because the marker is the one thing
        # that must never be lost in the lines -- and in a dense room a bare
        # dot the colour of a wall is exactly what goes missing.
        hx, hz = to_px(hero[0], hero[2])
        img.disc(hx, hz, 7, (10, 10, 14))
        img.disc(hx, hz, 5, (255, 80, 60))
        img.disc(hx, hz, 2, (255, 220, 200))
        inside = 0 <= hx < size and 0 <= hz < size
    else:
        inside = True

    img.write_png(path)
    print(f'  {path}: {len(segs)} segments'
          f'{f" (+{len(dim)} dimmed)" if dim else ""}, world span '
          f'x[{x0:.0f},{x1:.0f}] z[{z0:.0f},{z1:.0f}] {title}'
          f'{"" if inside else "  !! MARKER OFF-IMAGE"}')


# --- walk-through ------------------------------------------------------------

def read_path(path):
    """`x y z` per line — a recorded hero track. Blank lines and # ignored."""
    pts = []
    with open(path) as f:
        for line in f:
            line = line.split('#', 1)[0].strip()
            if not line:
                continue
            p = line.split()
            if len(p) >= 3:
                pts.append((float(p[0]), float(p[1]), float(p[2])))
    return pts


def walk(segs, cap, args):
    """Render the map filling in as the hero moves along a recorded path.

    Reveal is per grid CELL rather than per segment, which is the mechanism a
    real automap would use: cells within reveal_radius of the hero become known,
    and a wall is drawn once the cell containing its midpoint is known. That
    makes the fill-in follow the level's own structure -- a room appears as you
    enter it -- instead of a circle sliding over a static drawing.
    """
    pts = read_path(args.path)
    if not pts:
        print(f'  {args.path}: no samples')
        return

    cs, bmin = cap.cell_size, cap.bbox_min

    def cell(x, y, z):
        return (int((x - bmin[0]) / cs[0]),
                int((y - bmin[1]) / cs[1]),
                int((z - bmin[2]) / cs[2]))

    # Bucket segments into 3D cells, once. Reveal has to be three-dimensional:
    # with a hero-following band, knowing a footprint says nothing about which
    # storey was seen there, and a tower walked at the top would otherwise
    # uncover the hall beneath it.
    by_cell = {}
    for s in segs:
        c = cell((s[0] + s[2]) * 0.5, s[4], (s[1] + s[3]) * 0.5)
        by_cell.setdefault(c, []).append(s)

    r = args.reveal_radius
    sx = int(r / cs[0]) + 1
    sy = int(max(args.below, args.above) / cs[1]) + 1
    sz = int(r / cs[2]) + 1

    # One frame of reference for every frame, so the map sits still while it
    # fills in instead of rescaling under the viewer each time.
    #
    # It has to cover the PATH as well as the geometry. Sized to the band's
    # segments alone, a hero who walks past their edge -- onto a storey whose
    # walls are not in this band, or out over open ground -- leaves the frame
    # entirely and the marker vanishes, which is precisely what happened.
    xs = [s[0] for s in segs] + [s[2] for s in segs] + [p[0] for p in pts]
    zs = [s[1] for s in segs] + [s[3] for s in segs] + [p[2] for p in pts]
    extent = (min(xs), max(xs), min(zs), max(zs))

    known = set()
    frames = max(1, args.frames)
    step = max(1, len(pts) // frames)

    for n in range(frames):
        for p in pts[n * step:(n + 1) * step]:
            gx, gy, gz = cell(*p)
            for dx in range(-sx, sx + 1):
                for dy in range(-sy, sy + 1):
                    for dz in range(-sz, sz + 1):
                        if dx * dx + dz * dz <= sx * sx:
                            known.add((gx + dx, gy + dy, gz + dz))
        here = pts[min(len(pts) - 1, (n + 1) * step - 1)]
        lo, hi = here[1] - args.below, here[1] + args.above
        shown, faded = [], []
        for c in known:
            for s in by_cell.get(c, ()):
                (shown if lo <= s[4] <= hi else faded).append(s)
        render(shown, cap, args.size, f'{args.out}-walk-{n:03d}.png', here,
               f'(y {lo:.0f}..{hi:.0f}, {len(known)} cells known)',
               extent=extent, dim=faded)


# --- report ------------------------------------------------------------------

def height_histogram(cap, bins=24):
    ys = [ (v1[1] + v2[1] + v3[1]) / 3.0 for v1, v2, v3, _n, _a, _f in cap.tris ]
    if not ys:
        return
    lo, hi = min(ys), max(ys)
    if hi - lo < 1e-6:
        print(f'  all geometry at y = {lo:.1f}')
        return
    width = (hi - lo) / bins
    counts = Counter(min(bins - 1, int((y - lo) / width)) for y in ys)
    peak = max(counts.values())
    print(f'\n  height distribution ({lo:.0f} .. {hi:.0f}):')
    for b in range(bins):
        n = counts.get(b, 0)
        bar = '#' * int(40 * n / peak) if peak else ''
        print(f'    {lo + b * width:8.0f} {n:7d} {bar}')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--out', default='/tmp/map', help='output path prefix')
    ap.add_argument('--size', type=int, default=1400, help='image size in px')
    ap.add_argument('--max-ny', type=float, default=0.5,
                    help='|normal.y| at or below which a surface counts as wall')
    # The hero's position is at his feet, so the band around him is not
    # symmetric: almost nothing below the floor he is standing on belongs on
    # the map, while a whole storey's height above him does.
    # Sized to ONE storey. Two storeys' worth lights the floor above as though
    # it were the one you are on -- at ground level outside this castle, an
    # --above of 22 reaches its interior floor at y 14 -- and reaches far enough
    # down to show cellars. ~13 units total is right for CASTLE.geo; it is
    # content-dependent and wants checking per level.
    ap.add_argument('--below', type=float, default=2.0,
                    help='world units below the hero to keep')
    ap.add_argument('--above', type=float, default=11.0,
                    help='world units above the hero to keep')
    ap.add_argument('--grid', type=float, default=1.0,
                    help='snap endpoints to this world-unit grid before '
                         'matching shared edges')
    ap.add_argument('--mesh', action='store_true',
                    help='draw every edge instead of surface outlines only')
    ap.add_argument('--path', help='recorded hero track ("x y z" per line); '
                                   'renders the map filling in along it')
    ap.add_argument('--frames', type=int, default=8,
                    help='how many fill-in snapshots to write for --path')
    ap.add_argument('--reveal-radius', type=float, default=25.0,
                    help='world units around the hero revealed as he moves')
    args = ap.parse_args()

    cap = parse(args.capture)
    if not cap.tris:
        sys.exit('no triangles in capture — was a level loaded?')

    walls = sum(1 for _1, _2, _3, n, a, _f in cap.tris if is_wall(n, a, args.max_ny))
    axes = Counter(a for *_r, a, _f in cap.tris)

    print(f'capture: {args.capture}')
    print(f'  triangles      {len(cap.tris)} (header said {cap.triangle_count})')
    print(f'  dominant_axis  ' +
          ', '.join(f'{k}:{v}' for k, v in sorted(axes.items())))
    print(f'  wall-like      {walls} ({100.0 * walls / len(cap.tris):.1f}%)')
    if cap.bbox_min:
        print(f'  bbox           {cap.bbox_min} .. {cap.bbox_max}')
    if cap.grid_coord:
        gx, gy, gz = cap.grid_coord
        print(f'  grid_coord     {gx} x {gy} x {gz} = {gx * gy * gz} cubes')
        print(f'  visited bitmap {math.ceil(gx * gz / 8)} bytes '
              f'({gx} x {gz} cells, 1 bit each)')
    if cap.hero:
        print(f'  hero           {cap.hero}  area {cap.area}')

    height_histogram(cap)

    outline = not args.mesh
    print()
    render(wall_segments(cap, args.max_ny, boundary_only=outline,
                         grid=args.grid),
           cap, args.size, f'{args.out}-full.png', cap.hero, '(all heights)')

    if cap.hero:
        y = cap.hero[1]
        lo, hi = y - args.below, y + args.above
        segs = wall_segments(cap, args.max_ny, lo, hi,
                             boundary_only=outline, grid=args.grid)
        render(segs, cap, args.size, f'{args.out}-band.png', cap.hero,
               f'(y {lo:.0f}..{hi:.0f})')
        if args.path:
            # UNBANDED. The walk re-bands on every frame as the hero changes
            # height, so it must be given the whole level: handing it the
            # capture position's band lets each frame only subtract from that
            # one storey, and everything the hero walks to at another height --
            # a cliff lip at his feet, the floor below -- is already gone.
            walk(wall_segments(cap, args.max_ny, boundary_only=outline,
                               grid=args.grid),
                 cap, args)
    else:
        print('  no hero in capture — skipping the height-band render')


if __name__ == '__main__':
    main()
