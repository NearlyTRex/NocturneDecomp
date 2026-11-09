#include "common/error/fatalerror.h"
#include "engine/package/packagedata.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <expected>
#include <format>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::HasSubstr;

constexpr std::string_view kFullManifest = R"(
id = "story.extra"
name = "Extra Story"
version = "1.2"
release = "1999-en-nocturne"
requires = ["nocturne"]
required = ["EXTRA.POD"]

[[pod]]
path = "data/EXTRA.POD"
size = 12
modified = 946627200
xxh3 = "fed9db5d545bd067ad07fcbefa9ebc16"

[[pod]]
path = "MORE.POD"
)";

SPackageManifest fullManifest() {
    return {.id = "story.extra",
            .name = "Extra Story",
            .version = "1.2",
            .release = "1999-en-nocturne",
            .dependencies = {"nocturne"},
            .required = {"EXTRA.POD"},
            .pods = {{.path = "data/EXTRA.POD",
                      .size = 12,
                      .modified = 946627200,
                      .xxh3 = "fed9db5d545bd067ad07fcbefa9ebc16"},
                     {.path = "MORE.POD", .size = {}, .modified = {}, .xxh3 = {}}},
            .game = {}};
}

std::string errorOf(std::string_view text) {
    const std::expected<SPackageManifest, std::string> manifest = parsePackageManifest(text);
    EXPECT_FALSE(manifest.has_value()) << text;
    return manifest ? std::string() : manifest.error();
}

std::string catalogErrorOf(std::string_view text) {
    const std::expected<std::vector<SRelease>, std::string> catalog = parseReleaseCatalog(text);
    EXPECT_FALSE(catalog.has_value()) << text;
    return catalog ? std::string() : catalog.error();
}

TEST(PackageManifest, ReadsEveryField) {
    EXPECT_EQ(parsePackageManifest(kFullManifest), fullManifest());
}

TEST(PackageManifest, OnlyTheIdIsNeededAndTheNameIsTheIdWithoutOne) {
    EXPECT_EQ(parsePackageManifest("id = \"bare\""), (SPackageManifest{.id = "bare",
                                                                       .name = "bare",
                                                                       .version = {},
                                                                       .release = {},
                                                                       .dependencies = {},
                                                                       .required = {},
                                                                       .pods = {},
                                                                       .game = {}}));
}

TEST(PackageManifest, WritesWhatItReadsBack) {
    SPackageManifest manifest = fullManifest();
    manifest.name = "Quote \" and back\\slash";
    manifest.dependencies.emplace_back("story.base");
    EXPECT_EQ(parsePackageManifest(formatPackageManifest(manifest)), manifest);
}

// The game's own keys come before the [[pod]] tables and its tables after them.
TEST(PackageManifest, CarriesGameContentAroundItsPods) {
    SPackageManifest manifest = fullManifest();
    manifest.game.front_end = "nocturne";
    manifest.game.credits = SGameCredits{.text = "c.txt", .image = "i", .music = {}};
    const std::string text = formatPackageManifest(manifest);
    EXPECT_LT(text.find("front_end"), text.find("[[pod]]"));
    EXPECT_GT(text.find("[credits]"), text.find("[[pod]]"));
    EXPECT_EQ(parsePackageManifest(text), manifest);
}

TEST(PackageManifest, ABrokenGameTableIsTheManifestsError) {
    EXPECT_EQ(errorOf("id = \"a\"\n[credits]\ntext = 1"), "credits: text: not a string");
}

TEST(PackageManifest, WritesOnlyTheFieldsItHas) {
    EXPECT_EQ(
        formatPackageManifest({.id = "a",
                               .name = "A",
                               .version = {},
                               .release = {},
                               .dependencies = {},
                               .required = {},
                               .pods = {{.path = "A.POD", .size = {}, .modified = {}, .xxh3 = {}}},
                               .game = {}}),
        "id = 'a'\nname = 'A'\n\n[[pod]]\npath = 'A.POD'\n");
}

TEST(PackageManifest, BadTomlNamesItsLine) {
    EXPECT_THAT(errorOf("id = \"a\"\nname = \n"), HasSubstr("line 2: "));
}

TEST(PackageManifest, AnUnknownKeyIsRejected) {
    EXPECT_EQ(errorOf("id = \"a\"\nauthor = \"me\""), "author: not a key this file takes");
    EXPECT_EQ(errorOf("id = \"a\"\n[[pod]]\npath = \"A.POD\"\ncrc = 1"),
              "pod 1: crc: not a key this file takes");
}

