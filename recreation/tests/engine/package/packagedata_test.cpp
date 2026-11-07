#include "engine/package/packagedata.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

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
release = "1999-en"
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
            .release = "1999-en",
            .dependencies = {"nocturne"},
            .required = {"EXTRA.POD"},
            .pods = {{.path = "data/EXTRA.POD",
                      .size = 12,
                      .modified = 946627200,
                      .xxh3 = "fed9db5d545bd067ad07fcbefa9ebc16"},
                     {.path = "MORE.POD", .size = {}, .modified = {}, .xxh3 = {}}}};
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
                                                                       .pods = {}}));
}

TEST(PackageManifest, WritesWhatItReadsBack) {
    SPackageManifest manifest = fullManifest();
    manifest.name = "Quote \" and back\\slash";
    manifest.dependencies.emplace_back("story.base");
    EXPECT_EQ(parsePackageManifest(formatPackageManifest(manifest)), manifest);
}

TEST(PackageManifest, WritesOnlyTheFieldsItHas) {
    EXPECT_EQ(formatPackageManifest(
                  {.id = "a",
                   .name = "A",
                   .version = {},
                   .release = {},
                   .dependencies = {},
                   .required = {},
                   .pods = {{.path = "A.POD", .size = {}, .modified = {}, .xxh3 = {}}}}),
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
    ASSERT_EQ(catalog->size(), 1U);
    const SRelease &english = catalog->front();
    EXPECT_EQ(english.id, "1999-en");
    EXPECT_EQ(english.name, "Nocturne (1999, English)");
    EXPECT_EQ(english.required, std::vector<std::string>{"STARTUP.POD"});
    EXPECT_EQ(english.pods.size(), 41U);
    EXPECT_THAT(english.pods,
                ::testing::Contains(SReleasePod{.name = "STARTUP.POD",
                                                .size = 30025625,
                                                .xxh3 = "408d46be88e10bf5e93ea6aecc4ae673"}));
}

// A release's head, then its PODs.
constexpr std::string_view kRelease = "[[release]]\nid = \"1999-xx\"\nname = \"A\"\n";
constexpr std::string_view kReleasePodName = "[[release.pod]]\nname = \"A.POD\"\n";
constexpr std::string_view kAnyHash = "xxh3 = \"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\"\n";

// The release's head and its POD's name, then the rest of the POD.
std::string releasePod(std::string_view rest) {
    return std::format("{}{}{}", kRelease, kReleasePodName, rest);
}

std::string release(std::string_view rest) {
    return std::format("{}{}", kRelease, rest);
}

TEST(ReleaseCatalog, AReleaseNeedsAPlainIdAndAName) {
    EXPECT_EQ(catalogErrorOf("[[release]]\nname = \"A\""), "release 1: id: missing");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999 en\"\nname = \"A\""),
              "release 1: id: only letters, digits, '.', '_' and '-'");
    EXPECT_EQ(catalogErrorOf("[[release]]\nid = \"1999-en\"\nrequired = []"),
              "release 1: name: missing");
}

TEST(ReleaseCatalog, NoTwoReleasesShareAnId) {
    EXPECT_EQ(catalogErrorOf(release(kRelease)), "release 2: id: 1999-xx is another release's");
    EXPECT_EQ(parseReleaseCatalog(release("[[release]]\nid = \"1999-yy\"\nname = \"B\"\n")),
              (std::vector<SRelease>{{.id = "1999-xx", .name = "A", .required = {}, .pods = {}},
                                     {.id = "1999-yy", .name = "B", .required = {}, .pods = {}}}));
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
