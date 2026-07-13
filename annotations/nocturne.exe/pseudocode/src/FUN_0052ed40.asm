; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052ed40(undefined4 param_1,undefined4 param_2,int *param_3)
;
;
; Called Functions:
;   FUN_00473cb0
;   FUN_00474c90
;   FUN_00474cf0
;   FUN_00474d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ed40
        ;   Label: FUN_0052ed40
    SUB ESP,0x170                       ; 0052ed41
    MOV EAX,ESP                         ; 0052ed47
    PUSH EAX                            ; 0052ed49
    XOR EBX,EBX                         ; 0052ed4a
    CALL FUN_00474c90                   ; 0052ed4c
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 0052ed51
    MOV EDX,dword ptr [EBX + 0x5bed6c]  ; 0052ed54
        ;   Label: LAB_0052ed54
    PUSH EDX                            ; 0052ed5a
    LEA EAX,[ESP + 0x4]                 ; 0052ed5b
    PUSH EAX                            ; 0052ed5f
    ADD EBX,0x10                        ; 0052ed60
    CALL FUN_00473cb0                   ; 0052ed63
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cb0()
    ADD ESP,0x8                         ; 0052ed68
    CMP EBX,0x1b0                       ; 0052ed6b
    JNZ 0x0052ed54                      ; 0052ed71
        ;   XREF to: 0052ed54 (CONDITIONAL_JUMP)  ; LAB_0052ed54
    MOV EAX,dword ptr [ESP + 0x180]     ; 0052ed73
    MOV ECX,dword ptr [EAX]             ; 0052ed7a
    PUSH ECX                            ; 0052ed7c
    MOV EBX,dword ptr [ESP + 0x180]     ; 0052ed7d
    PUSH EBX                            ; 0052ed84
    LEA EAX,[ESP + 0x8]                 ; 0052ed85
    PUSH EAX                            ; 0052ed89
    CALL FUN_00474d70                   ; 0052ed8a
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00474d70()
    ADD ESP,0xc                         ; 0052ed8f
    TEST EAX,EAX                        ; 0052ed92
    JL 0x0052edbd                       ; 0052ed94
        ;   XREF to: 0052edbd (CONDITIONAL_JUMP)  ; LAB_0052edbd
    MOV EBX,dword ptr [ESP + 0x180]     ; 0052ed96
    PUSH 0x0                            ; 0052ed9d
    MOV dword ptr [EBX],EAX             ; 0052ed9f
    LEA EAX,[ESP + 0x4]                 ; 0052eda1
    PUSH EAX                            ; 0052eda5
    MOV EBX,0x1                         ; 0052eda6
    CALL FUN_00474cf0                   ; 0052edab
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 0052edb0
    MOV EAX,EBX                         ; 0052edb3
    ADD ESP,0x170                       ; 0052edb5
    POP EBX                             ; 0052edbb
    RET                                 ; 0052edbc
    XOR EBX,EBX                         ; 0052edbd
        ;   Label: LAB_0052edbd
    PUSH EBX                            ; 0052edbf
    LEA EAX,[ESP + 0x4]                 ; 0052edc0
    PUSH EAX                            ; 0052edc4
    CALL FUN_00474cf0                   ; 0052edc5
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 0052edca
    MOV EAX,EBX                         ; 0052edcd
    ADD ESP,0x170                       ; 0052edcf
    POP EBX                             ; 0052edd5
    RET                                 ; 0052edd6

