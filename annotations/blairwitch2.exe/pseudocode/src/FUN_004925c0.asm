; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004925c0(int param_1)
;
;
; XREF[2]:
;   FUN_0045ca30 at 0045cabd
;   FUN_004d03b0 at 004d049a
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_004894f0
;   FUN_00492570
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004925c0
        ;   Label: FUN_004925c0
    PUSH EDX                            ; 004925c4
    CALL FUN_00492570                   ; 004925c5
        ;   XREF to: 00492570 (UNCONDITIONAL_CALL)  ; undefined FUN_00492570()
    ADD ESP,0x4                         ; 004925ca
    TEST EAX,EAX                        ; 004925cd
    JGE 0x004925d4                      ; 004925cf
        ;   XREF to: 004925d4 (CONDITIONAL_JUMP)  ; LAB_004925d4
    XOR EAX,EAX                         ; 004925d1
    RET                                 ; 004925d3
    MOV EDX,EAX                         ; 004925d4
        ;   Label: LAB_004925d4
    SHL EAX,0x2                         ; 004925d6
    SUB EAX,EDX                         ; 004925d9
    SHL EAX,0x3                         ; 004925db
    ADD EAX,EDX                         ; 004925de
    MOV EDX,dword ptr [ESP + 0x4]       ; 004925e0
    SHL EAX,0x2                         ; 004925e4
    ADD EDX,0x1f8                       ; 004925e7
    ADD EAX,EDX                         ; 004925ed
    PUSH EAX                            ; 004925ef
    MOV ECX,dword ptr [0x006141f0]      ; 004925f0 | DAT_006141f0
    PUSH ECX                            ; 004925f6
    CALL FUN_004894f0                   ; 004925f7
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    MOV EAX,0x1                         ; 004925fc
    ADD ESP,0x8                         ; 00492601
    RET                                 ; 00492604

