; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_00406fd0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_006b0270
;   undefined4 DAT_006b0288
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00432cd0
;   FUN_00494260
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406fd0
        ;   Label: FUN_00406fd0
    PUSH EDI                            ; 00406fd1
    PUSH EBP                            ; 00406fd2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00406fd3
    MOV ECX,dword ptr [0x01c03948]      ; 00406fd7 | DAT_01c03948
    LEA EAX,[EDX + 0x18]                ; 00406fdd
    TEST ECX,ECX                        ; 00406fe0
    JNZ 0x00407036                      ; 00406fe2
        ;   XREF to: 00407036 (CONDITIONAL_JUMP)  ; LAB_00407036
    CMP dword ptr [0x005b7624],0x20     ; 00406fe4 | DAT_005b7624
    JNZ 0x0040702a                      ; 00406feb
        ;   XREF to: 0040702a (CONDITIONAL_JUMP)  ; LAB_0040702a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406fed | DAT_01c00c7c | LAB_005300ec
    MOV ESI,0x1                         ; 00406ff7
        ;   Label: LAB_00406ff7
    XOR EDI,EDI                         ; 00406ffc
    MOV EBP,dword ptr [0x006b0270]      ; 00406ffe | DAT_006b0270
    MOV dword ptr [0x01c039a4],EDI      ; 00407004 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],ESI      ; 0040700a | DAT_01c039a0
    TEST EBP,EBP                        ; 00407010
    JZ 0x00407057                       ; 00407012
        ;   XREF to: 00407057 (CONDITIONAL_JUMP)  ; LAB_00407057
    MOV ECX,dword ptr [EDX + 0x4]       ; 00407014
    PUSH ECX                            ; 00407017
    PUSH EAX                            ; 00407018
    CALL FUN_00494260                   ; 00407019
        ;   XREF to: 00494260 (UNCONDITIONAL_CALL)  ; undefined FUN_00494260()
    ADD ESP,0x8                         ; 0040701e
    MOV EAX,0x6b0288                    ; 00407021 | DAT_006b0288
    POP EBP                             ; 00407026
    POP EDI                             ; 00407027
    POP ESI                             ; 00407028
    RET                                 ; 00407029
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040702a | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_0040702a
    JMP 0x00406ff7                      ; 00407034
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    CMP dword ptr [0x005b7624],0x20     ; 00407036 | DAT_005b7624
        ;   Label: LAB_00407036
    JNZ 0x0040704b                      ; 0040703d
        ;   XREF to: 0040704b (CONDITIONAL_JUMP)  ; LAB_0040704b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040703f | DAT_01c00c7c | LAB_0052f031
    JMP 0x00406ff7                      ; 00407049
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040704b | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0040704b
    JMP 0x00406ff7                      ; 00407055
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    PUSH EAX                            ; 00407057
        ;   Label: LAB_00407057
    MOV EAX,dword ptr [EDX + 0x4]       ; 00407058
    PUSH EAX                            ; 0040705b
    CALL FUN_00432cd0                   ; 0040705c
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00407061
    MOV EAX,0x6b0288                    ; 00407064 | DAT_006b0288
    POP EBP                             ; 00407069
    POP EDI                             ; 0040706a
    POP ESI                             ; 0040706b
    RET                                 ; 0040706c

