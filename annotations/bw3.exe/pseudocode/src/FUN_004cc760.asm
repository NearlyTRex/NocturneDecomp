; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cc760(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046ce90
;   FUN_0046cf30
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc760
        ;   Label: FUN_004cc760
    PUSH ESI                            ; 004cc761
    PUSH EDI                            ; 004cc762
    SUB ESP,0x30                        ; 004cc763
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cc766
    LEA EAX,[EBX + 0x20]                ; 004cc76a
    PUSH EAX                            ; 004cc76d
    MOV EDX,dword ptr [0x005f2afc]      ; 004cc76e | DAT_005f2afc
    PUSH EDX                            ; 004cc774
    CALL FUN_0046ce90                   ; 004cc775
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 004cc77a
    PUSH 0x0                            ; 004cc77d
    LEA EAX,[EBX + 0x30]                ; 004cc77f
    PUSH EAX                            ; 004cc782
    MOV ECX,dword ptr [0x005f2afc]      ; 004cc783 | DAT_005f2afc
    PUSH ECX                            ; 004cc789
    CALL FUN_0046cf30                   ; 004cc78a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004cc78f
    PUSH 0x0                            ; 004cc792
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cc794
    PUSH EBX                            ; 004cc79a
    LEA ESI,[ESP + 0x20]                ; 004cc79b
    LEA EDI,[ESP + 0x8]                 ; 004cc79f
    CALL dword ptr [EAX + 0x1c]         ; 004cc7a3
    MOV ECX,0x6                         ; 004cc7a6
    ADD ESP,0x4                         ; 004cc7ab
    LEA EAX,[ESP + 0x4]                 ; 004cc7ae
    LEA ESI,[ESP + 0x1c]                ; 004cc7b2
    PUSH EAX                            ; 004cc7b6
    MOVSD.REP ES:EDI,ESI                ; 004cc7b7
    CALL FUN_0041daf0                   ; 004cc7b9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004cc7be
    MOV ESI,EAX                         ; 004cc7c1
    TEST EAX,EAX                        ; 004cc7c3
    JNZ 0x004cc7df                      ; 004cc7c5
        ;   XREF to: 004cc7df (CONDITIONAL_JUMP)  ; LAB_004cc7df
    MOV EBX,dword ptr [0x005f2afc]      ; 004cc7c7 | DAT_005f2afc
        ;   Label: LAB_004cc7c7
    PUSH EBX                            ; 004cc7cd
    CALL thunk_FUN_004e5ef0             ; 004cc7ce
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 004cc7d3
    MOV EAX,ESI                         ; 004cc7d6
    ADD ESP,0x30                        ; 004cc7d8
    POP EDI                             ; 004cc7db
    POP ESI                             ; 004cc7dc
    POP EBX                             ; 004cc7dd
    RET                                 ; 004cc7de
    PUSH -0x1                           ; 004cc7df
        ;   Label: LAB_004cc7df
    ADD EBX,0x158                       ; 004cc7e1
    PUSH 0x0                            ; 004cc7e7
    PUSH EBX                            ; 004cc7e9
    CALL FUN_00462540                   ; 004cc7ea
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 004cc7ef
    JMP 0x004cc7c7                      ; 004cc7f2
        ;   XREF to: 004cc7c7 (UNCONDITIONAL_JUMP)  ; LAB_004cc7c7

