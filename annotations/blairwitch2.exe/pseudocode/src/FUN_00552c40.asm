; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00552c40(void)
;
;
; XREF[4]:
;   FUN_004ed260 at 004ee0fb
;   FUN_00552470 at 00552489
;   FUN_00552b90 at 00552b91
;   FUN_00553680 at 005536c3
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;   undefined4 DAT_02648e88
;
; Called Functions:
;   FUN_0054d9b0
;   FUN_005526b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552c40
        ;   Label: FUN_00552c40
    PUSH ESI                            ; 00552c41
    CALL FUN_005526b0                   ; 00552c42
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526b0()
    TEST EAX,EAX                        ; 00552c47
    JZ 0x00552c78                       ; 00552c49
        ;   XREF to: 00552c78 (CONDITIONAL_JUMP)  ; LAB_00552c78
    MOV EBX,0x2641924                   ; 00552c4b
    LEA ESI,[EBX + 0x6b00]              ; 00552c50
    PUSH EBX                            ; 00552c56
        ;   Label: LAB_00552c56
    CALL FUN_0054d9b0                   ; 00552c57
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d9b0()
    ADD EBX,0x1ac                       ; 00552c5c
    ADD ESP,0x4                         ; 00552c62
    CMP EBX,ESI                         ; 00552c65
    JNZ 0x00552c56                      ; 00552c67
        ;   XREF to: 00552c56 (CONDITIONAL_JUMP)  ; LAB_00552c56
    MOV EDX,dword ptr [0x02648e80]      ; 00552c69 | DAT_02648e80
    TEST EDX,EDX                        ; 00552c6f
    JNZ 0x00552c7b                      ; 00552c71
        ;   XREF to: 00552c7b (CONDITIONAL_JUMP)  ; LAB_00552c7b
    MOV EAX,0x1                         ; 00552c73
    POP ESI                             ; 00552c78
        ;   Label: LAB_00552c78
    POP EBX                             ; 00552c79
    RET                                 ; 00552c7a
    PUSH EDX                            ; 00552c7b
        ;   Label: LAB_00552c7b
    MOV EBX,dword ptr [EDX]             ; 00552c7c
    CALL dword ptr [EBX]                ; 00552c7e
    ADD ESP,0x4                         ; 00552c80
    TEST EAX,EAX                        ; 00552c83
    JZ 0x00552c78                       ; 00552c85
        ;   XREF to: 00552c78 (CONDITIONAL_JUMP)  ; LAB_00552c78
    XOR ECX,ECX                         ; 00552c87
    MOV EAX,0x1                         ; 00552c89
    MOV dword ptr [0x02648e88],ECX      ; 00552c8e | DAT_02648e88
    MOV dword ptr [0x02648e80],ECX      ; 00552c94 | DAT_02648e80
    POP ESI                             ; 00552c9a
    POP EBX                             ; 00552c9b
    RET                                 ; 00552c9c

