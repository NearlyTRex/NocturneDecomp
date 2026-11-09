; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005ce48c(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005cdce0 at 005cdd48
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005ce300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce48c
        ;   Label: unkafter_2d.cpp_FUN_005ce48c
    PUSH 0x1                            ; 005ce48d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ce48f
    PUSH EDX                            ; 005ce493
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ce494
    PUSH EBX                            ; 005ce498
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ce499
    PUSH ECX                            ; 005ce49d
    CALL unkafter_2d.cpp_FUN_005ce300   ; 005ce49e
        ;   XREF to: 005ce300 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce300()
    ADD ESP,0x10                        ; 005ce4a3
    POP EBX                             ; 005ce4a6
    RET                                 ; 005ce4a7

