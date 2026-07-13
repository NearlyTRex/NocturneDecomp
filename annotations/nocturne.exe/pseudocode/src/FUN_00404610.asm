; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00404610(int *param_1)
;
;
; XREF[71]:
;   FUN_004047e0 at 004047ee
;   FUN_004048b0 at 004048be
;   FUN_004049d0 at 004049de
;   FUN_00404a70 at 00404a7e
;   FUN_00405200 at 00405209
;   FUN_00405240 at 0040524d
;   FUN_00405440 at 0040544e
;   FUN_00405540 at 00405552
;   FUN_004057a0 at 004057ae
;   FUN_00405c90 at 00405ca4
;   ... and 61 more
;
; Referenced Globals:
;   undefined4 DAT_006b026c
;   undefined4 DAT_006b0280
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404610
        ;   Label: FUN_00404610
    PUSH ESI                            ; 00404611
    MOV EDX,dword ptr [0x006b026c]      ; 00404612 | DAT_006b026c
    INC EDX                             ; 00404618
    MOV ESI,dword ptr [ESP + 0xc]       ; 00404619
    MOV dword ptr [0x006b026c],EDX      ; 0040461d | DAT_006b026c
    MOV EAX,0x1                         ; 00404623
    CMP dword ptr [0x006b0280],0x0      ; 00404628 | DAT_006b0280
    JNZ 0x00404678                      ; 0040462f
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EBX,dword ptr [ESI]             ; 00404631
    OR EBX,dword ptr [ESI + 0x4]        ; 00404633
    OR EBX,dword ptr [ESI + 0x8]        ; 00404636
    OR EBX,dword ptr [ESI + 0xc]        ; 00404639
    JZ 0x00404678                       ; 0040463c
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EAX,dword ptr [ESI]             ; 0040463e
    IMUL dword ptr [0x01c039b8]         ; 00404640 | DAT_01c039b8
    MOV EBX,EAX                         ; 00404646
    MOV ECX,EDX                         ; 00404648
    MOV EAX,dword ptr [ESI + 0x4]       ; 0040464a
    IMUL dword ptr [0x01c039bc]         ; 0040464d | DAT_01c039bc
    ADD EBX,EAX                         ; 00404653
    ADC ECX,EDX                         ; 00404655
    MOV EAX,dword ptr [ESI + 0x8]       ; 00404657
    IMUL dword ptr [0x01c039c0]         ; 0040465a | DAT_01c039c0
    ADD EBX,EAX                         ; 00404660
    ADC ECX,EDX                         ; 00404662
    MOV EAX,dword ptr [ESI + 0xc]       ; 00404664
    CDQ                                 ; 00404667
    SUB EAX,EBX                         ; 00404668
    SBB EDX,ECX                         ; 0040466a
    MOV EAX,0x1                         ; 0040466c
    JL 0x00404678                       ; 00404671
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EAX,0x0                         ; 00404673
    POP ESI                             ; 00404678
        ;   Label: LAB_00404678
    POP EBX                             ; 00404679
    RET                                 ; 0040467a

