; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cce60(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005cacd8 at 005cad03
;   FUN_005cadb4 at 005cae9f
;
; Referenced Globals:
;   void* PTR_FUN_00626628 = 005c50d4
;   void* PTR_FUN_0062662c = 005c50d4
;   undefined4 DAT_02c9ffa0
;
; Called Functions:
;   FUN_005c09f0
;   FUN_005c1cb0
;   FUN_005c50d4
;   FUN_005ce000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cce60
        ;   Label: FUN_005cce60
    PUSH ESI                            ; 005cce61
    PUSH EDI                            ; 005cce62
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cce63
    CALL dword ptr [0x00626628]         ; 005cce67 | PTR_FUN_00626628
    PUSH 0x10                           ; 005cce6d
    MOV ESI,0x1                         ; 005cce6f
    PUSH ESI                            ; 005cce74
    CALL FUN_005c1cb0                   ; 005cce75
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cb0()
    MOV EBX,EAX                         ; 005cce7a
    ADD ESP,0x8                         ; 005cce7c
    TEST EAX,EAX                        ; 005cce7f
    JZ 0x005ccebe                       ; 005cce81
        ;   XREF to: 005ccebe (CONDITIONAL_JUMP)  ; LAB_005ccebe
    PUSH EDI                            ; 005cce83
    CALL FUN_005ce000                   ; 005cce84
        ;   XREF to: 005ce000 (UNCONDITIONAL_CALL)  ; undefined FUN_005ce000()
    ADD ESP,0x4                         ; 005cce89
    TEST EAX,EAX                        ; 005cce8c
    JZ 0x005cce9d                       ; 005cce8e
        ;   XREF to: 005cce9d (CONDITIONAL_JUMP)  ; LAB_005cce9d
    PUSH EBX                            ; 005cce90
    CALL FUN_005c09f0                   ; 005cce91
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    XOR ESI,ESI                         ; 005cce96
    ADD ESP,0x4                         ; 005cce98
    JMP 0x005ccec0                      ; 005cce9b
        ;   XREF to: 005ccec0 (UNCONDITIONAL_JUMP)  ; LAB_005ccec0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cce9d
        ;   Label: LAB_005cce9d
    MOV dword ptr [EBX + 0x8],EDI       ; 005ccea1
    MOV dword ptr [EBX + 0x4],EAX       ; 005ccea4
    XOR EAX,EAX                         ; 005ccea7
    MOV AL,byte ptr [EDI + 0x52]        ; 005ccea9
    MOV dword ptr [EBX + 0xc],EAX       ; 005cceac
    MOV EAX,[0x02c9ffa0]                ; 005cceaf | DAT_02c9ffa0
    MOV dword ptr [0x02c9ffa0],EBX      ; 005cceb4 | DAT_02c9ffa0
    MOV dword ptr [EBX],EAX             ; 005cceba
    JMP 0x005ccec0                      ; 005ccebc
        ;   XREF to: 005ccec0 (UNCONDITIONAL_JUMP)  ; LAB_005ccec0
    XOR ESI,ESI                         ; 005ccebe
        ;   Label: LAB_005ccebe
    CALL dword ptr [0x0062662c]         ; 005ccec0 | PTR_FUN_0062662c
        ;   Label: LAB_005ccec0
    MOV EAX,ESI                         ; 005ccec6
    POP EDI                             ; 005ccec8
    POP ESI                             ; 005ccec9
    POP EBX                             ; 005cceca
    RET                                 ; 005ccecb

