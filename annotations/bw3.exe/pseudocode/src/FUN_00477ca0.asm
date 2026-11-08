; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00477ca0(int param_1,uint *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050b320 at 0050b39d
;
; Referenced Globals:
;   undefined4 DAT_005fb0e8
;
; Called Functions:
;   FUN_00473b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477ca0
        ;   Label: FUN_00477ca0
    PUSH ESI                            ; 00477ca1
    PUSH EDI                            ; 00477ca2
    PUSH EBP                            ; 00477ca3
    SUB ESP,0x8                         ; 00477ca4
    MOV ECX,dword ptr [ESP + 0x20]      ; 00477ca7
    MOV EAX,dword ptr [ECX]             ; 00477cab
    MOV EDX,EAX                         ; 00477cad
    SAR EDX,0x1f                        ; 00477caf
    SHL EDX,0x3                         ; 00477cb2
    SBB EAX,EDX                         ; 00477cb5
    SAR EAX,0x3                         ; 00477cb7
    MOV EDI,EAX                         ; 00477cba
    MOV EAX,dword ptr [ECX + 0x4]       ; 00477cbc
    MOV EDX,EAX                         ; 00477cbf
    SAR EDX,0x1f                        ; 00477cc1
    SHL EDX,0x3                         ; 00477cc4
    SBB EAX,EDX                         ; 00477cc7
    SAR EAX,0x3                         ; 00477cc9
    MOV ESI,EAX                         ; 00477ccc
    MOV EAX,dword ptr [ECX + 0x8]       ; 00477cce
    MOV EDX,EAX                         ; 00477cd1
    SAR EDX,0x1f                        ; 00477cd3
    SHL EDX,0x3                         ; 00477cd6
    SBB EAX,EDX                         ; 00477cd9
    SAR EAX,0x3                         ; 00477cdb
    MOV EBP,EAX                         ; 00477cde
    TEST EDI,EDI                        ; 00477ce0
    JL 0x00477d6f                       ; 00477ce2
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    TEST ESI,ESI                        ; 00477ce8
    JL 0x00477d6f                       ; 00477cea
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    TEST EAX,EAX                        ; 00477cf0
    JL 0x00477d6f                       ; 00477cf2
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00477cf8
    CMP EDI,dword ptr [EAX + 0x40]      ; 00477cfc
    JGE 0x00477d6f                      ; 00477cff
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    CMP ESI,dword ptr [EAX + 0x44]      ; 00477d05
    JGE 0x00477d6f                      ; 00477d08
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    CMP EBP,dword ptr [EAX + 0x48]      ; 00477d0a
    JGE 0x00477d6f                      ; 00477d0d
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    MOV EAX,dword ptr [ECX]             ; 00477d0f
    AND EAX,0x7                         ; 00477d11
    MOV dword ptr [ESP],EAX             ; 00477d14
    MOV EAX,dword ptr [ECX + 0x8]       ; 00477d17
    AND EAX,0x7                         ; 00477d1a
    MOV EBX,dword ptr [ECX + 0x4]       ; 00477d1d
    SHL EAX,0x3                         ; 00477d20
    AND EBX,0x7                         ; 00477d23
    MOV dword ptr [ESP + 0x4],EAX       ; 00477d26
    PUSH EBP                            ; 00477d2a
        ;   Label: LAB_00477d2a
    PUSH ESI                            ; 00477d2b
    PUSH EDI                            ; 00477d2c
    MOV ECX,dword ptr [ESP + 0x28]      ; 00477d2d
    PUSH ECX                            ; 00477d31
    CALL FUN_00473b60                   ; 00477d32
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00477d37
    TEST EAX,EAX                        ; 00477d3a
    JZ 0x00477d6f                       ; 00477d3c
        ;   XREF to: 00477d6f (CONDITIONAL_JUMP)  ; LAB_00477d6f
    CMP dword ptr [EAX],0x0             ; 00477d3e
    JZ 0x00477d60                       ; 00477d41
        ;   XREF to: 00477d60 (CONDITIONAL_JUMP)  ; LAB_00477d60
    MOV EDX,dword ptr [ESP + 0x4]       ; 00477d43
    MOV EAX,dword ptr [EAX]             ; 00477d47
    ADD EDX,EBX                         ; 00477d49
    ADD EAX,EDX                         ; 00477d4b
    XOR EDX,EDX                         ; 00477d4d
    MOV ECX,dword ptr [ESP]             ; 00477d4f
    MOV DL,byte ptr [EAX]               ; 00477d52
    XOR EAX,EAX                         ; 00477d54
    MOV AL,byte ptr [ECX + 0x5fb0e8]    ; 00477d56 | DAT_005fb0e8
    TEST EDX,EAX                        ; 00477d5c
    JNZ 0x00477d7e                      ; 00477d5e
        ;   XREF to: 00477d7e (CONDITIONAL_JUMP)  ; LAB_00477d7e
    DEC EBX                             ; 00477d60
        ;   Label: LAB_00477d60
    TEST EBX,EBX                        ; 00477d61
    JGE 0x00477d2a                      ; 00477d63
        ;   XREF to: 00477d2a (CONDITIONAL_JUMP)  ; LAB_00477d2a
    DEC ESI                             ; 00477d65
    MOV EBX,0x7                         ; 00477d66
    TEST ESI,ESI                        ; 00477d6b
    JGE 0x00477d2a                      ; 00477d6d
        ;   XREF to: 00477d2a (CONDITIONAL_JUMP)  ; LAB_00477d2a
    MOV EBX,0xfffffc19                  ; 00477d6f
        ;   Label: LAB_00477d6f
    MOV EAX,EBX                         ; 00477d74
    ADD ESP,0x8                         ; 00477d76
    POP EBP                             ; 00477d79
    POP EDI                             ; 00477d7a
    POP ESI                             ; 00477d7b
    POP EBX                             ; 00477d7c
    RET                                 ; 00477d7d
    SHL ESI,0x3                         ; 00477d7e
        ;   Label: LAB_00477d7e
    ADD EBX,ESI                         ; 00477d81
    MOV EAX,EBX                         ; 00477d83
    ADD ESP,0x8                         ; 00477d85
    POP EBP                             ; 00477d88
    POP EDI                             ; 00477d89
    POP ESI                             ; 00477d8a
    POP EBX                             ; 00477d8b
    RET                                 ; 00477d8c

