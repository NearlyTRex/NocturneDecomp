// =============================================================================
// WATCOM IO — the CRT calls the game makes about files and directories
// =============================================================================
//
// These moved from POSIX to std::filesystem, and the move changed more than
// which header they include: what a call answers when it fails is part of the
// contract, and the two libraries disagree about several of them. Creating a
// directory that exists is success to one and failure to the other. Asking for
// the working directory with too small a buffer truncates in one and refuses in
// the other. Resolving a path that does not exist yet fails in one and succeeds
// in the other.
//
// The game reads those answers. So they are pinned here, against a directory
// each test builds, checking what comes back rather than how it was reached —
// the same tests would hold if the implementation went back to POSIX tomorrow.
//
// The find functions are here too. They are the reason core/file_search.cpp
// exists: this file and kernel32.cpp each had their own copy of the search and
// their own FindHandle, which is what made the ODR fault possible. The search is
// tested on its own beside this; what these check is Watcom's shape on top of
// it — a long handle, and an iterator that says it is done by returning -1.

#include "nocturne_test.h"
#include "system/dos.h"
#include "system/watcom.h"

#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>
#if !defined(_WIN32)
#include <unistd.h>
#endif

namespace {

namespace fs = std::filesystem;

struct Tree {
    fs::path root;
    fs::path previous;

    Tree() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_watcom_io_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "SYSTEM", ec);
        fs::create_directories(root / "save", ec);
        write(root / "SYSTEM" / "nocturne.ini");
        write(root / "save" / "SAVE1.noc");
        write(root / "save" / "SAVE2.noc");
        write(root / "ACT1.POD");
        fs::current_path(root, ec);
    }

    ~Tree() {
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }

    static void write(const fs::path &at) {
        std::ofstream out(at.string().c_str());
        out << "x";
    }
};

} // namespace

// -----------------------------------------------------------------------------
// _mkdir. Watcom answers 0 for made and -1 for not, and "it was already there"
// is not made. The game checks the result before deciding it has somewhere to
// save to.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(making_a_directory_says_whether_it_made_one) {
    Tree tree;
    CHECK_EQ(_mkdir("newdir"), 0);
    std::error_code ec;
    CHECK(fs::is_directory(fs::path("newdir"), ec));

    // Already there is not success.
    CHECK_EQ(_mkdir("newdir"), -1);
    // Neither is a directory whose parent does not exist.
    CHECK_EQ(_mkdir("nowhere/at/all"), -1);
}

// -----------------------------------------------------------------------------
// _getcwd. A buffer too small is refused rather than filled with a truncated
// path that would name the wrong directory.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_working_directory_comes_back_whole_or_not_at_all) {
    Tree tree;
    char buffer[4096];
    CHECK(_getcwd(buffer, (int)sizeof(buffer)) == buffer);

    std::error_code ec;
    CHECK(fs::equivalent(fs::path(buffer), tree.root, ec));

    // Too small to hold it: nothing is claimed.
    char tiny[4];
    CHECK(_getcwd(tiny, (int)sizeof(tiny)) == nullptr);
    CHECK(_getcwd(buffer, 0) == nullptr);
}

// -----------------------------------------------------------------------------
// _fullpath. The game asks it where a file WOULD be, so it has to answer for
// paths that do not exist — that is the whole use.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_full_path_is_absolute) {
    Tree tree;
    char buffer[4096];
    CHECK(_fullpath(buffer, "ACT1.POD", sizeof(buffer)) == buffer);
    CHECK(fs::path(buffer).is_absolute());
    std::error_code ec;
    CHECK(fs::exists(fs::path(buffer), ec));
}

NOCTURNE_TEST(a_full_path_answers_for_something_not_there_yet) {
    Tree tree;
    char buffer[4096];
    // realpath, which this used to use, fails here and left the caller with the
    // relative path it started with.
    CHECK(_fullpath(buffer, "save/SAVE9.noc", sizeof(buffer)) == buffer);
    CHECK(fs::path(buffer).is_absolute());
    CHECK(std::string(buffer).find("SAVE9.noc") != std::string::npos);
}

