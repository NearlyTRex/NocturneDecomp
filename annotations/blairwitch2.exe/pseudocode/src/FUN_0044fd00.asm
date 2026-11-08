; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044fd00(int param_1)
;
;
; XREF[53]:
;   FUN_0040deb0 at 0040deba
;   FUN_0040e240 at 0040e3a2
;   FUN_0040e5c0 at 0040e5cc
;   FUN_0040eac0 at 0040ead7
;   FUN_0040f3a0 at 0040f3ac
;   FUN_0040f780 at 0040f92a
;   FUN_004110a0 at 004110af
;   FUN_00414780 at 00414795
;   FUN_00414dd0 at 00414df6
;   FUN_00417610 at 0041766e
;   ... and 43 more
;
; Called Functions:
;   FUN_0044fba0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044fd00
        ;   Label: FUN_0044fd00
    ADD EAX,0x78                        ; 0044fd04
    PUSH EAX                            ; 0044fd07
    CALL FUN_0044fba0                   ; 0044fd08
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fba0()
    ADD ESP,0x4                         ; 0044fd0d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044fd10
    MOV dword ptr [EDX + 0x178],EAX     ; 0044fd14
    RET                                 ; 0044fd1a

