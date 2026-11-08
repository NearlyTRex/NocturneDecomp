; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a4120(int param_1)
;
;
; XREF[13]:
;   FUN_004659c0 at 004659fa
;   FUN_0047d230 at 0047d6c7
;   FUN_00486120 at 00486245
;   FUN_0048c2e0 at 0048c4fc
;   FUN_004aa810 at 004aab71
;   FUN_004bb100 at 004bb233
;   FUN_004df590 at 004df59b
;   FUN_004e4400 at 004e4457
;   FUN_004f7f20 at 004f80cb
;   FUN_005146a0 at 005146cd
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4120
        ;   Label: FUN_005a4120
    CMP EAX,0x61                        ; 005a4124
    JL 0x005a4131                       ; 005a4127
        ;   XREF to: 005a4131 (CONDITIONAL_JUMP)  ; LAB_005a4131
    CMP EAX,0x7a                        ; 005a4129
    JG 0x005a4131                       ; 005a412c
        ;   XREF to: 005a4131 (CONDITIONAL_JUMP)  ; LAB_005a4131
    SUB EAX,0x20                        ; 005a412e
    RET                                 ; 005a4131
        ;   Label: LAB_005a4131

