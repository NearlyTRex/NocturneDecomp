; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4ff8(int param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_FUN_0061ef50 = 005bad88
;
; Called Functions:
;   FUN_005be180
;   FUN_005c4df0
;   FUN_005c4e44
;   FUN_005c4e68
;   FUN_005c4f10
;   FUN_005c4f48
;   FUN_005c4f74
;   FUN_005c5d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4ff8
        ;   Label: FUN_005c4ff8
    PUSH ESI                            ; 005c4ff9
    PUSH EDI                            ; 005c4ffa
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c4ffb
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c4fff
    CMP EBX,0x1                         ; 005c5003
    JL 0x005c500d                       ; 005c5006
        ;   XREF to: 005c500d (CONDITIONAL_JUMP)  ; LAB_005c500d
    CMP EBX,0xc                         ; 005c5008
    JLE 0x005c5020                      ; 005c500b
        ;   XREF to: 005c5020 (CONDITIONAL_JUMP)  ; LAB_005c5020
    PUSH 0x9                            ; 005c500d
        ;   Label: LAB_005c500d
    CALL FUN_005be180                   ; 005c500f
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    MOV EAX,0x3                         ; 005c5014
    ADD ESP,0x4                         ; 005c5019
    POP EDI                             ; 005c501c
    POP ESI                             ; 005c501d
    POP EBX                             ; 005c501e
    RET                                 ; 005c501f
    MOV dword ptr [0x0061ef50],0x5c4fac ; 005c5020 | PTR_FUN_0061ef50
        ;   Label: LAB_005c5020
    CMP EDI,0x2                         ; 005c502a
    JZ 0x005c5055                       ; 005c502d
        ;   XREF to: 005c5055 (CONDITIONAL_JUMP)  ; LAB_005c5055
    CMP EDI,0x3                         ; 005c502f
    JZ 0x005c5055                       ; 005c5032
        ;   XREF to: 005c5055 (CONDITIONAL_JUMP)  ; LAB_005c5055
    PUSH EBX                            ; 005c5034
    CALL FUN_005c4e68                   ; 005c5035
        ;   XREF to: 005c4e68 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4e68()
    ADD ESP,0x4                         ; 005c503a
    TEST EAX,EAX                        ; 005c503d
    JZ 0x005c5055                       ; 005c503f
        ;   XREF to: 005c5055 (CONDITIONAL_JUMP)  ; LAB_005c5055
    CMP EBX,0x2                         ; 005c5041
    JNZ 0x005c5055                      ; 005c5044
        ;   XREF to: 005c5055 (CONDITIONAL_JUMP)  ; LAB_005c5055
    PUSH 0x9f                           ; 005c5046
    PUSH 0x0                            ; 005c504b
    CALL FUN_005c5d60                   ; 005c504d
        ;   XREF to: 005c5d60 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5d60()
    ADD ESP,0x8                         ; 005c5052
    PUSH EBX                            ; 005c5055
        ;   Label: LAB_005c5055
    CALL FUN_005c4e44                   ; 005c5056
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4e44()
    ADD ESP,0x4                         ; 005c505b
    PUSH EDI                            ; 005c505e
    PUSH EBX                            ; 005c505f
    MOV ESI,EAX                         ; 005c5060
    CALL FUN_005c4df0                   ; 005c5062
        ;   XREF to: 005c4df0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4df0()
    ADD ESP,0x8                         ; 005c5067
    CALL FUN_005c4f10                   ; 005c506a
        ;   XREF to: 005c4f10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4f10()
    TEST EAX,EAX                        ; 005c506f
    JZ 0x005c507a                       ; 005c5071
        ;   XREF to: 005c507a (CONDITIONAL_JUMP)  ; LAB_005c507a
    CALL FUN_005c4f48                   ; 005c5073
        ;   XREF to: 005c4f48 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4f48()
    JMP 0x005c507f                      ; 005c5078
        ;   XREF to: 005c507f (UNCONDITIONAL_JUMP)  ; LAB_005c507f
    CALL FUN_005c4f74                   ; 005c507a
        ;   XREF to: 005c4f74 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4f74()
        ;   Label: LAB_005c507a
    MOV EAX,ESI                         ; 005c507f
        ;   Label: LAB_005c507f
    POP EDI                             ; 005c5081
    POP ESI                             ; 005c5082
    POP EBX                             ; 005c5083
    RET                                 ; 005c5084

