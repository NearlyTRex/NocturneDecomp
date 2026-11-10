; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004d7ab0(CImp *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_imp.cpp_CImp_processDamage_FUN_004d7d50 at 004d7dd4
;
; Referenced Globals:
;   undefined1* switchdataD_004d7a98 = 004d7aed
;   TerminatedCString s_limb_wav_005dab36
;   undefined4 DAT_005dab41
;   undefined4 DAT_005dab49
;   undefined4 DAT_005dab51
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

    PUSH EBX                            ; 004d7ab0
        ;   Label: core_imp.cpp_CImp_processDismemberment_FUN_004d7ab0
    PUSH ESI                            ; 004d7ab1
    PUSH EDI                            ; 004d7ab2
    PUSH EBP                            ; 004d7ab3
    SUB ESP,0xc                         ; 004d7ab4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d7ab7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004d7abb
    FLD float ptr [ESI + 0x2c]          ; 004d7abf
    FLDZ                                ; 004d7ac2
    FCOMPP                              ; 004d7ac4
    FNSTSW AX                           ; 004d7ac6
    SAHF                                ; 004d7ac8
    JNC 0x004d7af5                      ; 004d7ac9
        ;   XREF to: 004d7af5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004d7acb
    JNZ 0x004d7af5                      ; 004d7ace
        ;   XREF to: 004d7af5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004d7ad0
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 004d7ad5
    MOV EDI,0x6                         ; 004d7ad7
    SAR EDX,0x1f                        ; 004d7adc
    IDIV EDI                            ; 004d7adf
    CMP EDX,0x5                         ; 004d7ae1
    JA 0x004d7af5                       ; 004d7ae4
        ;   XREF to: 004d7af5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4d7a98]  ; 004d7ae6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 004d7aed
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004d7af3
        ;   Label: LAB_004d7af3
    MOV ECX,dword ptr [EBX + 0x10b04]   ; 004d7af5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004d7afb
    CMP EAX,ECX                         ; 004d7afd
    JNZ 0x004d7cd5                      ; 004d7aff
        ;   XREF to: 004d7cd5 (CONDITIONAL_JUMP)  ; LAB_004d7cd5
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004d7b05
        ;   Label: LAB_004d7b05
    MOV EBP,dword ptr [EBX + 0x10b2c]   ; 004d7b08
    MOV dword ptr [ESP + 0x8],EAX       ; 004d7b0e
    CMP EBP,dword ptr [ESI]             ; 004d7b12
    JNZ 0x004d7b1e                      ; 004d7b14
        ;   XREF to: 004d7b1e (CONDITIONAL_JUMP)  ; LAB_004d7b1e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004d7b16
    MOV EDX,dword ptr [EBX + 0x10b28]   ; 004d7b1e
        ;   Label: LAB_004d7b1e
    CMP EDX,dword ptr [ESI]             ; 004d7b24
    JNZ 0x004d7b30                      ; 004d7b26
        ;   XREF to: 004d7b30 (CONDITIONAL_JUMP)  ; LAB_004d7b30
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004d7b28
    MOV EAX,[0x00616494]                ; 004d7b30 | g_CGamePtr
        ;   Label: LAB_004d7b30
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004d7b35 | g_CGameInstance.field460_0x1fc
    JZ 0x004d7b46                       ; 004d7b3c
        ;   XREF to: 004d7b46 (CONDITIONAL_JUMP)  ; LAB_004d7b46
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004d7b3e
    MOV EAX,[0x00616494]                ; 004d7b46 | g_CGamePtr
        ;   Label: LAB_004d7b46
    MOV EDX,dword ptr [EAX + 0x14]      ; 004d7b4b | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 004d7b4e
    JNZ 0x004d7b56                      ; 004d7b50
        ;   XREF to: 004d7b56 (CONDITIONAL_JUMP)  ; LAB_004d7b56
    MOV dword ptr [ESP + 0x8],EDX       ; 004d7b52
    PUSH dword ptr [ESP + 0x8]          ; 004d7b56
        ;   Label: LAB_004d7b56
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004d7b5a
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004d7b5f
    TEST EAX,EAX                        ; 004d7b62
    JZ 0x004d7c6c                       ; 004d7b64
        ;   XREF to: 004d7c6c (CONDITIONAL_JUMP)  ; LAB_004d7c6c
    MOV EDI,dword ptr [EBX + 0x280c]    ; 004d7b6a
    PUSH EDI                            ; 004d7b70
    PUSH 0x0                            ; 004d7b71
    PUSH 0x0                            ; 004d7b73
    PUSH EBX                            ; 004d7b75
    LEA EAX,[ESI + 0xc]                 ; 004d7b76
    PUSH EAX                            ; 004d7b79
    LEA EAX,[EBX + 0x30]                ; 004d7b7a
    PUSH EAX                            ; 004d7b7d
    LEA EAX,[EBX + 0x20]                ; 004d7b7e
    PUSH EAX                            ; 004d7b81
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 004d7b82
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004d7b87
    MOV EDI,EAX                         ; 004d7b8a
    PUSH 0x1                            ; 004d7b8c
    MOV EBP,EAX                         ; 004d7b8e
    MOV EAX,dword ptr [ESI]             ; 004d7b90
    PUSH EAX                            ; 004d7b92
    PUSH EDI                            ; 004d7b93
    PUSH EBX                            ; 004d7b94
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004d7b95
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004d7b9a
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 004d7b9c
    ADD ESP,0x10                        ; 004d7ba2
    CMP EAX,EDX                         ; 004d7ba5
    JNZ 0x004d7bbc                      ; 004d7ba7
        ;   XREF to: 004d7bbc (CONDITIONAL_JUMP)  ; LAB_004d7bbc
    PUSH 0x0                            ; 004d7ba9
    MOV ECX,dword ptr [EBX + 0x10b08]   ; 004d7bab
    PUSH ECX                            ; 004d7bb1
    PUSH EDI                            ; 004d7bb2
    PUSH EBX                            ; 004d7bb3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004d7bb4
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004d7bb9
    MOV EDI,dword ptr [EBX + 0x10b0c]   ; 004d7bbc
        ;   Label: LAB_004d7bbc
    CMP EDI,dword ptr [ESI]             ; 004d7bc2
    JNZ 0x004d7bd9                      ; 004d7bc4
        ;   XREF to: 004d7bd9 (CONDITIONAL_JUMP)  ; LAB_004d7bd9
    PUSH 0x0                            ; 004d7bc6
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 004d7bc8
    PUSH EAX                            ; 004d7bce
    PUSH EBP                            ; 004d7bcf
    PUSH EBX                            ; 004d7bd0
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004d7bd1
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004d7bd6
    MOV EDX,dword ptr [EBX + 0x10b28]   ; 004d7bd9
        ;   Label: LAB_004d7bd9
    CMP EDX,dword ptr [ESI]             ; 004d7bdf
    JNZ 0x004d7c45                      ; 004d7be1
        ;   XREF to: 004d7c45 (CONDITIONAL_JUMP)  ; LAB_004d7c45
    PUSH 0x1                            ; 004d7be3
    LEA EDI,[ESI + 0xc]                 ; 004d7be5
    PUSH EDI                            ; 004d7be8
    MOV ECX,dword ptr [EBX + 0x10b0c]   ; 004d7be9
    PUSH ECX                            ; 004d7bef
    PUSH EBX                            ; 004d7bf0
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004d7bf1
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7bf6
    PUSH 0x1                            ; 004d7bf9
    PUSH EDI                            ; 004d7bfb
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 004d7bfc
    PUSH EAX                            ; 004d7c02
    PUSH EBX                            ; 004d7c03
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004d7c04
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7c09
    PUSH 0x1                            ; 004d7c0c
    PUSH EDI                            ; 004d7c0e
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 004d7c0f
    PUSH EDX                            ; 004d7c15
    PUSH EBX                            ; 004d7c16
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004d7c17
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7c1c
    PUSH 0x1                            ; 004d7c1f
    PUSH EDI                            ; 004d7c21
    MOV ECX,dword ptr [EBX + 0x10b08]   ; 004d7c22
    PUSH ECX                            ; 004d7c28
    PUSH EBX                            ; 004d7c29
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004d7c2a
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7c2f
    PUSH 0x1                            ; 004d7c32
    PUSH EDI                            ; 004d7c34
    MOV EDI,dword ptr [EBX + 0x10b2c]   ; 004d7c35
    PUSH EDI                            ; 004d7c3b
    PUSH EBX                            ; 004d7c3c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004d7c3d
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7c42
    PUSH 0x5dab36                       ; 004d7c45 | = "limb?.wav"
        ;   Label: LAB_004d7c45
    PUSH EBX                            ; 004d7c4a
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260 ; 004d7c4b
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004d7c50
    PUSH EBP                            ; 004d7c53
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 004d7c54
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004d7c59
    FLD float ptr [ESI + 0x8]           ; 004d7c5c
    FLD ST0                             ; 004d7c5f
    FMUL double ptr [0x005dab41]        ; 004d7c61 | DAT_005dab41
    FSTP ST1                            ; 004d7c67
    FSTP float ptr [ESI + 0x8]          ; 004d7c69
    MOV EBP,dword ptr [EBX + 0x10b2c]   ; 004d7c6c
        ;   Label: LAB_004d7c6c
    MOV EAX,dword ptr [ESI]             ; 004d7c72
    CMP EAX,EBP                         ; 004d7c74
    JZ 0x004d7d16                       ; 004d7c76
        ;   XREF to: 004d7d16 (CONDITIONAL_JUMP)  ; LAB_004d7d16
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 004d7c7c
    JZ 0x004d7c90                       ; 004d7c82
        ;   XREF to: 004d7c90 (CONDITIONAL_JUMP)  ; LAB_004d7c90
    CMP EAX,dword ptr [EBX + 0x10b28]   ; 004d7c84
    JNZ 0x004d7d2e                      ; 004d7c8a
        ;   XREF to: 004d7d2e (CONDITIONAL_JUMP)  ; LAB_004d7d2e
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d7c90
        ;   Label: LAB_004d7c90
    MOV dword ptr [ESI + 0x4],EAX       ; 004d7c93
    ADD ESP,0xc                         ; 004d7c96
    POP EBP                             ; 004d7c99
    POP EDI                             ; 004d7c9a
    POP ESI                             ; 004d7c9b
    POP EBX                             ; 004d7c9c
    RET                                 ; 004d7c9d
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 004d7c9e
        ;   Label: caseD_1
    JMP 0x004d7af3                      ; 004d7ca4
        ;   XREF to: 004d7af3 (UNCONDITIONAL_JUMP)  ; LAB_004d7af3
    MOV EAX,dword ptr [EBX + 0x10b0c]   ; 004d7ca9
        ;   Label: caseD_2
    JMP 0x004d7af3                      ; 004d7caf
        ;   XREF to: 004d7af3 (UNCONDITIONAL_JUMP)  ; LAB_004d7af3
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 004d7cb4
        ;   Label: caseD_3
    JMP 0x004d7af3                      ; 004d7cba
        ;   XREF to: 004d7af3 (UNCONDITIONAL_JUMP)  ; LAB_004d7af3
    MOV EAX,dword ptr [EBX + 0x10b2c]   ; 004d7cbf
        ;   Label: caseD_4
    JMP 0x004d7af3                      ; 004d7cc5
        ;   XREF to: 004d7af3 (UNCONDITIONAL_JUMP)  ; LAB_004d7af3
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 004d7cca
        ;   Label: caseD_5
    JMP 0x004d7af3                      ; 004d7cd0
        ;   XREF to: 004d7af3 (UNCONDITIONAL_JUMP)  ; LAB_004d7af3
    CMP EAX,dword ptr [EBX + 0x10b08]   ; 004d7cd5
        ;   Label: LAB_004d7cd5
    JZ 0x004d7b05                       ; 004d7cdb
        ;   XREF to: 004d7b05 (CONDITIONAL_JUMP)  ; LAB_004d7b05
    CMP EAX,dword ptr [EBX + 0x10b0c]   ; 004d7ce1
    JZ 0x004d7b05                       ; 004d7ce7
        ;   XREF to: 004d7b05 (CONDITIONAL_JUMP)  ; LAB_004d7b05
    CMP EAX,dword ptr [EBX + 0x10b10]   ; 004d7ced
    JZ 0x004d7b05                       ; 004d7cf3
        ;   XREF to: 004d7b05 (CONDITIONAL_JUMP)  ; LAB_004d7b05
    CMP EAX,dword ptr [EBX + 0x10b28]   ; 004d7cf9
    JZ 0x004d7b05                       ; 004d7cff
        ;   XREF to: 004d7b05 (CONDITIONAL_JUMP)  ; LAB_004d7b05
    CMP EAX,dword ptr [EBX + 0x10b2c]   ; 004d7d05
    JZ 0x004d7b05                       ; 004d7d0b
        ;   XREF to: 004d7b05 (CONDITIONAL_JUMP)  ; LAB_004d7b05
    JMP 0x004d7c6c                      ; 004d7d11
        ;   XREF to: 004d7c6c (UNCONDITIONAL_JUMP)  ; LAB_004d7c6c
    FLD float ptr [ESI + 0x4]           ; 004d7d16
        ;   Label: LAB_004d7d16
    FLD ST0                             ; 004d7d19
    FMUL double ptr [0x005dab51]        ; 004d7d1b | DAT_005dab51
    FSTP ST1                            ; 004d7d21
    FSTP float ptr [ESI + 0x4]          ; 004d7d23
    ADD ESP,0xc                         ; 004d7d26
    POP EBP                             ; 004d7d29
    POP EDI                             ; 004d7d2a
    POP ESI                             ; 004d7d2b
    POP EBX                             ; 004d7d2c
    RET                                 ; 004d7d2d
    FLD float ptr [ESI + 0x4]           ; 004d7d2e
        ;   Label: LAB_004d7d2e
    FLD ST0                             ; 004d7d31
    FMUL double ptr [0x005dab49]        ; 004d7d33 | DAT_005dab49
    FSTP ST1                            ; 004d7d39
    FSTP float ptr [ESI + 0x4]          ; 004d7d3b
    ADD ESP,0xc                         ; 004d7d3e
    POP EBP                             ; 004d7d41
    POP EDI                             ; 004d7d42
    POP ESI                             ; 004d7d43
    POP EBX                             ; 004d7d44
    RET                                 ; 004d7d45

