// =============================================================================
// WATCOM CRT — the C library as the game was compiled against it
// =============================================================================
//
// What the game asks of these is Watcom's answer, not the host's: a 15-bit
// rand(), a drive in splitpath, text files read without their carriage returns,
// a _FILE whose flag byte says EOF and error, a 36-byte _tm. Each case builds a
// directory, asks the way the game asks, and checks what comes back.

#include "libc_faults.h"
#include "nocturne_test.h"
#include "rng_audit_support.h"
#include "system/crt.h"
#include "system/stdio.h"
#include "system/time.h"
#include "system/watcom.h"
#include "watcom/path.h"

#include <cerrno>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <string>
#include <system_error>
#if defined(_WIN32)
#include <io.h>
#include <sys/utime.h>
#else
#include <unistd.h>
#include <utime.h>
#endif

namespace {

namespace fs = std::filesystem;

struct Dir {
    fs::path root;
    fs::path previous;

    Dir() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / fs::path("nocturne_crt_test");
        fs::remove_all(root, ec);
        fs::create_directories(root / "Data", ec);
        fs::current_path(root, ec);
    }

    ~Dir() {
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }

    static void write(const char *at, const std::string &bytes) {
        std::ofstream out(at, std::ios::binary);
        out << bytes;
    }

    static std::string read(const char *at) {
        std::ifstream in(at, std::ios::binary);
        return std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    }
};

// Formats through _vsprintf the way the game's variadic functions do.
int format_through_va_list_t(char *out, const char *format, ...) {
    va_list_t args;
    VA_START_T(args, format);
    const int written = _vsprintf(out, format, args);
    VA_END_T(args);
    return written;
}

const unsigned kEof = 0x10;
const unsigned kError = 0x20;

} // namespace

// -----------------------------------------------------------------------------
// rand
// -----------------------------------------------------------------------------

// Watcom's generator, 15 bits wide, seeded by srand, and every draw reported to
// the netplay audit.
NOCTURNE_TEST(rand_is_watcoms_generator) {
    srand(1);
    unsigned seed = 1;
    const int before = rng_audit_support::raw_draws;
    for (int i = 0; i < 100; ++i) {
        seed = seed * 0x41c64e6du + 0x3039u;
        CHECK_EQ(rand(), (int)((seed >> 16) & 0x7fff));
    }
    CHECK_EQ(rng_audit_support::raw_draws - before, 100);
    srand(7);
    const int first = rand();
    srand(7);
    CHECK_EQ(rand(), first);
}

// -----------------------------------------------------------------------------
// Strings
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_string_calls_compare_and_fold_as_watcom_did) {
    char a[] = "Wall.RAW", b[] = "wall.raw", c[] = "wall.rax";
    CHECK(_strcmp(a, b) != 0);
    CHECK_EQ(_stricmp(a, b), 0);
    CHECK(_stricmp(a, c) != 0);
    CHECK_EQ(_strnicmp(a, c, 7), 0);

    // A byte above 0x7F is not a letter to fold.
    char mixed[] = "aB\xE9z";
    CHECK_EQ(std::string(strupr(mixed)), std::string("AB\xE9Z"));
    CHECK_EQ(std::string(strlwr(mixed)), std::string("ab\xE9z"));

    CHECK_EQ(_strtod("2.5e1x"), 25.0);
    char out[8];
    memset(out, 'x', sizeof(out));
    _strncpy(out, "abc", 5);
    CHECK_EQ(std::string(out), std::string("abc"));
    CHECK_EQ(out[4], '\0');
}

