; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057af40(int param_1)
;
;
; XREF[11]:
;   FUN_0040f900 at 0040f905
;   FUN_00411810 at 00411815
;   FUN_004253d0 at 004253d5
;   FUN_0045c0d0 at 0045c0d5
;   FUN_0048b690 at 0048b696
;   FUN_004a5870 at 004a5875
;   FUN_004af5b0 at 004af5b5
;   FUN_004d1c80 at 004d1c85
;   FUN_004d52e0 at 004d52e5
;   FUN_004e3eb0 at 004e3eb5
;   ... and 1 more
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;   FUN_0057ba10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057af40
        ;   Label: FUN_0057af40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057af41
    PUSH EBX                            ; 0057af45
    CALL FUN_00408890                   ; 0057af46
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0057af4b
    LEA EAX,[EBX + 0x158]               ; 0057af4e
    PUSH EAX                            ; 0057af54
    CALL FUN_00462580                   ; 0057af55
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0057af5a
    PUSH EBX                            ; 0057af5d
    CALL FUN_0057ba10                   ; 0057af5e
        ;   XREF to: 0057ba10 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ba10()
    ADD ESP,0x4                         ; 0057af63
    MOV dword ptr [EBX + 0x584],0x0     ; 0057af66
    POP EBX                             ; 0057af70
    RET                                 ; 0057af71

