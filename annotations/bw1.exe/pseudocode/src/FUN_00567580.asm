; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567580(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_0043eea0 at 0043f8b6
;   FUN_0050f290 at 0050f50c
;   FUN_005204e0 at 00520aaf
;   FUN_00522650 at 00522657
;   FUN_00532930 at 005329d4
;   FUN_00569b50 at 00569c7a
;   FUN_00591ff0 at 005922e5
;   FUN_00592320 at 005925d0
;   FUN_005a52a0 at 005a544e
;   FUN_005a5550 at 005a55b1
;
; Called Functions:
;   FUN_005675a0
;   FUN_00569180
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00567580
        ;   Label: FUN_00567580
    PUSH EDX                            ; 00567584
    CALL FUN_005675a0                   ; 00567585
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 0056758a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056758d
    PUSH ECX                            ; 00567591
    CALL FUN_00569180                   ; 00567592
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; undefined FUN_00569180()
    ADD ESP,0x4                         ; 00567597
    RET                                 ; 0056759a