// -----------------------------------------------------------------------------
// __getfileattr. Windows has one read-only bit for a file; a POSIX host has
// three write bits for three audiences, and the owner's is the one that decides
// whether this process can write.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(file_attributes_say_directory_and_read_only) {
    Tree tree;
    const unsigned long kInvalid = 0xFFFFFFFFul;
    const unsigned long kDirectory = 0x10;
    const unsigned long kReadOnly = 0x01;

    CHECK_EQ(__getfileattr("SYSTEM"), kDirectory);
    CHECK_EQ(__getfileattr("ACT1.POD"), 0ul);
    CHECK_EQ(__getfileattr("no_such_file"), kInvalid);

    std::error_code ec;
    // Every write bit, not the owner's alone: the Microsoft library maps the
    // three onto Windows' one read-only attribute and sets it only when none is
    // left.
    fs::permissions(fs::path("ACT1.POD"),
                    fs::perms::owner_write | fs::perms::group_write | fs::perms::others_write,
                    fs::perm_options::remove, ec);
    CHECK_EQ(__getfileattr("ACT1.POD"), kReadOnly);
    // Put it back so the tree can be removed.
    fs::permissions(fs::path("ACT1.POD"), fs::perms::owner_write, fs::perm_options::add, ec);
}

// -----------------------------------------------------------------------------
// The find API, in Watcom's shape: a long handle, -1 for no more.
// -----------------------------------------------------------------------------

// No find data, for the cases that only walk. It is a typed void* rather than
// nullptr because the Windows runtime's <io.h> renames _findfirst to
// _findfirst64i32, and a bare nullptr matches both that function and the shim's.
static void *const kNoInfo = nullptr;

NOCTURNE_TEST(finding_walks_every_match_then_stops) {
    Tree tree;
    long handle = _findfirst("save\\*.noc", kNoInfo);
    CHECK(handle != -1);

    // Two files match, so one first and one next, and then the end.
    CHECK_EQ(_findnext(handle, kNoInfo), 0);
    CHECK_EQ(_findnext(handle, kNoInfo), -1);
    // Still the end however many times it is asked.
    CHECK_EQ(_findnext(handle, kNoInfo), -1);
    CHECK_EQ(_findclose(handle), 0);
}

NOCTURNE_TEST(finding_nothing_says_so_at_the_start) {
    Tree tree;
    CHECK_EQ(_findfirst("*.nothing", kNoInfo), -1);
    CHECK_EQ(_findfirst("no_such_dir\\*", kNoInfo), -1);

    // -1 is what _findfirst just returned, so it is the value most likely to be
    // passed back here by a caller that did not check. It is not a handle, and
    // walking it used to be a fault rather than an answer.
    CHECK_EQ(_findnext(-1, kNoInfo), -1);
    CHECK_EQ(_findnext(0, kNoInfo), -1);
    // long literals: the Windows runtime has a _findclose(intptr_t) of its own
    CHECK_EQ(_findclose(-1L), -1);
    CHECK_EQ(_findclose(0L), -1);
}

NOCTURNE_TEST(neither_the_pattern_nor_the_directory_minds_case) {
    Tree tree;
    // The last component is a pattern and is matched without case, so a spec
    // shouting at a lower-case file finds it.
    long handle = _findfirst("save\\*.NOC", kNoInfo);
    CHECK(handle != -1);
    CHECK_EQ(_findclose(handle), 0);

    // The directory goes through the same resolution as an open, as it would be
    // found on Windows whatever its case.
    handle = _findfirst("SAVE\\*.noc", kNoInfo);
    CHECK(handle != -1);
    CHECK_EQ(_findclose(handle), 0);
}

// A handle is a long, 32 bits on Windows, so it must name the search without
// being its address: a heap pointer above 4 GB, cut to fit, was a wild write.
NOCTURNE_TEST(searches_open_at_once_keep_their_own_place) {
    Tree tree;
    long first = _findfirst("save\\*.noc", kNoInfo);
    long second = _findfirst("save\\*.noc", kNoInfo);
    CHECK(first != -1);
    CHECK(second != -1);
    CHECK(first != second);

    // Advancing one leaves the other where it was.
    CHECK_EQ(_findnext(first, kNoInfo), 0);
    CHECK_EQ(_findnext(first, kNoInfo), -1);
    CHECK_EQ(_findnext(second, kNoInfo), 0);
    CHECK_EQ(_findclose(first), 0);
    CHECK_EQ(_findclose(second), 0);
}

