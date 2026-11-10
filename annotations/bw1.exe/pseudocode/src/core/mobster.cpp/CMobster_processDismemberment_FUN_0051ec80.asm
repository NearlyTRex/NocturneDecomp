; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_0051ec80(CMobster *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_CMobster_processDamage_FUN_0051f040 at 0051f06c
;
; Referenced Globals:
;   undefined1* switchdataD_0051ec64 = 0051ecc0
;   TerminatedCString s_limb_wav_005e9f0a
;   undefined4 DAT_005e9f1a
;   undefined4 DAT_005e9f22
;   undefined4 DAT_005e9f2a
;   undefined4 DAT_005e9f32
;   undefined4 DAT_005e9f3a
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
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

    PUSH EBX                            ; 0051ec80
        ;   Label: core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80
    PUSH ESI                            ; 0051ec81
    PUSH EDI                            ; 0051ec82
    PUSH EBP                            ; 0051ec83
    MOV EBP,ESP                         ; 0051ec84
    SUB ESP,0x1c                        ; 0051ec86
    AND ESP,0xfffffff8                  ; 0051ec89
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051ec8c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0051ec8f
    FLD float ptr [ESI + 0x2c]          ; 0051ec92
    FLDZ                                ; 0051ec95
    FCOMPP                              ; 0051ec97
    FNSTSW AX                           ; 0051ec99
    SAHF                                ; 0051ec9b
    JNC 0x0051ecc8                      ; 0051ec9c
        ;   XREF to: 0051ecc8 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0051ec9e
    JNZ 0x0051ecc8                      ; 0051eca1
        ;   XREF to: 0051ecc8 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0051eca3
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0051eca8
    MOV EDI,0x6                         ; 0051ecaa
    SAR EDX,0x1f                        ; 0051ecaf
    IDIV EDI                            ; 0051ecb2
    CMP EDX,0x5                         ; 0051ecb4
    JA 0x0051ecc8                       ; 0051ecb7
        ;   XREF to: 0051ecc8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x51ec64]  ; 0051ecb9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc30c]    ; 0051ecc0
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0051ecc6
        ;   Label: LAB_0051ecc6
    MOV ECX,dword ptr [EBX + 0xc30c]    ; 0051ecc8
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0051ecce
    CMP EAX,ECX                         ; 0051ecd0
    JNZ 0x0051ef82                      ; 0051ecd2
        ;   XREF to: 0051ef82 (CONDITIONAL_JUMP)  ; LAB_0051ef82
    MOV ECX,dword ptr [EBX + 0xc330]    ; 0051ecd8
        ;   Label: LAB_0051ecd8
    CMP ECX,dword ptr [ESI]             ; 0051ecde
    JNZ 0x0051ed13                      ; 0051ece0
        ;   XREF to: 0051ed13 (CONDITIONAL_JUMP)  ; LAB_0051ed13
    PUSH 0x3f800000                     ; 0051ece2
    PUSH 0x0                            ; 0051ece7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0051ece9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0051ecee
    FLD float ptr [ESP + 0x20]          ; 0051ecf2
    ADD ESP,0x8                         ; 0051ecf6
    FST double ptr [ESP]                ; 0051ecf9
    FCOMP double ptr [0x005e9f1a]       ; 0051ecfc | DAT_005e9f1a
    FNSTSW AX                           ; 0051ed02
    SAHF                                ; 0051ed04
    JNC 0x0051efc3                      ; 0051ed05
        ;   XREF to: 0051efc3 (CONDITIONAL_JUMP)  ; LAB_0051efc3
    MOV EAX,dword ptr [EBX + 0xc30c]    ; 0051ed0b
    MOV dword ptr [ESI],EAX             ; 0051ed11
        ;   Label: LAB_0051ed11
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0051ed13
        ;   Label: LAB_0051ed13
    MOV EDI,dword ptr [EBX + 0xc334]    ; 0051ed16
    MOV dword ptr [ESP + 0x14],EAX      ; 0051ed1c
    CMP EDI,dword ptr [ESI]             ; 0051ed20
    JNZ 0x0051ed2c                      ; 0051ed22
        ;   XREF to: 0051ed2c (CONDITIONAL_JUMP)  ; LAB_0051ed2c
    MOV dword ptr [ESP + 0x14],0x3d4ccccd ; 0051ed24
    MOV EDX,dword ptr [EBX + 0xc330]    ; 0051ed2c
        ;   Label: LAB_0051ed2c
    CMP EDX,dword ptr [ESI]             ; 0051ed32
    JNZ 0x0051ed3e                      ; 0051ed34
        ;   XREF to: 0051ed3e (CONDITIONAL_JUMP)  ; LAB_0051ed3e
    MOV dword ptr [ESP + 0x14],0x3d75c28f ; 0051ed36
    MOV EAX,[0x0061d95c]                ; 0051ed3e | g_CGamePtr
        ;   Label: LAB_0051ed3e
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0051ed43 | g_CGameInstance.field460_0x1fc
    JZ 0x0051ed54                       ; 0051ed4a
        ;   XREF to: 0051ed54 (CONDITIONAL_JUMP)  ; LAB_0051ed54
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 0051ed4c
    MOV EAX,[0x0061d95c]                ; 0051ed54 | g_CGamePtr
        ;   Label: LAB_0051ed54
    MOV EDX,dword ptr [EAX + 0x14]      ; 0051ed59 | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 0051ed5c
    JNZ 0x0051ed64                      ; 0051ed5e
        ;   XREF to: 0051ed64 (CONDITIONAL_JUMP)  ; LAB_0051ed64
    MOV dword ptr [ESP + 0x14],EDX      ; 0051ed60
    PUSH dword ptr [ESP + 0x14]         ; 0051ed64
        ;   Label: LAB_0051ed64
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051ed68
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051ed6d
    TEST EAX,EAX                        ; 0051ed70
    JZ 0x0051ef1a                       ; 0051ed72
        ;   XREF to: 0051ef1a (CONDITIONAL_JUMP)  ; LAB_0051ef1a
    PUSH 0x0                            ; 0051ed78
    PUSH 0x0                            ; 0051ed7a
    PUSH 0x0                            ; 0051ed7c
    PUSH EBX                            ; 0051ed7e
    LEA EAX,[ESI + 0xc]                 ; 0051ed7f
    PUSH EAX                            ; 0051ed82
    LEA EAX,[EBX + 0x30]                ; 0051ed83
    PUSH EAX                            ; 0051ed86
    LEA EAX,[EBX + 0x20]                ; 0051ed87
    PUSH EAX                            ; 0051ed8a
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 0051ed8b
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0051ed90
    MOV EDI,EAX                         ; 0051ed93
    PUSH 0x0                            ; 0051ed95
    MOV dword ptr [ESP + 0x14],EAX      ; 0051ed97
    MOV EAX,dword ptr [ESI]             ; 0051ed9b
    PUSH EAX                            ; 0051ed9d
    PUSH EDI                            ; 0051ed9e
    PUSH EBX                            ; 0051ed9f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0051eda0
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0051eda5
    MOV EDX,dword ptr [EBX + 0xc30c]    ; 0051eda7
    ADD ESP,0x10                        ; 0051edad
    CMP EAX,EDX                         ; 0051edb0
    JNZ 0x0051edc7                      ; 0051edb2
        ;   XREF to: 0051edc7 (CONDITIONAL_JUMP)  ; LAB_0051edc7
    PUSH 0x0                            ; 0051edb4
    MOV ECX,dword ptr [EBX + 0xc310]    ; 0051edb6
    PUSH ECX                            ; 0051edbc
    PUSH EDI                            ; 0051edbd
    PUSH EBX                            ; 0051edbe
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0051edbf
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0051edc4
    MOV EDI,dword ptr [EBX + 0xc314]    ; 0051edc7
        ;   Label: LAB_0051edc7
    CMP EDI,dword ptr [ESI]             ; 0051edcd
    JNZ 0x0051ede8                      ; 0051edcf
        ;   XREF to: 0051ede8 (CONDITIONAL_JUMP)  ; LAB_0051ede8
    PUSH 0x0                            ; 0051edd1
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051edd3
    PUSH EAX                            ; 0051edd9
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051edda
    PUSH EDX                            ; 0051edde
    PUSH EBX                            ; 0051eddf
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0051ede0
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0051ede5
    MOV ECX,dword ptr [EBX + 0xc330]    ; 0051ede8
        ;   Label: LAB_0051ede8
    CMP ECX,dword ptr [ESI]             ; 0051edee
    JNZ 0x0051ee80                      ; 0051edf0
        ;   XREF to: 0051ee80 (CONDITIONAL_JUMP)  ; LAB_0051ee80
    PUSH 0x0                            ; 0051edf6
    LEA EDI,[ESI + 0xc]                 ; 0051edf8
    PUSH EDI                            ; 0051edfb
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0051edfc
    PUSH EAX                            ; 0051ee02
    PUSH EBX                            ; 0051ee03
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0051ee04
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0051ee09
    PUSH 0x0                            ; 0051ee0c
    PUSH EDI                            ; 0051ee0e
    MOV EDX,dword ptr [EBX + 0xc318]    ; 0051ee0f
    PUSH EDX                            ; 0051ee15
    PUSH EBX                            ; 0051ee16
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0051ee17
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0051ee1c
    PUSH 0x0                            ; 0051ee1f
    PUSH EDI                            ; 0051ee21
    MOV ECX,dword ptr [EBX + 0xc30c]    ; 0051ee22
    PUSH ECX                            ; 0051ee28
    PUSH EBX                            ; 0051ee29
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0051ee2a
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0051ee2f
    PUSH 0x0                            ; 0051ee32
    PUSH EDI                            ; 0051ee34
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051ee35
    PUSH EAX                            ; 0051ee3b
    PUSH EBX                            ; 0051ee3c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0051ee3d
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0051ee42
    PUSH 0x0                            ; 0051ee45
    PUSH EDI                            ; 0051ee47
    MOV EDX,dword ptr [EBX + 0xc334]    ; 0051ee48
    PUSH EDX                            ; 0051ee4e
    PUSH EBX                            ; 0051ee4f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 0051ee50
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0051ee55
    PUSH 0x0                            ; 0051ee58
    PUSH 0x1                            ; 0051ee5a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051ee5c
    PUSH EBX                            ; 0051ee62
    CALL dword ptr [EAX + 0x128]        ; 0051ee63
    ADD ESP,0xc                         ; 0051ee69
    PUSH 0x0                            ; 0051ee6c
    PUSH 0x0                            ; 0051ee6e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051ee70
    PUSH EBX                            ; 0051ee76
    CALL dword ptr [EAX + 0x128]        ; 0051ee77
    ADD ESP,0xc                         ; 0051ee7d
    PUSH 0x5e9f0a                       ; 0051ee80 | = "limb?.wav"
        ;   Label: LAB_0051ee80
    PUSH EBX                            ; 0051ee85
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 0051ee86
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0051ee8b
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051ee8e
    PUSH ECX                            ; 0051ee92
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 0051ee93
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0051ee98
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051ee9e
    ADD ESP,0x4                         ; 0051eea5
    TEST EDI,EDI                        ; 0051eea8
    JZ 0x0051efe0                       ; 0051eeaa
        ;   XREF to: 0051efe0 (CONDITIONAL_JUMP)  ; LAB_0051efe0
    FLD float ptr [ESI + 0x8]           ; 0051eeb0
        ;   Label: LAB_0051eeb0
    FLD ST0                             ; 0051eeb3
    FMUL double ptr [0x005e9f2a]        ; 0051eeb5 | DAT_005e9f2a
    MOV EAX,dword ptr [ESI]             ; 0051eebb
    FSTP ST1                            ; 0051eebd
    FSTP float ptr [ESI + 0x8]          ; 0051eebf
    CMP EAX,dword ptr [EBX + 0xc314]    ; 0051eec2
    JNZ 0x0051efec                      ; 0051eec8
        ;   XREF to: 0051efec (CONDITIONAL_JUMP)  ; LAB_0051efec
    PUSH 0x0                            ; 0051eece
        ;   Label: LAB_0051eece
    PUSH 0x1                            ; 0051eed0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051eed2
    PUSH EBX                            ; 0051eed8
    CALL dword ptr [EAX + 0x128]        ; 0051eed9
    ADD ESP,0xc                         ; 0051eedf
    PUSH 0x0                            ; 0051eee2
    PUSH 0x0                            ; 0051eee4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051eee6
    PUSH EBX                            ; 0051eeec
    CALL dword ptr [EAX + 0x128]        ; 0051eeed
    ADD ESP,0xc                         ; 0051eef3
    MOV EDI,dword ptr [EBX + 0xc30c]    ; 0051eef6
        ;   Label: LAB_0051eef6
    MOV EAX,dword ptr [ESI]             ; 0051eefc
    CMP EAX,EDI                         ; 0051eefe
    JNZ 0x0051effd                      ; 0051ef00
        ;   XREF to: 0051effd (CONDITIONAL_JUMP)  ; LAB_0051effd
    PUSH 0x0                            ; 0051ef06
        ;   Label: LAB_0051ef06
    PUSH 0x0                            ; 0051ef08
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051ef0a
    PUSH EBX                            ; 0051ef10
    CALL dword ptr [EAX + 0x128]        ; 0051ef11
    ADD ESP,0xc                         ; 0051ef17
    MOV ECX,dword ptr [EBX + 0xc334]    ; 0051ef1a
        ;   Label: LAB_0051ef1a
    MOV EAX,dword ptr [ESI]             ; 0051ef20
    CMP EAX,ECX                         ; 0051ef22
    JZ 0x0051f00e                       ; 0051ef24
        ;   XREF to: 0051f00e (CONDITIONAL_JUMP)  ; LAB_0051f00e
    CMP EAX,dword ptr [EBX + 0xc32c]    ; 0051ef2a
    JZ 0x0051ef3e                       ; 0051ef30
        ;   XREF to: 0051ef3e (CONDITIONAL_JUMP)  ; LAB_0051ef3e
    CMP EAX,dword ptr [EBX + 0xc330]    ; 0051ef32
    JNZ 0x0051f025                      ; 0051ef38
        ;   XREF to: 0051f025 (CONDITIONAL_JUMP)  ; LAB_0051f025
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051ef3e
        ;   Label: LAB_0051ef3e
    MOV dword ptr [ESI + 0x4],EAX       ; 0051ef41
    MOV ESP,EBP                         ; 0051ef44
    POP EBP                             ; 0051ef46
    POP EDI                             ; 0051ef47
    POP ESI                             ; 0051ef48
    POP EBX                             ; 0051ef49
    RET                                 ; 0051ef4a
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051ef4b
        ;   Label: caseD_1
    JMP 0x0051ecc6                      ; 0051ef51
        ;   XREF to: 0051ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0051ecc6
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0051ef56
        ;   Label: caseD_2
    JMP 0x0051ecc6                      ; 0051ef5c
        ;   XREF to: 0051ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0051ecc6
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051ef61
        ;   Label: caseD_3
    JMP 0x0051ecc6                      ; 0051ef67
        ;   XREF to: 0051ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0051ecc6
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0051ef6c
        ;   Label: caseD_4
    JMP 0x0051ecc6                      ; 0051ef72
        ;   XREF to: 0051ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0051ecc6
    MOV EAX,dword ptr [EBX + 0xc330]    ; 0051ef77
        ;   Label: caseD_5
    JMP 0x0051ecc6                      ; 0051ef7d
        ;   XREF to: 0051ecc6 (UNCONDITIONAL_JUMP)  ; LAB_0051ecc6
    CMP EAX,dword ptr [EBX + 0xc310]    ; 0051ef82
        ;   Label: LAB_0051ef82
    JZ 0x0051ecd8                       ; 0051ef88
        ;   XREF to: 0051ecd8 (CONDITIONAL_JUMP)  ; LAB_0051ecd8
    CMP EAX,dword ptr [EBX + 0xc314]    ; 0051ef8e
    JZ 0x0051ecd8                       ; 0051ef94
        ;   XREF to: 0051ecd8 (CONDITIONAL_JUMP)  ; LAB_0051ecd8
    CMP EAX,dword ptr [EBX + 0xc318]    ; 0051ef9a
    JZ 0x0051ecd8                       ; 0051efa0
        ;   XREF to: 0051ecd8 (CONDITIONAL_JUMP)  ; LAB_0051ecd8
    CMP EAX,dword ptr [EBX + 0xc330]    ; 0051efa6
    JZ 0x0051ecd8                       ; 0051efac
        ;   XREF to: 0051ecd8 (CONDITIONAL_JUMP)  ; LAB_0051ecd8
    CMP EAX,dword ptr [EBX + 0xc334]    ; 0051efb2
    JZ 0x0051ecd8                       ; 0051efb8
        ;   XREF to: 0051ecd8 (CONDITIONAL_JUMP)  ; LAB_0051ecd8
    JMP 0x0051ef1a                      ; 0051efbe
        ;   XREF to: 0051ef1a (UNCONDITIONAL_JUMP)  ; LAB_0051ef1a
    FLD double ptr [ESP]                ; 0051efc3
        ;   Label: LAB_0051efc3
    FCOMP double ptr [0x005e9f22]       ; 0051efc6 | DAT_005e9f22
    FNSTSW AX                           ; 0051efcc
    SAHF                                ; 0051efce
    JNC 0x0051ed13                      ; 0051efcf
        ;   XREF to: 0051ed13 (CONDITIONAL_JUMP)  ; LAB_0051ed13
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0051efd5
    JMP 0x0051ed11                      ; 0051efdb
        ;   XREF to: 0051ed11 (UNCONDITIONAL_JUMP)  ; LAB_0051ed11
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0051efe0
        ;   Label: LAB_0051efe0
    JMP 0x0051eeb0                      ; 0051efe7
        ;   XREF to: 0051eeb0 (UNCONDITIONAL_JUMP)  ; LAB_0051eeb0
    CMP EAX,dword ptr [EBX + 0xc318]    ; 0051efec
        ;   Label: LAB_0051efec
    JZ 0x0051eece                       ; 0051eff2
        ;   XREF to: 0051eece (CONDITIONAL_JUMP)  ; LAB_0051eece
    JMP 0x0051eef6                      ; 0051eff8
        ;   XREF to: 0051eef6 (UNCONDITIONAL_JUMP)  ; LAB_0051eef6
    CMP EAX,dword ptr [EBX + 0xc310]    ; 0051effd
        ;   Label: LAB_0051effd
    JZ 0x0051ef06                       ; 0051f003
        ;   XREF to: 0051ef06 (CONDITIONAL_JUMP)  ; LAB_0051ef06
    JMP 0x0051ef1a                      ; 0051f009
        ;   XREF to: 0051ef1a (UNCONDITIONAL_JUMP)  ; LAB_0051ef1a
    FLD float ptr [ESI + 0x4]           ; 0051f00e
        ;   Label: LAB_0051f00e
    FLD ST0                             ; 0051f011
    FMUL double ptr [0x005e9f3a]        ; 0051f013 | DAT_005e9f3a
    FSTP ST1                            ; 0051f019
    FSTP float ptr [ESI + 0x4]          ; 0051f01b
    MOV ESP,EBP                         ; 0051f01e
    POP EBP                             ; 0051f020
    POP EDI                             ; 0051f021
    POP ESI                             ; 0051f022
    POP EBX                             ; 0051f023
    RET                                 ; 0051f024
    FLD float ptr [ESI + 0x4]           ; 0051f025
        ;   Label: LAB_0051f025
    FLD ST0                             ; 0051f028
    FMUL double ptr [0x005e9f32]        ; 0051f02a | DAT_005e9f32
    FSTP ST1                            ; 0051f030
    FSTP float ptr [ESI + 0x4]          ; 0051f032
    MOV ESP,EBP                         ; 0051f035
    POP EBP                             ; 0051f037
    POP EDI                             ; 0051f038
    POP ESI                             ; 0051f039
    POP EBX                             ; 0051f03a
    RET                                 ; 0051f03b

