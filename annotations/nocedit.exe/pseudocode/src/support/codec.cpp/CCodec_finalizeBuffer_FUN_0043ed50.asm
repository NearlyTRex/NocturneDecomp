; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50 (CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer_ptr
; int *            Stack[0xc]:4   buffer_size_ptr
; Local Variables:
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x44]:1  local_44
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
;   crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ed50
        ;   Label: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
    PUSH ESI                            ; 0043ed51
    PUSH EDI                            ; 0043ed52
    SUB ESP,0x80                        ; 0043ed53
    MOV ESI,dword ptr [ESP + 0x98]      ; 0043ed59
    PUSH 0x2                            ; 0043ed60
    MOV EDX,dword ptr [ESI]             ; 0043ed62
    PUSH EDX                            ; 0043ed64
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0043ed65
    PUSH ECX                            ; 0043ed6c
    PUSH 0x0                            ; 0043ed6d
    LEA EAX,[ESP + 0x10]                ; 0043ed6f
    PUSH EAX                            ; 0043ed73
    CALL crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 ; 0043ed74
        ;   XREF to: 005ff384 (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_ctor_FUN_005ff384(ostrstream * this_ptr, int flags, char * buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0043ed79
    LEA EBX,[ESP + 0x48]                ; 0043ed7c
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043ed80
    PUSH EBX                            ; 0043ed87
    MOV EBX,dword ptr [ESP + 0x94]      ; 0043ed88
    MOV EAX,dword ptr [EAX]             ; 0043ed8f
    PUSH EBX                            ; 0043ed91
    CALL dword ptr [EAX + 0xc]          ; 0043ed92
    ADD ESP,0x8                         ; 0043ed95
    MOV EBX,EAX                         ; 0043ed98
    LEA EAX,[ESP + 0x48]                ; 0043ed9a
    PUSH EAX                            ; 0043ed9e
    CALL crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d ; 0043ed9f
        ;   XREF to: 005ff45d (UNCONDITIONAL_CALL)  ; int crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr)
    ADD ESP,0x4                         ; 0043eda4
    MOV EDI,dword ptr [ESI]             ; 0043eda7
    PUSH 0x0                            ; 0043eda9
    SUB EDI,EAX                         ; 0043edab
    LEA EAX,[ESP + 0x4]                 ; 0043edad
    PUSH EAX                            ; 0043edb1
    MOV dword ptr [ESI],EDI             ; 0043edb2
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a ; 0043edb4
        ;   XREF to: 005ff48a (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, int d1)
    ADD ESP,0x8                         ; 0043edb9
    MOV EAX,EBX                         ; 0043edbc
    ADD ESP,0x80                        ; 0043edbe
    POP EDI                             ; 0043edc4
    POP ESI                             ; 0043edc5
    POP EBX                             ; 0043edc6
    RET                                 ; 0043edc7

