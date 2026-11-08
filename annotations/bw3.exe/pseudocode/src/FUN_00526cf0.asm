; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526cf0(int param_1)
;
;
; XREF[1]:
;   FUN_00518cd0 at 00519c97
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526cf0
        ;   Label: FUN_00526cf0
    PUSH ESI                            ; 00526cf1
    PUSH EDI                            ; 00526cf2
    SUB ESP,0x18                        ; 00526cf3
    MOV EBX,dword ptr [ESP + 0x28]      ; 00526cf6
    CMP dword ptr [EBX + 0x2f08],0x1    ; 00526cfa
    JGE 0x00526d0a                      ; 00526d01
        ;   XREF to: 00526d0a (CONDITIONAL_JUMP)  ; LAB_00526d0a
    ADD ESP,0x18                        ; 00526d03
        ;   Label: LAB_00526d03
    POP EDI                             ; 00526d06
    POP ESI                             ; 00526d07
    POP EBX                             ; 00526d08
    RET                                 ; 00526d09
    PUSH EBX                            ; 00526d0a
        ;   Label: LAB_00526d0a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526d0b
    CALL dword ptr [EAX + 0x10c]        ; 00526d11
    ADD ESP,0x4                         ; 00526d17
    CMP EAX,0x2                         ; 00526d1a
    JGE 0x00526d2d                      ; 00526d1d
        ;   XREF to: 00526d2d (CONDITIONAL_JUMP)  ; LAB_00526d2d
    CMP dword ptr [EBX + 0x2f00],0x12   ; 00526d1f
    CMP dword ptr [EBX + 0x2f00],0x17   ; 00526d26
    ADD EBX,0x158                       ; 00526d2d
        ;   Label: LAB_00526d2d
    PUSH EBX                            ; 00526d33
    MOV ESI,dword ptr [EBX + 0x2f44]    ; 00526d34
    CALL FUN_004fc070                   ; 00526d3a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 00526d3f
    MOV EAX,dword ptr [EAX + 0x24]      ; 00526d42
    LEA EDX,[ESI + 0x3ab24]             ; 00526d45
    CMP EAX,0x37                        ; 00526d4b
    JNZ 0x00526d7e                      ; 00526d4e
        ;   XREF to: 00526d7e (CONDITIONAL_JUMP)  ; LAB_00526d7e
    MOV ESI,0xc1a00000                  ; 00526d50
    XOR ECX,ECX                         ; 00526d55
    LEA EAX,[ESP + 0xc]                 ; 00526d57
    MOV dword ptr [ESP + 0x10],ECX      ; 00526d5b
    MOV dword ptr [ESP + 0x14],ESI      ; 00526d5f
    MOV dword ptr [ESP + 0xc],ECX       ; 00526d63
    CMP EDX,EAX                         ; 00526d67
    JZ 0x00526d03                       ; 00526d69
        ;   XREF to: 00526d03 (CONDITIONAL_JUMP)  ; LAB_00526d03
    MOV dword ptr [EDX + 0x4],ECX       ; 00526d6b
    MOV dword ptr [EDX],ECX             ; 00526d6e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526d70
    MOV dword ptr [EDX + 0x8],EAX       ; 00526d74
    ADD ESP,0x18                        ; 00526d77
    POP EDI                             ; 00526d7a
    POP ESI                             ; 00526d7b
    POP EBX                             ; 00526d7c
    RET                                 ; 00526d7d
    CMP EAX,0x38                        ; 00526d7e
        ;   Label: LAB_00526d7e
    JNZ 0x00526d03                      ; 00526d81
        ;   XREF to: 00526d03 (CONDITIONAL_JUMP)  ; LAB_00526d03
    XOR EDI,EDI                         ; 00526d83
    MOV EAX,0x41a00000                  ; 00526d85
    MOV dword ptr [ESP + 0x4],EDI       ; 00526d8a
    MOV dword ptr [ESP + 0x8],EAX       ; 00526d8e
    MOV EAX,ESP                         ; 00526d92
    MOV dword ptr [ESP],EDI             ; 00526d94
    CMP EDX,EAX                         ; 00526d97
    JZ 0x00526d03                       ; 00526d99
        ;   XREF to: 00526d03 (CONDITIONAL_JUMP)  ; LAB_00526d03
    MOV dword ptr [EDX + 0x4],EDI       ; 00526d9f
    MOV dword ptr [EDX],EDI             ; 00526da2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526da4
    MOV dword ptr [EDX + 0x8],EAX       ; 00526da8
    ADD ESP,0x18                        ; 00526dab
    POP EDI                             ; 00526dae
    POP ESI                             ; 00526daf
    POP EBX                             ; 00526db0
    RET                                 ; 00526db1

