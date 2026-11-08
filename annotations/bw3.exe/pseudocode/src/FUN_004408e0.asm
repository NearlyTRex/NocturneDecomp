; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004408e0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)
;
;
; Called Functions:
;   FUN_00574ac0
;   FUN_00574b50
;   FUN_00574d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004408e0
        ;   Label: FUN_004408e0
    PUSH ESI                            ; 004408e1
    PUSH EDI                            ; 004408e2
    SUB ESP,0x18                        ; 004408e3
    MOV ESI,dword ptr [ESP + 0x28]      ; 004408e6
    MOV EDI,dword ptr [ESP + 0x34]      ; 004408ea
    MOV EDX,dword ptr [EDI]             ; 004408ee
    PUSH EDX                            ; 004408f0
    MOV ECX,dword ptr [ESP + 0x34]      ; 004408f1
    PUSH ECX                            ; 004408f5
    LEA EAX,[ESP + 0x8]                 ; 004408f6
    PUSH EAX                            ; 004408fa
    CALL FUN_00574ac0                   ; 004408fb
        ;   XREF to: 00574ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00574ac0()
    ADD ESP,0xc                         ; 00440900
    MOV EBX,ESP                         ; 00440903
    PUSH EBX                            ; 00440905
    MOV EBX,dword ptr [ESP + 0x30]      ; 00440906
    PUSH EBX                            ; 0044090a
    MOV EAX,dword ptr [ESI]             ; 0044090b
    PUSH ESI                            ; 0044090d
    CALL dword ptr [EAX + 0x8]          ; 0044090e
    ADD ESP,0xc                         ; 00440911
    MOV EBX,EAX                         ; 00440914
    CMP EAX,0x1                         ; 00440916
    JNZ 0x0044095e                      ; 00440919
        ;   XREF to: 0044095e (CONDITIONAL_JUMP)  ; LAB_0044095e
    CMP dword ptr [ESP + 0x38],0x0      ; 0044091b
    JNZ 0x0044094b                      ; 00440920
        ;   XREF to: 0044094b (CONDITIONAL_JUMP)  ; LAB_0044094b
    MOV EAX,ESP                         ; 00440922
        ;   Label: LAB_00440922
    PUSH EAX                            ; 00440924
    CALL FUN_00574d00                   ; 00440925
        ;   XREF to: 00574d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574d00()
    ADD ESP,0x4                         ; 0044092a
    MOV EDX,dword ptr [EDI]             ; 0044092d
    PUSH 0x0                            ; 0044092f
    SUB EDX,EAX                         ; 00440931
    LEA EAX,[ESP + 0x4]                 ; 00440933
    PUSH EAX                            ; 00440937
    MOV dword ptr [EDI],EDX             ; 00440938
    CALL FUN_00574b50                   ; 0044093a
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00574b50()
    ADD ESP,0x8                         ; 0044093f
    MOV EAX,EBX                         ; 00440942
    ADD ESP,0x18                        ; 00440944
    POP EDI                             ; 00440947
    POP ESI                             ; 00440948
    POP EBX                             ; 00440949
    RET                                 ; 0044094a
    MOV EAX,ESP                         ; 0044094b
        ;   Label: LAB_0044094b
    PUSH EAX                            ; 0044094d
    MOV EBX,dword ptr [ESI]             ; 0044094e
    PUSH ESI                            ; 00440950
    CALL dword ptr [EBX + 0xc]          ; 00440951
    ADD ESP,0x8                         ; 00440954
    MOV EBX,EAX                         ; 00440957
    CMP EAX,0x1                         ; 00440959
    JZ 0x00440922                       ; 0044095c
        ;   XREF to: 00440922 (CONDITIONAL_JUMP)  ; LAB_00440922
    XOR EBX,EAX                         ; 0044095e
        ;   Label: LAB_0044095e
    JMP 0x00440922                      ; 00440960
        ;   XREF to: 00440922 (UNCONDITIONAL_JUMP)  ; LAB_00440922

