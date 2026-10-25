// =============================================================================
// WATCOM CRT STUBS — the iostream entries the globals still point at
// =============================================================================
//
// Most of these only resolve a link: the standard stream classes stand in for
// the Watcom ones they belong to, and a stub answers in Watcom's shape (a
// constructor or destructor hands back its object, anything else 0). Two are
// bridges the codec reaches, and pass a character to or from the standard
// stream behind the Watcom pointer. The stream_compat.h adapters those
// pointers come from are tested alongside them.

#include "nocturne.h"
#include "nocturne_test.h"
#include "watcom/stream_compat.h"

#include <filesystem>
#include <sstream>
#include <string>
#include <system_error>

// The ones the codec reaches: a character each way through the standard stream.
NOCTURNE_TEST(put_and_get_pass_a_character_through_the_standard_stream) {
    std::ostringstream out;
    _ostream *o = watcom_ostream_from(out);
    CHECK(crt_iostream_cpp_ostream_put_FUN_005ff2d7(o, 'k') == o);
    CHECK(crt_iostream_cpp_ostream_put_FUN_005ff2d7(nullptr, 'k') == nullptr);
    CHECK_EQ(out.str(), std::string("k"));
    CHECK(&std_ostream_from(o) == &out);

    std::istringstream in("q");
    _istream *i = watcom_istream_from(in);
    char c = 0;
    CHECK(crt_iostream_cpp_istream_get_FUN_005ff245(i, &c) == i);
    CHECK_EQ(c, 'q');
    CHECK(crt_iostream_cpp_istream_get_FUN_005ff245(i, nullptr) == i);
    CHECK(crt_iostream_cpp_istream_get_FUN_005ff245(nullptr, &c) == nullptr);
    CHECK(&std_istream_from(i) == &in);
}

// The rest answer in Watcom's shape without doing anything.
NOCTURNE_TEST(the_stubs_answer_in_watcoms_shape) {
    char object[64] = {};
    void *p = object;
    crt_cpp_c_pureVirtualStub_FUN_005fee9f();
    crt_cpp_c_handlePureVirtualCall_FUN_006015f1();
    CHECK_EQ(crt_stdio_c_closeUnsupported_FUN_0060b9b7(), 0);

    CHECK(crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)p) == p);
    CHECK(crt_iostream_cpp_ios_dtor_FUN_0060632c((ios *)p, 0) == p);
    CHECK_EQ(crt_iostream_cpp_ios_clear_FUN_00600e64((ios *)p, 0), 0u);
    CHECK(crt_iostream_cpp_ostream_ctor_FUN_006061a2((_ostream *)p, 0) == p);
    CHECK(crt_iostream_cpp_ostream_dtor_FUN_00606231((_ostream *)p, 0) == p);
    crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4((ios *)p, 0);
    CHECK(crt_iostream_cpp_istream_ctor_FUN_00606376((_istream *)p, 0) == p);
    CHECK(crt_iostream_cpp_istream_dtor_FUN_006063e1((_istream *)p, 0) == p);

    streambuf *sb = (streambuf *)p;
    CHECK(crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(sb) == sb);
    CHECK(crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff(sb, nullptr, 0) == sb);
    CHECK_EQ(crt_iostream_cpp_streambuf_do_sputn_FUN_00606780(sb, nullptr, 0), 0);
    CHECK_EQ(crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932(sb, nullptr, 0), 0);
    crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f(sb, 0, 0, 0);
    CHECK_EQ(crt_iostream_cpp_streambuf_seekoff_FUN_00610ab0(sb, 0, 0, 0), 0);
    CHECK_EQ(crt_iostream_cpp_streambuf_sync_FUN_00610ab6(sb), 0);
    CHECK_EQ(crt_iostream_cpp_doallocate_FUN_0060d677(sb), 0);

    CHECK(crt_fstream_cpp_fstreambase_ctor_FUN_0060658f((fstreambase *)p, 0) == p);
    CHECK(crt_fstream_cpp_fstreambase_dtor_FUN_00606509((fstreambase *)p, 0) == p);
    crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_006064f1((ios *)p, 0);
    CHECK((void *)crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(p, 0) == p);
    CHECK((void *)crt_fstream_cpp_ifstream_dtor_FUN_005ff856(p, 0) == p);
    crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2((_istream *)p, 0);
    crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8((ios *)p, 0);
    CHECK((void *)crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(p, 0) == p);
    CHECK((void *)crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(p, 0) == p);
    crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e((_ostream *)p, 0);
    crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4((ios *)p, 0);

    filebuf *fb = (filebuf *)p;
    CHECK(crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(fb) == fb);
    CHECK(crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(fb, 0) == fb);
    CHECK_EQ(crt_fstream_cpp_filebuf_overflow_FUN_0060d881(fb, 0), 0);
    CHECK_EQ(crt_fstream_cpp_filebuf_pbackfail_FUN_0060d7ae(fb, 0), 0);
    CHECK_EQ(crt_fstream_cpp_filebuf_seekoff_FUN_0060dbe8(fb, 0, 0, 0), 0);
    CHECK((void *)crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c(fb, nullptr, 0) == p);
    CHECK_EQ(crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(fb), 0);
    CHECK_EQ(crt_fstream_cpp_filebuf_underflow_FUN_0060da87(fb), 0);
    crt_fstream_cpp_openFile_FUN_00600e85(p, nullptr, 0, 0);
    CHECK((void *)crt_fstream_cpp_istream_seekg_FUN_00600ee4(p, 0) == p);

    CHECK(crt_strstream_cpp_strstreambase_dtor_FUN_006062a6((strstreambase *)p, 0) == p);
    crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0060618a((ios *)p, 0);
    strstreambuf *ssb = (strstreambuf *)p;
    CHECK(crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8(ssb) == ssb);
    CHECK(crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f(ssb, 0) == ssb);
    CHECK_EQ(crt_strstream_cpp_strstreambuf_overflow_FUN_0060b9bd(ssb, 0), 0);
    CHECK_EQ(crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25(ssb), 0);
    CHECK(crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70(ssb, nullptr, 0) == ssb);
    CHECK_EQ(crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80(ssb, 0, 0, 0), 0);
    CHECK_EQ(crt_strstream_cpp_strstreambuf_sync_FUN_0060bb7c(), 0);
    CHECK_EQ(crt_strstream_cpp_strstreambuf_doallocate_FUN_0060bc22(ssb), 0);
    CHECK((void *)crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(p, 0) == p);
    CHECK((void *)crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(p, 0) == p);
}