TEST(PackageManifest, TheIdIsNeededAndPlain) {
    EXPECT_EQ(errorOf("name = \"a\""), "id: missing");
    EXPECT_EQ(errorOf("id = \"\""), "id: missing");
    EXPECT_EQ(errorOf("id = 3"), "id: not a string");
    // Each just outside a range the id takes: past 'z', between 'Z' and 'a', past '9'.
    for (const char *id : {"has space", "a{", "a[", "a:"}) {
        EXPECT_EQ(errorOf(std::format("id = \"{}\"", id)),
                  "id: only letters, digits, '.', '_' and '-'")
            << id;
    }
    EXPECT_EQ(parsePackageManifest("id = \"Up.Case_9-z\"")
                  .transform([](const SPackageManifest &manifest) { return manifest.id; }),
              "Up.Case_9-z");
}

TEST(PackageManifest, EachFieldMustHaveItsType) {
    EXPECT_EQ(errorOf("id = \"a\"\nname = 1"), "name: not a string");
    EXPECT_EQ(errorOf("id = \"a\"\nversion = 1"), "version: not a string");
    EXPECT_EQ(errorOf("id = \"a\"\nrelease = 1"), "release: not a string");
    EXPECT_EQ(errorOf("id = \"a\"\nrequires = \"b\""), "requires: not a list");
    EXPECT_EQ(errorOf("id = \"a\"\nrequires = [1]"), "requires: holds something that isn't a name");
    EXPECT_EQ(errorOf("id = \"a\"\nrequired = [\"\"]"),
              "required: holds something that isn't a name");
    EXPECT_EQ(errorOf("id = \"a\"\npod = 1"), "pod: not a list of [[pod]] tables");
    EXPECT_EQ(errorOf("id = \"a\"\npod = [1]"), "pod: not a list of [[pod]] tables");
}

TEST(PackageManifest, APodsPathStaysInsideThePackage) {
    EXPECT_EQ(errorOf("id = \"a\"\n[[pod]]\nsize = 1"), "pod 1: path: missing");
    // TOML literal strings, so a backslash is one.
    for (const char *path : {"/abs.pod", R"(\abs.pod)", "C:/abs.pod", "../up.pod", "a/../../up.pod",
                             R"(a\..\..\up.pod)"}) {
        EXPECT_EQ(errorOf(std::format("id = \"a\"\n[[pod]]\npath = '{}'", path)),
                  "pod 1: path: not a path inside the package")
            << path;
    }
    EXPECT_TRUE(parsePackageManifest("id = \"a\"\n[[pod]]\npath = \"a/..b/c..\"").has_value());
}

TEST(PackageManifest, APodsRecordMustHaveItsTypes) {
    const std::string pod = "id = \"a\"\n[[pod]]\npath = \"A.POD\"\n";
    EXPECT_EQ(errorOf(pod + "size = -1"), "pod 1: size: below zero");
    EXPECT_EQ(errorOf(pod + "size = 1.5"), "pod 1: size: not a whole number");
    EXPECT_EQ(errorOf(pod + "modified = \"today\""), "pod 1: modified: not a whole number");
    EXPECT_EQ(errorOf(pod + "xxh3 = \"abc\""), "pod 1: xxh3: not 32 lower-case hex digits");
    // Upper case, past 'f' and below '0'.
    for (const char *hash : {"FED9DB5D545BD067AD07FCBEFA9EBC16", "ged9db5d545bd067ad07fcbefa9ebc16",
                             "-ed9db5d545bd067ad07fcbefa9ebc16"}) {
        EXPECT_EQ(errorOf(pod + std::format("xxh3 = \"{}\"", hash)),
                  "pod 1: xxh3: not 32 lower-case hex digits")
            << hash;
    }
    EXPECT_EQ(errorOf(pod + "xxh3 = 1"), "pod 1: xxh3: not a string");
}

TEST(ReleaseCatalog, TheCompiledInCatalogueKnowsTheEnglishRelease) {
    const std::expected<std::vector<SRelease>, std::string> catalog =
        parseReleaseCatalog(getReleaseCatalogText());
    ASSERT_TRUE(catalog.has_value()) << catalog.error();
    // Nocturne first, so it wins a tie in recognising an install
    ASSERT_FALSE(catalog->empty());
    const SRelease &english = catalog->front();
    EXPECT_EQ(english.id, "1999-en-nocturne");
    EXPECT_EQ(english.name, "Nocturne (1999, English)");
    EXPECT_EQ(english.required, std::vector<std::string>{"STARTUP.POD"});
    EXPECT_EQ(english.pods.size(), 41U);
    EXPECT_THAT(english.pods,
                ::testing::Contains(SReleaseFile{.name = "STARTUP.POD",
                                                 .size = 30025625,
                                                 .xxh3 = "408d46be88e10bf5e93ea6aecc4ae673"}));
}

