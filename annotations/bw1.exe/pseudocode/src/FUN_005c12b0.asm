; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c12b0(int param_1)
;
;
; XREF[14]:
;   FUN_00479180 at 004791ba
;   FUN_00494690 at 00494b27
;   FUN_0049d580 at 0049d6a5
;   FUN_004a1d00 at 004a1f1c
;   FUN_004bcba0 at 004bcef3
;   FUN_004d24c0 at 004d24f8
;   FUN_004d27b0 at 004d28e3
;   FUN_004fd270 at 004fd27b
;   FUN_005031c0 at 0050321c
;   FUN_0051f6d0 at 0051f87b
;   ... and 4 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c12b0
        ;   Label: FUN_005c12b0
    CMP EAX,0x61                        ; 005c12b4
    JL 0x005c12c1                       ; 005c12b7
        ;   XREF to: 005c12c1 (CONDITIONAL_JUMP)  ; LAB_005c12c1
    CMP EAX,0x7a                        ; 005c12b9
    JG 0x005c12c1                       ; 005c12bc
        ;   XREF to: 005c12c1 (CONDITIONAL_JUMP)  ; LAB_005c12c1
    SUB EAX,0x20                        ; 005c12be
    RET                                 ; 005c12c1
        ;   Label: LAB_005c12c1

