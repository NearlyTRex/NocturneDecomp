; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004688e0(int param_1)
;
;
; XREF[51]:
;   FUN_0040dc50 at 0040dc5a
;   FUN_0040ddd0 at 0040df32
;   FUN_0040e160 at 0040e16c
;   FUN_0040e660 at 0040e677
;   FUN_0040ef20 at 0040ef2c
;   FUN_0040f300 at 0040f4aa
;   FUN_00410c20 at 00410c2f
;   FUN_00414470 at 00414485
;   FUN_00414ab0 at 00414ad6
;   FUN_00415fc0 at 00415fde
;   ... and 41 more
;
; Called Functions:
;   FUN_00468780
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004688e0
        ;   Label: FUN_004688e0
    ADD EAX,0x78                        ; 004688e4
    PUSH EAX                            ; 004688e7
    CALL FUN_00468780                   ; 004688e8
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; undefined FUN_00468780()
    ADD ESP,0x4                         ; 004688ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 004688f0
    MOV dword ptr [EDX + 0x178],EAX     ; 004688f4
    RET                                 ; 004688fa