// -----------------------------------------------------------------------------
// splitpath and makepath
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_path_splits_into_drive_directory_name_and_extension) {
    char drive[3], dir[256], fname[256], ext[256];
    splitpath("C:\\games\\save\\slot1.noc", drive, dir, fname, ext);
    CHECK_EQ(std::string(drive), std::string("C:"));
    CHECK_EQ(std::string(dir), std::string("\\games\\save\\"));
    CHECK_EQ(std::string(fname), std::string("slot1"));
    CHECK_EQ(std::string(ext), std::string(".noc"));

    // No drive, either separator, a dot only in the directory.
    splitpath("data.old/levels/act1", drive, dir, fname, ext);
    CHECK_EQ(std::string(drive), std::string(""));
    CHECK_EQ(std::string(dir), std::string("data.old/levels/"));
    CHECK_EQ(std::string(fname), std::string("act1"));
    CHECK_EQ(std::string(ext), std::string(""));

    // A letter is a drive in either case; anything else before a colon is not.
    splitpath("d:x.y", drive, dir, fname, ext);
    CHECK_EQ(std::string(drive), std::string("d:"));
    CHECK_EQ(std::string(fname), std::string("x"));
    splitpath("1:x", drive, dir, fname, ext);
    CHECK_EQ(std::string(drive), std::string(""));
    CHECK_EQ(std::string(fname), std::string("1:x"));
    splitpath("C", drive, dir, fname, ext);
    CHECK_EQ(std::string(drive), std::string(""));

    // Any part can go unasked for.
    splitpath("C:\\a\\b.c", nullptr, nullptr, nullptr, nullptr);

    // A part longer than Watcom's limit is cut to it.
    const std::string long_name(300, 'n');
    splitpath(long_name.c_str(), drive, dir, fname, ext);
    CHECK_EQ(strlen(fname), (size_t)255);
}

NOCTURNE_TEST(parts_join_back_into_the_path_they_came_from) {
    char path[260];
    makepath(path, "C", "\\games", "slot1", "noc");
    CHECK_EQ(std::string(path), std::string("C:\\games\\slot1.noc"));
    makepath(path, "C:", "save/", "slot1", ".noc");
    CHECK_EQ(std::string(path), std::string("C:save/slot1.noc"));
    makepath(path, nullptr, nullptr, "slot1", nullptr);
    CHECK_EQ(std::string(path), std::string("slot1"));
    makepath(path, "", "", "", "");
    CHECK_EQ(std::string(path), std::string(""));
    makepath(path, "", "dir\\", nullptr, "");
    CHECK_EQ(std::string(path), std::string("dir\\"));

    char drive[3], dir[256], fname[256], ext[256];
    splitpath("E:\\a\\b\\c.d", drive, dir, fname, ext);
    makepath(path, drive, dir, fname, ext);
    CHECK_EQ(std::string(path), std::string("E:\\a\\b\\c.d"));

    // Longer than a path can be: cut to it.
    const std::string long_dir(400, 'd');
    makepath(path, nullptr, long_dir.c_str(), "f", "e");
    CHECK_EQ(strlen(path), (size_t)259);
}

// -----------------------------------------------------------------------------
// Opening, reading and writing files
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_file_opens_through_the_path_resolver_or_not_at_all) {
    Dir dir;
    Dir::write("Data/Notes.TXT", "line\r\n");
    _FILE *f = _fopen("data\\notes.txt", "rb");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    CHECK(f->_link != nullptr);
    CHECK_EQ(f->_handle, fileno(_FILE_to_FILE(f)));
    CHECK_EQ(_fclose(f), 0);

    CHECK(_fopen("data\\missing.txt", "rb") == nullptr);
    CHECK_EQ(_fclose(nullptr), 0);
}

