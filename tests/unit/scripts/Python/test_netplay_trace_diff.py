# Imports
import os
import runpy
import sys

# Local imports
from repo_paths import SCRIPTS_DIR
import netplay_trace_diff as ntd

HOST_SIM = """---- trace reset ----
junk
1 F seed=1 draws=0
1 0000 hero pos=0,0,0
1 A 0007 door pos=1,2,3 area=4
1 E cur   doorOpened
2 F seed=1 draws=0
2 D bat        hp=10
2 D bat        hp=9
2 A 0008 bat pos=0,0,0 area=1
2 A
2 E flag+ gotKey
3 F seed=2 draws=1
4 F seed=2 draws=1
"""
GUEST_SIM = """1 F seed=1 draws=0
1 0000 hero pos=0,0,0
1 A 0007 door pos=1,2,3 area=4
1 E cur   doorOpened
2 F seed=1 draws=0
2 D bat        hp=10
2 D bat        hp=8
2 E flag+ other
3 F seed=9 draws=1
3 E flag+ gotKey
3 A 0007 door pos=9,9,9 area=4
"""


def write(tmp_path, side, sim = None, rng = None):
    folder = tmp_path / side
    folder.mkdir(exist_ok = True)
    if sim is not None:
        (folder / "nocturne_simtrace.log").write_text(sim)
    if rng is not None:
        (folder / "nocturne_rngtrace.log").write_text(rng)
    return str(folder)


def test_the_sim_frames_carry_actors_forward_and_number_repeated_lines(tmp_path):
    path = os.path.join(write(tmp_path, "h", HOST_SIM), "nocturne_simtrace.log")
    frames = list(ntd.sim_frames(path))
    assert [f[0] for f in frames] == [1, 2, 3, 4]
    _, header, chars, actors, events = frames[1]
    assert header == "2 F seed=1 draws=0"
    assert chars == {"D": "2 D bat        hp=10", "D#2": "2 D bat        hp=9"}
    assert actors == {"0007": ("door", "1,2,3", "4"), "0008": ("bat", "0,0,0", "1")}
    assert events == ["flag+ gotKey"]
    assert list(ntd.sim_frames(os.path.join(write(tmp_path, "e", ""), "nocturne_simtrace.log"))) == []


def test_each_kind_of_divergence_is_reported_at_its_first_frame(tmp_path, capsys):
    host, guest = write(tmp_path, "h", HOST_SIM), write(tmp_path, "g", GUEST_SIM)
    ntd.diff_sim(os.path.join(host, "nocturne_simtrace.log"), os.path.join(guest, "nocturne_simtrace.log"))
    out = capsys.readouterr().out
    assert "frames compared: 3" in out
    assert "host      2  guest      3  (+1 frames)  flag+ gotKey" in out
    assert "frame      2  guest only  flag+ other" in out
    assert "first header divergence at frame 3" in out
    assert "first character divergence at frame 2\n    host : 2 D bat        hp=9" in out
    assert "first actor divergence at frame 2\n    host : 0008 only on host" in out


def test_identical_traces_have_no_divergence(tmp_path, capsys):
    one = os.path.join(write(tmp_path, "h", GUEST_SIM), "nocturne_simtrace.log")
    ntd.diff_sim(one, one)
    out = capsys.readouterr().out
    assert "no event-list divergence" in out
    for kind in ("header", "character", "actor"):
        assert f"no {kind} divergence" in out
    empty = os.path.join(write(tmp_path, "e", ""), "nocturne_simtrace.log")
    ntd.diff_sim(empty, one)
    assert "one of the traces is empty" in capsys.readouterr().out


def test_an_actor_that_differs_is_named(tmp_path, capsys):
    host = "1 F s\n1 A 0001 a pos=0 area=1\n"
    guest = "0 F s\n1 F s\n1 A 0001 a pos=5 area=1\n"
    h = os.path.join(write(tmp_path, "h", host), "nocturne_simtrace.log")
    g = os.path.join(write(tmp_path, "g", guest), "nocturne_simtrace.log")
    ntd.diff_sim(h, g)
    out = capsys.readouterr().out
    assert "host : 0001 ('a', '0', '1')\n    guest: 0001 ('a', '5', '1')" in out
    ntd.diff_sim(g, os.path.join(write(tmp_path, "x", "0 F s\n"), "nocturne_simtrace.log"))
    assert "frames compared: 1" in capsys.readouterr().out


def test_a_side_that_runs_ahead_is_skipped_until_the_frames_meet(tmp_path, capsys):
    early = "0 0000 before any frame\n0 F s\n0 E cur early\n1 F s\n"
    late = os.path.join(write(tmp_path, "l", "1 F s\n0 E x\n"), "nocturne_simtrace.log")
    e = os.path.join(write(tmp_path, "e", early), "nocturne_simtrace.log")
    ntd.diff_sim(e, late)
    assert "frame      0  host  only  cur early" in capsys.readouterr().out
    ntd.diff_sim(late, e)
    assert "frame      0  guest only  cur early" in capsys.readouterr().out
    # One side ends while the other is still catching up
    ahead = os.path.join(write(tmp_path, "a", "5 F s\n"), "nocturne_simtrace.log")
    ntd.diff_sim(e, ahead)
    ntd.diff_sim(ahead, e)
    assert capsys.readouterr().out.count("frames compared: 0") == 2


def test_the_rng_diff_walks_frames_where_one_side_drew_nothing(tmp_path, capsys):
    h = os.path.join(write(tmp_path, "h", rng = "1 0 +5\n2 1 +5\n4 2 +5\nbad\n"), "nocturne_rngtrace.log")
    g = os.path.join(write(tmp_path, "g", rng = "1 0 +5\n4 1 +5\n"), "nocturne_rngtrace.log")
    ntd.diff_rng(h, g)
    out = capsys.readouterr().out
    assert "host draws 3 in 3 frames / guest 2 in 2 frames" in out
    assert "frames compared 4, differing 1, first 2\n    host : ['+5']\n    guest: []" in out
    ntd.diff_rng(g, g)
    assert "no RNG divergence over 4 common frames" in capsys.readouterr().out
    empty = os.path.join(write(tmp_path, "e", rng = ""), "nocturne_rngtrace.log")
    ntd.diff_rng(h, empty)
    assert "one of the traces has no draws" in capsys.readouterr().out


def test_main_skips_a_trace_missing_on_one_side(tmp_path, capsys):
    host = write(tmp_path, "h", HOST_SIM, "1 0 +5\n")
    guest = write(tmp_path, "g", GUEST_SIM)
    ntd.main([host, guest])
    out = capsys.readouterr().out
    assert "=== RNG stream ===\n  missing nocturne_rngtrace.log on one side; skipped" in out
    assert "=== sim state ===\n  frames compared: 3" in out


def test_runs_as_a_script_with_the_default_folders(tmp_path, monkeypatch, capsys):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setattr(sys, "argv", ["netplay_trace_diff.py"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "netplay_trace_diff.py"), run_name = "__main__")
    assert capsys.readouterr().out.count("skipped") == 2
