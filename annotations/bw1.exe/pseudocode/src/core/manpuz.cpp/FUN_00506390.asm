; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00506390(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005058e0 at 00505b65
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00506210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506390
        ;   Label: FUN_00506390
    PUSH ESI                            ; 00506391
    PUSH EBP                            ; 00506392
    MOV ESI,dword ptr [ESP + 0x10]      ; 00506393
    MOV EBX,dword ptr [ESP + 0x14]      ; 00506397
    TEST EBX,EBX                        ; 0050639b
    JL 0x005063a4                       ; 0050639d
        ;   XREF to: 005063a4 (CONDITIONAL_JUMP)  ; LAB_005063a4
    CMP EBX,0xc                         ; 0050639f
    JL 0x005063c8                       ; 005063a2
        ;   XREF to: 005063c8 (CONDITIONAL_JUMP)  ; LAB_005063c8
    PUSH EBX                            ; 005063a4
        ;   Label: LAB_005063a4
    MOV EDX,0x5e7622                    ; 005063a5
    MOV ECX,0x5e6                       ; 005063aa
    PUSH 0x5e7635                       ; 005063af
    MOV dword ptr [0x01d1d400],EDX      ; 005063b4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005063ba | DAT_01d1d404
    CALL FUN_005030e0                   ; 005063c0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 005063c5
    LEA EAX,[EBX*0x4 + 0x0]             ; 005063c8
        ;   Label: LAB_005063c8
    SUB EAX,EBX                         ; 005063cf
    SHL EAX,0x3                         ; 005063d1
    ADD EAX,EBX                         ; 005063d4
    CMP dword ptr [ESI + EAX*0x4 + 0x5f0],0x0 ; 005063d6
    JZ 0x005063e9                       ; 005063de
        ;   XREF to: 005063e9 (CONDITIONAL_JUMP)  ; LAB_005063e9
    MOV EAX,0x1                         ; 005063e0
        ;   Label: LAB_005063e0
    POP EBP                             ; 005063e5
    POP ESI                             ; 005063e6
    POP EBX                             ; 005063e7
    RET                                 ; 005063e8
    PUSH EBX                            ; 005063e9
        ;   Label: LAB_005063e9
    PUSH ESI                            ; 005063ea
    CALL FUN_00506210                   ; 005063eb
        ;   XREF to: 00506210 (UNCONDITIONAL_CALL)  ; undefined FUN_00506210()
    MOV EDX,EAX                         ; 005063f0
    SHL EAX,0x2                         ; 005063f2
    SUB EAX,EDX                         ; 005063f5
    SHL EAX,0x3                         ; 005063f7
    ADD EAX,EDX                         ; 005063fa
    SHL EAX,0x2                         ; 005063fc
    ADD EAX,ESI                         ; 005063ff
    MOV EBP,dword ptr [EAX + 0x5f0]     ; 00506401
    ADD ESP,0x8                         ; 00506407
    TEST EBP,EBP                        ; 0050640a
    JZ 0x0050641a                       ; 0050640c
        ;   XREF to: 0050641a (CONDITIONAL_JUMP)  ; LAB_0050641a
    TEST dword ptr [EAX + 0x5f8],0x7fffffff ; 0050640e
    JNZ 0x005063e0                      ; 00506418
        ;   XREF to: 005063e0 (CONDITIONAL_JUMP)  ; LAB_005063e0
    XOR EAX,EAX                         ; 0050641a
        ;   Label: LAB_0050641a
    POP EBP                             ; 0050641c
    POP ESI                             ; 0050641d
    POP EBX                             ; 0050641e
    RET                                 ; 0050641f