// A text-mode read drops the carriage returns, as Windows' does, and a position
// taken from it can be gone back to.
NOCTURNE_TEST(a_text_file_is_read_without_its_carriage_returns) {
    Dir dir;
    Dir::write("Data/model.kfm", "first\r\nsecond\r\n");
    _FILE *f = _fopen("data\\model.kfm", "rt");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    char line[32];
    CHECK(_fgets(line, sizeof(line), f) == line);
    CHECK_EQ(std::string(line), std::string("first\n"));
    const long second = _ftell(f);
    CHECK(_fgets(line, sizeof(line), f) == line);
    CHECK_EQ(std::string(line), std::string("second\n"));
    CHECK_EQ(_fseek(f, second, SEEK_SET), 0);
    CHECK(_fgets(line, sizeof(line), f) == line);
    CHECK_EQ(std::string(line), std::string("second\n"));
    // A seek the file cannot make is refused.
    CHECK(_fseek(f, -100, SEEK_SET) != 0);

    // Read to the end, it is the lines without their returns.
    _rewind(f);
    char all[64] = {};
    CHECK_EQ(_fread(all, 1, sizeof(all), f), (size_t)13);
    CHECK_EQ(std::string(all), std::string("first\nsecond\n"));
    _fclose(f);

    // Binary keeps them.
    f = _fopen("data\\model.kfm", "rb");
    CHECK(_fgets(line, sizeof(line), f) == line);
    CHECK_EQ(std::string(line), std::string("first\r\n"));
    _fclose(f);

    CHECK(_fopen("data\\missing.kfm", "r") == nullptr);
}

// A text-mode write goes through as written; on Windows the runtime writes each
// line end as \r\n.
NOCTURNE_TEST(a_text_file_is_written_as_given) {
    Dir dir;
    _FILE *f = _fopen("data\\out.txt", "w");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    CHECK(_fputs("abc\n", f) >= 0);
    CHECK_EQ(_fputc('z', f), 'z');
    CHECK_EQ(_fprintf(f, "%d", 42), 2);
    CHECK_EQ(_fwrite("!!", 1, 2, f), (size_t)2);
    CHECK_EQ(_fflush(f), 0);
    _fclose(f);
#if defined(_WIN32)
    CHECK_EQ(Dir::read("Data/out.txt"), std::string("abc\r\nz42!!"));
#else
    CHECK_EQ(Dir::read("Data/out.txt"), std::string("abc\nz42!!"));
#endif
}

#if defined(__GLIBC__)
// With no layer to strip the carriage returns there is no text stream, and the
// file under it is closed rather than left open.
NOCTURNE_TEST(a_text_file_without_its_layer_is_not_opened) {
    Dir dir;
    Dir::write("Data/a.txt", "x");
    libc_faults::fail_next_fopencookie = true;
    CHECK(_fopen("data\\a.txt", "r") == nullptr);
}
#endif

// The flag byte says EOF and error as Watcom's did, and a rewind clears both.
NOCTURNE_TEST(the_flag_byte_follows_eof_and_error) {
    Dir dir;
    Dir::write("Data/two.bin", "ab");
    _FILE *f = _fopen("data\\two.bin", "rb");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    CHECK_EQ(_fgetc(f), 'a');
    CHECK_EQ(_ungetc('a', f), 'a');
    char both[4] = {};
    CHECK_EQ(_fread(both, 1, 4, f), (size_t)2);
    CHECK_EQ(std::string(both), std::string("ab"));
    CHECK(_feof(f) != 0);
    CHECK_EQ(f->_flag & kEof, kEof);

    // Writing to a stream opened for reading is an error.
    CHECK_EQ(_fputc('x', f), EOF);
    CHECK(_ferror(f) != 0);
    CHECK_EQ(f->_flag & kError, kError);
    // A second failure is not a new one.
    CHECK_EQ(_fputc('x', f), EOF);

    _rewind(f);
    CHECK_EQ(f->_flag & (kEof | kError), 0u);
    CHECK_EQ(_ftell(f), 0L);

    fpos_t at;
    CHECK_EQ(_fgetpos(f, &at), 0);
    _fgetc(f);
    CHECK_EQ(_fsetpos(f, &at), 0);
    CHECK_EQ(_fgetc(f), 'a');
    _fclose(f);
}

