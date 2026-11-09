; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005cdfd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined1* PTR_unkafter_2d.cpp_FUN_005ceab0_00626b70 = 005ceab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdfd4
        ;   Label: unkafter_2d.cpp_FUN_005cdfd4
    PUSH ESI                            ; 005cdfd5
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cdfd6
    PUSH EDX                            ; 005cdfda
    MOV EBX,dword ptr [ESP + 0x18]      ; 005cdfdb
    PUSH EBX                            ; 005cdfdf
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cdfe0
    PUSH ECX                            ; 005cdfe4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cdfe5
    PUSH ESI                            ; 005cdfe9
    CALL dword ptr [0x00626b70]         ; 005cdfea | PTR_unkafter_2d.cpp_FUN_005ceab0_00626b70
    ADD ESP,0x10                        ; 005cdff0
    POP ESI                             ; 005cdff3
    POP EBX                             ; 005cdff4
    RET                                 ; 005cdff5

