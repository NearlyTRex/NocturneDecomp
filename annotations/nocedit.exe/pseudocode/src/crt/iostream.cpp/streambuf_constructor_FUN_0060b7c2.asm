; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack streambuf * crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2(streambuf * this_ptr)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd at 0060bde2
;   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe at 0060610f
;   crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8 at 0060bbfe
;
; Referenced Globals:
;   streambuf_vtable g_StreambufVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060b7c2
        ;   Label: crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
    MOV dword ptr [EAX + 0x28],0x665f70 ; 0060b7c6 | streambuf_vtable g_StreambufVTable
    MOV dword ptr [EAX],0x0             ; 0060b7cd
    MOV dword ptr [EAX + 0x4],0x0       ; 0060b7d3
    MOV dword ptr [EAX + 0x8],0x0       ; 0060b7da
    MOV dword ptr [EAX + 0xc],0x0       ; 0060b7e1
    MOV dword ptr [EAX + 0x10],0x0      ; 0060b7e8
    MOV dword ptr [EAX + 0x14],0x0      ; 0060b7ef
    MOV dword ptr [EAX + 0x18],0x0      ; 0060b7f6
    MOV dword ptr [EAX + 0x1c],0x0      ; 0060b7fd
    MOV DL,byte ptr [EAX + 0x24]        ; 0060b804
    MOV dword ptr [EAX + 0x20],0x0      ; 0060b807
    AND DL,0xfc                         ; 0060b80e
    MOV byte ptr [EAX + 0x24],DL        ; 0060b811
    RET                                 ; 0060b814

