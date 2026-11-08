; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bb8c0(undefined2 *param_1,undefined4 param_2,int param_3,code *param_4)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_005bb050 at 005bb362
;
; Called Functions:
;   FUN_005c21b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb8c0
        ;   Label: FUN_005bb8c0
    PUSH ESI                            ; 005bb8c1
    PUSH EDI                            ; 005bb8c2
    PUSH ES                             ; 005bb8c3
    PUSH EBP                            ; 005bb8c4
    SUB ESP,0x4                         ; 005bb8c5
    MOV EBX,dword ptr [ESP + 0x24]      ; 005bb8c8
    MOV ES,word ptr [ESP + 0x20]        ; 005bb8cc
    MOV EDX,dword ptr [EBX + 0x28]      ; 005bb8d0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005bb8d3
    TEST EDX,EDX                        ; 005bb8d7
    JLE 0x005bb92d                      ; 005bb8d9
        ;   XREF to: 005bb92d (CONDITIONAL_JUMP)  ; LAB_005bb92d
    XOR EAX,EAX                         ; 005bb8db
        ;   Label: LAB_005bb8db
    MOV AX,word ptr ES:[EBP]            ; 005bb8dd
    PUSH EAX                            ; 005bb8e2
    LEA EAX,[ESP + 0x4]                 ; 005bb8e3
    PUSH EAX                            ; 005bb8e7
    ADD EBP,0x2                         ; 005bb8e8
    CALL FUN_005c21b0                   ; 005bb8eb
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c21b0()
    ADD ESP,0x8                         ; 005bb8f0
    MOV ESI,EAX                         ; 005bb8f3
    CMP EAX,-0x1                        ; 005bb8f5
    JZ 0x005bb907                       ; 005bb8f8
        ;   XREF to: 005bb907 (CONDITIONAL_JUMP)  ; LAB_005bb907
    CMP EAX,dword ptr [EBX + 0x28]      ; 005bb8fa
    JG 0x005bb926                       ; 005bb8fd
        ;   XREF to: 005bb926 (CONDITIONAL_JUMP)  ; LAB_005bb926
    MOV EDI,ESP                         ; 005bb8ff
    DEC ESI                             ; 005bb901
        ;   Label: LAB_005bb901
    CMP ESI,-0x1                        ; 005bb902
    JNZ 0x005bb90f                      ; 005bb905
        ;   XREF to: 005bb90f (CONDITIONAL_JUMP)  ; LAB_005bb90f
    CMP dword ptr [EBX + 0x28],0x0      ; 005bb907
        ;   Label: LAB_005bb907
    JG 0x005bb8db                       ; 005bb90b
        ;   XREF to: 005bb8db (CONDITIONAL_JUMP)  ; LAB_005bb8db
    JMP 0x005bb92d                      ; 005bb90d
        ;   XREF to: 005bb92d (UNCONDITIONAL_JUMP)  ; LAB_005bb92d
    XOR EAX,EAX                         ; 005bb90f
        ;   Label: LAB_005bb90f
    MOV AL,byte ptr [EDI]               ; 005bb911
    PUSH EAX                            ; 005bb913
    PUSH EBX                            ; 005bb914
    CALL dword ptr [ESP + 0x30]         ; 005bb915
    MOV EAX,dword ptr [EBX + 0x28]      ; 005bb919
    INC EDI                             ; 005bb91c
    DEC EAX                             ; 005bb91d
    ADD ESP,0x8                         ; 005bb91e
    MOV dword ptr [EBX + 0x28],EAX      ; 005bb921
    JMP 0x005bb901                      ; 005bb924
        ;   XREF to: 005bb901 (UNCONDITIONAL_JUMP)  ; LAB_005bb901
    MOV dword ptr [EBX + 0x28],0x0      ; 005bb926
        ;   Label: LAB_005bb926
    ADD ESP,0x4                         ; 005bb92d
        ;   Label: LAB_005bb92d
    POP EBP                             ; 005bb930
    POP ES                              ; 005bb931
    POP EDI                             ; 005bb932
    POP ESI                             ; 005bb933
    POP EBX                             ; 005bb934
    RET                                 ; 005bb935

