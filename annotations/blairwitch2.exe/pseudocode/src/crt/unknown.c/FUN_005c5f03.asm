; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c5f03(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c58e5 at 005c58eb
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b85
;   crt_unknown.c_FUN_005c0c9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5f03
        ;   Label: crt_unknown.c_FUN_005c5f03
    PUSH ESI                            ; 005c5f04
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5f05
    PUSH 0x1                            ; 005c5f09
    PUSH EBX                            ; 005c5f0b
    CALL crt_unknown.c_FUN_005c0c9f     ; 005c5f0c
        ;   XREF to: 005c0c9f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0c9f()
    ADD ESP,0x8                         ; 005c5f11
    TEST EAX,EAX                        ; 005c5f14
    JZ 0x005c5f5f                       ; 005c5f16
        ;   XREF to: 005c5f5f (CONDITIONAL_JUMP)  ; LAB_005c5f5f
    MOV EAX,dword ptr [EBX]             ; 005c5f18
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c5f1a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005c5f1d
    MOV ESI,dword ptr [EAX + 0x14]      ; 005c5f21
    CMP ESI,dword ptr [EAX + 0x10]      ; 005c5f24
    JNC 0x005c5f3c                      ; 005c5f27
        ;   XREF to: 005c5f3c (CONDITIONAL_JUMP)  ; LAB_005c5f3c
    MOV AL,byte ptr [ESI]               ; 005c5f29
    AND EAX,0xff                        ; 005c5f2b
    MOV ESI,EAX                         ; 005c5f30
        ;   Label: LAB_005c5f30
    CMP EAX,-0x1                        ; 005c5f32
    JZ 0x005c5f48                       ; 005c5f35
        ;   XREF to: 005c5f48 (CONDITIONAL_JUMP)  ; LAB_005c5f48
    MOV EAX,ESI                         ; 005c5f37
    POP ESI                             ; 005c5f39
    POP EBX                             ; 005c5f3a
    RET                                 ; 005c5f3b
    PUSH EAX                            ; 005c5f3c
        ;   Label: LAB_005c5f3c
    MOV ESI,dword ptr [EAX + 0x28]      ; 005c5f3d
    CALL dword ptr [ESI + 0x10]         ; 005c5f40
    ADD ESP,0x4                         ; 005c5f43
    JMP 0x005c5f30                      ; 005c5f46
        ;   XREF to: 005c5f30 (UNCONDITIONAL_JUMP)  ; LAB_005c5f30
    MOV EAX,dword ptr [EBX]             ; 005c5f48
        ;   Label: LAB_005c5f48
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c5f4a
    PUSH 0x4                            ; 005c5f4d
    ADD EBX,ECX                         ; 005c5f4f
    PUSH EBX                            ; 005c5f51
    CALL crt_unknown.c_FUN_005c0b85     ; 005c5f52
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005c5f57
    MOV EAX,ESI                         ; 005c5f5a
    POP ESI                             ; 005c5f5c
    POP EBX                             ; 005c5f5d
    RET                                 ; 005c5f5e
    MOV ESI,0xffffffff                  ; 005c5f5f
        ;   Label: LAB_005c5f5f
    MOV EAX,ESI                         ; 005c5f64
    POP ESI                             ; 005c5f66
    POP EBX                             ; 005c5f67
    RET                                 ; 005c5f68

