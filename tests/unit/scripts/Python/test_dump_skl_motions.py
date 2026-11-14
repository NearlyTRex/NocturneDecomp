# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import dump_skl_motions as dsm


def skeleton(version):
    """A skeleton file's motion list in `version`'s format: two states, two motions."""
    lines = ["// bones and the rest", "1", "// motion list version", str(version), "// state list", "2",
             "STAND", "WALK", "// motion count", "2"]
    for index, (name, state, frames) in enumerate((("stand", 0, 46), ("walk", 1, 49))):
        lines += [f'// motion {index}: "name",fps,state,frameStart,frameCount', f'"{name}",30,{state},0,{frames}',
                  "// exit forward", f"{frames},{1 - index},0", "// exit cmd", f"{2 + index},0.5,{index}",
                  "// exit back", "0,0"]
        if version >= 3:
            lines += ["// motion: frameResolution, storedFrameCount", f"{1 + index},{frames}"]
        lines += ["// transitions", "1" if index == 0 else "0"]
        if index == 0:
            lines += ["1,6,1,0,0.1,1"]
        lines += ["// signals", "1" if index else "0"] + ([" 44,7"] if index else [])
        if version >= 2:
            lines += ["// markers", "2,5,9" if index else "0"]
    return "\r\n".join(lines) + "\r\n"


@pytest.fixture(name = "files")
def fixture_files(tmp_path):
    out = {}
    for version in (1, 2, 3):
        path = tmp_path / f"v{version}.skl"
        path.write_bytes(skeleton(version).encode("latin-1"))
        out[version] = str(path)
    return out


def test_numbers_are_ints_unless_they_look_like_floats():
    assert dsm.numbers(" 1, 0.5 ,2e3 7") == [1, 0.5, 2e3, 7]


@pytest.mark.parametrize("version, markers, resolution", [(1, [], 1), (2, [5, 9], 1), (3, [5, 9], 2)])
def test_each_motion_list_version_parses(files, version, markers, resolution):
    skl = dsm.parse(files[version])
    assert (skl["version"], skl["states"]) == (version, ["STAND", "WALK"])
    stand, walk = skl["motions"][0], skl["motions"][1]
    assert (stand["name"], stand["exit_cmd"], stand["exit_tween"]) == ("stand", 2, 0.5)
    assert stand["transitions"] == [{"desired": 1, "cmd": 6, "to_motion": 1, "to_frame": 0, "tween": 0.1,
                                     "keep_state": 1}]
    assert (walk["signals"], walk["markers"]) == ([(44, 7)], markers)
    assert (walk["frame_resolution"], walk["stored_frames"]) == (resolution, 49)


def test_out_of_range_indices_print_as_unknown(files):
    skl = dsm.parse(files[2])
    assert (dsm.state_name(skl, 1), dsm.state_name(skl, 9), dsm.state_name(skl, -1)) == ("WALK", "?9", "?-1")
    assert (dsm.motion_name(skl, 0), dsm.motion_name(skl, 5)) == ("stand", "?5")


def test_the_readable_dump_spells_out_every_route(files):
    text = dsm.dump(dsm.parse(files[3]))
    assert '[0] "stand" state 0 STAND, 46 frames at 30 fps (global 0)\n' in text
    assert '[1] "walk" state 1 WALK, 49 frames at 30 fps (global 0), stored every 2 (49 kept)' in text
    assert '    exit at f46 -> [1] "walk" f0, flowTo 0.5s' in text
    assert '    exit at f49 -> [0] "stand" f0, tweenPoseToPose 0.5s, keepState' in text
    assert '    if WALK -> [1] "walk" f0, tweenMotionToMotion 0.1s, keepState' in text
    assert "    signals: f44:7 (0x7)" in text and "    markers: [5, 9]" in text


def test_the_compact_dump_is_one_line_per_motion(files):
    text = dsm.compact(dsm.parse(files[2]))
    assert text.splitlines()[0].endswith("states: 0=STAND 1=WALK")
    assert "[0] 'stand' st=0(STAND) n=46 exit@46->1 flow | sig[] mk | tr: 1>1MM" in text
    assert "[1] 'walk' st=1(WALK) n=49 exit@49->0 PP keep | sig[f44:7] mk[5, 9] | tr: " in text


def test_main_prints_each_style(files, capsys):
    dsm.main([files[1], files[3]])
    assert capsys.readouterr().out.count("# ") == 2
    dsm.main(["--compact", files[2]])
    assert "states:" in capsys.readouterr().out
    dsm.main(["--json", files[2]])
    assert json.loads(capsys.readouterr().out)["version"] == 2
    dsm.main(["--json", files[1], files[2]])
    assert len(json.loads(capsys.readouterr().out)) == 2


def test_runs_as_a_script(files, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["dump_skl_motions.py", files[3]])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "dump_skl_motions.py"), run_name = "__main__")
    assert "motion list version 3" in capsys.readouterr().out
