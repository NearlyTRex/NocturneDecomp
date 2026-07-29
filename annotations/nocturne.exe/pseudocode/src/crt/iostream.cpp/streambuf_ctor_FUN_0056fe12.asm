; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; streambuf * __cdecl crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(streambuf *this_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   crt_fstream.cpp_filebuf_ctor_FUN_0057042d at 00570432
;   crt_strstream.cpp_strstreambase_ctor_FUN_0056b405 at 0056b416
;   crt_strstream.cpp_strstreambuf_ctor_FUN_00570248 at 0057024e
;
; Referenced Globals:
;   undefined1* g_StreambufVTable = 0056ff82
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056fe12
        ;   Label: crt_iostream.cpp_streambuf_ctor_FUN_0056fe12
    MOV dword ptr [EAX + 0x28],0x5a4ab0 ; 0056fe16 | g_StreambufVTable
    MOV dword ptr [EAX],0x0             ; 0056fe1d
    MOV dword ptr [EAX + 0x4],0x0       ; 0056fe23
    MOV dword ptr [EAX + 0x8],0x0       ; 0056fe2a
    MOV dword ptr [EAX + 0xc],0x0       ; 0056fe31
    MOV dword ptr [EAX + 0x10],0x0      ; 0056fe38
    MOV dword ptr [EAX + 0x14],0x0      ; 0056fe3f
    MOV dword ptr [EAX + 0x18],0x0      ; 0056fe46
    MOV dword ptr [EAX + 0x1c],0x0      ; 0056fe4d
    MOV DL,byte ptr [EAX + 0x24]        ; 0056fe54
    MOV dword ptr [EAX + 0x20],0x0      ; 0056fe57
    AND DL,0xfc                         ; 0056fe5e
    MOV byte ptr [EAX + 0x24],DL        ; 0056fe61
    RET                                 ; 0056fe64

