; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564fc0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564fc0
        ;   Label: FUN_00564fc0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00564fc4
    MOV EDX,dword ptr [EAX + -0x4]      ; 00564fc8
    PUSH ECX                            ; 00564fcb
    SUB EAX,EDX                         ; 00564fcc
    PUSH EAX                            ; 00564fce
    CALL crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 ; 00564fcf
        ;   XREF to: 00564fd8 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_istrstream_dtor_FUN_00564fd8()
    ADD ESP,0x8                         ; 00564fd4
    RET                                 ; 00564fd7