NOCTURNE_TEST(buffering_and_scanning_reach_the_stream) {
    Dir dir;
    Dir::write("Data/n.txt", "12 34");
    _FILE *f = _fopen("data\\n.txt", "rb");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    static char buffer[BUFSIZ];
    CHECK_EQ(_setvbuf(f, nullptr, _IOFBF, 512), 0);
    _setbuf(f, buffer);
    _setbuf(f, nullptr);
    int a = 0, b = 0;
    CHECK_EQ(_fscanf(f, "%d %d", &a, &b), 2);
    CHECK_EQ(a + b, 46);
    _fclose(f);
}

// -----------------------------------------------------------------------------
// The _FILE a pointer came from
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_file_pointer_is_whichever_kind_it_is) {
    CHECK(_FILE_to_FILE(nullptr) == nullptr);
    // The game's own standard streams, named by their handle.
    _FILE in{}, out{}, err{}, other{};
    in._handle = 0;
    out._handle = 1;
    err._handle = 2;
    other._handle = 9;
    CHECK(_FILE_to_FILE(&in) == stdin);
    CHECK(_FILE_to_FILE(&out) == stdout);
    CHECK(_FILE_to_FILE(&err) == stderr);
    // Anything else is taken to be a stream already.
    CHECK(_FILE_to_FILE(&other) == (FILE *)&other);
#if defined(__GLIBC__)
    // A C library stream passed straight through.
    CHECK(_FILE_to_FILE((_FILE *)stdout) == stdout);
#endif
}

// Reopening keeps the caller's pointer: a wrapper is pointed at the new stream,
// one of the game's own standard streams is redirected underneath it.
NOCTURNE_TEST(a_reopen_hands_back_the_stream_it_was_given) {
    Dir dir;
    Dir::write("Data/first.txt", "1");
    Dir::write("Data/second.txt", "2");
    CHECK(_freopen("data\\first.txt", "rb", nullptr) == nullptr);

    _FILE *f = _fopen("data\\first.txt", "rb");
    CHECK(f != nullptr);
    if (f == nullptr)
        return;
    CHECK(_freopen("data\\second.txt", "rb", f) == f);
    CHECK_EQ(_fgetc(f), '2');
    CHECK(_freopen("data\\third.txt", "wb", f) == f);
    CHECK_EQ(_fputc('3', f), '3');
    _fflush(f);
    CHECK_EQ(Dir::read("Data/third.txt"), std::string("3"));
    CHECK(_freopen("data\\missing.txt", "rb", f) == nullptr);
    delete f;

    // Descriptor 0 is put back after, or the next file opened would take it.
    const int saved_stdin = dup(0);
    _FILE in{};
    in._handle = 0;
    CHECK(_freopen("data\\first.txt", "rb", &in) == &in);
    CHECK(in._link == nullptr);
    CHECK_EQ(fgetc(stdin), '1');
    // Closing one of the game's own streams leaves the struct alone.
    CHECK_EQ(_fclose(&in), 0);
    CHECK_EQ(in._handle, 0);
    dup2(saved_stdin, 0);
    close(saved_stdin);
}

NOCTURNE_TEST(remove_and_rename_go_through_the_resolver) {
    Dir dir;
    Dir::write("Data/old.ini", "x");
    CHECK_EQ(_rename("data\\old.ini", "data\\new.ini"), 0);
    std::error_code ec;
    CHECK(fs::exists("Data/new.ini", ec));
    CHECK_EQ(_remove("data\\new.ini"), 0);
    CHECK(!fs::exists("Data/new.ini", ec));
    CHECK(_remove("data\\new.ini") != 0);
}

// -----------------------------------------------------------------------------
// Formatting
// -----------------------------------------------------------------------------

// The game's va_list_t carries the whole of a host va_list, so strings and
// numbers past the registers arrive intact.
NOCTURNE_TEST(formatting_through_the_games_va_list_keeps_every_argument) {
    char out[128];
    CHECK_EQ(format_through_va_list_t(out, "%s %d %d %d %d %d %d %s", "a", 1, 2, 3, 4, 5, 6, "z"),
             15);
    CHECK_EQ(std::string(out), std::string("a 1 2 3 4 5 6 z"));
    CHECK_EQ(_sprintf(out, "%04x", 0xbeef), 4);
    CHECK_EQ(std::string(out), std::string("beef"));
}

