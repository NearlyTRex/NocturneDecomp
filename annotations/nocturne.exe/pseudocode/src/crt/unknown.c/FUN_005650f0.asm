; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005650f0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005650f0
        ;   Label: crt_unknown.c_FUN_005650f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005650f4
    PUSH EDX                            ; 005650f8
    SUB EAX,0x44                        ; 005650f9
    PUSH EAX                            ; 005650fc
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 005650fd
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_ifstream_dtor_FUN_00565264()
    ADD ESP,0x8                         ; 00565102
    RET                                 ; 00565105

