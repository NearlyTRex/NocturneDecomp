; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506060(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005058e0 at 00505b97
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00506200
;   FUN_005727e0
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506060
        ;   Label: FUN_00506060
    PUSH ESI                            ; 00506061
    PUSH EBP                            ; 00506062
    MOV EDX,dword ptr [ESP + 0x10]      ; 00506063
    MOV ECX,dword ptr [ESP + 0x14]      ; 00506067
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050606b
    SUB EAX,ECX                         ; 00506072
    SHL EAX,0x3                         ; 00506074
    LEA ESI,[EDX + 0x5f0]               ; 00506077
    ADD EAX,ECX                         ; 0050607d
    PUSH ECX                            ; 0050607f
    SHL EAX,0x2                         ; 00506080
    PUSH EDX                            ; 00506083
    LEA EBX,[ESI + EAX*0x1]             ; 00506084
    CALL FUN_00506200                   ; 00506087
        ;   XREF to: 00506200 (UNCONDITIONAL_CALL)  ; undefined FUN_00506200()
    MOV EDX,EAX                         ; 0050608c
    SHL EAX,0x2                         ; 0050608e
    SUB EAX,EDX                         ; 00506091
    SHL EAX,0x3                         ; 00506093
    ADD EAX,EDX                         ; 00506096
    ADD ESP,0x8                         ; 00506098
    SHL EAX,0x2                         ; 0050609b
    MOV EDX,dword ptr [EBX]             ; 0050609e
    ADD ESI,EAX                         ; 005060a0
    TEST EDX,EDX                        ; 005060a2
    JZ 0x005060eb                       ; 005060a4
        ;   XREF to: 005060eb (CONDITIONAL_JUMP)  ; LAB_005060eb
    CMP dword ptr [ESI],0x0             ; 005060a6
    JNZ 0x005060eb                      ; 005060a9
        ;   XREF to: 005060eb (CONDITIONAL_JUMP)  ; LAB_005060eb
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 005060ab
    JNZ 0x005060eb                      ; 005060b2
        ;   XREF to: 005060eb (CONDITIONAL_JUMP)  ; LAB_005060eb
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 005060b4
    JNZ 0x005060eb                      ; 005060bb
        ;   XREF to: 005060eb (CONDITIONAL_JUMP)  ; LAB_005060eb
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 005060bd
        ;   Label: LAB_005060bd
    ADD EBX,0x58                        ; 005060c4
    CALL FUN_00572ac0                   ; 005060c7
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH EBX                            ; 005060cc
    CALL FUN_005727e0                   ; 005060cd
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005727e0()
    ADD ESP,0x4                         ; 005060d2
    PUSH 0x5e75e1                       ; 005060d5
    CALL FUN_00572d20                   ; 005060da
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 005060df
    CALL FUN_00572b40                   ; 005060e2
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    POP EBP                             ; 005060e7
    POP ESI                             ; 005060e8
    POP EBX                             ; 005060e9
    RET                                 ; 005060ea
    MOV EBP,0x5e759d                    ; 005060eb
        ;   Label: LAB_005060eb
    MOV EAX,0x57d                       ; 005060f0
    PUSH 0x5e75b0                       ; 005060f5
    MOV dword ptr [0x01d1d400],EBP      ; 005060fa | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00506100 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00506105
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0050610a
    JMP 0x005060bd                      ; 0050610d
        ;   XREF to: 005060bd (UNCONDITIONAL_JUMP)  ; LAB_005060bd