// -----------------------------------------------------------------------------
// Time
// -----------------------------------------------------------------------------

NOCTURNE_TEST(time_goes_through_the_games_36_byte_tm) {
    // mktime normalises the 32nd of January to the 1st of February.
    _tm t{};
    t.tm_year = 99;
    t.tm_mon = 0;
    t.tm_mday = 32;
    t.tm_hour = 12;
    t.tm_isdst = -1;
    CHECK(_mktime(&t) != (time_t)-1);
    CHECK_EQ(t.tm_mon, 1);
    CHECK_EQ(t.tm_mday, 1);

    // localtime from the low 32 bits it is handed.
    time_t now = 0;
    CHECK_EQ(_time(&now), now);
    CHECK(_time(nullptr) >= now);
    const _tm *local = _localtime(&now);
    CHECK(local != nullptr);
    if (local != nullptr)
        CHECK(local->tm_year >= 120);
#if defined(__GLIBC__)
    libc_faults::fail_next_localtime = true;
    CHECK(_localtime(&now) == nullptr);
#endif
}

NOCTURNE_TEST(asctime_writes_the_standard_line_and_never_reads_off_a_table) {
    _tm t{};
    t.tm_year = 73;
    t.tm_mon = 8;
    t.tm_mday = 16;
    t.tm_hour = 1;
    t.tm_min = 3;
    t.tm_sec = 52;
    t.tm_wday = 0;
    CHECK_EQ(std::string(_asctime(&t)), std::string("Sun Sep 16 01:03:52 1973\n"));
    t.tm_wday = 7;
    t.tm_mon = -1;
    CHECK_EQ(std::string(_asctime(&t)), std::string("??? ??? 16 01:03:52 1973\n"));
    t.tm_wday = -1;
    t.tm_mon = 12;
    CHECK_EQ(std::string(_asctime(&t)), std::string("??? ??? 16 01:03:52 1973\n"));
}

// The zone directives read fields the game's struct does not have; they come
// from a host struct instead.
NOCTURNE_TEST(strftime_formats_the_games_tm_including_its_zone) {
    _tm t{};
    t.tm_year = 99;
    t.tm_mon = 11;
    t.tm_mday = 31;
    char out[64];
    CHECK_EQ(_strftime(out, sizeof(out), "%m/%d/%Y", &t), (size_t)10);
    CHECK_EQ(std::string(out), std::string("12/31/1999"));
    CHECK(_strftime(out, sizeof(out), "%z", &t) > 0);
}

// -----------------------------------------------------------------------------
// File status
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_files_status_goes_through_the_resolver) {
    Dir dir;
    Dir::write("Data/Five.bin", "12345");
    WatcomStat st;
    CHECK_EQ(getFileStat("data\\five.bin", &st), 0);
    CHECK_EQ(st._st_size, 5L);
    CHECK_EQ(getFileStat("data\\five.bin", nullptr), 0);
    CHECK(getFileStat("data\\six.bin", &st) != 0);
}

NOCTURNE_TEST(a_files_times_are_set_through_the_resolver) {
    Dir dir;
    Dir::write("Data/Five.bin", "12345");
    struct utimbuf times;
    times.actime = 1000000000;
    times.modtime = 1000000000;
    CHECK_EQ(_utime("data\\five.bin", &times), 0);
    WatcomStat st;
    CHECK_EQ(getFileStat("data\\five.bin", &st), 0);
    CHECK_EQ((long long)st._st_mtime, 1000000000LL);
    // Typed: the Windows runtime has a _utime(const char *, _utimbuf *) of its own.
    CHECK_EQ(_utime("data\\five.bin", (void *)nullptr), 0);
}

NOCTURNE_TEST_MAIN()
