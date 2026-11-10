# Imports
import contextlib

# Stands in for pyghidra in a script that opens a project itself: hands out the
# one program, and records what was opened and how often the project was closed.


class FakePyghidra:
    def __init__(self, program):
        self.program = program
        self.opened = []
        self.closed = 0

    def start(self):
        pass

    def open_project(self, directory, name):
        self.opened.append((directory, name))
        return self

    def close(self):
        self.closed += 1

    @contextlib.contextmanager
    def program_context(self, project, path):
        self.opened.append(path)
        yield self.program


# For a script that opens two programs of the project at once: hands each out by its path
class FakePyghidraPrograms(FakePyghidra):
    def __init__(self, programs):
        super().__init__(None)
        self.programs = programs

    @contextlib.contextmanager
    def program_context(self, project, path):
        self.opened.append(path)
        yield self.programs[path.lstrip("/")]
