; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_00413c40(CBatman *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 00414036
;
; Referenced Globals:
;   undefined1* switchdataD_00413c1c = 00413c7d
;   TerminatedCString s_limb_wav_005d3b25
;   TerminatedCString s_Shot_thru_the_heart_005d3b2f
;   undefined4 DAT_005d3b49
;   undefined4 DAT_005d3b51
;   undefined4 DAT_005d3b59
;   undefined4 DAT_005d3b61
;   CConsole* g_CConsolePtr = 007db5f0
;   CGame* g_CGamePtr = 01ccf390
;   CConsole g_CConsoleInstance
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413c40
        ;   Label: core_batman.cpp_CBatman_processDismemberment_FUN_00413c40
    PUSH ESI                            ; 00413c41
    PUSH EDI                            ; 00413c42
    PUSH EBP                            ; 00413c43
    SUB ESP,0x30                        ; 00413c44
    MOV EBX,dword ptr [ESP + 0x44]      ; 00413c47
    MOV ESI,dword ptr [ESP + 0x48]      ; 00413c4b
    FLD float ptr [ESI + 0x2c]          ; 00413c4f
    FLDZ                                ; 00413c52
    FCOMPP                              ; 00413c54
    FNSTSW AX                           ; 00413c56
    SAHF                                ; 00413c58
    JNC 0x00413c85                      ; 00413c59
        ;   XREF to: 00413c85 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00413c5b
    JNZ 0x00413c85                      ; 00413c5e
        ;   XREF to: 00413c85 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00413c60
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 00413c65
    MOV EDI,0x6                         ; 00413c67
    SAR EDX,0x1f                        ; 00413c6c
    IDIV EDI                            ; 00413c6f
    CMP EDX,0x5                         ; 00413c71
    JA 0x00413c85                       ; 00413c74
        ;   XREF to: 00413c85 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x413c1c]  ; 00413c76 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc2d8]    ; 00413c7d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00413c83
        ;   Label: LAB_00413c83
    MOV ECX,dword ptr [EBX + 0xc2d8]    ; 00413c85
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00413c8b
    CMP EAX,ECX                         ; 00413c8d
    JNZ 0x00413e84                      ; 00413c8f
        ;   XREF to: 00413e84 (CONDITIONAL_JUMP)  ; LAB_00413e84
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00413c95
        ;   Label: LAB_00413c95
    MOV EBP,dword ptr [EBX + 0xc2d0]    ; 00413c98
    MOV dword ptr [ESP + 0x2c],EAX      ; 00413c9e
    CMP EBP,dword ptr [ESI]             ; 00413ca2
    JNZ 0x00413cae                      ; 00413ca4
        ;   XREF to: 00413cae (CONDITIONAL_JUMP)  ; LAB_00413cae
    MOV dword ptr [ESP + 0x2c],0x3d4ccccd ; 00413ca6
    MOV EDX,dword ptr [EBX + 0xc2d4]    ; 00413cae
        ;   Label: LAB_00413cae
    CMP EDX,dword ptr [ESI]             ; 00413cb4
    JNZ 0x00413cc0                      ; 00413cb6
        ;   XREF to: 00413cc0 (CONDITIONAL_JUMP)  ; LAB_00413cc0
    MOV dword ptr [ESP + 0x2c],0x3ca3d70a ; 00413cb8
    MOV EAX,[0x0061d95c]                ; 00413cc0 | g_CGamePtr
        ;   Label: LAB_00413cc0
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00413cc5 | g_CGameInstance.field460_0x1fc
    JZ 0x00413cd6                       ; 00413ccc
        ;   XREF to: 00413cd6 (CONDITIONAL_JUMP)  ; LAB_00413cd6
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 00413cce
    MOV EAX,[0x0061d95c]                ; 00413cd6 | g_CGamePtr
        ;   Label: LAB_00413cd6
    MOV EDX,dword ptr [EAX + 0x14]      ; 00413cdb | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 00413cde
    JNZ 0x00413ce6                      ; 00413ce0
        ;   XREF to: 00413ce6 (CONDITIONAL_JUMP)  ; LAB_00413ce6
    MOV dword ptr [ESP + 0x2c],EDX      ; 00413ce2
    PUSH dword ptr [ESP + 0x2c]         ; 00413ce6
        ;   Label: LAB_00413ce6
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00413cea
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00413cef
    TEST EAX,EAX                        ; 00413cf2
    JZ 0x00413e11                       ; 00413cf4
        ;   XREF to: 00413e11 (CONDITIONAL_JUMP)  ; LAB_00413e11
    MOV EDI,dword ptr [EBX + 0x27a0]    ; 00413cfa
    PUSH EDI                            ; 00413d00
    PUSH 0x0                            ; 00413d01
    PUSH 0x0                            ; 00413d03
    PUSH EBX                            ; 00413d05
    LEA EAX,[ESI + 0xc]                 ; 00413d06
    PUSH EAX                            ; 00413d09
    LEA EAX,[EBX + 0x30]                ; 00413d0a
    PUSH EAX                            ; 00413d0d
    LEA EAX,[EBX + 0x20]                ; 00413d0e
    PUSH EAX                            ; 00413d11
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 00413d12
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00413d17
    MOV EDI,EAX                         ; 00413d1a
    PUSH 0x0                            ; 00413d1c
    MOV EBP,EAX                         ; 00413d1e
    MOV EAX,dword ptr [ESI]             ; 00413d20
    PUSH EAX                            ; 00413d22
    PUSH EDI                            ; 00413d23
    PUSH EBX                            ; 00413d24
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 00413d25
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 00413d2a
    MOV EDX,dword ptr [EBX + 0xc2d8]    ; 00413d2c
    ADD ESP,0x10                        ; 00413d32
    CMP EAX,EDX                         ; 00413d35
    JNZ 0x00413d4c                      ; 00413d37
        ;   XREF to: 00413d4c (CONDITIONAL_JUMP)  ; LAB_00413d4c
    PUSH 0x0                            ; 00413d39
    MOV ECX,dword ptr [EBX + 0xc2dc]    ; 00413d3b
    PUSH ECX                            ; 00413d41
    PUSH EDI                            ; 00413d42
    PUSH EBX                            ; 00413d43
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 00413d44
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00413d49
    MOV EDI,dword ptr [EBX + 0xc2e0]    ; 00413d4c
        ;   Label: LAB_00413d4c
    CMP EDI,dword ptr [ESI]             ; 00413d52
    JNZ 0x00413d69                      ; 00413d54
        ;   XREF to: 00413d69 (CONDITIONAL_JUMP)  ; LAB_00413d69
    PUSH 0x0                            ; 00413d56
    MOV EAX,dword ptr [EBX + 0xc2e4]    ; 00413d58
    PUSH EAX                            ; 00413d5e
    PUSH EBP                            ; 00413d5f
    PUSH EBX                            ; 00413d60
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 00413d61
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00413d66
    MOV EDX,dword ptr [EBX + 0xc2d4]    ; 00413d69
        ;   Label: LAB_00413d69
    CMP EDX,dword ptr [ESI]             ; 00413d6f
    JNZ 0x00413dd5                      ; 00413d71
        ;   XREF to: 00413dd5 (CONDITIONAL_JUMP)  ; LAB_00413dd5
    PUSH 0x0                            ; 00413d73
    LEA EDI,[ESI + 0xc]                 ; 00413d75
    PUSH EDI                            ; 00413d78
    MOV ECX,dword ptr [EBX + 0xc2e0]    ; 00413d79
    PUSH ECX                            ; 00413d7f
    PUSH EBX                            ; 00413d80
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00413d81
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00413d86
    PUSH 0x0                            ; 00413d89
    PUSH EDI                            ; 00413d8b
    MOV EAX,dword ptr [EBX + 0xc2e4]    ; 00413d8c
    PUSH EAX                            ; 00413d92
    PUSH EBX                            ; 00413d93
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00413d94
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00413d99
    PUSH 0x0                            ; 00413d9c
    PUSH EDI                            ; 00413d9e
    MOV EDX,dword ptr [EBX + 0xc2d8]    ; 00413d9f
    PUSH EDX                            ; 00413da5
    PUSH EBX                            ; 00413da6
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00413da7
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00413dac
    PUSH 0x0                            ; 00413daf
    PUSH EDI                            ; 00413db1
    MOV ECX,dword ptr [EBX + 0xc2dc]    ; 00413db2
    PUSH ECX                            ; 00413db8
    PUSH EBX                            ; 00413db9
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00413dba
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00413dbf
    PUSH 0x0                            ; 00413dc2
    PUSH EDI                            ; 00413dc4
    MOV EDI,dword ptr [EBX + 0xc2d0]    ; 00413dc5
    PUSH EDI                            ; 00413dcb
    PUSH EBX                            ; 00413dcc
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00413dcd
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00413dd2
    PUSH 0x5d3b25                       ; 00413dd5 | = "limb?.wav"
        ;   Label: LAB_00413dd5
    PUSH EBX                            ; 00413dda
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 00413ddb
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00413de0
    PUSH EBP                            ; 00413de3
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00413de4
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 00413de9
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00413def
    ADD ESP,0x4                         ; 00413df6
    TEST EBP,EBP                        ; 00413df9
    JZ 0x00413ec5                       ; 00413dfb
        ;   XREF to: 00413ec5 (CONDITIONAL_JUMP)  ; LAB_00413ec5
    FLD float ptr [ESI + 0x8]           ; 00413e01
        ;   Label: LAB_00413e01
    FLD ST0                             ; 00413e04
    FMUL double ptr [0x005d3b49]        ; 00413e06 | DAT_005d3b49
    FSTP ST1                            ; 00413e0c
    FSTP float ptr [ESI + 0x8]          ; 00413e0e
    MOV EDX,dword ptr [EBX + 0xc2d0]    ; 00413e11
        ;   Label: LAB_00413e11
    MOV EAX,dword ptr [ESI]             ; 00413e17
    CMP EAX,EDX                         ; 00413e19
    JNZ 0x00413ed1                      ; 00413e1b
        ;   XREF to: 00413ed1 (CONDITIONAL_JUMP)  ; LAB_00413ed1
    FLD float ptr [ESI + 0x4]           ; 00413e21
    FLD ST0                             ; 00413e24
    FMUL double ptr [0x005d3b59]        ; 00413e26 | DAT_005d3b59
    FSTP ST1                            ; 00413e2c
        ;   Label: LAB_00413e2c
    FSTP float ptr [ESI + 0x4]          ; 00413e2e
    MOV EBP,dword ptr [EBX + 0xc2d4]    ; 00413e31
        ;   Label: LAB_00413e31
    CMP EBP,dword ptr [ESI]             ; 00413e37
    JNZ 0x00413e45                      ; 00413e39
        ;   XREF to: 00413e45 (CONDITIONAL_JUMP)  ; LAB_00413e45
    CMP dword ptr [ESI + 0x30],0x68     ; 00413e3b
    JZ 0x00413efc                       ; 00413e3f
        ;   XREF to: 00413efc (CONDITIONAL_JUMP)  ; LAB_00413efc
    ADD ESP,0x30                        ; 00413e45
        ;   Label: LAB_00413e45
    POP EBP                             ; 00413e48
    POP EDI                             ; 00413e49
    POP ESI                             ; 00413e4a
    POP EBX                             ; 00413e4b
    RET                                 ; 00413e4c
    MOV EAX,dword ptr [EBX + 0xc2dc]    ; 00413e4d
        ;   Label: caseD_1
    JMP 0x00413c83                      ; 00413e53
        ;   XREF to: 00413c83 (UNCONDITIONAL_JUMP)  ; LAB_00413c83
    MOV EAX,dword ptr [EBX + 0xc2e0]    ; 00413e58
        ;   Label: caseD_2
    JMP 0x00413c83                      ; 00413e5e
        ;   XREF to: 00413c83 (UNCONDITIONAL_JUMP)  ; LAB_00413c83
    MOV EAX,dword ptr [EBX + 0xc2e4]    ; 00413e63
        ;   Label: caseD_3
    JMP 0x00413c83                      ; 00413e69
        ;   XREF to: 00413c83 (UNCONDITIONAL_JUMP)  ; LAB_00413c83
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 00413e6e
        ;   Label: caseD_4
    JMP 0x00413c83                      ; 00413e74
        ;   XREF to: 00413c83 (UNCONDITIONAL_JUMP)  ; LAB_00413c83
    MOV EAX,dword ptr [EBX + 0xc2d4]    ; 00413e79
        ;   Label: caseD_5
    JMP 0x00413c83                      ; 00413e7f
        ;   XREF to: 00413c83 (UNCONDITIONAL_JUMP)  ; LAB_00413c83
    CMP EAX,dword ptr [EBX + 0xc2dc]    ; 00413e84
        ;   Label: LAB_00413e84
    JZ 0x00413c95                       ; 00413e8a
        ;   XREF to: 00413c95 (CONDITIONAL_JUMP)  ; LAB_00413c95
    CMP EAX,dword ptr [EBX + 0xc2e0]    ; 00413e90
    JZ 0x00413c95                       ; 00413e96
        ;   XREF to: 00413c95 (CONDITIONAL_JUMP)  ; LAB_00413c95
    CMP EAX,dword ptr [EBX + 0xc2e4]    ; 00413e9c
    JZ 0x00413c95                       ; 00413ea2
        ;   XREF to: 00413c95 (CONDITIONAL_JUMP)  ; LAB_00413c95
    CMP EAX,dword ptr [EBX + 0xc2d4]    ; 00413ea8
    JZ 0x00413c95                       ; 00413eae
        ;   XREF to: 00413c95 (CONDITIONAL_JUMP)  ; LAB_00413c95
    CMP EAX,dword ptr [EBX + 0xc2d0]    ; 00413eb4
    JZ 0x00413c95                       ; 00413eba
        ;   XREF to: 00413c95 (CONDITIONAL_JUMP)  ; LAB_00413c95
    JMP 0x00413e11                      ; 00413ec0
        ;   XREF to: 00413e11 (UNCONDITIONAL_JUMP)  ; LAB_00413e11
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00413ec5
        ;   Label: LAB_00413ec5
    JMP 0x00413e01                      ; 00413ecc
        ;   XREF to: 00413e01 (UNCONDITIONAL_JUMP)  ; LAB_00413e01
    CMP EAX,dword ptr [EBX + 0xc2e8]    ; 00413ed1
        ;   Label: LAB_00413ed1
    JNZ 0x00413ee4                      ; 00413ed7
        ;   XREF to: 00413ee4 (CONDITIONAL_JUMP)  ; LAB_00413ee4
    MOV EAX,dword ptr [ESI + 0x4]       ; 00413ed9
        ;   Label: LAB_00413ed9
    MOV dword ptr [ESI + 0x4],EAX       ; 00413edc
    JMP 0x00413e31                      ; 00413edf
        ;   XREF to: 00413e31 (UNCONDITIONAL_JUMP)  ; LAB_00413e31
    CMP EAX,dword ptr [EBX + 0xc2d4]    ; 00413ee4
        ;   Label: LAB_00413ee4
    JZ 0x00413ed9                       ; 00413eea
        ;   XREF to: 00413ed9 (CONDITIONAL_JUMP)  ; LAB_00413ed9
    FLD float ptr [ESI + 0x4]           ; 00413eec
    FLD ST0                             ; 00413eef
    FMUL double ptr [0x005d3b51]        ; 00413ef1 | DAT_005d3b51
    JMP 0x00413e2c                      ; 00413ef7
        ;   XREF to: 00413e2c (UNCONDITIONAL_JUMP)  ; LAB_00413e2c
    FLD float ptr [ESI + 0x4]           ; 00413efc
        ;   Label: LAB_00413efc
    PUSH 0x5d3b2f                       ; 00413eff | = "Shot thru the heart\n"
    MOV EDX,dword ptr [0x00611100]      ; 00413f04 | g_CConsolePtr
    FLD ST0                             ; 00413f0a
    FMUL double ptr [0x005d3b61]        ; 00413f0c | DAT_005d3b61
    PUSH EDX                            ; 00413f12 | g_CConsoleInstance
    FSTP ST1                            ; 00413f13
    FSTP float ptr [ESI + 0x4]          ; 00413f15
    CALL engine_console.cpp_FUN_00445430 ; 00413f18
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x8                         ; 00413f1d
    PUSH 0x3f000000                     ; 00413f20
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00413f25
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00413f2a
    TEST EAX,EAX                        ; 00413f2d
    JZ 0x00413e45                       ; 00413f2f
        ;   XREF to: 00413e45 (CONDITIONAL_JUMP)  ; LAB_00413e45
    MOV ESI,0x41a00000                  ; 00413f35
    LEA EAX,[ESP + 0xc]                 ; 00413f3a
    XOR ECX,ECX                         ; 00413f3e
    PUSH EAX                            ; 00413f40
    MOV dword ptr [ESP + 0x14],ESI      ; 00413f41
    MOV dword ptr [ESP + 0x18],ESI      ; 00413f45
    PUSH EBX                            ; 00413f49
    LEA ESI,[ESP + 0x20]                ; 00413f4a
    MOV dword ptr [ESP + 0x14],ECX      ; 00413f4e
    CALL core_actor.cpp_FUN_00408ac0    ; 00413f52
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00413f57
    PUSH 0x1                            ; 00413f5a
    LEA EAX,[ESP + 0x4]                 ; 00413f5c
    PUSH 0xbf800000                     ; 00413f60
    PUSH EAX                            ; 00413f65
    LEA EDI,[ESP + 0xc]                 ; 00413f66
    LEA ESI,[ESP + 0x24]                ; 00413f6a
    PUSH EBX                            ; 00413f6e
    MOVSD ES:EDI,ESI                    ; 00413f6f
    MOVSD ES:EDI,ESI                    ; 00413f70
    MOVSD ES:EDI,ESI                    ; 00413f71
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 00413f72
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 00413f77
    ADD ESP,0x30                        ; 00413f7a
    POP EBP                             ; 00413f7d
    POP EDI                             ; 00413f7e
    POP ESI                             ; 00413f7f
    POP EBX                             ; 00413f80
    RET                                 ; 00413f81

