; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005c5cd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined1* PTR_unkafter_2d.cpp_FUN_005c67b0_0061f7f0 = 005c67b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5cd4
        ;   Label: unkafter_2d.cpp_FUN_005c5cd4
    PUSH ESI                            ; 005c5cd5
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c5cd6
    PUSH EDX                            ; 005c5cda
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c5cdb
    PUSH EBX                            ; 005c5cdf
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c5ce0
    PUSH ECX                            ; 005c5ce4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c5ce5
    PUSH ESI                            ; 005c5ce9
    CALL dword ptr [0x0061f7f0]         ; 005c5cea | PTR_unkafter_2d.cpp_FUN_005c67b0_0061f7f0
    ADD ESP,0x10                        ; 005c5cf0
    POP ESI                             ; 005c5cf3
    POP EBX                             ; 005c5cf4
    RET                                 ; 005c5cf5

