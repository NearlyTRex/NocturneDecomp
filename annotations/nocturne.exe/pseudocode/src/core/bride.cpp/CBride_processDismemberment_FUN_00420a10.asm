; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_00420a10(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420cb3
;
; Referenced Globals:
;   undefined1* switchdataD_004209f8 = 00420a50
;   string s_limb?.wav_00579ba9
;   double DOUBLE_00579bb5 = 0.333000000000000
;   double DOUBLE_00579bbd = 7
;   double DOUBLE_00579bc5 = 0.5
;   double DOUBLE_00579bcd = 2.5
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420a10
        ;   Label: core_bride.cpp_CBride_processDismemberment_FUN_00420a10
    PUSH ESI                            ; 00420a11
    PUSH EDI                            ; 00420a12
    PUSH EBP                            ; 00420a13
    MOV EBP,ESP                         ; 00420a14
    SUB ESP,0x10                        ; 00420a16
    AND ESP,0xfffffff8                  ; 00420a19
    MOV ESI,dword ptr [EBP + 0x14]      ; 00420a1c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00420a1f
    FLD float ptr [EBX + 0x2c]          ; 00420a22
    FLDZ                                ; 00420a25
    FCOMPP                              ; 00420a27
    FNSTSW AX                           ; 00420a29
    SAHF                                ; 00420a2b
    JNC 0x00420a58                      ; 00420a2c
        ;   XREF to: 00420a58 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX],-0x1            ; 00420a2e
    JNZ 0x00420a58                      ; 00420a31
        ;   XREF to: 00420a58 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00420a33
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 00420a38
    MOV EDI,0x5                         ; 00420a3a
    SAR EDX,0x1f                        ; 00420a3f
    IDIV EDI                            ; 00420a42
    CMP EDX,0x4                         ; 00420a44
    JA 0x00420a58                       ; 00420a47
        ;   XREF to: 00420a58 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4209f8]  ; 00420a49 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0xbd24]    ; 00420a50
        ;   Label: caseD_0
    MOV dword ptr [EBX],EAX             ; 00420a56
        ;   Label: LAB_00420a56
    MOV ECX,dword ptr [ESI + 0xbd24]    ; 00420a58
        ;   Label: default
    MOV EAX,dword ptr [EBX]             ; 00420a5e
    CMP EAX,ECX                         ; 00420a60
    JNZ 0x00420bcc                      ; 00420a62
        ;   XREF to: 00420bcc (CONDITIONAL_JUMP)  ; LAB_00420bcc
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00420a68
        ;   Label: LAB_00420a68
    MOV EDX,dword ptr [ESI + 0xbd44]    ; 00420a6b
    MOV dword ptr [ESP],EAX             ; 00420a71
    CMP EDX,dword ptr [EBX]             ; 00420a74
    JNZ 0x00420a88                      ; 00420a76
        ;   XREF to: 00420a88 (CONDITIONAL_JUMP)  ; LAB_00420a88
    FLD float ptr [ESP]                 ; 00420a78
    FLD ST0                             ; 00420a7b
    FMUL double ptr [0x00579bb5]        ; 00420a7d | DOUBLE_00579bb5
    FSTP ST1                            ; 00420a83
    FSTP float ptr [ESP]                ; 00420a85
    MOV EAX,[0x005b9354]                ; 00420a88 | DAT_005b9354
        ;   Label: LAB_00420a88
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00420a8d | DAT_01c777cc
    JZ 0x00420a9d                       ; 00420a94
        ;   XREF to: 00420a9d (CONDITIONAL_JUMP)  ; LAB_00420a9d
    MOV dword ptr [ESP],0x3f800000      ; 00420a96
    MOV EAX,[0x005b9354]                ; 00420a9d | DAT_005b9354
        ;   Label: LAB_00420a9d
    MOV EDX,dword ptr [EAX + 0x14]      ; 00420aa2 | DAT_01c77600
    TEST EDX,EDX                        ; 00420aa5
    JNZ 0x00420aac                      ; 00420aa7
        ;   XREF to: 00420aac (CONDITIONAL_JUMP)  ; LAB_00420aac
    MOV dword ptr [ESP],EDX             ; 00420aa9
    PUSH dword ptr [ESP]                ; 00420aac
        ;   Label: LAB_00420aac
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00420aaf
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00420ab4
    TEST EAX,EAX                        ; 00420ab7
    JZ 0x00420b6f                       ; 00420ab9
        ;   XREF to: 00420b6f (CONDITIONAL_JUMP)  ; LAB_00420b6f
    PUSH 0x0                            ; 00420abf
    PUSH 0x0                            ; 00420ac1
    PUSH 0x0                            ; 00420ac3
    PUSH ESI                            ; 00420ac5
    LEA EAX,[EBX + 0xc]                 ; 00420ac6
    PUSH EAX                            ; 00420ac9
    LEA EAX,[ESI + 0x30]                ; 00420aca
    PUSH EAX                            ; 00420acd
    LEA EAX,[ESI + 0x20]                ; 00420ace
    PUSH EAX                            ; 00420ad1
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 00420ad2
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_createBodyPart_FUN_00415b30()
    ADD ESP,0x1c                        ; 00420ad7
    MOV EDI,EAX                         ; 00420ada
    PUSH 0x0                            ; 00420adc
    MOV dword ptr [ESP + 0x10],EAX      ; 00420ade
    MOV EAX,dword ptr [EBX]             ; 00420ae2
    PUSH EAX                            ; 00420ae4
    PUSH EDI                            ; 00420ae5
    PUSH ESI                            ; 00420ae6
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00420ae7
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    MOV EAX,dword ptr [EBX]             ; 00420aec
    MOV EDX,dword ptr [ESI + 0xbd24]    ; 00420aee
    ADD ESP,0x10                        ; 00420af4
    CMP EAX,EDX                         ; 00420af7
    JNZ 0x00420b0e                      ; 00420af9
        ;   XREF to: 00420b0e (CONDITIONAL_JUMP)  ; LAB_00420b0e
    PUSH 0x0                            ; 00420afb
    MOV ECX,dword ptr [ESI + 0xbd28]    ; 00420afd
    PUSH ECX                            ; 00420b03
    PUSH EDI                            ; 00420b04
    PUSH ESI                            ; 00420b05
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00420b06
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 00420b0b
    MOV EDI,dword ptr [ESI + 0xbd2c]    ; 00420b0e
        ;   Label: LAB_00420b0e
    CMP EDI,dword ptr [EBX]             ; 00420b14
    JNZ 0x00420b2f                      ; 00420b16
        ;   XREF to: 00420b2f (CONDITIONAL_JUMP)  ; LAB_00420b2f
    PUSH 0x0                            ; 00420b18
    MOV EAX,dword ptr [ESI + 0xbd30]    ; 00420b1a
    PUSH EAX                            ; 00420b20
    MOV EDX,dword ptr [ESP + 0x14]      ; 00420b21
    PUSH EDX                            ; 00420b25
    PUSH ESI                            ; 00420b26
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 00420b27
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0()
    ADD ESP,0x10                        ; 00420b2c
    PUSH 0x579ba9                       ; 00420b2f | = "limb?.wav"
        ;   Label: LAB_00420b2f
    PUSH ESI                            ; 00420b34
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490 ; 00420b35
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490()
    ADD ESP,0x8                         ; 00420b3a
    MOV ECX,dword ptr [ESP + 0xc]       ; 00420b3d
    PUSH ECX                            ; 00420b41
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 00420b42
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40()
    MOV EAX,dword ptr [ESI + 0xbd44]    ; 00420b47
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2290] ; 00420b4d
    ADD ESP,0x4                         ; 00420b54
    TEST EDI,EDI                        ; 00420b57
    JZ 0x00420c01                       ; 00420b59
        ;   XREF to: 00420c01 (CONDITIONAL_JUMP)  ; LAB_00420c01
    FLD float ptr [EBX + 0x8]           ; 00420b5f
        ;   Label: LAB_00420b5f
    FLD ST0                             ; 00420b62
    FMUL double ptr [0x00579bbd]        ; 00420b64 | DOUBLE_00579bbd
    FSTP ST1                            ; 00420b6a
    FSTP float ptr [EBX + 0x8]          ; 00420b6c
    MOV EDX,dword ptr [ESI + 0xbd44]    ; 00420b6f
        ;   Label: LAB_00420b6f
    MOV EAX,dword ptr [EBX]             ; 00420b75
    CMP EAX,EDX                         ; 00420b77
    JZ 0x00420c0d                       ; 00420b79
        ;   XREF to: 00420c0d (CONDITIONAL_JUMP)  ; LAB_00420c0d
    CMP EAX,dword ptr [ESI + 0xbd40]    ; 00420b7f
    JZ 0x00420b93                       ; 00420b85
        ;   XREF to: 00420b93 (CONDITIONAL_JUMP)  ; LAB_00420b93
    CMP EAX,dword ptr [ESI + 0xbd3c]    ; 00420b87
    JNZ 0x00420c24                      ; 00420b8d
        ;   XREF to: 00420c24 (CONDITIONAL_JUMP)  ; LAB_00420c24
    MOV EAX,dword ptr [EBX + 0x4]       ; 00420b93
        ;   Label: LAB_00420b93
    MOV dword ptr [EBX + 0x4],EAX       ; 00420b96
    MOV ESP,EBP                         ; 00420b99
    POP EBP                             ; 00420b9b
    POP EDI                             ; 00420b9c
    POP ESI                             ; 00420b9d
    POP EBX                             ; 00420b9e
    RET                                 ; 00420b9f
    MOV EAX,dword ptr [ESI + 0xbd28]    ; 00420ba0
        ;   Label: caseD_1
    JMP 0x00420a56                      ; 00420ba6
        ;   XREF to: 00420a56 (UNCONDITIONAL_JUMP)  ; LAB_00420a56
    MOV EAX,dword ptr [ESI + 0xbd2c]    ; 00420bab
        ;   Label: caseD_2
    JMP 0x00420a56                      ; 00420bb1
        ;   XREF to: 00420a56 (UNCONDITIONAL_JUMP)  ; LAB_00420a56
    MOV EAX,dword ptr [ESI + 0xbd30]    ; 00420bb6
        ;   Label: caseD_3
    JMP 0x00420a56                      ; 00420bbc
        ;   XREF to: 00420a56 (UNCONDITIONAL_JUMP)  ; LAB_00420a56
    MOV EAX,dword ptr [ESI + 0xbd44]    ; 00420bc1
        ;   Label: caseD_4
    JMP 0x00420a56                      ; 00420bc7
        ;   XREF to: 00420a56 (UNCONDITIONAL_JUMP)  ; LAB_00420a56
    CMP EAX,dword ptr [ESI + 0xbd28]    ; 00420bcc
        ;   Label: LAB_00420bcc
    JZ 0x00420a68                       ; 00420bd2
        ;   XREF to: 00420a68 (CONDITIONAL_JUMP)  ; LAB_00420a68
    CMP EAX,dword ptr [ESI + 0xbd2c]    ; 00420bd8
    JZ 0x00420a68                       ; 00420bde
        ;   XREF to: 00420a68 (CONDITIONAL_JUMP)  ; LAB_00420a68
    CMP EAX,dword ptr [ESI + 0xbd30]    ; 00420be4
    JZ 0x00420a68                       ; 00420bea
        ;   XREF to: 00420a68 (CONDITIONAL_JUMP)  ; LAB_00420a68
    CMP EAX,dword ptr [ESI + 0xbd44]    ; 00420bf0
    JZ 0x00420a68                       ; 00420bf6
        ;   XREF to: 00420a68 (CONDITIONAL_JUMP)  ; LAB_00420a68
    JMP 0x00420b6f                      ; 00420bfc
        ;   XREF to: 00420b6f (UNCONDITIONAL_JUMP)  ; LAB_00420b6f
    MOV dword ptr [EBX + 0x4],0x461c3c00 ; 00420c01
        ;   Label: LAB_00420c01
    JMP 0x00420b5f                      ; 00420c08
        ;   XREF to: 00420b5f (UNCONDITIONAL_JUMP)  ; LAB_00420b5f
    FLD float ptr [EBX + 0x4]           ; 00420c0d
        ;   Label: LAB_00420c0d
    FLD ST0                             ; 00420c10
    FMUL double ptr [0x00579bcd]        ; 00420c12 | DOUBLE_00579bcd
    FSTP ST1                            ; 00420c18
    FSTP float ptr [EBX + 0x4]          ; 00420c1a
    MOV ESP,EBP                         ; 00420c1d
    POP EBP                             ; 00420c1f
    POP EDI                             ; 00420c20
    POP ESI                             ; 00420c21
    POP EBX                             ; 00420c22
    RET                                 ; 00420c23
    FLD float ptr [EBX + 0x4]           ; 00420c24
        ;   Label: LAB_00420c24
    FLD ST0                             ; 00420c27
    FMUL double ptr [0x00579bc5]        ; 00420c29 | DOUBLE_00579bc5
    FSTP ST1                            ; 00420c2f
    FSTP float ptr [EBX + 0x4]          ; 00420c31
    MOV ESP,EBP                         ; 00420c34
    POP EBP                             ; 00420c36
    POP EDI                             ; 00420c37
    POP ESI                             ; 00420c38
    POP EBX                             ; 00420c39
    RET                                 ; 00420c3a

