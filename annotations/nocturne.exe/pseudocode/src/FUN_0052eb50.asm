; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052eb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; Called Functions:
;   FUN_00526210
;   FUN_00526340
;   FUN_005263c0
;   FUN_0052d120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052eb50
        ;   Label: FUN_0052eb50
    CALL FUN_00526340                   ; 0052eb51
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    FLD float ptr [ESP + 0x18]          ; 0052eb56
    SUB ESP,0x8                         ; 0052eb5a
    FSTP double ptr [ESP]               ; 0052eb5d
    CALL FUN_00526210                   ; 0052eb60
        ;   XREF to: 00526210 (UNCONDITIONAL_CALL)  ; undefined FUN_00526210()
    ADD ESP,0x8                         ; 0052eb65
    PUSH 0x0                            ; 0052eb68
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052eb6a
    PUSH EDX                            ; 0052eb6e
    PUSH 0x0                            ; 0052eb6f
    PUSH 0x0                            ; 0052eb71
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052eb73
    PUSH 0x0                            ; 0052eb77
    PUSH ECX                            ; 0052eb79
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052eb7a
    PUSH EBX                            ; 0052eb7e
    CALL FUN_0052d120                   ; 0052eb7f
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d120()
    ADD ESP,0x1c                        ; 0052eb84
    MOV EBX,EAX                         ; 0052eb87
    CALL FUN_005263c0                   ; 0052eb89
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV EAX,EBX                         ; 0052eb8e
    POP EBX                             ; 0052eb90
    RET                                 ; 0052eb91

