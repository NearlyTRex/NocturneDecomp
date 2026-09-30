// =============================================================================
// GOLDEN TRACE — implementation
// =============================================================================
//
// See golden_trace.h.

#include "golden_trace.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace golden {
namespace {

// GL hands out object names in allocation order, so writing them into the file
// would make it churn on any change to when things are created — a diff full of
// "3 became 4" that says nothing about behaviour. Each id is written as the kind
// of object it is plus the order it was first seen, which is stable under
// everything except a real change in what gets created.
struct Names {
    std::map<unsigned, std::string> assigned;

    std::string of(const char *kind, unsigned id) {
        if (id == 0) return "none";
        const std::map<unsigned, std::string>::iterator found = assigned.find(id);
        if (found != assigned.end()) return found->second;
        char buffer[64];
        snprintf(buffer, sizeof(buffer), "%s%d", kind, (int)assigned.size() + 1);
        assigned[id] = buffer;
        return buffer;
    }
};

const char *cap_name(unsigned cap) {
    switch (cap) {
        case GL_DEPTH_TEST:   return "depth_test";
        case GL_BLEND:        return "blend";
        case GL_CULL_FACE:    return "cull";
        case GL_SCISSOR_TEST: return "scissor";
        case GL_TEXTURE_2D:   return "texture_2d";
        default:              return "cap";
    }
}

std::string path_for(const char *name, const char *extension) {
    std::string path = NOCTURNE_TEST_DATA_DIR;
    path += "/";
    path += name;
    path += extension;
    return path;
}

bool read_file(const std::string &path, std::string *out) {
    FILE *file = fopen(path.c_str(), "rb");
    if (file == nullptr) return false;
    char buffer[4096];
    size_t got = 0;
    out->clear();
    while ((got = fread(buffer, 1, sizeof(buffer), file)) > 0) out->append(buffer, got);
    fclose(file);
    return true;
}

bool write_file(const std::string &path, const std::string &text) {
    FILE *file = fopen(path.c_str(), "wb");
    if (file == nullptr) return false;
    fwrite(text.data(), 1, text.size(), file);
    fclose(file);
    return true;
}

std::vector<std::string> lines_of(const std::string &text) {
    std::vector<std::string> lines;
    std::istringstream stream(text);
    std::string line;
    while (std::getline(stream, line)) lines.push_back(line);
    return lines;
}

}  // namespace

std::string render(const gl_recorder::State &state) {
    Names textures, programs, arrays, buffers;
    std::ostringstream out;

    for (size_t i = 0; i < state.calls.size(); ++i) {
        const gl_recorder::Call &call = state.calls[i];
        const std::string &name = call.name;

        if (name == "BindTexture") {
            out << "bind texture " << textures.of("texture", call.a) << "\n";
        } else if (name == "TexImage2D") {
            out << "upload " << textures.of("texture", call.a) << " " << call.b
                << "x" << call.c << "\n";
        } else if (name == "TexParameteri") {
            out << "texture parameter 0x" << std::hex << call.a << std::dec << " = "
                << (int)call.b << "\n";
        } else if (name == "DrawElements") {
            out << "DRAW " << textures.of("texture", call.a) << " indices=" << call.b
                << " program=" << programs.of("program", call.c)
                << " array=" << arrays.of("array", call.d)
                << " depth_test=" << call.depth_test
                << " depth_write=" << call.depth_write
                << " blend=" << call.blend << "\n";
        } else if (name == "Enable" || name == "Disable") {
            out << (name == "Enable" ? "enable " : "disable ") << cap_name(call.a) << "\n";
        } else if (name == "UseProgram") {
            out << "use " << programs.of("program", call.a) << "\n";
        } else if (name == "BindVertexArray") {
            out << "bind array " << arrays.of("array", call.a) << "\n";
        } else if (name == "BindBuffer") {
            out << "bind buffer " << buffers.of("buffer", call.a) << "\n";
        } else if (name == "BufferData") {
            out << "buffer data " << call.a << " bytes\n";
        } else if (name == "ReadPixels") {
            out << "read back " << call.a << "x" << call.b << "\n";
        } else if (name == "DepthMask") {
            out << "depth write " << call.a << "\n";
        } else if (name == "Viewport") {
            out << "viewport " << call.a << "x" << call.b << "\n";
        } else {
            // Everything else by name only. Arguments are left out on purpose:
            // a trace is for seeing that the shape of a frame changed, and a
            // line per uniform assignment with its location number would bury
            // that under noise.
            out << name << "\n";
        }
    }
    return out.str();
}

bool matches(const char *name, const std::string &actual) {
    const std::string golden_path = path_for(name, ".trace");
    const char *update = getenv("NOCTURNE_GOLDEN_UPDATE");

    if (update != nullptr && strcmp(update, "0") != 0) {
        if (!write_file(golden_path, actual)) {
            fprintf(stderr, "golden: could not write %s\n", golden_path.c_str());
            return false;
        }
        fprintf(stderr, "golden: rewrote %s\n", golden_path.c_str());
        return true;
    }

    std::string expected;
    if (!read_file(golden_path, &expected)) {
        write_file(path_for(name, ".actual"), actual);
        fprintf(stderr,
                "golden: %s does not exist yet.\n"
                "        What this run recorded is beside it as %s.actual — read it,\n"
                "        and if it is right, rerun with NOCTURNE_GOLDEN_UPDATE=1.\n",
                golden_path.c_str(), name);
        return false;
    }
    if (expected == actual) return true;

    write_file(path_for(name, ".actual"), actual);

    const std::vector<std::string> want = lines_of(expected);
    const std::vector<std::string> got = lines_of(actual);
    size_t at = 0;
    while (at < want.size() && at < got.size() && want[at] == got[at]) ++at;

    fprintf(stderr, "golden: %s differs at line %d\n", name, (int)at + 1);
    fprintf(stderr, "  expected: %s\n",
            (at < want.size()) ? want[at].c_str() : "(end of trace)");
    fprintf(stderr, "  recorded: %s\n",
            (at < got.size()) ? got[at].c_str() : "(end of trace)");
    fprintf(stderr,
            "  %d lines expected, %d recorded. The full recording is beside the\n"
            "  golden as %s.actual. If the change is intended, rerun with\n"
            "  NOCTURNE_GOLDEN_UPDATE=1 so it lands in the same commit.\n",
            (int)want.size(), (int)got.size(), name);
    return false;
}

}  // namespace golden
