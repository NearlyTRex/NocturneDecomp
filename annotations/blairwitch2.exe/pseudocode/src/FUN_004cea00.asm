; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cea00(int param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_005d9b7e
;
; Called Functions:
;   FUN_00502fa0
;   FUN_00503860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004cea00
        ;   Label: FUN_004cea00
    TEST EDX,EDX                        ; 004cea04
    JZ 0x004cea16                       ; 004cea06
        ;   XREF to: 004cea16 (CONDITIONAL_JUMP)  ; LAB_004cea16
    LEA EAX,[EAX]                       ; 004cea08
    MOV EDX,EDX                         ; 004cea0e
    MOV EAX,0x1                         ; 004cea10
        ;   Label: caseD_1
    RET                                 ; 004cea15
    PUSH EDX                            ; 004cea16
        ;   Label: LAB_004cea16
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cea17
    PUSH 0x5d9b7e                       ; 004cea1b | = "GETGRABBED"
    ADD EAX,0x2b4                       ; 004cea20
    PUSH EAX                            ; 004cea25
    CALL FUN_00503860                   ; 004cea26
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 004cea2b
    PUSH EAX                            ; 004cea2e
    CALL FUN_00502fa0                   ; 004cea2f
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 004cea34
    TEST EAX,EAX                        ; 004cea37
    JGE 0x004cea10                      ; 004cea39
        ;   XREF to: 004cea10 (CONDITIONAL_JUMP)  ; caseD_2
    LEA EAX,[EAX]                       ; 004cea3b
    MOV ECX,ECX                         ; 004cea3e
    XOR EAX,EAX                         ; 004cea40
    RET                                 ; 004cea42

