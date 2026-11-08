; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463d10(int param_1)
;
;
; XREF[3]:
;   FUN_00431980 at 00431992
;   FUN_004d3250 at 004d3291
;   FUN_004d4520 at 004d4694
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_0048c150
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00463d10
        ;   Label: FUN_00463d10
    ADD EAX,0x2e8                       ; 00463d14
    PUSH EAX                            ; 00463d19
    MOV EDX,dword ptr [0x005fba60]      ; 00463d1a | DAT_005fba60
    PUSH EDX                            ; 00463d20
    CALL FUN_0048c150                   ; 00463d21
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 00463d26
    RET                                 ; 00463d29