NOCTURNE_TEST(a_closed_handle_is_no_longer_a_search) {
    Tree tree;
    long handle = _findfirst("save\\*.noc", kNoInfo);
    CHECK_EQ(_findclose(handle), 0);
    // Using or closing it again is refused, not a read of freed memory.
    CHECK_EQ(_findnext(handle, kNoInfo), -1);
    CHECK_EQ(_findclose(handle), -1);
    // A handle never handed out is refused the same way.
    CHECK_EQ(_findnext(handle + 1000, kNoInfo), -1);
}

// The game reads each match out of the find data: the editor's texture list
// copies the name and keeps only files of a texture's size.
NOCTURNE_TEST(finding_says_what_each_match_is) {
    Tree tree;
    _find_t info;
    long handle = _findfirst("act1.pod", &info);
    CHECK(handle != -1);
    CHECK_EQ(std::string(info.name), std::string("ACT1.POD"));
    CHECK_EQ(info.size, 1L);
    CHECK_EQ((int)info.attrib, 0);
    CHECK(info.wr_time > time(nullptr) - 600 && info.wr_time < time(nullptr) + 600);
    CHECK_EQ(info.cr_time, (time_t)-1);
    CHECK_EQ(info.ac_time, (time_t)-1);
    CHECK_EQ(_findclose(handle), 0);

    // Each next is the next match's, and the end leaves the last one in place.
    handle = _findfirst("save\\*.noc", &info);
    CHECK_EQ(std::string(info.name), std::string("SAVE1.noc"));
    CHECK_EQ(_findnext(handle, &info), 0);
    CHECK_EQ(std::string(info.name), std::string("SAVE2.noc"));
    CHECK_EQ(_findnext(handle, &info), -1);
    CHECK_EQ(std::string(info.name), std::string("SAVE2.noc"));
    CHECK_EQ(_findclose(handle), 0);

    // A directory has no size and says it is one.
    handle = _findfirst("sys*", &info);
    CHECK_EQ(std::string(info.name), std::string("SYSTEM"));
    CHECK_EQ(info.size, 0L);
    CHECK_EQ((int)info.attrib, 0x10);
    CHECK_EQ(_findclose(handle), 0);
}

#if !defined(_WIN32)
// A link to nothing is listed, and there is nothing to say about it but its name.
NOCTURNE_TEST(a_match_that_cannot_be_asked_about_has_only_a_name) {
    Tree tree;
    std::error_code ec;
    fs::create_symlink("nowhere", "dangling.raw", ec);
    _find_t info;
    long handle = _findfirst("*.raw", &info);
    CHECK(handle != -1);
    CHECK_EQ(std::string(info.name), std::string("dangling.raw"));
    CHECK_EQ(info.size, 0L);
    CHECK_EQ((int)info.attrib, 0);
    CHECK_EQ(info.wr_time, (time_t)0);
    CHECK_EQ(_findclose(handle), 0);
}
#endif

// No path is the working directory; a buffer too small is no answer at all,
// since the caller would open a cut-down path; no buffer is one made to fit.
NOCTURNE_TEST(a_full_path_fits_or_fails) {
    Tree tree;
    char buffer[4096];
    std::error_code ec;
    CHECK(_fullpath(buffer, nullptr, sizeof(buffer)) == buffer);
    CHECK(fs::equivalent(fs::path(buffer), tree.root, ec));
    CHECK(_fullpath(buffer, "", sizeof(buffer)) == buffer);
    CHECK(fs::equivalent(fs::path(buffer), tree.root, ec));

    char tiny[4];
    errno = 0;
    CHECK(_fullpath(tiny, "ACT1.POD", sizeof(tiny)) == nullptr);
    CHECK_EQ(errno, ERANGE);

    char *made = _fullpath(nullptr, "ACT1.POD", 1);
    CHECK(made != nullptr);
    CHECK(fs::equivalent(fs::path(made), tree.root / "ACT1.POD", ec));
    free(made);
}

