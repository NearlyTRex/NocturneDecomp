; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster *this_ptr,SDamageInfo *damage_info)
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
;   core_mobster.cpp_CMobster_processDamage_FUN_00500080 at 005000ac
;
; Referenced Globals:
;   undefined1* switchdataD_004ffca4 = 004ffd00
;   TerminatedCString s_limb_wav_005deebd
;   undefined4 DAT_005deecd
;   undefined4 DAT_005deed5
;   undefined4 DAT_005deedd
;   undefined4 DAT_005deee5
;   undefined4 DAT_005deeed
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
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

    PUSH EBX                            ; 004ffcc0
        ;   Label: core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0
    PUSH ESI                            ; 004ffcc1
    PUSH EDI                            ; 004ffcc2
    PUSH EBP                            ; 004ffcc3
    MOV EBP,ESP                         ; 004ffcc4
    SUB ESP,0x1c                        ; 004ffcc6
    AND ESP,0xfffffff8                  ; 004ffcc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ffccc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ffccf
    FLD float ptr [ESI + 0x2c]          ; 004ffcd2
    FLDZ                                ; 004ffcd5
    FCOMPP                              ; 004ffcd7
    FNSTSW AX                           ; 004ffcd9
    SAHF                                ; 004ffcdb
    JNC 0x004ffd08                      ; 004ffcdc
        ;   XREF to: 004ffd08 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004ffcde
    JNZ 0x004ffd08                      ; 004ffce1
        ;   XREF to: 004ffd08 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004ffce3
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 004ffce8
    MOV EDI,0x6                         ; 004ffcea
    SAR EDX,0x1f                        ; 004ffcef
    IDIV EDI                            ; 004ffcf2
    CMP EDX,0x5                         ; 004ffcf4
    JA 0x004ffd08                       ; 004ffcf7
        ;   XREF to: 004ffd08 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4ffca4]  ; 004ffcf9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b9c]   ; 004ffd00
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004ffd06
        ;   Label: LAB_004ffd06
    MOV ECX,dword ptr [EBX + 0x10b9c]   ; 004ffd08
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004ffd0e
    CMP EAX,ECX                         ; 004ffd10
    JNZ 0x004fffc2                      ; 004ffd12
        ;   XREF to: 004fffc2 (CONDITIONAL_JUMP)  ; LAB_004fffc2
    MOV ECX,dword ptr [EBX + 0x10bc0]   ; 004ffd18
        ;   Label: LAB_004ffd18
    CMP ECX,dword ptr [ESI]             ; 004ffd1e
    JNZ 0x004ffd53                      ; 004ffd20
        ;   XREF to: 004ffd53 (CONDITIONAL_JUMP)  ; LAB_004ffd53
    PUSH 0x3f800000                     ; 004ffd22
    PUSH 0x0                            ; 004ffd27
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ffd29
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 004ffd2e
    FLD float ptr [ESP + 0x20]          ; 004ffd32
    ADD ESP,0x8                         ; 004ffd36
    FST double ptr [ESP]                ; 004ffd39
    FCOMP double ptr [0x005deecd]       ; 004ffd3c | DAT_005deecd
    FNSTSW AX                           ; 004ffd42
    SAHF                                ; 004ffd44
    JNC 0x00500003                      ; 004ffd45
        ;   XREF to: 00500003 (CONDITIONAL_JUMP)  ; LAB_00500003
    MOV EAX,dword ptr [EBX + 0x10b9c]   ; 004ffd4b
    MOV dword ptr [ESI],EAX             ; 004ffd51
        ;   Label: LAB_004ffd51
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004ffd53
        ;   Label: LAB_004ffd53
    MOV EDI,dword ptr [EBX + 0x10bc4]   ; 004ffd56
    MOV dword ptr [ESP + 0x14],EAX      ; 004ffd5c
    CMP EDI,dword ptr [ESI]             ; 004ffd60
    JNZ 0x004ffd6c                      ; 004ffd62
        ;   XREF to: 004ffd6c (CONDITIONAL_JUMP)  ; LAB_004ffd6c
    MOV dword ptr [ESP + 0x14],0x3d4ccccd ; 004ffd64
    MOV EDX,dword ptr [EBX + 0x10bc0]   ; 004ffd6c
        ;   Label: LAB_004ffd6c
    CMP EDX,dword ptr [ESI]             ; 004ffd72
    JNZ 0x004ffd7e                      ; 004ffd74
        ;   XREF to: 004ffd7e (CONDITIONAL_JUMP)  ; LAB_004ffd7e
    MOV dword ptr [ESP + 0x14],0x3d75c28f ; 004ffd76
    MOV EAX,[0x00616494]                ; 004ffd7e | g_CGamePtr
        ;   Label: LAB_004ffd7e
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004ffd83 | g_CGameInstance.field460_0x1fc
    JZ 0x004ffd94                       ; 004ffd8a
        ;   XREF to: 004ffd94 (CONDITIONAL_JUMP)  ; LAB_004ffd94
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 004ffd8c
    MOV EAX,[0x00616494]                ; 004ffd94 | g_CGamePtr
        ;   Label: LAB_004ffd94
    MOV EDX,dword ptr [EAX + 0x14]      ; 004ffd99 | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 004ffd9c
    JNZ 0x004ffda4                      ; 004ffd9e
        ;   XREF to: 004ffda4 (CONDITIONAL_JUMP)  ; LAB_004ffda4
    MOV dword ptr [ESP + 0x14],EDX      ; 004ffda0
    PUSH dword ptr [ESP + 0x14]         ; 004ffda4
        ;   Label: LAB_004ffda4
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004ffda8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004ffdad
    TEST EAX,EAX                        ; 004ffdb0
    JZ 0x004fff5a                       ; 004ffdb2
        ;   XREF to: 004fff5a (CONDITIONAL_JUMP)  ; LAB_004fff5a
    PUSH 0x0                            ; 004ffdb8
    PUSH 0x0                            ; 004ffdba
    PUSH 0x0                            ; 004ffdbc
    PUSH EBX                            ; 004ffdbe
    LEA EAX,[ESI + 0xc]                 ; 004ffdbf
    PUSH EAX                            ; 004ffdc2
    LEA EAX,[EBX + 0x30]                ; 004ffdc3
    PUSH EAX                            ; 004ffdc6
    LEA EAX,[EBX + 0x20]                ; 004ffdc7
    PUSH EAX                            ; 004ffdca
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 004ffdcb
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004ffdd0
    MOV EDI,EAX                         ; 004ffdd3
    PUSH 0x0                            ; 004ffdd5
    MOV dword ptr [ESP + 0x14],EAX      ; 004ffdd7
    MOV EAX,dword ptr [ESI]             ; 004ffddb
    PUSH EAX                            ; 004ffddd
    PUSH EDI                            ; 004ffdde
    PUSH EBX                            ; 004ffddf
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004ffde0
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004ffde5
    MOV EDX,dword ptr [EBX + 0x10b9c]   ; 004ffde7
    ADD ESP,0x10                        ; 004ffded
    CMP EAX,EDX                         ; 004ffdf0
    JNZ 0x004ffe07                      ; 004ffdf2
        ;   XREF to: 004ffe07 (CONDITIONAL_JUMP)  ; LAB_004ffe07
    PUSH 0x0                            ; 004ffdf4
    MOV ECX,dword ptr [EBX + 0x10ba0]   ; 004ffdf6
    PUSH ECX                            ; 004ffdfc
    PUSH EDI                            ; 004ffdfd
    PUSH EBX                            ; 004ffdfe
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004ffdff
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004ffe04
    MOV EDI,dword ptr [EBX + 0x10ba4]   ; 004ffe07
        ;   Label: LAB_004ffe07
    CMP EDI,dword ptr [ESI]             ; 004ffe0d
    JNZ 0x004ffe28                      ; 004ffe0f
        ;   XREF to: 004ffe28 (CONDITIONAL_JUMP)  ; LAB_004ffe28
    PUSH 0x0                            ; 004ffe11
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 004ffe13
    PUSH EAX                            ; 004ffe19
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ffe1a
    PUSH EDX                            ; 004ffe1e
    PUSH EBX                            ; 004ffe1f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004ffe20
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004ffe25
    MOV ECX,dword ptr [EBX + 0x10bc0]   ; 004ffe28
        ;   Label: LAB_004ffe28
    CMP ECX,dword ptr [ESI]             ; 004ffe2e
    JNZ 0x004ffec0                      ; 004ffe30
        ;   XREF to: 004ffec0 (CONDITIONAL_JUMP)  ; LAB_004ffec0
    PUSH 0x0                            ; 004ffe36
    LEA EDI,[ESI + 0xc]                 ; 004ffe38
    PUSH EDI                            ; 004ffe3b
    MOV EAX,dword ptr [EBX + 0x10ba4]   ; 004ffe3c
    PUSH EAX                            ; 004ffe42
    PUSH EBX                            ; 004ffe43
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004ffe44
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004ffe49
    PUSH 0x0                            ; 004ffe4c
    PUSH EDI                            ; 004ffe4e
    MOV EDX,dword ptr [EBX + 0x10ba8]   ; 004ffe4f
    PUSH EDX                            ; 004ffe55
    PUSH EBX                            ; 004ffe56
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004ffe57
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004ffe5c
    PUSH 0x0                            ; 004ffe5f
    PUSH EDI                            ; 004ffe61
    MOV ECX,dword ptr [EBX + 0x10b9c]   ; 004ffe62
    PUSH ECX                            ; 004ffe68
    PUSH EBX                            ; 004ffe69
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004ffe6a
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004ffe6f
    PUSH 0x0                            ; 004ffe72
    PUSH EDI                            ; 004ffe74
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 004ffe75
    PUSH EAX                            ; 004ffe7b
    PUSH EBX                            ; 004ffe7c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004ffe7d
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004ffe82
    PUSH 0x0                            ; 004ffe85
    PUSH EDI                            ; 004ffe87
    MOV EDX,dword ptr [EBX + 0x10bc4]   ; 004ffe88
    PUSH EDX                            ; 004ffe8e
    PUSH EBX                            ; 004ffe8f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004ffe90
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004ffe95
    PUSH 0x0                            ; 004ffe98
    PUSH 0x1                            ; 004ffe9a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ffe9c
    PUSH EBX                            ; 004ffea2
    CALL dword ptr [EAX + 0x130]        ; 004ffea3
    ADD ESP,0xc                         ; 004ffea9
    PUSH 0x0                            ; 004ffeac
    PUSH 0x0                            ; 004ffeae
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ffeb0
    PUSH EBX                            ; 004ffeb6
    CALL dword ptr [EAX + 0x130]        ; 004ffeb7
    ADD ESP,0xc                         ; 004ffebd
    PUSH 0x5deebd                       ; 004ffec0 | = "limb?.wav"
        ;   Label: LAB_004ffec0
    PUSH EBX                            ; 004ffec5
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260 ; 004ffec6
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004ffecb
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ffece
    PUSH ECX                            ; 004ffed2
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 004ffed3
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10bc4]   ; 004ffed8
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004ffede
    ADD ESP,0x4                         ; 004ffee5
    TEST EDI,EDI                        ; 004ffee8
    JZ 0x00500020                       ; 004ffeea
        ;   XREF to: 00500020 (CONDITIONAL_JUMP)  ; LAB_00500020
    FLD float ptr [ESI + 0x8]           ; 004ffef0
        ;   Label: LAB_004ffef0
    FLD ST0                             ; 004ffef3
    FMUL double ptr [0x005deedd]        ; 004ffef5 | DAT_005deedd
    MOV EAX,dword ptr [ESI]             ; 004ffefb
    FSTP ST1                            ; 004ffefd
    FSTP float ptr [ESI + 0x8]          ; 004ffeff
    CMP EAX,dword ptr [EBX + 0x10ba4]   ; 004fff02
    JNZ 0x0050002c                      ; 004fff08
        ;   XREF to: 0050002c (CONDITIONAL_JUMP)  ; LAB_0050002c
    PUSH 0x0                            ; 004fff0e
        ;   Label: LAB_004fff0e
    PUSH 0x1                            ; 004fff10
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fff12
    PUSH EBX                            ; 004fff18
    CALL dword ptr [EAX + 0x130]        ; 004fff19
    ADD ESP,0xc                         ; 004fff1f
    PUSH 0x0                            ; 004fff22
    PUSH 0x0                            ; 004fff24
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fff26
    PUSH EBX                            ; 004fff2c
    CALL dword ptr [EAX + 0x130]        ; 004fff2d
    ADD ESP,0xc                         ; 004fff33
    MOV EDI,dword ptr [EBX + 0x10b9c]   ; 004fff36
        ;   Label: LAB_004fff36
    MOV EAX,dword ptr [ESI]             ; 004fff3c
    CMP EAX,EDI                         ; 004fff3e
    JNZ 0x0050003d                      ; 004fff40
        ;   XREF to: 0050003d (CONDITIONAL_JUMP)  ; LAB_0050003d
    PUSH 0x0                            ; 004fff46
        ;   Label: LAB_004fff46
    PUSH 0x0                            ; 004fff48
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fff4a
    PUSH EBX                            ; 004fff50
    CALL dword ptr [EAX + 0x130]        ; 004fff51
    ADD ESP,0xc                         ; 004fff57
    MOV ECX,dword ptr [EBX + 0x10bc4]   ; 004fff5a
        ;   Label: LAB_004fff5a
    MOV EAX,dword ptr [ESI]             ; 004fff60
    CMP EAX,ECX                         ; 004fff62
    JZ 0x0050004e                       ; 004fff64
        ;   XREF to: 0050004e (CONDITIONAL_JUMP)  ; LAB_0050004e
    CMP EAX,dword ptr [EBX + 0x10bbc]   ; 004fff6a
    JZ 0x004fff7e                       ; 004fff70
        ;   XREF to: 004fff7e (CONDITIONAL_JUMP)  ; LAB_004fff7e
    CMP EAX,dword ptr [EBX + 0x10bc0]   ; 004fff72
    JNZ 0x00500065                      ; 004fff78
        ;   XREF to: 00500065 (CONDITIONAL_JUMP)  ; LAB_00500065
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fff7e
        ;   Label: LAB_004fff7e
    MOV dword ptr [ESI + 0x4],EAX       ; 004fff81
    MOV ESP,EBP                         ; 004fff84
    POP EBP                             ; 004fff86
    POP EDI                             ; 004fff87
    POP ESI                             ; 004fff88
    POP EBX                             ; 004fff89
    RET                                 ; 004fff8a
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 004fff8b
        ;   Label: caseD_1
    JMP 0x004ffd06                      ; 004fff91
        ;   XREF to: 004ffd06 (UNCONDITIONAL_JUMP)  ; LAB_004ffd06
    MOV EAX,dword ptr [EBX + 0x10ba4]   ; 004fff96
        ;   Label: caseD_2
    JMP 0x004ffd06                      ; 004fff9c
        ;   XREF to: 004ffd06 (UNCONDITIONAL_JUMP)  ; LAB_004ffd06
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 004fffa1
        ;   Label: caseD_3
    JMP 0x004ffd06                      ; 004fffa7
        ;   XREF to: 004ffd06 (UNCONDITIONAL_JUMP)  ; LAB_004ffd06
    MOV EAX,dword ptr [EBX + 0x10bc4]   ; 004fffac
        ;   Label: caseD_4
    JMP 0x004ffd06                      ; 004fffb2
        ;   XREF to: 004ffd06 (UNCONDITIONAL_JUMP)  ; LAB_004ffd06
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 004fffb7
        ;   Label: caseD_5
    JMP 0x004ffd06                      ; 004fffbd
        ;   XREF to: 004ffd06 (UNCONDITIONAL_JUMP)  ; LAB_004ffd06
    CMP EAX,dword ptr [EBX + 0x10ba0]   ; 004fffc2
        ;   Label: LAB_004fffc2
    JZ 0x004ffd18                       ; 004fffc8
        ;   XREF to: 004ffd18 (CONDITIONAL_JUMP)  ; LAB_004ffd18
    CMP EAX,dword ptr [EBX + 0x10ba4]   ; 004fffce
    JZ 0x004ffd18                       ; 004fffd4
        ;   XREF to: 004ffd18 (CONDITIONAL_JUMP)  ; LAB_004ffd18
    CMP EAX,dword ptr [EBX + 0x10ba8]   ; 004fffda
    JZ 0x004ffd18                       ; 004fffe0
        ;   XREF to: 004ffd18 (CONDITIONAL_JUMP)  ; LAB_004ffd18
    CMP EAX,dword ptr [EBX + 0x10bc0]   ; 004fffe6
    JZ 0x004ffd18                       ; 004fffec
        ;   XREF to: 004ffd18 (CONDITIONAL_JUMP)  ; LAB_004ffd18
    CMP EAX,dword ptr [EBX + 0x10bc4]   ; 004ffff2
    JZ 0x004ffd18                       ; 004ffff8
        ;   XREF to: 004ffd18 (CONDITIONAL_JUMP)  ; LAB_004ffd18
    JMP 0x004fff5a                      ; 004ffffe
        ;   XREF to: 004fff5a (UNCONDITIONAL_JUMP)  ; LAB_004fff5a
    FLD double ptr [ESP]                ; 00500003
        ;   Label: LAB_00500003
    FCOMP double ptr [0x005deed5]       ; 00500006 | DAT_005deed5
    FNSTSW AX                           ; 0050000c
    SAHF                                ; 0050000e
    JNC 0x004ffd53                      ; 0050000f
        ;   XREF to: 004ffd53 (CONDITIONAL_JUMP)  ; LAB_004ffd53
    MOV EAX,dword ptr [EBX + 0x10ba4]   ; 00500015
    JMP 0x004ffd51                      ; 0050001b
        ;   XREF to: 004ffd51 (UNCONDITIONAL_JUMP)  ; LAB_004ffd51
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00500020
        ;   Label: LAB_00500020
    JMP 0x004ffef0                      ; 00500027
        ;   XREF to: 004ffef0 (UNCONDITIONAL_JUMP)  ; LAB_004ffef0
    CMP EAX,dword ptr [EBX + 0x10ba8]   ; 0050002c
        ;   Label: LAB_0050002c
    JZ 0x004fff0e                       ; 00500032
        ;   XREF to: 004fff0e (CONDITIONAL_JUMP)  ; LAB_004fff0e
    JMP 0x004fff36                      ; 00500038
        ;   XREF to: 004fff36 (UNCONDITIONAL_JUMP)  ; LAB_004fff36
    CMP EAX,dword ptr [EBX + 0x10ba0]   ; 0050003d
        ;   Label: LAB_0050003d
    JZ 0x004fff46                       ; 00500043
        ;   XREF to: 004fff46 (CONDITIONAL_JUMP)  ; LAB_004fff46
    JMP 0x004fff5a                      ; 00500049
        ;   XREF to: 004fff5a (UNCONDITIONAL_JUMP)  ; LAB_004fff5a
    FLD float ptr [ESI + 0x4]           ; 0050004e
        ;   Label: LAB_0050004e
    FLD ST0                             ; 00500051
    FMUL double ptr [0x005deeed]        ; 00500053 | DAT_005deeed
    FSTP ST1                            ; 00500059
    FSTP float ptr [ESI + 0x4]          ; 0050005b
    MOV ESP,EBP                         ; 0050005e
    POP EBP                             ; 00500060
    POP EDI                             ; 00500061
    POP ESI                             ; 00500062
    POP EBX                             ; 00500063
    RET                                 ; 00500064
    FLD float ptr [ESI + 0x4]           ; 00500065
        ;   Label: LAB_00500065
    FLD ST0                             ; 00500068
    FMUL double ptr [0x005deee5]        ; 0050006a | DAT_005deee5
    FSTP ST1                            ; 00500070
    FSTP float ptr [ESI + 0x4]          ; 00500072
    MOV ESP,EBP                         ; 00500075
    POP EBP                             ; 00500077
    POP EDI                             ; 00500078
    POP ESI                             ; 00500079
    POP EBX                             ; 0050007a
    RET                                 ; 0050007b

