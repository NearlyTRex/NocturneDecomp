; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b0f93(int *param_1)
;
;
; XREF[1]:
;   FUN_005b0975 at 005b097b
;
; Called Functions:
;   FUN_005abc85
;   FUN_005abd9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0f93
        ;   Label: FUN_005b0f93
    PUSH ESI                            ; 005b0f94
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b0f95
    PUSH 0x1                            ; 005b0f99
    PUSH EBX                            ; 005b0f9b
    CALL FUN_005abd9f                   ; 005b0f9c
        ;   XREF to: 005abd9f (UNCONDITIONAL_CALL)  ; undefined FUN_005abd9f()
    ADD ESP,0x8                         ; 005b0fa1
    TEST EAX,EAX                        ; 005b0fa4
    JZ 0x005b0fef                       ; 005b0fa6
        ;   XREF to: 005b0fef (CONDITIONAL_JUMP)  ; LAB_005b0fef
    MOV EAX,dword ptr [EBX]             ; 005b0fa8
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b0faa
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005b0fad
    MOV ESI,dword ptr [EAX + 0x14]      ; 005b0fb1
    CMP ESI,dword ptr [EAX + 0x10]      ; 005b0fb4
    JNC 0x005b0fcc                      ; 005b0fb7
        ;   XREF to: 005b0fcc (CONDITIONAL_JUMP)  ; LAB_005b0fcc
    MOV AL,byte ptr [ESI]               ; 005b0fb9
    AND EAX,0xff                        ; 005b0fbb
    MOV ESI,EAX                         ; 005b0fc0
        ;   Label: LAB_005b0fc0
    CMP EAX,-0x1                        ; 005b0fc2
    JZ 0x005b0fd8                       ; 005b0fc5
        ;   XREF to: 005b0fd8 (CONDITIONAL_JUMP)  ; LAB_005b0fd8
    MOV EAX,ESI                         ; 005b0fc7
    POP ESI                             ; 005b0fc9
    POP EBX                             ; 005b0fca
    RET                                 ; 005b0fcb
    PUSH EAX                            ; 005b0fcc
        ;   Label: LAB_005b0fcc
    MOV ESI,dword ptr [EAX + 0x28]      ; 005b0fcd
    CALL dword ptr [ESI + 0x10]         ; 005b0fd0
    ADD ESP,0x4                         ; 005b0fd3
    JMP 0x005b0fc0                      ; 005b0fd6
        ;   XREF to: 005b0fc0 (UNCONDITIONAL_JUMP)  ; LAB_005b0fc0
    MOV EAX,dword ptr [EBX]             ; 005b0fd8
        ;   Label: LAB_005b0fd8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b0fda
    PUSH 0x4                            ; 005b0fdd
    ADD EBX,ECX                         ; 005b0fdf
    PUSH EBX                            ; 005b0fe1
    CALL FUN_005abc85                   ; 005b0fe2
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined FUN_005abc85()
    ADD ESP,0x8                         ; 005b0fe7
    MOV EAX,ESI                         ; 005b0fea
    POP ESI                             ; 005b0fec
    POP EBX                             ; 005b0fed
    RET                                 ; 005b0fee
    MOV ESI,0xffffffff                  ; 005b0fef
        ;   Label: LAB_005b0fef
    MOV EAX,ESI                         ; 005b0ff4
    POP ESI                             ; 005b0ff6
    POP EBX                             ; 005b0ff7
    RET                                 ; 005b0ff8

