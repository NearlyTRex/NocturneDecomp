; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052eb00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float param_5)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   FUN_0040a320 at 0040a33a
;   FUN_0048ab60 at 0048ae73
;   FUN_0048b070 at 0048b173
;
; Called Functions:
;   FUN_00526210
;   FUN_00526340
;   FUN_005263c0
;   FUN_0052d120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052eb00
        ;   Label: FUN_0052eb00
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052eb01
    CALL FUN_00526340                   ; 0052eb05
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    FLD float ptr [ESP + 0x18]          ; 0052eb0a
    SUB ESP,0x8                         ; 0052eb0e
    FSTP double ptr [ESP]               ; 0052eb11
    CALL FUN_00526210                   ; 0052eb14
        ;   XREF to: 00526210 (UNCONDITIONAL_CALL)  ; undefined FUN_00526210()
    ADD ESP,0x8                         ; 0052eb19
    PUSH 0x0                            ; 0052eb1c
    PUSH 0x0                            ; 0052eb1e
    PUSH dword ptr [EBX + 0x8]          ; 0052eb20
    PUSH dword ptr [EBX + 0x4]          ; 0052eb23
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052eb26
    PUSH dword ptr [EBX]                ; 0052eb2a
    PUSH EDX                            ; 0052eb2c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052eb2d
    PUSH ECX                            ; 0052eb31
    CALL FUN_0052d120                   ; 0052eb32
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d120()
    ADD ESP,0x1c                        ; 0052eb37
    MOV EBX,EAX                         ; 0052eb3a
    CALL FUN_005263c0                   ; 0052eb3c
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV EAX,EBX                         ; 0052eb41
    POP EBX                             ; 0052eb43
    RET                                 ; 0052eb44

