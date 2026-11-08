; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c8c4c(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_005cdce0 at 005cdded
;
; Referenced Globals:
;   void* PTR_FUN_00626630 = 005c50d4
;   void* PTR_FUN_00626634 = 005c50d4
;   undefined4 DAT_00626838
;   undefined4 DAT_0062683c
;
; Called Functions:
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8c4c
        ;   Label: FUN_005c8c4c
    PUSH ESI                            ; 005c8c4d
    PUSH EDI                            ; 005c8c4e
    PUSH EBP                            ; 005c8c4f
    MOV ESI,dword ptr [0x00626838]      ; 005c8c50 | DAT_00626838
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c8c56
    TEST EDI,EDI                        ; 005c8c5a
    JL 0x005c8d16                       ; 005c8c5c
        ;   XREF to: 005c8d16 (CONDITIONAL_JUMP)  ; LAB_005c8d16
    CALL dword ptr [0x00626630]         ; 005c8c62 | PTR_FUN_00626630
    CMP EDI,0x1                         ; 005c8c68
    JC 0x005c8c76                       ; 005c8c6b
        ;   XREF to: 005c8c76 (CONDITIONAL_JUMP)  ; LAB_005c8c76
    JBE 0x005c8c83                      ; 005c8c6d
        ;   XREF to: 005c8c83 (CONDITIONAL_JUMP)  ; LAB_005c8c83
    CMP EDI,0x2                         ; 005c8c6f
    JZ 0x005c8c8c                       ; 005c8c72
        ;   XREF to: 005c8c8c (CONDITIONAL_JUMP)  ; LAB_005c8c8c
    JMP 0x005c8c9a                      ; 005c8c74
        ;   XREF to: 005c8c9a (UNCONDITIONAL_JUMP)  ; LAB_005c8c9a
    TEST EDI,EDI                        ; 005c8c76
        ;   Label: LAB_005c8c76
    JNZ 0x005c8c9a                      ; 005c8c78
        ;   XREF to: 005c8c9a (CONDITIONAL_JUMP)  ; LAB_005c8c9a
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c8c7a
    PUSH ECX                            ; 005c8c7e
    PUSH -0xa                           ; 005c8c7f
    JMP 0x005c8c93                      ; 005c8c81
        ;   XREF to: 005c8c93 (UNCONDITIONAL_JUMP)  ; LAB_005c8c93
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c8c83
        ;   Label: LAB_005c8c83
    PUSH EBX                            ; 005c8c87
    PUSH -0xb                           ; 005c8c88
    JMP 0x005c8c93                      ; 005c8c8a
        ;   XREF to: 005c8c93 (UNCONDITIONAL_JUMP)  ; LAB_005c8c93
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c8c8c
        ;   Label: LAB_005c8c8c
    PUSH EDX                            ; 005c8c90
    PUSH -0xc                           ; 005c8c91
    CALL dword ptr CS:[0x5d064c]        ; 005c8c93
        ;   Label: LAB_005c8c93
    MOV EBP,dword ptr [0x0062683c]      ; 005c8c9a | DAT_0062683c
        ;   Label: LAB_005c8c9a
    LEA EBX,[EDI*0x4 + 0x0]             ; 005c8ca0
    MOV ESI,dword ptr [0x00626838]      ; 005c8ca7 | DAT_00626838
    CMP EDI,EBP                         ; 005c8cad
    JGE 0x005c8cbb                      ; 005c8caf
        ;   XREF to: 005c8cbb (CONDITIONAL_JUMP)  ; LAB_005c8cbb
    ADD EBX,ESI                         ; 005c8cb1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c8cb3
    MOV dword ptr [EBX],EAX             ; 005c8cb7
    JMP 0x005c8d0a                      ; 005c8cb9
        ;   XREF to: 005c8d0a (UNCONDITIONAL_JUMP)  ; LAB_005c8d0a
    LEA EAX,[EBX + 0x4]                 ; 005c8cbb
        ;   Label: LAB_005c8cbb
    PUSH EAX                            ; 005c8cbe
    PUSH ESI                            ; 005c8cbf
    CALL FUN_005c10d0                   ; 005c8cc0
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    MOV EDX,dword ptr [0x0062683c]      ; 005c8cc5 | DAT_0062683c
    ADD ESP,0x8                         ; 005c8ccb
    MOV ESI,EAX                         ; 005c8cce
    CMP EDX,EDI                         ; 005c8cd0
    JGE 0x005c8cee                      ; 005c8cd2
        ;   XREF to: 005c8cee (CONDITIONAL_JUMP)  ; LAB_005c8cee
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c8cd4
    MOV ECX,EBX                         ; 005c8cdb
    MOV EBX,ESI                         ; 005c8cdd
    MOV dword ptr [EBX + EAX*0x1],0x0   ; 005c8cdf
        ;   Label: LAB_005c8cdf
    ADD EAX,0x4                         ; 005c8ce6
    INC EDX                             ; 005c8ce9
    CMP EAX,ECX                         ; 005c8cea
    JL 0x005c8cdf                       ; 005c8cec
        ;   XREF to: 005c8cdf (CONDITIONAL_JUMP)  ; LAB_005c8cdf
    LEA EAX,[EDI*0x4 + 0x0]             ; 005c8cee
        ;   Label: LAB_005c8cee
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c8cf5
    INC EDI                             ; 005c8cf9
    ADD EAX,ESI                         ; 005c8cfa
    MOV dword ptr [0x00626838],ESI      ; 005c8cfc | DAT_00626838
    MOV dword ptr [0x0062683c],EDI      ; 005c8d02 | DAT_0062683c
    MOV dword ptr [EAX],EDX             ; 005c8d08
    CALL dword ptr [0x00626634]         ; 005c8d0a | PTR_FUN_00626634
        ;   Label: LAB_005c8d0a
    MOV ESI,dword ptr [0x00626838]      ; 005c8d10 | DAT_00626838
    MOV ESI,dword ptr [0x00626838]      ; 005c8d16 | DAT_00626838
        ;   Label: LAB_005c8d16
    POP EBP                             ; 005c8d1c
    POP EDI                             ; 005c8d1d
    POP ESI                             ; 005c8d1e
    POP EBX                             ; 005c8d1f
    RET                                 ; 005c8d20

