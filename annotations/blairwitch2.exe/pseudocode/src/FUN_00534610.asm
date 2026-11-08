; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534610(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_0041aa20 at 0041abc0
;   FUN_00443af0 at 00443b96
;   FUN_0044d9f0 at 0044da4e
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c68
;
; Called Functions:
;   FUN_004699a0
;   FUN_004fac90
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 00534610
        ;   Label: FUN_00534610
    MOV EAX,[0x0060b280]                ; 00534614 | DAT_0060b280
    MOV EDX,dword ptr [EAX + 0x18]      ; 00534619 | DAT_01ba5c68
    TEST EDX,EDX                        ; 0053461c
    JZ 0x00534635                       ; 0053461e
        ;   XREF to: 00534635 (CONDITIONAL_JUMP)  ; LAB_00534635
    MOV EAX,dword ptr [ESP + 0x4]       ; 00534620
    PUSH ECX                            ; 00534624
    MOV EDX,dword ptr [EAX + 0x161664]  ; 00534625
    PUSH EDX                            ; 0053462b
    CALL FUN_004fac90                   ; 0053462c
        ;   XREF to: 004fac90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fac90()
    ADD ESP,0x8                         ; 00534631
    RET                                 ; 00534634
    PUSH ECX                            ; 00534635
        ;   Label: LAB_00534635
    PUSH EAX                            ; 00534636 | DAT_01ba5c50
    CALL FUN_004699a0                   ; 00534637
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004699a0()
    ADD ESP,0x8                         ; 0053463c
    RET                                 ; 0053463f

