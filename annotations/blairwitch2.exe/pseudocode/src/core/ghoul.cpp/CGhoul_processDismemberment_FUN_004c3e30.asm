; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(CGhoul *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0 at 004c412e
;
; Referenced Globals:
;   undefined1* switchdataD_004c3e0c = 004c3e6d
;   TerminatedCString s_limb_wav_005d91db
;   undefined4 DAT_005d91e7
;   undefined4 DAT_005d91ef
;   undefined4 DAT_005d91f7
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_createBodyPart_FUN_004154f0
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3e30
        ;   Label: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30
    PUSH ESI                            ; 004c3e31
    PUSH EDI                            ; 004c3e32
    PUSH EBP                            ; 004c3e33
    SUB ESP,0xc                         ; 004c3e34
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c3e37
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c3e3b
    FLD float ptr [ESI + 0x2c]          ; 004c3e3f
    FLDZ                                ; 004c3e42
    FCOMPP                              ; 004c3e44
    FNSTSW AX                           ; 004c3e46
    SAHF                                ; 004c3e48
    JNC 0x004c3e75                      ; 004c3e49
        ;   XREF to: 004c3e75 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004c3e4b
    JNZ 0x004c3e75                      ; 004c3e4e
        ;   XREF to: 004c3e75 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004c3e50
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 004c3e55
    MOV EDI,0x6                         ; 004c3e57
    SAR EDX,0x1f                        ; 004c3e5c
    IDIV EDI                            ; 004c3e5f
    CMP EDX,0x5                         ; 004c3e61
    JA 0x004c3e75                       ; 004c3e64
        ;   XREF to: 004c3e75 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c3e0c]  ; 004c3e66 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004c3e6d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004c3e73
        ;   Label: LAB_004c3e73
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 004c3e75
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004c3e7b
    CMP EAX,ECX                         ; 004c3e7d
    JNZ 0x004c4065                      ; 004c3e7f
        ;   XREF to: 004c4065 (CONDITIONAL_JUMP)  ; LAB_004c4065
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004c3e85
        ;   Label: LAB_004c3e85
    MOV EBP,dword ptr [EBX + 0x10b44]   ; 004c3e88
    MOV dword ptr [ESP + 0x8],EAX       ; 004c3e8e
    CMP EBP,dword ptr [ESI]             ; 004c3e92
    JNZ 0x004c3e9e                      ; 004c3e94
        ;   XREF to: 004c3e9e (CONDITIONAL_JUMP)  ; LAB_004c3e9e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004c3e96
    MOV EDX,dword ptr [EBX + 0x10b40]   ; 004c3e9e
        ;   Label: LAB_004c3e9e
    CMP EDX,dword ptr [ESI]             ; 004c3ea4
    JNZ 0x004c3eb0                      ; 004c3ea6
        ;   XREF to: 004c3eb0 (CONDITIONAL_JUMP)  ; LAB_004c3eb0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004c3ea8
    MOV EAX,[0x00616494]                ; 004c3eb0 | g_CGamePtr
        ;   Label: LAB_004c3eb0
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004c3eb5 | g_CGameInstance.field460_0x1fc
    JZ 0x004c3ec6                       ; 004c3ebc
        ;   XREF to: 004c3ec6 (CONDITIONAL_JUMP)  ; LAB_004c3ec6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004c3ebe
    MOV EAX,[0x00616494]                ; 004c3ec6 | g_CGamePtr
        ;   Label: LAB_004c3ec6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004c3ecb | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 004c3ece
    JNZ 0x004c3ed6                      ; 004c3ed0
        ;   XREF to: 004c3ed6 (CONDITIONAL_JUMP)  ; LAB_004c3ed6
    MOV dword ptr [ESP + 0x8],EDX       ; 004c3ed2
    PUSH dword ptr [ESP + 0x8]          ; 004c3ed6
        ;   Label: LAB_004c3ed6
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c3eda
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c3edf
    TEST EAX,EAX                        ; 004c3ee2
    JZ 0x004c3ffc                       ; 004c3ee4
        ;   XREF to: 004c3ffc (CONDITIONAL_JUMP)  ; LAB_004c3ffc
    PUSH 0x0                            ; 004c3eea
    PUSH 0x0                            ; 004c3eec
    PUSH 0x0                            ; 004c3eee
    PUSH EBX                            ; 004c3ef0
    LEA EAX,[ESI + 0xc]                 ; 004c3ef1
    PUSH EAX                            ; 004c3ef4
    LEA EAX,[EBX + 0x30]                ; 004c3ef5
    PUSH EAX                            ; 004c3ef8
    LEA EAX,[EBX + 0x20]                ; 004c3ef9
    PUSH EAX                            ; 004c3efc
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 004c3efd
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004c3f02
    MOV EDI,EAX                         ; 004c3f05
    PUSH 0x0                            ; 004c3f07
    MOV EBP,EAX                         ; 004c3f09
    MOV EAX,dword ptr [ESI]             ; 004c3f0b
    PUSH EAX                            ; 004c3f0d
    PUSH EDI                            ; 004c3f0e
    PUSH EBX                            ; 004c3f0f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c3f10
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004c3f15
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 004c3f17
    ADD ESP,0x10                        ; 004c3f1d
    CMP EAX,EDX                         ; 004c3f20
    JNZ 0x004c3f37                      ; 004c3f22
        ;   XREF to: 004c3f37 (CONDITIONAL_JUMP)  ; LAB_004c3f37
    PUSH 0x0                            ; 004c3f24
    MOV ECX,dword ptr [EBX + 0x10b20]   ; 004c3f26
    PUSH ECX                            ; 004c3f2c
    PUSH EDI                            ; 004c3f2d
    PUSH EBX                            ; 004c3f2e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c3f2f
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004c3f34
    MOV EDI,dword ptr [EBX + 0x10b24]   ; 004c3f37
        ;   Label: LAB_004c3f37
    CMP EDI,dword ptr [ESI]             ; 004c3f3d
    JNZ 0x004c3f54                      ; 004c3f3f
        ;   XREF to: 004c3f54 (CONDITIONAL_JUMP)  ; LAB_004c3f54
    PUSH 0x0                            ; 004c3f41
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c3f43
    PUSH EAX                            ; 004c3f49
    PUSH EBP                            ; 004c3f4a
    PUSH EBX                            ; 004c3f4b
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c3f4c
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004c3f51
    MOV EDX,dword ptr [EBX + 0x10b40]   ; 004c3f54
        ;   Label: LAB_004c3f54
    CMP EDX,dword ptr [ESI]             ; 004c3f5a
    JNZ 0x004c3fc0                      ; 004c3f5c
        ;   XREF to: 004c3fc0 (CONDITIONAL_JUMP)  ; LAB_004c3fc0
    PUSH 0x0                            ; 004c3f5e
    LEA EDI,[ESI + 0xc]                 ; 004c3f60
    PUSH EDI                            ; 004c3f63
    MOV ECX,dword ptr [EBX + 0x10b24]   ; 004c3f64
    PUSH ECX                            ; 004c3f6a
    PUSH EBX                            ; 004c3f6b
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004c3f6c
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c3f71
    PUSH 0x0                            ; 004c3f74
    PUSH EDI                            ; 004c3f76
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c3f77
    PUSH EAX                            ; 004c3f7d
    PUSH EBX                            ; 004c3f7e
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004c3f7f
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c3f84
    PUSH 0x0                            ; 004c3f87
    PUSH EDI                            ; 004c3f89
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 004c3f8a
    PUSH EDX                            ; 004c3f90
    PUSH EBX                            ; 004c3f91
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004c3f92
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c3f97
    PUSH 0x0                            ; 004c3f9a
    PUSH EDI                            ; 004c3f9c
    MOV ECX,dword ptr [EBX + 0x10b20]   ; 004c3f9d
    PUSH ECX                            ; 004c3fa3
    PUSH EBX                            ; 004c3fa4
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004c3fa5
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c3faa
    PUSH 0x0                            ; 004c3fad
    PUSH EDI                            ; 004c3faf
    MOV EDI,dword ptr [EBX + 0x10b44]   ; 004c3fb0
    PUSH EDI                            ; 004c3fb6
    PUSH EBX                            ; 004c3fb7
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004c3fb8
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c3fbd
    PUSH 0x5d91db                       ; 004c3fc0 | = "limb?.wav"
        ;   Label: LAB_004c3fc0
    PUSH EBX                            ; 004c3fc5
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260 ; 004c3fc6
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004c3fcb
    PUSH EBP                            ; 004c3fce
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 004c3fcf
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10b44]   ; 004c3fd4
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c3fda
    ADD ESP,0x4                         ; 004c3fe1
    TEST EBP,EBP                        ; 004c3fe4
    JZ 0x004c40a6                       ; 004c3fe6
        ;   XREF to: 004c40a6 (CONDITIONAL_JUMP)  ; LAB_004c40a6
    FLD float ptr [ESI + 0x8]           ; 004c3fec
        ;   Label: LAB_004c3fec
    FLD ST0                             ; 004c3fef
    FMUL double ptr [0x005d91e7]        ; 004c3ff1 | DAT_005d91e7
    FSTP ST1                            ; 004c3ff7
    FSTP float ptr [ESI + 0x8]          ; 004c3ff9
    MOV EDX,dword ptr [EBX + 0x10b44]   ; 004c3ffc
        ;   Label: LAB_004c3ffc
    MOV EAX,dword ptr [ESI]             ; 004c4002
    CMP EAX,EDX                         ; 004c4004
    JZ 0x004c40b2                       ; 004c4006
        ;   XREF to: 004c40b2 (CONDITIONAL_JUMP)  ; LAB_004c40b2
    CMP EAX,dword ptr [EBX + 0x10b3c]   ; 004c400c
    JZ 0x004c4020                       ; 004c4012
        ;   XREF to: 004c4020 (CONDITIONAL_JUMP)  ; LAB_004c4020
    CMP EAX,dword ptr [EBX + 0x10b40]   ; 004c4014
    JNZ 0x004c40ca                      ; 004c401a
        ;   XREF to: 004c40ca (CONDITIONAL_JUMP)  ; LAB_004c40ca
    MOV EAX,dword ptr [ESI + 0x4]       ; 004c4020
        ;   Label: LAB_004c4020
    MOV dword ptr [ESI + 0x4],EAX       ; 004c4023
    ADD ESP,0xc                         ; 004c4026
    POP EBP                             ; 004c4029
    POP EDI                             ; 004c402a
    POP ESI                             ; 004c402b
    POP EBX                             ; 004c402c
    RET                                 ; 004c402d
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c402e
        ;   Label: caseD_1
    JMP 0x004c3e73                      ; 004c4034
        ;   XREF to: 004c3e73 (UNCONDITIONAL_JUMP)  ; LAB_004c3e73
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 004c4039
        ;   Label: caseD_2
    JMP 0x004c3e73                      ; 004c403f
        ;   XREF to: 004c3e73 (UNCONDITIONAL_JUMP)  ; LAB_004c3e73
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004c4044
        ;   Label: caseD_3
    JMP 0x004c3e73                      ; 004c404a
        ;   XREF to: 004c3e73 (UNCONDITIONAL_JUMP)  ; LAB_004c3e73
    MOV EAX,dword ptr [EBX + 0x10b44]   ; 004c404f
        ;   Label: caseD_4
    JMP 0x004c3e73                      ; 004c4055
        ;   XREF to: 004c3e73 (UNCONDITIONAL_JUMP)  ; LAB_004c3e73
    MOV EAX,dword ptr [EBX + 0x10b40]   ; 004c405a
        ;   Label: caseD_5
    JMP 0x004c3e73                      ; 004c4060
        ;   XREF to: 004c3e73 (UNCONDITIONAL_JUMP)  ; LAB_004c3e73
    CMP EAX,dword ptr [EBX + 0x10b20]   ; 004c4065
        ;   Label: LAB_004c4065
    JZ 0x004c3e85                       ; 004c406b
        ;   XREF to: 004c3e85 (CONDITIONAL_JUMP)  ; LAB_004c3e85
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 004c4071
    JZ 0x004c3e85                       ; 004c4077
        ;   XREF to: 004c3e85 (CONDITIONAL_JUMP)  ; LAB_004c3e85
    CMP EAX,dword ptr [EBX + 0x10b28]   ; 004c407d
    JZ 0x004c3e85                       ; 004c4083
        ;   XREF to: 004c3e85 (CONDITIONAL_JUMP)  ; LAB_004c3e85
    CMP EAX,dword ptr [EBX + 0x10b40]   ; 004c4089
    JZ 0x004c3e85                       ; 004c408f
        ;   XREF to: 004c3e85 (CONDITIONAL_JUMP)  ; LAB_004c3e85
    CMP EAX,dword ptr [EBX + 0x10b44]   ; 004c4095
    JZ 0x004c3e85                       ; 004c409b
        ;   XREF to: 004c3e85 (CONDITIONAL_JUMP)  ; LAB_004c3e85
    JMP 0x004c3ffc                      ; 004c40a1
        ;   XREF to: 004c3ffc (UNCONDITIONAL_JUMP)  ; LAB_004c3ffc
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004c40a6
        ;   Label: LAB_004c40a6
    JMP 0x004c3fec                      ; 004c40ad
        ;   XREF to: 004c3fec (UNCONDITIONAL_JUMP)  ; LAB_004c3fec
    FLD float ptr [ESI + 0x4]           ; 004c40b2
        ;   Label: LAB_004c40b2
    FLD ST0                             ; 004c40b5
    FMUL double ptr [0x005d91f7]        ; 004c40b7 | DAT_005d91f7
    FSTP ST1                            ; 004c40bd
    FSTP float ptr [ESI + 0x4]          ; 004c40bf
    ADD ESP,0xc                         ; 004c40c2
    POP EBP                             ; 004c40c5
    POP EDI                             ; 004c40c6
    POP ESI                             ; 004c40c7
    POP EBX                             ; 004c40c8
    RET                                 ; 004c40c9
    FLD float ptr [ESI + 0x4]           ; 004c40ca
        ;   Label: LAB_004c40ca
    FLD ST0                             ; 004c40cd
    FMUL double ptr [0x005d91ef]        ; 004c40cf | DAT_005d91ef
    FSTP ST1                            ; 004c40d5
    FSTP float ptr [ESI + 0x4]          ; 004c40d7
    ADD ESP,0xc                         ; 004c40da
    POP EBP                             ; 004c40dd
    POP EDI                             ; 004c40de
    POP ESI                             ; 004c40df
    POP EBX                             ; 004c40e0
    RET                                 ; 004c40e1

