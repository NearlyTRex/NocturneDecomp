; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_00448b70(CZombieCow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cow.cpp_CZombieCow_processDamage_FUN_00448df0 at 00448dfd
;
; Referenced Globals:
;   undefined1* switchdataD_00448b60 = 00448bad
;   TerminatedCString s_limb_wav_005d72f2
;   undefined4 DAT_005d72fe
;   undefined4 DAT_005d7306
;   undefined4 DAT_005d730e
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

    PUSH EBX                            ; 00448b70
        ;   Label: core_cow.cpp_CZombieCow_processDismemberment_FUN_00448b70
    PUSH ESI                            ; 00448b71
    PUSH EDI                            ; 00448b72
    PUSH EBP                            ; 00448b73
    SUB ESP,0xc                         ; 00448b74
    MOV EBX,dword ptr [ESP + 0x20]      ; 00448b77
    MOV ESI,dword ptr [ESP + 0x24]      ; 00448b7b
    FLD float ptr [ESI + 0x2c]          ; 00448b7f
    FLDZ                                ; 00448b82
    FCOMPP                              ; 00448b84
    FNSTSW AX                           ; 00448b86
    SAHF                                ; 00448b88
    JNC 0x00448bb5                      ; 00448b89
        ;   XREF to: 00448bb5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00448b8b
    JNZ 0x00448bb5                      ; 00448b8e
        ;   XREF to: 00448bb5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00448b90
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 00448b95
    MOV EDI,0x4                         ; 00448b97
    SAR EDX,0x1f                        ; 00448b9c
    IDIV EDI                            ; 00448b9f
    CMP EDX,0x3                         ; 00448ba1
    JA 0x00448bb5                       ; 00448ba4
        ;   XREF to: 00448bb5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x448b60]  ; 00448ba6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00448bad
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00448bb3
        ;   Label: LAB_00448bb3
    MOV ECX,dword ptr [EBX + 0xc290]    ; 00448bb5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00448bbb
    CMP EAX,ECX                         ; 00448bbd
    JNZ 0x00448d84                      ; 00448bbf
        ;   XREF to: 00448d84 (CONDITIONAL_JUMP)  ; LAB_00448d84
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00448bc5
        ;   Label: LAB_00448bc5
    MOV dword ptr [ESP + 0x8],EAX       ; 00448bc8
    MOV EAX,[0x0061d95c]                ; 00448bcc | g_CGamePtr
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00448bd1 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x00448be2                       ; 00448bd8
        ;   XREF to: 00448be2 (CONDITIONAL_JUMP)  ; LAB_00448be2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00448bda
    MOV EAX,[0x0061d95c]                ; 00448be2 | g_CGamePtr
        ;   Label: LAB_00448be2
    MOV EDX,dword ptr [EAX + 0x14]      ; 00448be7 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 00448bea
    JNZ 0x00448bf2                      ; 00448bec
        ;   XREF to: 00448bf2 (CONDITIONAL_JUMP)  ; LAB_00448bf2
    MOV dword ptr [ESP + 0x8],EDX       ; 00448bee
    PUSH dword ptr [ESP + 0x8]          ; 00448bf2
        ;   Label: LAB_00448bf2
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00448bf6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00448bfb
    TEST EAX,EAX                        ; 00448bfe
    JZ 0x00448d3d                       ; 00448c00
        ;   XREF to: 00448d3d (CONDITIONAL_JUMP)  ; LAB_00448d3d
    PUSH 0x0                            ; 00448c06
    PUSH 0x0                            ; 00448c08
    PUSH 0x0                            ; 00448c0a
    PUSH EBX                            ; 00448c0c
    LEA EDI,[ESI + 0xc]                 ; 00448c0d
    PUSH EDI                            ; 00448c10
    LEA EAX,[EBX + 0x30]                ; 00448c11
    PUSH EAX                            ; 00448c14
    LEA EAX,[EBX + 0x20]                ; 00448c15
    PUSH EAX                            ; 00448c18
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 00448c19
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00448c1e
    PUSH 0x0                            ; 00448c21
    MOV EDX,dword ptr [ESI]             ; 00448c23
    PUSH EDX                            ; 00448c25
    PUSH EAX                            ; 00448c26
    PUSH EBX                            ; 00448c27
    MOV EBP,EAX                         ; 00448c28
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 00448c2a
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 00448c2f
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 00448c31
    ADD ESP,0x10                        ; 00448c37
    CMP EAX,ECX                         ; 00448c3a
    JNZ 0x00448ced                      ; 00448c3c
        ;   XREF to: 00448ced (CONDITIONAL_JUMP)  ; LAB_00448ced
    PUSH 0x0                            ; 00448c42
    PUSH EDI                            ; 00448c44
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00448c45
    PUSH EAX                            ; 00448c4b
    PUSH EBX                            ; 00448c4c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448c4d
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448c52
    PUSH 0x0                            ; 00448c55
    PUSH EDI                            ; 00448c57
    MOV EDX,dword ptr [EBX + 0xc278]    ; 00448c58
    PUSH EDX                            ; 00448c5e
    PUSH EBX                            ; 00448c5f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448c60
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448c65
    PUSH 0x0                            ; 00448c68
    PUSH EDI                            ; 00448c6a
    MOV ECX,dword ptr [EBX + 0xc27c]    ; 00448c6b
    PUSH ECX                            ; 00448c71
    PUSH EBX                            ; 00448c72
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448c73
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448c78
    PUSH 0x0                            ; 00448c7b
    PUSH EDI                            ; 00448c7d
    MOV EAX,dword ptr [EBX + 0xc280]    ; 00448c7e
    PUSH EAX                            ; 00448c84
    PUSH EBX                            ; 00448c85
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448c86
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448c8b
    PUSH 0x0                            ; 00448c8e
    PUSH EDI                            ; 00448c90
    MOV EDX,dword ptr [EBX + 0xc284]    ; 00448c91
    PUSH EDX                            ; 00448c97
    PUSH EBX                            ; 00448c98
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448c99
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448c9e
    PUSH 0x0                            ; 00448ca1
    PUSH EDI                            ; 00448ca3
    MOV ECX,dword ptr [EBX + 0xc288]    ; 00448ca4
    PUSH ECX                            ; 00448caa
    PUSH EBX                            ; 00448cab
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448cac
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448cb1
    PUSH 0x0                            ; 00448cb4
    PUSH EDI                            ; 00448cb6
    MOV EAX,dword ptr [EBX + 0xc290]    ; 00448cb7
    PUSH EAX                            ; 00448cbd
    PUSH EBX                            ; 00448cbe
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448cbf
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448cc4
    PUSH 0x0                            ; 00448cc7
    PUSH EDI                            ; 00448cc9
    MOV EDX,dword ptr [EBX + 0xc294]    ; 00448cca
    PUSH EDX                            ; 00448cd0
    PUSH EBX                            ; 00448cd1
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448cd2
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448cd7
    PUSH 0x0                            ; 00448cda
    PUSH EDI                            ; 00448cdc
    MOV ECX,dword ptr [EBX + 0xc298]    ; 00448cdd
    PUSH ECX                            ; 00448ce3
    PUSH EBX                            ; 00448ce4
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00448ce5
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00448cea
    PUSH 0x5d72f2                       ; 00448ced | = "limb?.wav"
        ;   Label: LAB_00448ced
    PUSH EBX                            ; 00448cf2
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 00448cf3
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00448cf8
    PUSH EBP                            ; 00448cfb
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00448cfc
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00448d01
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00448d07
    ADD ESP,0x4                         ; 00448d0e
    TEST EDI,EDI                        ; 00448d11
    JZ 0x00448db6                       ; 00448d13
        ;   XREF to: 00448db6 (CONDITIONAL_JUMP)  ; LAB_00448db6
    MOV EAX,dword ptr [EBX + 0xc290]    ; 00448d19
        ;   Label: LAB_00448d19
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00448d1f
    JZ 0x00448dc2                       ; 00448d27
        ;   XREF to: 00448dc2 (CONDITIONAL_JUMP)  ; LAB_00448dc2
    FLD float ptr [ESI + 0x8]           ; 00448d2d
        ;   Label: LAB_00448d2d
    FLD ST0                             ; 00448d30
    FMUL double ptr [0x005d72fe]        ; 00448d32 | DAT_005d72fe
    FSTP ST1                            ; 00448d38
    FSTP float ptr [ESI + 0x8]          ; 00448d3a
    MOV EDX,dword ptr [EBX + 0xc274]    ; 00448d3d
        ;   Label: LAB_00448d3d
    CMP EDX,dword ptr [ESI]             ; 00448d43
    JNZ 0x00448dce                      ; 00448d45
        ;   XREF to: 00448dce (CONDITIONAL_JUMP)  ; LAB_00448dce
    FLD float ptr [ESI + 0x4]           ; 00448d4b
    FLD ST0                             ; 00448d4e
    FMUL double ptr [0x005d730e]        ; 00448d50 | DAT_005d730e
    FSTP ST1                            ; 00448d56
    FSTP float ptr [ESI + 0x4]          ; 00448d58
    ADD ESP,0xc                         ; 00448d5b
    POP EBP                             ; 00448d5e
    POP EDI                             ; 00448d5f
    POP ESI                             ; 00448d60
    POP EBX                             ; 00448d61
    RET                                 ; 00448d62
    MOV EAX,dword ptr [EBX + 0xc290]    ; 00448d63
        ;   Label: caseD_1
    JMP 0x00448bb3                      ; 00448d69
        ;   XREF to: 00448bb3 (UNCONDITIONAL_JUMP)  ; LAB_00448bb3
    MOV EAX,dword ptr [EBX + 0xc294]    ; 00448d6e
        ;   Label: caseD_2
    JMP 0x00448bb3                      ; 00448d74
        ;   XREF to: 00448bb3 (UNCONDITIONAL_JUMP)  ; LAB_00448bb3
    MOV EAX,dword ptr [EBX + 0xc298]    ; 00448d79
        ;   Label: caseD_3
    JMP 0x00448bb3                      ; 00448d7f
        ;   XREF to: 00448bb3 (UNCONDITIONAL_JUMP)  ; LAB_00448bb3
    CMP EAX,dword ptr [EBX + 0xc294]    ; 00448d84
        ;   Label: LAB_00448d84
    JZ 0x00448bc5                       ; 00448d8a
        ;   XREF to: 00448bc5 (CONDITIONAL_JUMP)  ; LAB_00448bc5
    CMP EAX,dword ptr [EBX + 0xc298]    ; 00448d90
    JZ 0x00448bc5                       ; 00448d96
        ;   XREF to: 00448bc5 (CONDITIONAL_JUMP)  ; LAB_00448bc5
    CMP EAX,dword ptr [EBX + 0xc274]    ; 00448d9c
    JZ 0x00448bc5                       ; 00448da2
        ;   XREF to: 00448bc5 (CONDITIONAL_JUMP)  ; LAB_00448bc5
    CMP EAX,dword ptr [EBX + 0xc28c]    ; 00448da8
    JZ 0x00448bc5                       ; 00448dae
        ;   XREF to: 00448bc5 (CONDITIONAL_JUMP)  ; LAB_00448bc5
    JMP 0x00448d3d                      ; 00448db4
        ;   XREF to: 00448d3d (UNCONDITIONAL_JUMP)  ; LAB_00448d3d
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00448db6
        ;   Label: LAB_00448db6
    JMP 0x00448d19                      ; 00448dbd
        ;   XREF to: 00448d19 (UNCONDITIONAL_JUMP)  ; LAB_00448d19
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00448dc2
        ;   Label: LAB_00448dc2
    JMP 0x00448d2d                      ; 00448dc9
        ;   XREF to: 00448d2d (UNCONDITIONAL_JUMP)  ; LAB_00448d2d
    FLD float ptr [ESI + 0x4]           ; 00448dce
        ;   Label: LAB_00448dce
    FLD ST0                             ; 00448dd1
    FMUL double ptr [0x005d7306]        ; 00448dd3 | DAT_005d7306
    FSTP ST1                            ; 00448dd9
    FSTP float ptr [ESI + 0x4]          ; 00448ddb
    ADD ESP,0xc                         ; 00448dde
    POP EBP                             ; 00448de1
    POP EDI                             ; 00448de2
    POP ESI                             ; 00448de3
    POP EBX                             ; 00448de4
    RET                                 ; 00448de5

