; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fac90(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00534610 at 0053462c
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_004699a0
;   FUN_004faa10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fac90
        ;   Label: FUN_004fac90
    PUSH EDX                            ; 004fac94
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fac95
    PUSH ECX                            ; 004fac99
    CALL FUN_004faa10                   ; 004fac9a
        ;   XREF to: 004faa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004faa10()
    ADD ESP,0x8                         ; 004fac9f
    TEST EAX,EAX                        ; 004faca2
    JNZ 0x004faca7                      ; 004faca4
        ;   XREF to: 004faca7 (CONDITIONAL_JUMP)  ; LAB_004faca7
    RET                                 ; 004faca6
    PUSH EBX                            ; 004faca7
        ;   Label: LAB_004faca7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004faca8
    ADD EAX,0xe8                        ; 004facac
    PUSH EAX                            ; 004facb1
    MOV EBX,dword ptr [0x0060b280]      ; 004facb2 | DAT_0060b280
    PUSH EBX                            ; 004facb8 | DAT_01ba5c50
    CALL FUN_004699a0                   ; 004facb9
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004699a0()
    ADD ESP,0x8                         ; 004facbe
    POP EBX                             ; 004facc1
    RET                                 ; 004facc2

