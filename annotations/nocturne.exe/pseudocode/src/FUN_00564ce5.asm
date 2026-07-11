; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00564ce5(int *param_1,byte param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_00438c40 at 00438c61
;   FUN_00438d60 at 00438d79
;   FUN_00439760 at 00439797
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056b35c
;   FUN_0056b3c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564ce5
        ;   Label: FUN_00564ce5
    PUSH ESI                            ; 00564ce6
    SUB ESP,0x4                         ; 00564ce7
    MOV EBX,dword ptr [ESP + 0x10]      ; 00564cea
    MOV EDX,dword ptr [EBX]             ; 00564cee
    MOV EDX,dword ptr [EDX + 0x4]       ; 00564cf0
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10] ; 00564cf3
    MOV EAX,EBX                         ; 00564cf7
    TEST ECX,ECX                        ; 00564cf9
    JNZ 0x00564d63                      ; 00564cfb
        ;   XREF to: 00564d63 (CONDITIONAL_JUMP)  ; LAB_00564d63
    MOV EDX,dword ptr [EBX]             ; 00564cfd
    MOV EDX,dword ptr [EDX + 0x4]       ; 00564cff
    ADD EDX,EBX                         ; 00564d02
    MOV ECX,dword ptr [EDX + 0x8]       ; 00564d04
    TEST ECX,ECX                        ; 00564d07
    JNZ 0x00564d6b                      ; 00564d09
        ;   XREF to: 00564d6b (CONDITIONAL_JUMP)  ; LAB_00564d6b
    MOV EDX,dword ptr [EDX + 0xc]       ; 00564d0b
    TEST DH,0x40                        ; 00564d0e
    JNZ 0x00564d6b                      ; 00564d11
        ;   XREF to: 00564d6b (CONDITIONAL_JUMP)  ; LAB_00564d6b
    MOV EAX,dword ptr [EBX]             ; 00564d13
        ;   Label: LAB_00564d13
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564d15
    XOR ECX,ECX                         ; 00564d18
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00564d1a
    MOV CL,byte ptr [ESP + 0x14]        ; 00564d1e
    MOV EDX,dword ptr [EAX + 0x20]      ; 00564d22
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00564d25
    MOV dword ptr [ESP],ECX             ; 00564d28
    CMP EDX,ESI                         ; 00564d2b
    JNC 0x00564d7a                      ; 00564d2d
        ;   XREF to: 00564d7a (CONDITIONAL_JUMP)  ; LAB_00564d7a
    LEA ECX,[EDX + 0x1]                 ; 00564d2f
    MOV dword ptr [EAX + 0x20],ECX      ; 00564d32
    MOV AL,byte ptr [ESP]               ; 00564d35
    MOV byte ptr [EDX],AL               ; 00564d38
    XOR EAX,EAX                         ; 00564d3a
    MOV AL,byte ptr [EDX]               ; 00564d3c
    CMP EAX,-0x1                        ; 00564d3e
        ;   Label: LAB_00564d3e
    JNZ 0x00564d55                      ; 00564d41
        ;   XREF to: 00564d55 (CONDITIONAL_JUMP)  ; LAB_00564d55
    MOV EAX,dword ptr [EBX]             ; 00564d43
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564d45
    PUSH 0x2                            ; 00564d48
    ADD EAX,EBX                         ; 00564d4a
    PUSH EAX                            ; 00564d4c
    CALL FUN_0056b327                   ; 00564d4d
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 00564d52
    MOV EAX,dword ptr [EBX]             ; 00564d55
        ;   Label: LAB_00564d55
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564d57
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00564d5a
    TEST AH,0x20                        ; 00564d5e
    JNZ 0x00564d87                      ; 00564d61
        ;   XREF to: 00564d87 (CONDITIONAL_JUMP)  ; LAB_00564d87
    MOV EAX,EBX                         ; 00564d63
        ;   Label: LAB_00564d63
    ADD ESP,0x4                         ; 00564d65
    POP ESI                             ; 00564d68
    POP EBX                             ; 00564d69
    RET                                 ; 00564d6a
    PUSH EAX                            ; 00564d6b
        ;   Label: LAB_00564d6b
    CALL FUN_0056b35c                   ; 00564d6c
        ;   XREF to: 0056b35c (UNCONDITIONAL_CALL)  ; undefined FUN_0056b35c()
    ADD ESP,0x4                         ; 00564d71
    TEST EAX,EAX                        ; 00564d74
    JNZ 0x00564d13                      ; 00564d76
        ;   XREF to: 00564d13 (CONDITIONAL_JUMP)  ; LAB_00564d13
    JMP 0x00564d63                      ; 00564d78
        ;   XREF to: 00564d63 (UNCONDITIONAL_JUMP)  ; LAB_00564d63
    PUSH ECX                            ; 00564d7a
        ;   Label: LAB_00564d7a
    MOV EDX,dword ptr [EAX + 0x28]      ; 00564d7b
    PUSH EAX                            ; 00564d7e
    CALL dword ptr [EDX + 0xc]          ; 00564d7f
    ADD ESP,0x8                         ; 00564d82
    JMP 0x00564d3e                      ; 00564d85
        ;   XREF to: 00564d3e (UNCONDITIONAL_JUMP)  ; LAB_00564d3e
    PUSH EBX                            ; 00564d87
        ;   Label: LAB_00564d87
    CALL FUN_0056b3c2                   ; 00564d88
        ;   XREF to: 0056b3c2 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b3c2()
    ADD ESP,0x4                         ; 00564d8d
    JMP 0x00564d63                      ; 00564d90
        ;   XREF to: 00564d63 (UNCONDITIONAL_JUMP)  ; LAB_00564d63