// A release's head, then its PODs.
constexpr std::string_view kRelease = "[[release]]\nid = \"1999-xx\"\nname = \"A\"\ngame = \"g\"\n";
constexpr std::string_view kReleasePodName = "[[release.pod]]\nname = \"A.POD\"\n";
constexpr std::string_view kAnyHash = "xxh3 = \"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\"\n";

// The release's head and its POD's name, then the rest of the POD.
std::string releasePod(std::string_view rest) {
    return std::format("{}{}{}", kRelease, kReleasePodName, rest);
}

std::string release(std::string_view rest) {
    return std::format("{}{}", kRelease, rest);
}

TEST(ReleaseCatalog, LoadingTheCatalogueGivesItsReleasesAndABrokenOneIsFatal) {
    const std::vector<SRelease> releases =
        loadReleaseCatalog(getReleaseCatalogText(), getEmbeddedGames());
    ASSERT_FALSE(releases.empty());
    for (const SRelease &release : releases) {
        EXPECT_EQ(release.content.front_end, release.game) << release.id;
    }
    const auto coffin_rock = std::ranges::find(releases, "2000-en-blairwitch2", &SRelease::id);
    ASSERT_NE(coffin_rock, releases.end());
    EXPECT_THAT(
        coffin_rock->files,
        ::testing::IsSupersetOf(
            {SReleaseLooseFile{
                 .path = "credits.txt", .size = 67, .xxh3 = "e6c1af56c674fb833bc5de6f6d137087"},
             SReleaseLooseFile{.path = "SYSTEM/nocturne.ini", .size = {}, .xxh3 = {}}}));
    EXPECT_THAT([] { static_cast<void>(loadReleaseCatalog("version = 1", {})); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("releases.toml: version: not a key this file takes")));
}

TEST(ReleaseCatalog, EachReleaseTakesItsGamesContent) {
    const std::array games{SEmbeddedGame{.id = "f", .text = "front_end = \"other\""},
                           SEmbeddedGame{.id = "g", .text = "front_end = \"mine\""}};
    const std::vector<SRelease> releases = loadReleaseCatalog(kRelease, games);
    ASSERT_EQ(releases.size(), 1U);
    EXPECT_EQ(releases.front().content.front_end, "mine");
}

TEST(ReleaseCatalog, AGameWithoutDataOrWithBrokenDataIsFatal) {
    EXPECT_THAT([] { static_cast<void>(loadReleaseCatalog(kRelease, {})); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("release 1999-xx: game: no data/games/g.toml")));
    const std::array games{SEmbeddedGame{.id = "g", .text = "colour = 1"}};
    EXPECT_THAT([&games] { static_cast<void>(loadReleaseCatalog(kRelease, games)); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("games/g.toml: colour: not a key this file takes")));
}

TEST(ReleaseCatalog, AReleaseNeedsAPlainIdANameAndAGame) {
    EXPECT_EQ(catalogErrorOf("[[release]]\nname = \"A\""), "release 1: id: missing");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999 en\"\nname = \"A\""),
              "release 1: id: only letters, digits, '.', '_' and '-'");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999-en-nocturne\"\nrequired = []"),
              "release 1: name: missing");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999-en-nocturne\"\nname = \"A\""),
              "release 1: game: missing");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999-en-nocturne\"\nname = \"A\"\ngame = \"g\"\n"
                             "required = 1"),
              "release 1: required: not a list");
}

TEST(ReleaseCatalog, NoTwoReleasesShareAnId) {
    EXPECT_EQ(catalogErrorOf(release(kRelease)), "release 2: id: 1999-xx is another release's");
    EXPECT_EQ(
        parseReleaseCatalog(release("[[release]]\nid = \"1999-yy\"\nname = \"B\"\ngame = \"h\"\n")),
        (std::vector<SRelease>{{.id = "1999-xx",
                                .name = "A",
                                .game = "g",
                                .required = {},
                                .pods = {},
                                .files = {},
                                .content = {}},
                               {.id = "1999-yy",
                                .name = "B",
                                .game = "h",
                                .required = {},
                                .pods = {},
                                .files = {},
                                .content = {}}}));
}

