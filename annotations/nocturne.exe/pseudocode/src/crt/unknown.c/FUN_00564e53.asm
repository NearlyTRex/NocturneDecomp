; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564e53(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564e53
        ;   Label: crt_unknown.c_FUN_00564e53
    MOV ECX,dword ptr [ESP + 0x8]       ; 00564e57
    MOV EDX,dword ptr [EAX + -0x4]      ; 00564e5b
    PUSH ECX                            ; 00564e5e
    SUB EAX,EDX                         ; 00564e5f
    PUSH EAX                            ; 00564e61
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 ; 00564e62
        ;   XREF to: 00564e98 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_ostrstream_dtor_FUN_00564e98()
    ADD ESP,0x8                         ; 00564e67
    RET                                 ; 00564e6a

