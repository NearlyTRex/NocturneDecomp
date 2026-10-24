# Third-party imports
import pytest

# Local imports
from ghidra_program import Namespace, Program
from ghidra_annotations.util.namespace import get_or_create_namespace


@pytest.mark.parametrize("parent", [None, "Global"])
def test_global_is_the_programs_global_namespace(parent):
    program = Program()
    assert get_or_create_namespace(program, "Global", parent) is program.getGlobalNamespace()


def test_creates_a_missing_namespace_under_global_once(capsys):
    program = Program()
    cache = {}
    created = get_or_create_namespace(program, "CDemonActor", created_cache = cache)
    assert created.getName() == "CDemonActor"
    assert created.getParentNamespace() is program.getGlobalNamespace()
    assert get_or_create_namespace(program, "CDemonActor", created_cache = cache) is created
    assert capsys.readouterr().out.count("Creating namespace: CDemonActor under parent: Global") == 1


def test_creates_the_parent_chain_first():
    program = Program()
    child = get_or_create_namespace(program, "Inner", "Outer")
    assert child.getParentNamespace().getName() == "Outer"
    assert child.getParentNamespace().getParentNamespace() is program.getGlobalNamespace()


def test_finds_an_existing_namespace_without_creating_it(capsys):
    program = Program()
    existing = Namespace("CHero", program.getGlobalNamespace())
    program.getSymbolTable().namespaces[("CHero", program.getGlobalNamespace())] = existing
    assert get_or_create_namespace(program, "CHero", "Global") is existing
    assert "Creating namespace" not in capsys.readouterr().out
