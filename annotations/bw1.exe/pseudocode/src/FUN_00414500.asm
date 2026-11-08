; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414500(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004837b0
;   FUN_00483850
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414500
        ;   Label: FUN_00414500
    PUSH ESI                            ; 00414501
    PUSH EDI                            ; 00414502
    SUB ESP,0x30                        ; 00414503
    MOV EBX,dword ptr [ESP + 0x40]      ; 00414506
    LEA EAX,[EBX + 0x20]                ; 0041450a
    PUSH EAX                            ; 0041450d
    MOV EDX,dword ptr [0x00612560]      ; 0041450e | DAT_00612560
    PUSH EDX                            ; 00414514
    CALL FUN_004837b0                   ; 00414515
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 0041451a
    PUSH 0x0                            ; 0041451d
    LEA EAX,[EBX + 0x30]                ; 0041451f
    PUSH EAX                            ; 00414522
    MOV ECX,dword ptr [0x00612560]      ; 00414523 | DAT_00612560
    PUSH ECX                            ; 00414529
    CALL FUN_00483850                   ; 0041452a
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0041452f
    PUSH 0x0                            ; 00414532
    MOV EAX,dword ptr [EBX + 0x154]     ; 00414534
    PUSH EBX                            ; 0041453a
    LEA ESI,[ESP + 0x20]                ; 0041453b
    LEA EDI,[ESP + 0x8]                 ; 0041453f
    CALL dword ptr [EAX + 0x1c]         ; 00414543
    MOV ECX,0x6                         ; 00414546
    ADD ESP,0x4                         ; 0041454b
    LEA EAX,[ESP + 0x4]                 ; 0041454e
    LEA ESI,[ESP + 0x1c]                ; 00414552
    PUSH EAX                            ; 00414556
    MOVSD.REP ES:EDI,ESI                ; 00414557
    CALL FUN_004207b0                   ; 00414559
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0041455e
    MOV ESI,EAX                         ; 00414561
    TEST EAX,EAX                        ; 00414563
    JNZ 0x0041457f                      ; 00414565
        ;   XREF to: 0041457f (CONDITIONAL_JUMP)  ; LAB_0041457f
    MOV EBX,dword ptr [0x00612560]      ; 00414567 | DAT_00612560
        ;   Label: LAB_00414567
    PUSH EBX                            ; 0041456d
    CALL thunk_FUN_005084b0             ; 0041456e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 00414573
    MOV EAX,ESI                         ; 00414576
    ADD ESP,0x30                        ; 00414578
    POP EDI                             ; 0041457b
    POP ESI                             ; 0041457c
    POP EBX                             ; 0041457d
    RET                                 ; 0041457e
    PUSH -0x1                           ; 0041457f
        ;   Label: LAB_0041457f
    ADD EBX,0x158                       ; 00414581
    PUSH 0x0                            ; 00414587
    PUSH EBX                            ; 00414589
    CALL FUN_004688a0                   ; 0041458a
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0041458f
    JMP 0x00414567                      ; 00414592
        ;   XREF to: 00414567 (UNCONDITIONAL_JUMP)  ; LAB_00414567

