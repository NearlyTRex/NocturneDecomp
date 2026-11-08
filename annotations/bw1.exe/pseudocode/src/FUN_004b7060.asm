; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7060(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_0040fcf0 at 004100c1
;   FUN_0049f310 at 0049fcfa
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01cb9e74
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004b34d0
;   FUN_00555ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7060
        ;   Label: FUN_004b7060
    PUSH dword ptr [ESP + 0x1c]         ; 004b7061
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b7065
    PUSH dword ptr [ESP + 0x1c]         ; 004b7069
    PUSH EDX                            ; 004b706d
    MOV EDX,dword ptr [0x01cb9e74]      ; 004b706e | DAT_01cb9e74
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b7074
    SUB EAX,EDX                         ; 004b707b
    SHL EAX,0x2                         ; 004b707d
    SUB EAX,EDX                         ; 004b7080
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b7082
    SHL EAX,0x2                         ; 004b7086
    PUSH ECX                            ; 004b7089
    ADD EAX,0x1cb9e78                   ; 004b708a
    PUSH EAX                            ; 004b708f
    CALL FUN_004b34d0                   ; 004b7090
        ;   XREF to: 004b34d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b34d0()
    MOV EBX,dword ptr [0x01cb9e74]      ; 004b7095 | DAT_01cb9e74
    INC EBX                             ; 004b709b
    ADD ESP,0x14                        ; 004b709c
    MOV dword ptr [0x01cb9e74],EBX      ; 004b709f | DAT_01cb9e74
    CMP EBX,0xa                         ; 004b70a5
    JGE 0x004b70b3                      ; 004b70a8
        ;   XREF to: 004b70b3 (CONDITIONAL_JUMP)  ; LAB_004b70b3
    CMP dword ptr [ESP + 0x14],0x0      ; 004b70aa
    JNZ 0x004b70c6                      ; 004b70af
        ;   XREF to: 004b70c6 (CONDITIONAL_JUMP)  ; LAB_004b70c6
    POP EBX                             ; 004b70b1
    RET                                 ; 004b70b2
    PUSH EDI                            ; 004b70b3
        ;   Label: LAB_004b70b3
    XOR EDI,EDI                         ; 004b70b4
    MOV dword ptr [0x01cb9e74],EDI      ; 004b70b6 | DAT_01cb9e74
    POP EDI                             ; 004b70bc
    CMP dword ptr [ESP + 0x14],0x0      ; 004b70bd
    JNZ 0x004b70c6                      ; 004b70c2
        ;   XREF to: 004b70c6 (CONDITIONAL_JUMP)  ; LAB_004b70c6
    POP EBX                             ; 004b70c4
    RET                                 ; 004b70c5
    PUSH 0x3f800000                     ; 004b70c6
        ;   Label: LAB_004b70c6
    PUSH 0x0                            ; 004b70cb
    PUSH 0x0                            ; 004b70cd
    MOV EAX,[0x00622c18]                ; 004b70cf | DAT_00622c18
    PUSH 0x42c80000                     ; 004b70d4
    PUSH EAX                            ; 004b70d9 | DAT_01e82168
    CALL FUN_00555ab0                   ; 004b70da
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555ab0()
    ADD ESP,0x14                        ; 004b70df
    POP EBX                             ; 004b70e2
    RET                                 ; 004b70e3

