; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004d7bd0(CImp *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_imp.cpp_CImp_processDamage_FUN_004d7e70 at 004d7ef4
;
; Referenced Globals:
;   undefined1* switchdataD_004d7bb8 = 004d7c0d
;   TerminatedCString s_limb_wav_005c565d
;   undefined4 DAT_005c5668
;   undefined4 DAT_005c5670
;   undefined4 DAT_005c5678
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7bd0
        ;   Label: core_imp.cpp_CImp_processDismemberment_FUN_004d7bd0
    PUSH ESI                            ; 004d7bd1
    PUSH EDI                            ; 004d7bd2
    PUSH EBP                            ; 004d7bd3
    SUB ESP,0xc                         ; 004d7bd4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d7bd7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004d7bdb
    FLD float ptr [ESI + 0x2c]          ; 004d7bdf
    FLDZ                                ; 004d7be2
    FCOMPP                              ; 004d7be4
    FNSTSW AX                           ; 004d7be6
    SAHF                                ; 004d7be8
    JNC 0x004d7c15                      ; 004d7be9
        ;   XREF to: 004d7c15 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004d7beb
    JNZ 0x004d7c15                      ; 004d7bee
        ;   XREF to: 004d7c15 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004d7bf0
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 004d7bf5
    MOV EDI,0x6                         ; 004d7bf7
    SAR EDX,0x1f                        ; 004d7bfc
    IDIV EDI                            ; 004d7bff
    CMP EDX,0x5                         ; 004d7c01
    JA 0x004d7c15                       ; 004d7c04
        ;   XREF to: 004d7c15 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4d7bb8]  ; 004d7c06 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd060]    ; 004d7c0d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004d7c13
        ;   Label: LAB_004d7c13
    MOV ECX,dword ptr [EBX + 0xd060]    ; 004d7c15
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004d7c1b
    CMP EAX,ECX                         ; 004d7c1d
    JNZ 0x004d7df5                      ; 004d7c1f
        ;   XREF to: 004d7df5 (CONDITIONAL_JUMP)  ; LAB_004d7df5
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004d7c25
        ;   Label: LAB_004d7c25
    MOV EBP,dword ptr [EBX + 0xd088]    ; 004d7c28
    MOV dword ptr [ESP + 0x8],EAX       ; 004d7c2e
    CMP EBP,dword ptr [ESI]             ; 004d7c32
    JNZ 0x004d7c3e                      ; 004d7c34
        ;   XREF to: 004d7c3e (CONDITIONAL_JUMP)  ; LAB_004d7c3e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004d7c36
    MOV EDX,dword ptr [EBX + 0xd084]    ; 004d7c3e
        ;   Label: LAB_004d7c3e
    CMP EDX,dword ptr [ESI]             ; 004d7c44
    JNZ 0x004d7c50                      ; 004d7c46
        ;   XREF to: 004d7c50 (CONDITIONAL_JUMP)  ; LAB_004d7c50
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004d7c48
    MOV EAX,[0x005fe9dc]                ; 004d7c50 | g_CGamePtr
        ;   Label: LAB_004d7c50
    CMP dword ptr [EAX + 0x204],0x0     ; 004d7c55 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004d7c66                       ; 004d7c5c
        ;   XREF to: 004d7c66 (CONDITIONAL_JUMP)  ; LAB_004d7c66
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004d7c5e
    MOV EAX,[0x005fe9dc]                ; 004d7c66 | g_CGamePtr
        ;   Label: LAB_004d7c66
    MOV EDX,dword ptr [EAX + 0x14]      ; 004d7c6b | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004d7c6e
    JNZ 0x004d7c76                      ; 004d7c70
        ;   XREF to: 004d7c76 (CONDITIONAL_JUMP)  ; LAB_004d7c76
    MOV dword ptr [ESP + 0x8],EDX       ; 004d7c72
    PUSH dword ptr [ESP + 0x8]          ; 004d7c76
        ;   Label: LAB_004d7c76
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004d7c7a
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004d7c7f
    TEST EAX,EAX                        ; 004d7c82
    JZ 0x004d7d8c                       ; 004d7c84
        ;   XREF to: 004d7d8c (CONDITIONAL_JUMP)  ; LAB_004d7d8c
    MOV EDI,dword ptr [EBX + 0x27a0]    ; 004d7c8a
    PUSH EDI                            ; 004d7c90
    PUSH 0x0                            ; 004d7c91
    PUSH 0x0                            ; 004d7c93
    PUSH EBX                            ; 004d7c95
    LEA EAX,[ESI + 0xc]                 ; 004d7c96
    PUSH EAX                            ; 004d7c99
    LEA EAX,[EBX + 0x30]                ; 004d7c9a
    PUSH EAX                            ; 004d7c9d
    LEA EAX,[EBX + 0x20]                ; 004d7c9e
    PUSH EAX                            ; 004d7ca1
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 004d7ca2
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004d7ca7
    MOV EDI,EAX                         ; 004d7caa
    PUSH 0x1                            ; 004d7cac
    MOV EBP,EAX                         ; 004d7cae
    MOV EAX,dword ptr [ESI]             ; 004d7cb0
    PUSH EAX                            ; 004d7cb2
    PUSH EDI                            ; 004d7cb3
    PUSH EBX                            ; 004d7cb4
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004d7cb5
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004d7cba
    MOV EDX,dword ptr [EBX + 0xd060]    ; 004d7cbc
    ADD ESP,0x10                        ; 004d7cc2
    CMP EAX,EDX                         ; 004d7cc5
    JNZ 0x004d7cdc                      ; 004d7cc7
        ;   XREF to: 004d7cdc (CONDITIONAL_JUMP)  ; LAB_004d7cdc
    PUSH 0x1                            ; 004d7cc9
    MOV ECX,dword ptr [EBX + 0xd064]    ; 004d7ccb
    PUSH ECX                            ; 004d7cd1
    PUSH EDI                            ; 004d7cd2
    PUSH EBX                            ; 004d7cd3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004d7cd4
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004d7cd9
    MOV EDI,dword ptr [EBX + 0xd068]    ; 004d7cdc
        ;   Label: LAB_004d7cdc
    CMP EDI,dword ptr [ESI]             ; 004d7ce2
    JNZ 0x004d7cf9                      ; 004d7ce4
        ;   XREF to: 004d7cf9 (CONDITIONAL_JUMP)  ; LAB_004d7cf9
    PUSH 0x1                            ; 004d7ce6
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 004d7ce8
    PUSH EAX                            ; 004d7cee
    PUSH EBP                            ; 004d7cef
    PUSH EBX                            ; 004d7cf0
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004d7cf1
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004d7cf6
    MOV EDX,dword ptr [EBX + 0xd084]    ; 004d7cf9
        ;   Label: LAB_004d7cf9
    CMP EDX,dword ptr [ESI]             ; 004d7cff
    JNZ 0x004d7d65                      ; 004d7d01
        ;   XREF to: 004d7d65 (CONDITIONAL_JUMP)  ; LAB_004d7d65
    PUSH 0x1                            ; 004d7d03
    LEA EDI,[ESI + 0xc]                 ; 004d7d05
    PUSH EDI                            ; 004d7d08
    MOV ECX,dword ptr [EBX + 0xd068]    ; 004d7d09
    PUSH ECX                            ; 004d7d0f
    PUSH EBX                            ; 004d7d10
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004d7d11
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7d16
    PUSH 0x1                            ; 004d7d19
    PUSH EDI                            ; 004d7d1b
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 004d7d1c
    PUSH EAX                            ; 004d7d22
    PUSH EBX                            ; 004d7d23
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004d7d24
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7d29
    PUSH 0x1                            ; 004d7d2c
    PUSH EDI                            ; 004d7d2e
    MOV EDX,dword ptr [EBX + 0xd060]    ; 004d7d2f
    PUSH EDX                            ; 004d7d35
    PUSH EBX                            ; 004d7d36
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004d7d37
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7d3c
    PUSH 0x1                            ; 004d7d3f
    PUSH EDI                            ; 004d7d41
    MOV ECX,dword ptr [EBX + 0xd064]    ; 004d7d42
    PUSH ECX                            ; 004d7d48
    PUSH EBX                            ; 004d7d49
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004d7d4a
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7d4f
    PUSH 0x1                            ; 004d7d52
    PUSH EDI                            ; 004d7d54
    MOV EDI,dword ptr [EBX + 0xd088]    ; 004d7d55
    PUSH EDI                            ; 004d7d5b
    PUSH EBX                            ; 004d7d5c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004d7d5d
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004d7d62
    PUSH 0x5c565d                       ; 004d7d65 | = "limb?.wav"
        ;   Label: LAB_004d7d65
    PUSH EBX                            ; 004d7d6a
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810 ; 004d7d6b
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004d7d70
    PUSH EBP                            ; 004d7d73
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 004d7d74
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004d7d79
    FLD float ptr [ESI + 0x8]           ; 004d7d7c
    FLD ST0                             ; 004d7d7f
    FMUL double ptr [0x005c5668]        ; 004d7d81 | DAT_005c5668
    FSTP ST1                            ; 004d7d87
    FSTP float ptr [ESI + 0x8]          ; 004d7d89
    MOV EBP,dword ptr [EBX + 0xd088]    ; 004d7d8c
        ;   Label: LAB_004d7d8c
    MOV EAX,dword ptr [ESI]             ; 004d7d92
    CMP EAX,EBP                         ; 004d7d94
    JZ 0x004d7e36                       ; 004d7d96
        ;   XREF to: 004d7e36 (CONDITIONAL_JUMP)  ; LAB_004d7e36
    CMP EAX,dword ptr [EBX + 0xd080]    ; 004d7d9c
    JZ 0x004d7db0                       ; 004d7da2
        ;   XREF to: 004d7db0 (CONDITIONAL_JUMP)  ; LAB_004d7db0
    CMP EAX,dword ptr [EBX + 0xd084]    ; 004d7da4
    JNZ 0x004d7e4e                      ; 004d7daa
        ;   XREF to: 004d7e4e (CONDITIONAL_JUMP)  ; LAB_004d7e4e
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d7db0
        ;   Label: LAB_004d7db0
    MOV dword ptr [ESI + 0x4],EAX       ; 004d7db3
    ADD ESP,0xc                         ; 004d7db6
    POP EBP                             ; 004d7db9
    POP EDI                             ; 004d7dba
    POP ESI                             ; 004d7dbb
    POP EBX                             ; 004d7dbc
    RET                                 ; 004d7dbd
    MOV EAX,dword ptr [EBX + 0xd064]    ; 004d7dbe
        ;   Label: caseD_1
    JMP 0x004d7c13                      ; 004d7dc4
        ;   XREF to: 004d7c13 (UNCONDITIONAL_JUMP)  ; LAB_004d7c13
    MOV EAX,dword ptr [EBX + 0xd068]    ; 004d7dc9
        ;   Label: caseD_2
    JMP 0x004d7c13                      ; 004d7dcf
        ;   XREF to: 004d7c13 (UNCONDITIONAL_JUMP)  ; LAB_004d7c13
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 004d7dd4
        ;   Label: caseD_3
    JMP 0x004d7c13                      ; 004d7dda
        ;   XREF to: 004d7c13 (UNCONDITIONAL_JUMP)  ; LAB_004d7c13
    MOV EAX,dword ptr [EBX + 0xd088]    ; 004d7ddf
        ;   Label: caseD_4
    JMP 0x004d7c13                      ; 004d7de5
        ;   XREF to: 004d7c13 (UNCONDITIONAL_JUMP)  ; LAB_004d7c13
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004d7dea
        ;   Label: caseD_5
    JMP 0x004d7c13                      ; 004d7df0
        ;   XREF to: 004d7c13 (UNCONDITIONAL_JUMP)  ; LAB_004d7c13
    CMP EAX,dword ptr [EBX + 0xd064]    ; 004d7df5
        ;   Label: LAB_004d7df5
    JZ 0x004d7c25                       ; 004d7dfb
        ;   XREF to: 004d7c25 (CONDITIONAL_JUMP)  ; LAB_004d7c25
    CMP EAX,dword ptr [EBX + 0xd068]    ; 004d7e01
    JZ 0x004d7c25                       ; 004d7e07
        ;   XREF to: 004d7c25 (CONDITIONAL_JUMP)  ; LAB_004d7c25
    CMP EAX,dword ptr [EBX + 0xd06c]    ; 004d7e0d
    JZ 0x004d7c25                       ; 004d7e13
        ;   XREF to: 004d7c25 (CONDITIONAL_JUMP)  ; LAB_004d7c25
    CMP EAX,dword ptr [EBX + 0xd084]    ; 004d7e19
    JZ 0x004d7c25                       ; 004d7e1f
        ;   XREF to: 004d7c25 (CONDITIONAL_JUMP)  ; LAB_004d7c25
    CMP EAX,dword ptr [EBX + 0xd088]    ; 004d7e25
    JZ 0x004d7c25                       ; 004d7e2b
        ;   XREF to: 004d7c25 (CONDITIONAL_JUMP)  ; LAB_004d7c25
    JMP 0x004d7d8c                      ; 004d7e31
        ;   XREF to: 004d7d8c (UNCONDITIONAL_JUMP)  ; LAB_004d7d8c
    FLD float ptr [ESI + 0x4]           ; 004d7e36
        ;   Label: LAB_004d7e36
    FLD ST0                             ; 004d7e39
    FMUL double ptr [0x005c5678]        ; 004d7e3b | DAT_005c5678
    FSTP ST1                            ; 004d7e41
    FSTP float ptr [ESI + 0x4]          ; 004d7e43
    ADD ESP,0xc                         ; 004d7e46
    POP EBP                             ; 004d7e49
    POP EDI                             ; 004d7e4a
    POP ESI                             ; 004d7e4b
    POP EBX                             ; 004d7e4c
    RET                                 ; 004d7e4d
    FLD float ptr [ESI + 0x4]           ; 004d7e4e
        ;   Label: LAB_004d7e4e
    FLD ST0                             ; 004d7e51
    FMUL double ptr [0x005c5670]        ; 004d7e53 | DAT_005c5670
    FSTP ST1                            ; 004d7e59
    FSTP float ptr [ESI + 0x4]          ; 004d7e5b
    ADD ESP,0xc                         ; 004d7e5e
    POP EBP                             ; 004d7e61
    POP EDI                             ; 004d7e62
    POP ESI                             ; 004d7e63
    POP EBX                             ; 004d7e64
    RET                                 ; 004d7e65