NOCTURNE_TEST(the_working_directory_without_a_buffer_is_one_made_to_fit) {
    Tree tree;
    char *made = _getcwd(nullptr, 0);
    CHECK(made != nullptr);
    std::error_code ec;
    CHECK(fs::equivalent(fs::path(made), tree.root, ec));
    free(made);

    errno = 0;
    char tiny[4];
    CHECK(_getcwd(tiny, (int)sizeof(tiny)) == nullptr);
    CHECK_EQ(errno, ERANGE);
}

#if !defined(_WIN32)
// A working directory removed from under the process has no path to give.
NOCTURNE_TEST(a_working_directory_that_is_gone_has_no_path) {
    Tree tree;
    std::error_code ec;
    fs::create_directories("doomed", ec);
    fs::current_path("doomed", ec);
    fs::remove(tree.root / "doomed", ec);
    char buffer[4096];
    errno = 0;
    CHECK(_getcwd(buffer, (int)sizeof(buffer)) == nullptr);
    CHECK_EQ(errno, ENOENT);
}

// Behind a directory that cannot be searched there is no full path to find, so
// the path comes back as asked. Root searches anything, so the case only means
// something for anyone else.
NOCTURNE_TEST(a_full_path_that_cannot_be_resolved_is_the_path_as_asked) {
    Tree tree;
    if (geteuid() == 0)
        return;
    std::error_code ec;
    fs::create_directories("locked", ec);
    fs::permissions("locked", fs::perms::owner_read, ec);
    char buffer[4096];
    CHECK(_fullpath(buffer, "locked/inner.txt", sizeof(buffer)) == buffer);
    fs::permissions("locked", fs::perms::owner_all, ec);
    CHECK_EQ(std::string(buffer), std::string("locked/inner.txt"));
}
#endif

// _chmod has one bit to give, write; the rest of the mode is not Windows'.
NOCTURNE_TEST(changing_the_mode_makes_a_file_writable_or_read_only) {
    Tree tree;
    CHECK_EQ(_chmod("ACT1.POD", 0x100), 0);
    CHECK_EQ(__getfileattr("ACT1.POD") & 0x01ul, 0x01ul);
    CHECK_EQ(_chmod("act1.pod", 0x180), 0);
    CHECK_EQ(__getfileattr("ACT1.POD") & 0x01ul, 0ul);
    errno = 0;
    CHECK_EQ(_chmod("no_such_file", 0x180), -1);
    CHECK_EQ(errno, ENOENT);
}

// -----------------------------------------------------------------------------
// Descriptors. Watcom's io.h names for where a file is and how long it is.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_descriptor_tells_where_it_is_and_can_be_cut_short) {
    Tree tree;
    FILE *f = fopen("sized.bin", "wb+");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    fwrite("0123456789", 1, 10, f);
    fflush(f);
    CHECK_EQ(tell(fileno(f)), 10L);
    CHECK_EQ(chsize(fileno(f), 4), 0);
    fclose(f);
    std::error_code ec;
    CHECK_EQ(fs::file_size("sized.bin", ec), (uintmax_t)4);
}

// -----------------------------------------------------------------------------
// The C++ runtime's array helpers. Watcom's compiler called these for every
// array of objects with a constructor or destructor; the type info says how big
// one is and which of the three it has.
// -----------------------------------------------------------------------------

namespace {

struct Slot {
    int value;
    int order;
};

int s_calls;

void make(void *at) {
    ((Slot *)at)->value = 7;
    ((Slot *)at)->order = s_calls++;
}
void copy(void *to, void *from) {
    ((Slot *)to)->value = ((Slot *)from)->value + 1;
}
void unmake(void *at, int) {
    ((Slot *)at)->order = s_calls++;
}

WatcomTypeInfo full_type() {
    WatcomTypeInfo ti = {};
    ti.ctor = make;
    ti.copy = copy;
    ti.dtor = unmake;
    ti.instance_size = (int)sizeof(Slot);
    return ti;
}

} // namespace

