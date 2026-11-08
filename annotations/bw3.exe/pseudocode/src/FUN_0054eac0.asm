; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054eac0(undefined4 param_1)
;
;
; XREF[74]:
;   FUN_0040fac0 at 0040fad6
;   FUN_00417630 at 0041764a
;   FUN_00425ab0 at 00425ac7
;   FUN_0042b0e0 at 0042b17e
;   FUN_0042cd70 at 0042ce17
;   FUN_0042e8c0 at 0042e8d9
;   FUN_0042f010 at 0042f05e
;   FUN_0042f6f0 at 0042f704
;   FUN_0042fbd0 at 0042fc6c
;   FUN_004320d0 at 00432103
;   ... and 64 more
;
; Called Functions:
;   FUN_005487e0
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054eac0
        ;   Label: FUN_0054eac0
    PUSH EDX                            ; 0054eac4
    CALL FUN_0054ea40                   ; 0054eac5
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0054eaca
    PUSH EAX                            ; 0054eacd
    CALL FUN_005487e0                   ; 0054eace
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005487e0()
    ADD ESP,0x4                         ; 0054ead3
    RET                                 ; 0054ead6

