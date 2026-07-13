; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00565e20(int param_1)
;
;
; XREF[11]:
;   FUN_00456a60 at 00456a9a
;   FUN_00474ea0 at 004751e8
;   FUN_0047ac50 at 0047adec
;   FUN_004a0550 at 004a0683
;   FUN_004c41d0 at 004c41db
;   FUN_004c8510 at 004c8567
;   FUN_004dcd10 at 004dcebd
;   FUN_004f8b90 at 004f8bbd
;   FUN_00544950 at 00544b18
;   FUN_00569f8c at 00569f9c
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565e20
        ;   Label: FUN_00565e20
    CMP EAX,0x61                        ; 00565e24
    JL 0x00565e31                       ; 00565e27
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    CMP EAX,0x7a                        ; 00565e29
    JG 0x00565e31                       ; 00565e2c
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    SUB EAX,0x20                        ; 00565e2e
    RET                                 ; 00565e31
        ;   Label: LAB_00565e31

