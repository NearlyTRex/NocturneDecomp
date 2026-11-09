# Third-party imports
import pytest

# Local imports
import unit_names


# What nocedit's authors named these classes' files, where a rule recovers it
@pytest.mark.parametrize("cls, stem", [
    ("CHag", "hag"), ("CBatCreature", "batcreat"), ("CDraculaBride", "dracbrid"), ("CCharacter", "charactr"),
    ("CDemonLight", "dlight"), ("CClothList", "cloth"), ("CMP3Decoder", "mp3"), ("CVampireBoss", "vampboss"),
    ("CConfederateZombie", "confzomb"), ("CSimpleParticleSystem", "simppart"), ("CGabriella", "gabriell"),
    ("CListItem", "list"), ("CDemon", "demon"), ("C_", "c"), ("", "class")])
def test_a_class_gets_a_file_stem_as_its_authors_wrote_them(cls, stem):
    assert unit_names.era_stem(cls) == stem


def test_class_names_split_into_words_acronyms_kept_whole():
    assert unit_names.name_words("CMP3Decoder") == ["mp", "3", "decoder"]
    assert unit_names.name_words("PageResource_TwanaEntry") == ["page", "resource", "twana", "entry"]


def test_late_vowels_go_first_and_consonants_are_cut_last():
    assert unit_names.drop_vowels("abcdefghijk", 8) == "abcdfghj"
    assert unit_names.drop_vowels("bcdfghjklmn", 8) == "bcdfghjk"
