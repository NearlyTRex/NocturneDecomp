#pragma once

#include <cstddef>
#include <format>
#include <functional>
#include <string>

namespace nocturne::core {

// Puts a file with the contents at the name, as a fixture's givenFile does.
using GivenFile = std::function<void(const std::string &, const std::string &)>;

// A one-square model of the given frames; each frame is the same square.
inline void givenMoonModel(const GivenFile &given_file, const std::string &name, int frames) {
    std::string corners;
    for (int i = 0; i < frames; ++i) {
        corners += "0,0,2048\n512,0,2048\n512,512,2048\n0,512,2048\n";
    }
    given_file("models\\" + name, std::format("/\n5\n;\n4,1,1,1,{}\n;\n0\n;\n{};\n"
                                              "0,3, 0,0,0, 2,0,0, 1,0,0\n;\na.raw\n;\n4,1\n",
                                              frames, corners));
}

// Three courses of the given length, each standing still a hundred units ahead.
inline void givenMoonCourses(const GivenFile &given_file, int length) {
    std::string frames;
    for (int i = 0; i < length; ++i) {
        frames += "0,0,100, 1,0,0,0\r\n";
    }
    for (int i = 1; i <= 3; ++i) {
        given_file(std::format("data\\menu{}.pth", i),
                   std::format("; course\r\n1\r\n; frames, loop\r\n{},1\r\n; frames\r\n{}", length,
                               frames));
    }
}

// Each texel is its column, so the layers' scales and scroll show in the pixels.
inline std::string makeCloudTexels() {
    std::string texels;
    for (int u = 0; u < 256; ++u) {
        for (int v = 0; v < 256; ++v) {
            texels += static_cast<char>(v);
        }
    }
    return texels;
}

// name.raw and a palette whose entry i is i in every channel.
inline void givenGreyImage(const GivenFile &given_file, const std::string &name,
                           const std::string &raw) {
    std::string palette;
    for (int i = 0; i < 256; ++i) {
        palette.append(3, static_cast<char>(i));
    }
    given_file("art\\" + name + ".raw", raw);
    given_file("art\\" + name + ".act", palette);
}

// What the moon loads: a one-square moon and head, a two-frame bat, three ten-frame courses a
// hundred units ahead, a cloud of texel ramps and thirty title frames.
inline void givenMoonFiles(const GivenFile &given_file) {
    givenMoonCourses(given_file, 10);
    givenMoonModel(given_file, "moon.kfm", 1);
    givenMoonModel(given_file, "taylor_head.kfm", 1);
    givenMoonModel(given_file, "menubat.kfm", 2);
    given_file("art\\a.raw", std::string(std::size_t{32} * 32, '\x01'));
    givenGreyImage(given_file, "menucld2", makeCloudTexels());
    for (int i = 0; i < 30; ++i) {
        givenGreyImage(given_file, std::format("noc{:05}", i),
                       std::string(std::size_t{640} * 278, static_cast<char>(i)));
    }
}

} // namespace nocturne::core
