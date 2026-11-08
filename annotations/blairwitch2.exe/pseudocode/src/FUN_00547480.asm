; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547480(int param_1)
;
;
; XREF[36]:
;   FUN_0040eee0 at 0040eef7
;   FUN_004116f0 at 00411707
;   FUN_00412be0 at 00412bf7
;   FUN_00414a60 at 00414a6a
;   FUN_00414dd0 at 00414de7
;   FUN_004184c0 at 004184ce
;   FUN_0041d9c0 at 0041d9d1
;   FUN_00422930 at 004229be
;   FUN_0042b440 at 0042b479
;   FUN_00436be0 at 00436bf7
;   ... and 26 more
;
; Called Functions:
;   FUN_005474b0
;   FUN_00548e80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00547480
        ;   Label: FUN_00547480
    ADD EAX,0x2260                      ; 00547484
    PUSH EAX                            ; 00547489
    CALL FUN_00548e80                   ; 0054748a
        ;   XREF to: 00548e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00548e80()
    ADD ESP,0x4                         ; 0054748f
    PUSH EAX                            ; 00547492
    MOV EDX,dword ptr [ESP + 0x8]       ; 00547493
    PUSH EDX                            ; 00547497
    CALL FUN_005474b0                   ; 00547498
        ;   XREF to: 005474b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005474b0()
    ADD ESP,0x8                         ; 0054749d
    RET                                 ; 005474a0