// -----------------------------------------------------------------------------
// stream_compat.h: a stream over the caller's buffer, and opens that resolve
// -----------------------------------------------------------------------------

// What was written comes off the caller's remaining size, and a buffer with no
// room left takes writes and keeps nothing.
NOCTURNE_TEST(a_buffer_stream_takes_what_it_wrote_off_the_room_left) {
    char buffer[8] = {};
    int room = 8;
    {
        watcom_buffer_ostream out(buffer, &room);
        crt_iostream_cpp_ostream_put_FUN_005ff2d7(out, 'a');
        crt_iostream_cpp_ostream_put_FUN_005ff2d7(out, 'b');
    }
    CHECK_EQ(room, 6);
    CHECK_EQ(std::string(buffer, 2), std::string("ab"));

    int none = 0;
    {
        watcom_buffer_ostream out(buffer, &none);
        crt_iostream_cpp_ostream_put_FUN_005ff2d7(out, 'z');
    }
    CHECK_EQ(none, 0);
    CHECK_EQ(buffer[0], 'a');

    // Writing past the end fills it and no more; what is left is nothing.
    int small = 2;
    {
        watcom_buffer_ostream out(buffer, &small);
        for (int i = 0; i < 4; ++i)
            crt_iostream_cpp_ostream_put_FUN_005ff2d7(out, 'x');
    }
    CHECK_EQ(small, 0);

    char source[] = "hi";
    watcom_buffer_istream in(source, 2);
    char c = 0;
    crt_iostream_cpp_istream_get_FUN_005ff245(in, &c);
    CHECK_EQ(c, 'h');
}

// The standard file streams open through the same resolution as _fopen, so the
// game's spelling of a save finds the file as it is on disk.
NOCTURNE_TEST(a_file_stream_opens_the_games_spelling_of_a_path) {
    namespace fs = std::filesystem;
    std::error_code ec;
    const fs::path previous = fs::current_path(ec);
    const fs::path root = fs::temp_directory_path(ec) / "nocturne_stream_compat_test";
    fs::remove_all(root, ec);
    fs::create_directories(root / "save", ec);
    fs::current_path(root, ec);

    std::ofstream out;
    watcom_stream_open(out, "save\\SLOT1.NOC", std::ios::out | std::ios::binary);
    CHECK(out.is_open());
    out << "data";
    out.close();
    std::ifstream in;
    watcom_stream_open(in, "SAVE\\slot1.noc", std::ios::in | std::ios::binary);
    CHECK(in.is_open());
    std::string text;
    in >> text;
    CHECK_EQ(text, std::string("data"));
    CHECK(&std_ifstream_from((ifstream *)&in) == &in);
    CHECK(&std_ofstream_from((ofstream *)&out) == &out);
    in.close();

    fs::current_path(previous, ec);
    fs::remove_all(root, ec);
}

NOCTURNE_TEST_MAIN()
