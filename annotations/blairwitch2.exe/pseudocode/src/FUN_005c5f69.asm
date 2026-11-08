; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c5f69(int *param_1)
;
;
; XREF[1]:
;   FUN_005c58e5 at 005c591a
;
; Called Functions:
;   FUN_005c0b85
;   FUN_005c0c9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5f69
        ;   Label: FUN_005c5f69
    PUSH ESI                            ; 005c5f6a
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5f6b
    PUSH 0x1                            ; 005c5f6f
    PUSH EBX                            ; 005c5f71
    MOV ESI,0xffffffff                  ; 005c5f72
    CALL FUN_005c0c9f                   ; 005c5f77
        ;   XREF to: 005c0c9f (UNCONDITIONAL_CALL)  ; undefined FUN_005c0c9f()
    ADD ESP,0x8                         ; 005c5f7c
    TEST EAX,EAX                        ; 005c5f7f
    JZ 0x005c5fea                       ; 005c5f81
        ;   XREF to: 005c5fea (CONDITIONAL_JUMP)  ; LAB_005c5fea
    MOV EAX,dword ptr [EBX]             ; 005c5f83
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c5f85
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005c5f88
    MOV EDX,dword ptr [EAX + 0x14]      ; 005c5f8c
    MOV ECX,dword ptr [EAX + 0x10]      ; 005c5f8f
    MOV ESI,EAX                         ; 005c5f92
    CMP EDX,ECX                         ; 005c5f94
    JNC 0x005c5fbb                      ; 005c5f96
        ;   XREF to: 005c5fbb (CONDITIONAL_JUMP)  ; LAB_005c5fbb
    MOV EAX,dword ptr [ESI + 0x14]      ; 005c5f98
        ;   Label: LAB_005c5f98
    LEA EDX,[EAX + 0x1]                 ; 005c5f9b
    MOV dword ptr [ESI + 0x14],EDX      ; 005c5f9e
    MOV AL,byte ptr [EAX]               ; 005c5fa1
    AND EAX,0xff                        ; 005c5fa3
    MOV ESI,EAX                         ; 005c5fa8
        ;   Label: LAB_005c5fa8
    CMP EAX,-0x1                        ; 005c5faa
    JZ 0x005c5fcc                       ; 005c5fad
        ;   XREF to: 005c5fcc (CONDITIONAL_JUMP)  ; LAB_005c5fcc
    MOV dword ptr [EBX + 0x4],0x1       ; 005c5faf
    MOV EAX,ESI                         ; 005c5fb6
    POP ESI                             ; 005c5fb8
    POP EBX                             ; 005c5fb9
    RET                                 ; 005c5fba
    PUSH EAX                            ; 005c5fbb
        ;   Label: LAB_005c5fbb
    MOV EDX,dword ptr [EAX + 0x28]      ; 005c5fbc
    CALL dword ptr [EDX + 0x10]         ; 005c5fbf
    ADD ESP,0x4                         ; 005c5fc2
    CMP EAX,-0x1                        ; 005c5fc5
    JNZ 0x005c5f98                      ; 005c5fc8
        ;   XREF to: 005c5f98 (CONDITIONAL_JUMP)  ; LAB_005c5f98
    JMP 0x005c5fa8                      ; 005c5fca
        ;   XREF to: 005c5fa8 (UNCONDITIONAL_JUMP)  ; LAB_005c5fa8
    MOV EAX,dword ptr [EBX]             ; 005c5fcc
        ;   Label: LAB_005c5fcc
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c5fce
    PUSH 0x4                            ; 005c5fd1
    ADD EAX,EBX                         ; 005c5fd3
    PUSH EAX                            ; 005c5fd5
    CALL FUN_005c0b85                   ; 005c5fd6
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b85()
    ADD ESP,0x8                         ; 005c5fdb
    MOV dword ptr [EBX + 0x4],0x0       ; 005c5fde
    MOV EAX,ESI                         ; 005c5fe5
    POP ESI                             ; 005c5fe7
    POP EBX                             ; 005c5fe8
    RET                                 ; 005c5fe9
    MOV dword ptr [EBX + 0x4],EAX       ; 005c5fea
        ;   Label: LAB_005c5fea
    MOV EAX,ESI                         ; 005c5fed
    POP ESI                             ; 005c5fef
    POP EBX                             ; 005c5ff0
    RET                                 ; 005c5ff1

