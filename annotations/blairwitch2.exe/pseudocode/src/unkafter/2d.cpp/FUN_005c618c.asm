; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005c618c(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c59e0 at 005c5a48
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005c6000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c618c
        ;   Label: unkafter_2d.cpp_FUN_005c618c
    PUSH 0x1                            ; 005c618d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c618f
    PUSH EDX                            ; 005c6193
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c6194
    PUSH EBX                            ; 005c6198
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c6199
    PUSH ECX                            ; 005c619d
    CALL unkafter_2d.cpp_FUN_005c6000   ; 005c619e
        ;   XREF to: 005c6000 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c6000()
    ADD ESP,0x10                        ; 005c61a3
    POP EBX                             ; 005c61a6
    RET                                 ; 005c61a7