NOCTURNE_TEST(an_array_is_constructed_first_to_last) {
    WatcomTypeInfo ti = full_type();
    Slot slots[3] = {};
    s_calls = 0;
    CHECK(__arrinit(slots, 3, &ti) == slots);
    CHECK(__arrinit_(slots, 0, &ti) == slots);
    CHECK(__arrinit_dispatch(slots, 3, &ti) == slots);
    for (int i = 0; i < 3; ++i) {
        CHECK_EQ(slots[i].value, 7);
        CHECK_EQ(slots[i].order, 3 + i);
    }
    CHECK(__arrinit_dispatch(nullptr, 3, &ti) == nullptr);

    // No constructor leaves the memory as it was.
    WatcomTypeInfo bare = {};
    bare.instance_size = (int)sizeof(Slot);
    Slot untouched[2] = {{1, 1}, {2, 2}};
    __arrinit(untouched, 2, &bare);
    CHECK_EQ(untouched[1].value, 2);
}

NOCTURNE_TEST(an_array_is_copied_element_by_element) {
    WatcomTypeInfo ti = full_type();
    Slot from[2] = {{1, 0}, {5, 0}};
    Slot to[2] = {};
    CHECK(__arrcopy(to, from, 2, &ti) == to);
    CHECK_EQ(to[0].value, 2);
    CHECK_EQ(to[1].value, 6);

    WatcomTypeInfo bare = {};
    bare.instance_size = (int)sizeof(Slot);
    __arrcopy(to, from, 2, &bare);
    CHECK_EQ(to[1].value, 6);
}

NOCTURNE_TEST(an_array_is_destroyed_last_to_first) {
    WatcomTypeInfo ti = full_type();
    Slot slots[3] = {};
    s_calls = 0;
    CHECK(__arrfini(slots, 3, &ti) == slots);
    CHECK_EQ(slots[2].order, 0);
    CHECK_EQ(slots[0].order, 2);

    WatcomTypeInfo bare = {};
    bare.instance_size = (int)sizeof(Slot);
    __arrfini(slots, 3, &bare);
    CHECK_EQ(slots[0].order, 2);
}

// new[] keeps the count in the int before the first element, and delete[]
// reads it back from there.
NOCTURNE_TEST(new_and_delete_of_an_array_keep_the_count_before_it) {
    WatcomTypeInfo ti = full_type();
    alignas(8) char block[4 + 3 * sizeof(Slot)];
    s_calls = 0;
    void *first = __vec_new(block, 3, &ti);
    CHECK(first == block + 4);
    int count = 0;
    memcpy(&count, block, sizeof(count));
    CHECK_EQ(count, 3);
    CHECK(__vec_delete(first, &ti) == (void *)block);
    CHECK_EQ(s_calls, 6);

    CHECK(__vec_new_(nullptr, 3, &ti) == nullptr);
    CHECK(__vec_delete(nullptr, &ti) == nullptr);
}

NOCTURNE_TEST(the_memory_helpers_fill_and_copy) {
    unsigned char bytes[8];
    __memfill(bytes, 0x1AB, 8);
    CHECK_EQ((int)bytes[7], 0xAB);
    unsigned int words[3];
    __stosd(words, 0xDEADBEEFu, 3);
    CHECK_EQ(words[2], 0xDEADBEEFu);

    char to[4] = {};
    CHECK(_memcpy(to, "abc", 4) == to);
    CHECK_EQ(std::string(to), std::string("abc"));
    CHECK(_memset(to, 'z', 2) == to);
    CHECK_EQ(std::string(to), std::string("zzc"));
}

// What Watcom's runtime did that a host runtime does for itself: the stack is
// grown on touch, the heap is the host's and never checked here, and the
// static destructors run from the host's own exit.
NOCTURNE_TEST(the_runtime_internals_answer_as_watcoms_did) {
    __STK();
    __STK(16);
    __STK(3 * 4096);
    notifyAbnormalTermination();
    _atexit(nullptr);
    CHECK_EQ(_heapchk(), 0);
    // Typed: the Windows runtime has a _heapwalk(_HEAPINFO*) of its own.
    CHECK_EQ(_heapwalk((WatcomHeapInfo *)nullptr), 4);
    CHECK_EQ(_memmax(), (size_t)0x7FFFFFFF);
    CHECK_EQ(memavl(), (size_t)0x7FFFFFFF);
    CHECK_EQ(__set_errno(), 0ul);
    errno = EDOM;
    CHECK_EQ(*_errno(), EDOM);
}

NOCTURNE_TEST_MAIN()
