; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564e3d(int param_1,uint param_2)
;
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564e3d
        ;   Label: crt_unknown.c_FUN_00564e3d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564e41
    PUSH EDX                            ; 00564e45
    SUB EAX,0x48                        ; 00564e46
    PUSH EAX                            ; 00564e49
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 ; 00564e4a
        ;   XREF to: 00564e98 (UNCONDITIONAL_CALL)  ; _ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_00564e98(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00564e4f
    RET                                 ; 00564e52

