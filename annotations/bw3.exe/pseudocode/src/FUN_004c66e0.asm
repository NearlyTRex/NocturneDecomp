; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c66e0(int param_1)
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

    PUSH EBX                            ; 004c66e0
        ;   Label: FUN_004c66e0
    PUSH ESI                            ; 004c66e1
    PUSH EDI                            ; 004c66e2
    SUB ESP,0x30                        ; 004c66e3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004c66e6
    LEA EAX,[EBX + 0x20]                ; 004c66ea
    PUSH EAX                            ; 004c66ed
    MOV EDX,dword ptr [0x005f2afc]      ; 004c66ee | DAT_005f2afc
    PUSH EDX                            ; 004c66f4
    CALL FUN_0046ce90                   ; 004c66f5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 004c66fa
    PUSH 0x0                            ; 004c66fd
    LEA EAX,[EBX + 0x30]                ; 004c66ff
    PUSH EAX                            ; 004c6702
    MOV ECX,dword ptr [0x005f2afc]      ; 004c6703 | DAT_005f2afc
    PUSH ECX                            ; 004c6709
    CALL FUN_0046cf30                   ; 004c670a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004c670f
    PUSH 0x0                            ; 004c6712
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c6714
    PUSH EBX                            ; 004c671a
    LEA ESI,[ESP + 0x20]                ; 004c671b
    LEA EDI,[ESP + 0x8]                 ; 004c671f
    CALL dword ptr [EAX + 0x1c]         ; 004c6723
    MOV ECX,0x6                         ; 004c6726
    ADD ESP,0x4                         ; 004c672b
    LEA EAX,[ESP + 0x4]                 ; 004c672e
    LEA ESI,[ESP + 0x1c]                ; 004c6732
    PUSH EAX                            ; 004c6736
    MOVSD.REP ES:EDI,ESI                ; 004c6737
    CALL FUN_0041daf0                   ; 004c6739
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004c673e
    MOV ESI,EAX                         ; 004c6741
    TEST EAX,EAX                        ; 004c6743
    JNZ 0x004c675f                      ; 004c6745
        ;   XREF to: 004c675f (CONDITIONAL_JUMP)  ; LAB_004c675f
    MOV EBX,dword ptr [0x005f2afc]      ; 004c6747 | DAT_005f2afc
        ;   Label: LAB_004c6747
    PUSH EBX                            ; 004c674d
    CALL thunk_FUN_004e5ef0             ; 004c674e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 004c6753
    MOV EAX,ESI                         ; 004c6756
    ADD ESP,0x30                        ; 004c6758
    POP EDI                             ; 004c675b
    POP ESI                             ; 004c675c
    POP EBX                             ; 004c675d
    RET                                 ; 004c675e
    PUSH -0x1                           ; 004c675f
        ;   Label: LAB_004c675f
    ADD EBX,0x158                       ; 004c6761
    PUSH 0x0                            ; 004c6767
    PUSH EBX                            ; 004c6769
    CALL FUN_00462540                   ; 004c676a
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 004c676f
    JMP 0x004c6747                      ; 004c6772
        ;   XREF to: 004c6747 (UNCONDITIONAL_JUMP)  ; LAB_004c6747

