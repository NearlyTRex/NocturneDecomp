; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564faa(int param_1,uint param_2)
;
;
; Called Functions:
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564faa
        ;   Label: crt_unknown.c_FUN_00564faa
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564fae
    PUSH EDX                            ; 00564fb2
    SUB EAX,0x48                        ; 00564fb3
    PUSH EAX                            ; 00564fb6
    CALL crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 ; 00564fb7
        ;   XREF to: 00564fd8 (UNCONDITIONAL_CALL)  ; _istrstream * crt_strstream.cpp_istrstream_dtor_FUN_00564fd8(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00564fbc
    RET                                 ; 00564fbf