// A loose file is recorded by its path in the install, as a POD is by its name.
TEST(ReleaseCatalog, ALooseFileIsRecordedByItsPath) {
    const std::expected<std::vector<SRelease>, std::string> catalog =
        parseReleaseCatalog(std::format(
            "{}[[release.file]]\npath = \"WORLD/CAMP.TXT\"\nsize = 2140\n{}", kRelease, kAnyHash));
    ASSERT_TRUE(catalog.has_value()) << catalog.error();
    EXPECT_EQ(
        catalog->front().files,
        (std::vector<SReleaseLooseFile>{
            {.path = "WORLD/CAMP.TXT", .size = 2140, .xxh3 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"}}));
}

// A file the game rewrites, such as its INI, is recorded by its path alone.
TEST(ReleaseCatalog, ALooseFileMayHaveNeitherSizeNorHash) {
    const std::expected<std::vector<SRelease>, std::string> catalog =
        parseReleaseCatalog(release("[[release.file]]\npath = \"SYSTEM/nocturne.ini\"\n"));
    ASSERT_TRUE(catalog.has_value()) << catalog.error();
    EXPECT_EQ(
        catalog->front().files,
        (std::vector<SReleaseLooseFile>{{.path = "SYSTEM/nocturne.ini", .size = {}, .xxh3 = {}}}));
}

TEST(ReleaseCatalog, ALooseFilesSizeAndHashComeTogether) {
    EXPECT_EQ(catalogErrorOf(release(std::format("[[release.file]]\npath = \"a\"\n{}", kAnyHash))),
              "release 1: file 1: size: missing");
    EXPECT_EQ(catalogErrorOf(release("[[release.file]]\npath = \"a\"\nsize = 1")),
              "release 1: file 1: xxh3: not 32 lower-case hex digits");
    EXPECT_EQ(catalogErrorOf(release("[[release.file]]\npath = \"a\"\nsize = -1")),
              "release 1: file 1: size: below zero");
    EXPECT_EQ(catalogErrorOf(release("[[release.file]]\nsize = 1")),
              "release 1: file 1: path: missing");
}

TEST(ReleaseCatalog, ALooseFilesPathStaysInsideTheInstall) {
    for (const std::string_view path : {"/abs.txt", "C:/x.txt", "../up.txt", "a/../b", "a\\\\b"}) {
        EXPECT_EQ(catalogErrorOf(std::format("{}[[release.file]]\npath = \"{}\"\nsize = 1\n{}",
                                             kRelease, path, kAnyHash)),
                  "release 1: file 1: path: not a '/'-separated path inside the install")
            << path;
    }
    EXPECT_EQ(catalogErrorOf(std::format("{}[[release.file]]\nname = \"a\"\nsize = 1\n{}", kRelease,
                                         kAnyHash)),
              "release 1: file 1: name: not a key this file takes");
    EXPECT_EQ(catalogErrorOf(release("file = 1")),
              "release 1: file: not a list of [[file]] tables");
}

TEST(ReleaseCatalog, EachPodNeedsItsNameSizeAndHash) {
    EXPECT_EQ(catalogErrorOf(release("[[release.pod]]\nsize = 1")),
              "release 1: pod 1: name: missing");
    EXPECT_EQ(catalogErrorOf(releasePod(kAnyHash)), "release 1: pod 1: size: missing");
    EXPECT_EQ(catalogErrorOf(releasePod("size = -1")), "release 1: pod 1: size: below zero");
    EXPECT_EQ(catalogErrorOf(releasePod("size = 1")),
              "release 1: pod 1: xxh3: not 32 lower-case hex digits");
    EXPECT_EQ(catalogErrorOf(releasePod("size = 1\nxxh3 = 1")),
              "release 1: pod 1: xxh3: not a string");
}

TEST(ReleaseCatalog, OnlyTheCataloguesKeysAndTypesAreTaken) {
    EXPECT_THAT(catalogErrorOf("[[release]\n"), HasSubstr("line 1: "));
    EXPECT_EQ(catalogErrorOf("version = 1"), "version: not a key this file takes");
    EXPECT_EQ(catalogErrorOf("release = 1"), "release: not a list of [[release]] tables");
    EXPECT_EQ(catalogErrorOf(release("year = 1999")), "release 1: year: not a key this file takes");
    EXPECT_EQ(catalogErrorOf(release("required = 1")), "release 1: required: not a list");
    EXPECT_EQ(catalogErrorOf(release("pod = 1")), "release 1: pod: not a list of [[pod]] tables");
    EXPECT_EQ(catalogErrorOf(releasePod(std::format("size = 1\n{}from = 1", kAnyHash))),
              "release 1: pod 1: from: not a key this file takes");
    EXPECT_EQ(parseReleaseCatalog(""), std::vector<SRelease>{});
}

} // namespace
} // namespace nocturne::engine
