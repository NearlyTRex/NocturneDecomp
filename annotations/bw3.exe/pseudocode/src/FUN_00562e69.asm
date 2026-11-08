; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00562e69(void)
;
;
; XREF[47]:
;   FUN_00403aa0 at 00403b39
;   FUN_00403b70 at 00403be1
;   FUN_00403c90 at 00403d00
;   FUN_00403d30 at 00403d9a
;   FUN_00403e70 at 00403f0c
;   FUN_00404070 at 004040e4
;   FUN_00404120 at 00404229
;   FUN_00404370 at 004043da
;   FUN_00404560 at 00404644
;   FUN_004046e0 at 00404778
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_006048a4
;   undefined4 DAT_006048e0
;   undefined4 DAT_006048e4
;   undefined4 DAT_006048ec
;   undefined4 DAT_00604908
;   undefined4 DAT_0060490c
;   undefined4 DAT_00604d10
;   undefined4 DAT_00604d14
;   undefined4 DAT_00604d18
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00562e69
        ;   Label: FUN_00562e69
    PUSH EDI                            ; 00562e6a
    PUSH EBP                            ; 00562e6b
    MOV EAX,dword ptr [ESI + 0x8]       ; 00562e6c
    MOV ECX,dword ptr [EDI + 0x8]       ; 00562e6f
    CMP EAX,ECX                         ; 00562e72
    JBE 0x00562e79                      ; 00562e74
        ;   XREF to: 00562e79 (CONDITIONAL_JUMP)  ; LAB_00562e79
    XCHG EAX,ECX                        ; 00562e76
    XCHG EDI,ESI                        ; 00562e77
    SHR ECX,0x10                        ; 00562e79
        ;   Label: LAB_00562e79
    SHR EAX,0x10                        ; 00562e7c
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00562e7f | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00562e86 | DAT_01c5faec
    SUB ECX,EAX                         ; 00562e8d
    JLE 0x00563057                      ; 00562e8f
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    LEA EBX,[EBX + EAX*0x2]             ; 00562e95
    SHL ECX,0x2                         ; 00562e98
    LEA EBP,[EBP + EAX*0x4]             ; 00562e9b
    MOV dword ptr [0x006048a4],ECX      ; 00562e9f | DAT_006048a4
    MOV dword ptr [0x00604908],EBX      ; 00562ea5 | DAT_00604908
    MOV dword ptr [0x0060490c],EBP      ; 00562eab | DAT_0060490c
    CMP dword ptr [0x01c6e2b4],0x80     ; 00562eb1 | DAT_01c6e2b4
    JZ 0x00563062                       ; 00562ebb
        ;   XREF to: 00563062 (CONDITIONAL_JUMP)  ; LAB_00563062
    CMP dword ptr [0x01c6e2b8],0x5      ; 00562ec1 | DAT_01c6e2b8
    JNZ 0x00562f3a                      ; 00562ec8
        ;   XREF to: 00562f3a (CONDITIONAL_JUMP)  ; LAB_00562f3a
    MOV EAX,dword ptr [ESI + 0x18]      ; 00562eca
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562ecd
    CDQ                                 ; 00562ed0
    SHLD EDX,EAX,0x18                   ; 00562ed1
    SHL EAX,0x18                        ; 00562ed5
    IDIV EBX                            ; 00562ed8
    MOV [0x006048e0],EAX                ; 00562eda | DAT_006048e0
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562edf
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562ee2
    CDQ                                 ; 00562ee5
    SHLD EDX,EAX,0x18                   ; 00562ee6
    SHL EAX,0x18                        ; 00562eea
    IDIV EBX                            ; 00562eed
    SUB EAX,dword ptr [0x006048e0]      ; 00562eef | DAT_006048e0
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562ef5
    MOV dword ptr [0x00604d10],EDX      ; 00562efb | DAT_00604d10
    MOV EAX,dword ptr [ESI + 0x20]      ; 00562f01
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562f04
    CDQ                                 ; 00562f07
    SHLD EDX,EAX,0x18                   ; 00562f08
    SHL EAX,0x18                        ; 00562f0c
    IDIV EBX                            ; 00562f0f
    MOV [0x006048e4],EAX                ; 00562f11 | DAT_006048e4
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562f16
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562f19
    CDQ                                 ; 00562f1c
    SHLD EDX,EAX,0x18                   ; 00562f1d
    SHL EAX,0x18                        ; 00562f21
    IDIV EBX                            ; 00562f24
    SUB EAX,dword ptr [0x006048e4]      ; 00562f26 | DAT_006048e4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f2c
    MOV dword ptr [0x00604d14],EDX      ; 00562f32 | DAT_00604d14
    JMP 0x00562f6e                      ; 00562f38
        ;   XREF to: 00562f6e (UNCONDITIONAL_JUMP)  ; LAB_00562f6e
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562f3a
        ;   Label: LAB_00562f3a
    MOV EBX,dword ptr [ESI + 0x18]      ; 00562f3d
    SUB EAX,EBX                         ; 00562f40
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f42
    MOV dword ptr [0x006048e0],EBX      ; 00562f48 | DAT_006048e0
    MOV dword ptr [0x00604d10],EDX      ; 00562f4e | DAT_00604d10
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562f54
    MOV EBX,dword ptr [ESI + 0x20]      ; 00562f57
    SUB EAX,EBX                         ; 00562f5a
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f5c
    MOV dword ptr [0x006048e4],EBX      ; 00562f62 | DAT_006048e4
    MOV dword ptr [0x00604d14],EDX      ; 00562f68 | DAT_00604d14
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562f6e
        ;   Label: LAB_00562f6e
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562f71
    SUB EAX,EBX                         ; 00562f74
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f76
    MOV dword ptr [0x006048ec],EBX      ; 00562f7c | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562f82 | DAT_00604d18
    MOV EBP,dword ptr [0x006048e0]      ; 00562f88 | DAT_006048e0
    MOV EDX,dword ptr [0x006048e4]      ; 00562f8e | DAT_006048e4
    MOV ESI,dword ptr [0x006048ec]      ; 00562f94 | DAT_006048ec
    MOV EDI,0x0                         ; 00562f9a
    CMP dword ptr [0x01c6ced4],0x0      ; 00562f9f | DAT_01c6ced4
    JNZ 0x00563057                      ; 00562fa6
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    TEST dword ptr [0x01c6e2b4],0x2     ; 00562fac | DAT_01c6e2b4
    JNZ 0x00563057                      ; 00562fb6
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    TEST dword ptr [0x01c6e2b4],0x40    ; 00562fbc | DAT_01c6e2b4
        ;   Label: LAB_00562fbc
    JZ 0x00562fd4                       ; 00562fc6
        ;   XREF to: 00562fd4 (CONDITIONAL_JUMP)  ; LAB_00562fd4
    LEA EAX,[EDI]                       ; 00562fc8
    ADD EAX,dword ptr [0x0060490c]      ; 00562fca | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 00562fd0
    JL 0x00563035                       ; 00562fd2
        ;   XREF to: 00563035 (CONDITIONAL_JUMP)  ; LAB_00563035
    TEST dword ptr [0x01c6e2b4],0x1     ; 00562fd4 | DAT_01c6e2b4
        ;   Label: LAB_00562fd4
    JZ 0x0056305b                       ; 00562fde
        ;   XREF to: 0056305b (CONDITIONAL_JUMP)  ; LAB_0056305b
    MOV CL,byte ptr [0x00604df8]        ; 00562fe0 | DAT_00604df8
    MOV EAX,EBP                         ; 00562fe6
    SHR EAX,CL                          ; 00562fe8
    AND EAX,dword ptr [0x00604e38]      ; 00562fea | DAT_00604e38
    MOV CL,byte ptr [0x00604e18]        ; 00562ff0 | DAT_00604e18
    MOV EBX,EDX                         ; 00562ff6
    SHR EBX,CL                          ; 00562ff8
    AND EBX,dword ptr [0x00604e58]      ; 00562ffa | DAT_00604e58
    ADD EAX,dword ptr [0x01c6ced0]      ; 00563000 | DAT_01c6ced0
    ADD EAX,EBX                         ; 00563006
    MOVZX EAX,byte ptr [EAX]            ; 00563008
    MOV AX,word ptr [EAX*0x2 + 0x1c6ad74] ; 0056300b
    MOV EBX,EDI                         ; 00563013
        ;   Label: LAB_00563013
    SHR EBX,0x1                         ; 00563015
    ADD EBX,dword ptr [0x00604908]      ; 00563017 | DAT_00604908
    MOV word ptr [EBX],AX               ; 0056301d
    TEST dword ptr [0x01c6e2b4],0x80    ; 00563020 | DAT_01c6e2b4
    JZ 0x00563035                       ; 0056302a
        ;   XREF to: 00563035 (CONDITIONAL_JUMP)  ; LAB_00563035
    MOV EAX,[0x0060490c]                ; 0056302c | DAT_0060490c
    ADD EAX,EDI                         ; 00563031
    MOV dword ptr [EAX],ESI             ; 00563033
    ADD EDI,0x4                         ; 00563035
        ;   Label: LAB_00563035
    CMP EDI,dword ptr [0x006048a4]      ; 00563038 | DAT_006048a4
    JNC 0x00563057                      ; 0056303e
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    ADD EBP,dword ptr [0x00604d10]      ; 00563040 | DAT_00604d10
    ADD EDX,dword ptr [0x00604d14]      ; 00563046 | DAT_00604d14
    ADD ESI,dword ptr [0x00604d18]      ; 0056304c | DAT_00604d18
    JMP 0x00562fbc                      ; 00563052
        ;   XREF to: 00562fbc (UNCONDITIONAL_JUMP)  ; LAB_00562fbc
    POP EBP                             ; 00563057
        ;   Label: LAB_00563057
    POP EDI                             ; 00563058
    POP ESI                             ; 00563059
    RET                                 ; 0056305a
    MOV EAX,[0x01c6b5c0]                ; 0056305b | DAT_01c6b5c0
        ;   Label: LAB_0056305b
    JMP 0x00563013                      ; 00563060
        ;   XREF to: 00563013 (UNCONDITIONAL_JUMP)  ; LAB_00563013
    MOV EAX,dword ptr [EDI + 0x28]      ; 00563062
        ;   Label: LAB_00563062
    MOV EBX,dword ptr [ESI + 0x28]      ; 00563065
    SUB EAX,EBX                         ; 00563068
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056306a
    MOV dword ptr [0x006048ec],EBX      ; 00563070 | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00563076 | DAT_00604d18
    MOV EAX,[0x006048ec]                ; 0056307c | DAT_006048ec
    MOV EBX,dword ptr [0x00604d18]      ; 00563081 | DAT_00604d18
    MOV ESI,dword ptr [0x0060490c]      ; 00563087 | DAT_0060490c
    MOV ECX,dword ptr [0x006048a4]      ; 0056308d | DAT_006048a4
    MOV dword ptr [ESI],EAX             ; 00563093
        ;   Label: LAB_00563093
    ADD EAX,EBX                         ; 00563095
    ADD ESI,0x4                         ; 00563097
    SUB ECX,0x4                         ; 0056309a
    JG 0x00563093                       ; 0056309d
        ;   XREF to: 00563093 (CONDITIONAL_JUMP)  ; LAB_00563093
    POP EBP                             ; 0056309f
    POP EDI                             ; 005630a0
    POP ESI                             ; 005630a1
    RET                                 ; 005630a2

