; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004f3cb0(CImp *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_imp.cpp_CImp_processDamage_FUN_004f3f50 at 004f3fd4
;
; Referenced Globals:
;   undefined1* switchdataD_004f3c98 = 004f3ced
;   TerminatedCString s_limb_wav_005e5697
;   undefined4 DAT_005e56a2
;   undefined4 DAT_005e56aa
;   undefined4 DAT_005e56b2
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3cb0
        ;   Label: core_imp.cpp_CImp_processDismemberment_FUN_004f3cb0
    PUSH ESI                            ; 004f3cb1
    PUSH EDI                            ; 004f3cb2
    PUSH EBP                            ; 004f3cb3
    SUB ESP,0xc                         ; 004f3cb4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f3cb7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f3cbb
    FLD float ptr [ESI + 0x2c]          ; 004f3cbf
    FLDZ                                ; 004f3cc2
    FCOMPP                              ; 004f3cc4
    FNSTSW AX                           ; 004f3cc6
    SAHF                                ; 004f3cc8
    JNC 0x004f3cf5                      ; 004f3cc9
        ;   XREF to: 004f3cf5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004f3ccb
    JNZ 0x004f3cf5                      ; 004f3cce
        ;   XREF to: 004f3cf5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004f3cd0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 004f3cd5
    MOV EDI,0x6                         ; 004f3cd7
    SAR EDX,0x1f                        ; 004f3cdc
    IDIV EDI                            ; 004f3cdf
    CMP EDX,0x5                         ; 004f3ce1
    JA 0x004f3cf5                       ; 004f3ce4
        ;   XREF to: 004f3cf5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4f3c98]  ; 004f3ce6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc274]    ; 004f3ced
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004f3cf3
        ;   Label: LAB_004f3cf3
    MOV ECX,dword ptr [EBX + 0xc274]    ; 004f3cf5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004f3cfb
    CMP EAX,ECX                         ; 004f3cfd
    JNZ 0x004f3ed5                      ; 004f3cff
        ;   XREF to: 004f3ed5 (CONDITIONAL_JUMP)  ; LAB_004f3ed5
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004f3d05
        ;   Label: LAB_004f3d05
    MOV EBP,dword ptr [EBX + 0xc29c]    ; 004f3d08
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3d0e
    CMP EBP,dword ptr [ESI]             ; 004f3d12
    JNZ 0x004f3d1e                      ; 004f3d14
        ;   XREF to: 004f3d1e (CONDITIONAL_JUMP)  ; LAB_004f3d1e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004f3d16
    MOV EDX,dword ptr [EBX + 0xc298]    ; 004f3d1e
        ;   Label: LAB_004f3d1e
    CMP EDX,dword ptr [ESI]             ; 004f3d24
    JNZ 0x004f3d30                      ; 004f3d26
        ;   XREF to: 004f3d30 (CONDITIONAL_JUMP)  ; LAB_004f3d30
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004f3d28
    MOV EAX,[0x0061d95c]                ; 004f3d30 | g_CGamePtr
        ;   Label: LAB_004f3d30
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004f3d35 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004f3d46                       ; 004f3d3c
        ;   XREF to: 004f3d46 (CONDITIONAL_JUMP)  ; LAB_004f3d46
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004f3d3e
    MOV EAX,[0x0061d95c]                ; 004f3d46 | g_CGamePtr
        ;   Label: LAB_004f3d46
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f3d4b | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004f3d4e
    JNZ 0x004f3d56                      ; 004f3d50
        ;   XREF to: 004f3d56 (CONDITIONAL_JUMP)  ; LAB_004f3d56
    MOV dword ptr [ESP + 0x8],EDX       ; 004f3d52
    PUSH dword ptr [ESP + 0x8]          ; 004f3d56
        ;   Label: LAB_004f3d56
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004f3d5a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004f3d5f
    TEST EAX,EAX                        ; 004f3d62
    JZ 0x004f3e6c                       ; 004f3d64
        ;   XREF to: 004f3e6c (CONDITIONAL_JUMP)  ; LAB_004f3e6c
    MOV EDI,dword ptr [EBX + 0x27a0]    ; 004f3d6a
    PUSH EDI                            ; 004f3d70
    PUSH 0x0                            ; 004f3d71
    PUSH 0x0                            ; 004f3d73
    PUSH EBX                            ; 004f3d75
    LEA EAX,[ESI + 0xc]                 ; 004f3d76
    PUSH EAX                            ; 004f3d79
    LEA EAX,[EBX + 0x30]                ; 004f3d7a
    PUSH EAX                            ; 004f3d7d
    LEA EAX,[EBX + 0x20]                ; 004f3d7e
    PUSH EAX                            ; 004f3d81
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 004f3d82
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004f3d87
    MOV EDI,EAX                         ; 004f3d8a
    PUSH 0x1                            ; 004f3d8c
    MOV EBP,EAX                         ; 004f3d8e
    MOV EAX,dword ptr [ESI]             ; 004f3d90
    PUSH EAX                            ; 004f3d92
    PUSH EDI                            ; 004f3d93
    PUSH EBX                            ; 004f3d94
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004f3d95
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004f3d9a
    MOV EDX,dword ptr [EBX + 0xc274]    ; 004f3d9c
    ADD ESP,0x10                        ; 004f3da2
    CMP EAX,EDX                         ; 004f3da5
    JNZ 0x004f3dbc                      ; 004f3da7
        ;   XREF to: 004f3dbc (CONDITIONAL_JUMP)  ; LAB_004f3dbc
    PUSH 0x0                            ; 004f3da9
    MOV ECX,dword ptr [EBX + 0xc278]    ; 004f3dab
    PUSH ECX                            ; 004f3db1
    PUSH EDI                            ; 004f3db2
    PUSH EBX                            ; 004f3db3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004f3db4
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004f3db9
    MOV EDI,dword ptr [EBX + 0xc27c]    ; 004f3dbc
        ;   Label: LAB_004f3dbc
    CMP EDI,dword ptr [ESI]             ; 004f3dc2
    JNZ 0x004f3dd9                      ; 004f3dc4
        ;   XREF to: 004f3dd9 (CONDITIONAL_JUMP)  ; LAB_004f3dd9
    PUSH 0x0                            ; 004f3dc6
    MOV EAX,dword ptr [EBX + 0xc280]    ; 004f3dc8
    PUSH EAX                            ; 004f3dce
    PUSH EBP                            ; 004f3dcf
    PUSH EBX                            ; 004f3dd0
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 004f3dd1
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004f3dd6
    MOV EDX,dword ptr [EBX + 0xc298]    ; 004f3dd9
        ;   Label: LAB_004f3dd9
    CMP EDX,dword ptr [ESI]             ; 004f3ddf
    JNZ 0x004f3e45                      ; 004f3de1
        ;   XREF to: 004f3e45 (CONDITIONAL_JUMP)  ; LAB_004f3e45
    PUSH 0x1                            ; 004f3de3
    LEA EDI,[ESI + 0xc]                 ; 004f3de5
    PUSH EDI                            ; 004f3de8
    MOV ECX,dword ptr [EBX + 0xc27c]    ; 004f3de9
    PUSH ECX                            ; 004f3def
    PUSH EBX                            ; 004f3df0
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004f3df1
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f3df6
    PUSH 0x1                            ; 004f3df9
    PUSH EDI                            ; 004f3dfb
    MOV EAX,dword ptr [EBX + 0xc280]    ; 004f3dfc
    PUSH EAX                            ; 004f3e02
    PUSH EBX                            ; 004f3e03
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004f3e04
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f3e09
    PUSH 0x1                            ; 004f3e0c
    PUSH EDI                            ; 004f3e0e
    MOV EDX,dword ptr [EBX + 0xc274]    ; 004f3e0f
    PUSH EDX                            ; 004f3e15
    PUSH EBX                            ; 004f3e16
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004f3e17
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f3e1c
    PUSH 0x1                            ; 004f3e1f
    PUSH EDI                            ; 004f3e21
    MOV ECX,dword ptr [EBX + 0xc278]    ; 004f3e22
    PUSH ECX                            ; 004f3e28
    PUSH EBX                            ; 004f3e29
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004f3e2a
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f3e2f
    PUSH 0x1                            ; 004f3e32
    PUSH EDI                            ; 004f3e34
    MOV EDI,dword ptr [EBX + 0xc29c]    ; 004f3e35
    PUSH EDI                            ; 004f3e3b
    PUSH EBX                            ; 004f3e3c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 004f3e3d
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f3e42
    PUSH 0x5e5697                       ; 004f3e45 | = "limb?.wav"
        ;   Label: LAB_004f3e45
    PUSH EBX                            ; 004f3e4a
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 004f3e4b
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004f3e50
    PUSH EBP                            ; 004f3e53
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 004f3e54
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004f3e59
    FLD float ptr [ESI + 0x8]           ; 004f3e5c
    FLD ST0                             ; 004f3e5f
    FMUL double ptr [0x005e56a2]        ; 004f3e61 | DAT_005e56a2
    FSTP ST1                            ; 004f3e67
    FSTP float ptr [ESI + 0x8]          ; 004f3e69
    MOV EBP,dword ptr [EBX + 0xc29c]    ; 004f3e6c
        ;   Label: LAB_004f3e6c
    MOV EAX,dword ptr [ESI]             ; 004f3e72
    CMP EAX,EBP                         ; 004f3e74
    JZ 0x004f3f16                       ; 004f3e76
        ;   XREF to: 004f3f16 (CONDITIONAL_JUMP)  ; LAB_004f3f16
    CMP EAX,dword ptr [EBX + 0xc294]    ; 004f3e7c
    JZ 0x004f3e90                       ; 004f3e82
        ;   XREF to: 004f3e90 (CONDITIONAL_JUMP)  ; LAB_004f3e90
    CMP EAX,dword ptr [EBX + 0xc298]    ; 004f3e84
    JNZ 0x004f3f2e                      ; 004f3e8a
        ;   XREF to: 004f3f2e (CONDITIONAL_JUMP)  ; LAB_004f3f2e
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f3e90
        ;   Label: LAB_004f3e90
    MOV dword ptr [ESI + 0x4],EAX       ; 004f3e93
    ADD ESP,0xc                         ; 004f3e96
    POP EBP                             ; 004f3e99
    POP EDI                             ; 004f3e9a
    POP ESI                             ; 004f3e9b
    POP EBX                             ; 004f3e9c
    RET                                 ; 004f3e9d
    MOV EAX,dword ptr [EBX + 0xc278]    ; 004f3e9e
        ;   Label: caseD_1
    JMP 0x004f3cf3                      ; 004f3ea4
        ;   XREF to: 004f3cf3 (UNCONDITIONAL_JUMP)  ; LAB_004f3cf3
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 004f3ea9
        ;   Label: caseD_2
    JMP 0x004f3cf3                      ; 004f3eaf
        ;   XREF to: 004f3cf3 (UNCONDITIONAL_JUMP)  ; LAB_004f3cf3
    MOV EAX,dword ptr [EBX + 0xc280]    ; 004f3eb4
        ;   Label: caseD_3
    JMP 0x004f3cf3                      ; 004f3eba
        ;   XREF to: 004f3cf3 (UNCONDITIONAL_JUMP)  ; LAB_004f3cf3
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 004f3ebf
        ;   Label: caseD_4
    JMP 0x004f3cf3                      ; 004f3ec5
        ;   XREF to: 004f3cf3 (UNCONDITIONAL_JUMP)  ; LAB_004f3cf3
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004f3eca
        ;   Label: caseD_5
    JMP 0x004f3cf3                      ; 004f3ed0
        ;   XREF to: 004f3cf3 (UNCONDITIONAL_JUMP)  ; LAB_004f3cf3
    CMP EAX,dword ptr [EBX + 0xc278]    ; 004f3ed5
        ;   Label: LAB_004f3ed5
    JZ 0x004f3d05                       ; 004f3edb
        ;   XREF to: 004f3d05 (CONDITIONAL_JUMP)  ; LAB_004f3d05
    CMP EAX,dword ptr [EBX + 0xc27c]    ; 004f3ee1
    JZ 0x004f3d05                       ; 004f3ee7
        ;   XREF to: 004f3d05 (CONDITIONAL_JUMP)  ; LAB_004f3d05
    CMP EAX,dword ptr [EBX + 0xc280]    ; 004f3eed
    JZ 0x004f3d05                       ; 004f3ef3
        ;   XREF to: 004f3d05 (CONDITIONAL_JUMP)  ; LAB_004f3d05
    CMP EAX,dword ptr [EBX + 0xc298]    ; 004f3ef9
    JZ 0x004f3d05                       ; 004f3eff
        ;   XREF to: 004f3d05 (CONDITIONAL_JUMP)  ; LAB_004f3d05
    CMP EAX,dword ptr [EBX + 0xc29c]    ; 004f3f05
    JZ 0x004f3d05                       ; 004f3f0b
        ;   XREF to: 004f3d05 (CONDITIONAL_JUMP)  ; LAB_004f3d05
    JMP 0x004f3e6c                      ; 004f3f11
        ;   XREF to: 004f3e6c (UNCONDITIONAL_JUMP)  ; LAB_004f3e6c
    FLD float ptr [ESI + 0x4]           ; 004f3f16
        ;   Label: LAB_004f3f16
    FLD ST0                             ; 004f3f19
    FMUL double ptr [0x005e56b2]        ; 004f3f1b | DAT_005e56b2
    FSTP ST1                            ; 004f3f21
    FSTP float ptr [ESI + 0x4]          ; 004f3f23
    ADD ESP,0xc                         ; 004f3f26
    POP EBP                             ; 004f3f29
    POP EDI                             ; 004f3f2a
    POP ESI                             ; 004f3f2b
    POP EBX                             ; 004f3f2c
    RET                                 ; 004f3f2d
    FLD float ptr [ESI + 0x4]           ; 004f3f2e
        ;   Label: LAB_004f3f2e
    FLD ST0                             ; 004f3f31
    FMUL double ptr [0x005e56aa]        ; 004f3f33 | DAT_005e56aa
    FSTP ST1                            ; 004f3f39
    FSTP float ptr [ESI + 0x4]          ; 004f3f3b
    ADD ESP,0xc                         ; 004f3f3e
    POP EBP                             ; 004f3f41
    POP EDI                             ; 004f3f42
    POP ESI                             ; 004f3f43
    POP EBX                             ; 004f3f44
    RET                                 ; 004f3f45

