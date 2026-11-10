; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_process_FUN_0040fb40(CBird *this_ptr,float delta_time)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_STAND_005b639d
;   TerminatedCString s_s_confused_while_walking_005b63a3
;   undefined4 DAT_005b63cd
;   undefined4 DAT_005b63d1
;   TerminatedCString s_WPPerch_005b63d5
;   TerminatedCString s_LAND_TREE_005b63de
;   TerminatedCString s_LAND_GROUND_005b63e8
;   TerminatedCString s_STAND_005b63f4
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_0042cd70
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fb40
        ;   Label: core_bird.cpp_CBird_process_FUN_0040fb40
    PUSH ESI                            ; 0040fb41
    PUSH EDI                            ; 0040fb42
    PUSH EBP                            ; 0040fb43
    MOV EBP,ESP                         ; 0040fb44
    SUB ESP,0x80                        ; 0040fb46
    AND ESP,0xfffffff8                  ; 0040fb4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040fb4f
    PUSH dword ptr [EBP + 0x18]         ; 0040fb52
    PUSH EBX                            ; 0040fb55
    CALL core_charactr.cpp_FUN_0042cd70 ; 0040fb56
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 0040fb5b
    TEST EAX,EAX                        ; 0040fb5e
    JNZ 0x0040fb69                      ; 0040fb60
        ;   XREF to: 0040fb69 (CONDITIONAL_JUMP)  ; LAB_0040fb69
    MOV ESP,EBP                         ; 0040fb62
    POP EBP                             ; 0040fb64
    POP EDI                             ; 0040fb65
    POP ESI                             ; 0040fb66
    POP EBX                             ; 0040fb67
    RET                                 ; 0040fb68
    PUSH dword ptr [EBP + 0x18]         ; 0040fb69
        ;   Label: LAB_0040fb69
    PUSH EBX                            ; 0040fb6c
    CALL core_charactr.cpp_FUN_00433c60 ; 0040fb6d
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    LEA EAX,[EBX + 0x249c]              ; 0040fb72
    XOR EDX,EDX                         ; 0040fb78
    ADD ESP,0x8                         ; 0040fb7a
    MOV dword ptr [EAX + 0x8],EDX       ; 0040fb7d
    MOV dword ptr [ESP + 0x7c],EDX      ; 0040fb80
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fb84
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fb87
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fb8a
    MOV dword ptr [EAX],EDX             ; 0040fb8d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040fb8f
    LEA ESI,[EBX + 0x158]               ; 0040fb92
    MOV dword ptr [ESP],EAX             ; 0040fb98
    FLD float ptr [ESP]                 ; 0040fb9b
        ;   Label: LAB_0040fb9b
    FLDZ                                ; 0040fb9e
    FCOMPP                              ; 0040fba0
    FNSTSW AX                           ; 0040fba2
    SAHF                                ; 0040fba4
    JNC 0x0040fbbf                      ; 0040fba5
        ;   XREF to: 0040fbbf (CONDITIONAL_JUMP)  ; LAB_0040fbbf
    MOV EAX,ESP                         ; 0040fba7
    PUSH EAX                            ; 0040fba9
    PUSH ESI                            ; 0040fbaa
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0040fbab
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0040fbb0
    PUSH EAX                            ; 0040fbb3
    PUSH EBX                            ; 0040fbb4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0040fbb5
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0040fbba
    JMP 0x0040fb9b                      ; 0040fbbd
        ;   XREF to: 0040fb9b (UNCONDITIONAL_JUMP)  ; LAB_0040fb9b
    PUSH EBX                            ; 0040fbbf
        ;   Label: LAB_0040fbbf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040fbc0
    CALL dword ptr [EAX + 0x10c]        ; 0040fbc6
    ADD ESP,0x4                         ; 0040fbcc
    CMP EAX,0x1                         ; 0040fbcf
    JLE 0x0040fc50                      ; 0040fbd2
        ;   XREF to: 0040fc50 (CONDITIONAL_JUMP)  ; LAB_0040fc50
    CMP dword ptr [EBX + 0x70],0x1      ; 0040fbd8
    JNZ 0x0040fc50                      ; 0040fbdc
        ;   XREF to: 0040fc50 (CONDITIONAL_JUMP)  ; LAB_0040fc50
    MOV EDI,dword ptr [EBX + 0x206ac]   ; 0040fbde
    TEST EDI,EDI                        ; 0040fbe4
    JNZ 0x0040fc50                      ; 0040fbe6
        ;   XREF to: 0040fc50 (CONDITIONAL_JUMP)  ; LAB_0040fc50
    CMP dword ptr [EBX + 0xdc],0x0      ; 0040fbe8
    JNZ 0x0040fc50                      ; 0040fbef
        ;   XREF to: 0040fc50 (CONDITIONAL_JUMP)  ; LAB_0040fc50
    PUSH EDI                            ; 0040fbf1
    PUSH ESI                            ; 0040fbf2
    LEA ESI,[ESP + 0x54]                ; 0040fbf3
    LEA EDI,[ESP + 0x48]                ; 0040fbf7
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0040fbfb
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0040fc00
    LEA EAX,[ESP + 0x40]                ; 0040fc03
    LEA ESI,[ESP + 0x4c]                ; 0040fc07
    PUSH EAX                            ; 0040fc0b
    MOVSD ES:EDI,ESI                    ; 0040fc0c
    MOVSD ES:EDI,ESI                    ; 0040fc0d
    MOVSD ES:EDI,ESI                    ; 0040fc0e
    PUSH EBX                            ; 0040fc0f
    LEA ESI,[ESP + 0x3c]                ; 0040fc10
    CALL core_actor.cpp_FUN_00408b80    ; 0040fc14
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0040fc19
    PUSH 0x0                            ; 0040fc1c
    LEA EAX,[ESP + 0x74]                ; 0040fc1e
    LEA EDI,[ESP + 0x74]                ; 0040fc22
    PUSH EAX                            ; 0040fc26
    MOV EDX,dword ptr [0x005fed24]      ; 0040fc27 | g_CGorePtr
    LEA ESI,[ESP + 0x3c]                ; 0040fc2d
    PUSH EDX                            ; 0040fc31
    MOVSD ES:EDI,ESI                    ; 0040fc32
    MOVSD ES:EDI,ESI                    ; 0040fc33
    MOVSD ES:EDI,ESI                    ; 0040fc34
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0040fc35
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV ECX,0x1                         ; 0040fc3a
    ADD ESP,0xc                         ; 0040fc3f
    MOV dword ptr [EBX + 0x206ac],0x1   ; 0040fc42
    MOV dword ptr [ESP + 0x7c],ECX      ; 0040fc4c
    PUSH dword ptr [EBP + 0x18]         ; 0040fc50
        ;   Label: LAB_0040fc50
    FLD float ptr [EBX + 0x24a4]        ; 0040fc53
    PUSH EBX                            ; 0040fc59
    FSTP float ptr [EBX + 0x2524]       ; 0040fc5a
    CALL core_charactr.cpp_FUN_00434850 ; 0040fc60
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0040fc65
    PUSH dword ptr [EBP + 0x18]         ; 0040fc68
    PUSH EBX                            ; 0040fc6b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0040fc6c
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040fc71
    TEST EAX,EAX                        ; 0040fc74
    JZ 0x0040fcbd                       ; 0040fc76
        ;   XREF to: 0040fcbd (CONDITIONAL_JUMP)  ; LAB_0040fcbd
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0040fc78
    LEA EDX,[EBX + 0x158]               ; 0040fc7e
    CMP EAX,0x2                         ; 0040fc84
    JNC 0x0040fe2a                      ; 0040fc87
        ;   XREF to: 0040fe2a (CONDITIONAL_JUMP)  ; LAB_0040fe2a
    CMP EAX,0x1                         ; 0040fc8d
    JNZ 0x0040fe31                      ; 0040fc90
        ;   XREF to: 0040fe31 (CONDITIONAL_JUMP)  ; LAB_0040fe31
    PUSH EAX                            ; 0040fc96
    PUSH 0x5b63d1                       ; 0040fc97 | DAT_005b63d1
    PUSH EDX                            ; 0040fc9c
        ;   Label: LAB_0040fc9c
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0040fc9d
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
        ;   Label: LAB_0040fc9d
    ADD ESP,0xc                         ; 0040fca2
        ;   Label: LAB_0040fca2
    LEA EAX,[EBX + 0x249c]              ; 0040fca5
    MOV dword ptr [EAX + 0x8],0x0       ; 0040fcab
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fcb2
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fcb5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fcb8
    MOV dword ptr [EAX],EDX             ; 0040fcbb
    PUSH dword ptr [EBP + 0x18]         ; 0040fcbd
        ;   Label: LAB_0040fcbd
    PUSH EBX                            ; 0040fcc0
    LEA ESI,[EBX + 0x2518]              ; 0040fcc1
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0040fcc7
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 0040fccc
    FLD float ptr [ESI]                 ; 0040fccf
    FMUL float ptr [EBP + 0x18]         ; 0040fcd1
    FLD float ptr [ESI + 0x4]           ; 0040fcd4
    FMUL float ptr [EBP + 0x18]         ; 0040fcd7
    FLD float ptr [ESI + 0x8]           ; 0040fcda
    FMUL float ptr [EBP + 0x18]         ; 0040fcdd
    LEA EDI,[ESP + 0x4]                 ; 0040fce0
    LEA ESI,[ESP + 0x10]                ; 0040fce4
    FXCH ST2                            ; 0040fce8
    FSTP float ptr [ESP + 0x10]         ; 0040fcea
    FSTP float ptr [ESP + 0x14]         ; 0040fcee
    FSTP float ptr [ESP + 0x18]         ; 0040fcf2
    MOVSD ES:EDI,ESI                    ; 0040fcf6
    MOVSD ES:EDI,ESI                    ; 0040fcf7
    MOVSD ES:EDI,ESI                    ; 0040fcf8
    LEA EDX,[EBX + 0x250c]              ; 0040fcf9
    FLD float ptr [ESP + 0x4]           ; 0040fcff
    FLD float ptr [ESP + 0x8]           ; 0040fd03
    FLD float ptr [ESP + 0xc]           ; 0040fd07
    LEA EDI,[ESP + 0x58]                ; 0040fd0b
    LEA ESI,[ESP + 0x64]                ; 0040fd0f
    FXCH ST2                            ; 0040fd13
    FADD float ptr [EDX]                ; 0040fd15
    FXCH                                ; 0040fd17
    FADD float ptr [EDX + 0x4]          ; 0040fd19
    FXCH ST2                            ; 0040fd1c
    FADD float ptr [EDX + 0x8]          ; 0040fd1e
    FXCH                                ; 0040fd21
    FSTP float ptr [ESP + 0x64]         ; 0040fd23
    FXCH                                ; 0040fd27
    FSTP float ptr [ESP + 0x68]         ; 0040fd29
    FSTP float ptr [ESP + 0x6c]         ; 0040fd2d
    MOVSD ES:EDI,ESI                    ; 0040fd31
    MOVSD ES:EDI,ESI                    ; 0040fd32
    MOVSD ES:EDI,ESI                    ; 0040fd33
    LEA EAX,[EBX + 0x249c]              ; 0040fd34
    FLD float ptr [ESP + 0x58]          ; 0040fd3a
    FLD float ptr [ESP + 0x5c]          ; 0040fd3e
    FLD float ptr [ESP + 0x60]          ; 0040fd42
    LEA EDI,[ESP + 0x1c]                ; 0040fd46
    LEA ESI,[ESP + 0x28]                ; 0040fd4a
    FXCH ST2                            ; 0040fd4e
    FADD float ptr [EAX]                ; 0040fd50
    FXCH                                ; 0040fd52
    FADD float ptr [EAX + 0x4]          ; 0040fd54
    FXCH ST2                            ; 0040fd57
    FADD float ptr [EAX + 0x8]          ; 0040fd59
    FXCH                                ; 0040fd5c
    FSTP float ptr [ESP + 0x28]         ; 0040fd5e
    FXCH                                ; 0040fd62
    FSTP float ptr [ESP + 0x2c]         ; 0040fd64
    FSTP float ptr [ESP + 0x30]         ; 0040fd68
    MOVSD ES:EDI,ESI                    ; 0040fd6c
    MOVSD ES:EDI,ESI                    ; 0040fd6d
    MOVSD ES:EDI,ESI                    ; 0040fd6e
    MOV dword ptr [EDX + 0x8],0x0       ; 0040fd6f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040fd76
    MOV dword ptr [EDX + 0x4],ECX       ; 0040fd79
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040fd7c
    MOV dword ptr [EDX],ECX             ; 0040fd7f
    MOV dword ptr [EAX + 0x8],0x0       ; 0040fd81
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fd88
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fd8b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fd8e
    MOV dword ptr [EAX],EDX             ; 0040fd91
    LEA EAX,[ESP + 0x1c]                ; 0040fd93
    PUSH EAX                            ; 0040fd97
    PUSH EBX                            ; 0040fd98
    CALL core_charactr.cpp_FUN_0042c230 ; 0040fd99
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0040fd9e
    PUSH EBX                            ; 0040fda1
    CALL core_charactr.cpp_FUN_0042cd30 ; 0040fda2
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040fda7
    LEA EAX,[EBX + 0x158]               ; 0040fdaa
    PUSH EAX                            ; 0040fdb0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0040fdb1
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040fdb6
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0040fdb9
    PUSH EDX                            ; 0040fdbd
    PUSH dword ptr [EBP + 0x18]         ; 0040fdbe
    PUSH EBX                            ; 0040fdc1
    CALL core_charactr.cpp_FUN_00432330 ; 0040fdc2
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 0040fdc7
    PUSH dword ptr [EBP + 0x18]         ; 0040fdca
    PUSH EBX                            ; 0040fdcd
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0040fdce
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0040fdd3
    MOV ESP,EBP                         ; 0040fdd6
    POP EBP                             ; 0040fdd8
    POP EDI                             ; 0040fdd9
    POP ESI                             ; 0040fdda
    POP EBX                             ; 0040fddb
    RET                                 ; 0040fddc
    PUSH 0x1                            ; 0040fddd
        ;   Label: LAB_0040fddd
    PUSH 0x5b639d                       ; 0040fddf | = "STAND"
    PUSH EDX                            ; 0040fde4
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0040fde5
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0040fdea
    PUSH EBX                            ; 0040fded
    PUSH 0x5b63a3                       ; 0040fdee | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 0040fdf3 | g_CConsolePtr
    PUSH ESI                            ; 0040fdf9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0040fdfa
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0040fca2                      ; 0040fdff
        ;   XREF to: 0040fca2 (UNCONDITIONAL_JUMP)  ; LAB_0040fca2
    PUSH 0x1                            ; 0040fe04
        ;   Label: LAB_0040fe04
    PUSH 0x5b63cd                       ; 0040fe06 | DAT_005b63cd
    JMP 0x0040fc9c                      ; 0040fe0b
        ;   XREF to: 0040fc9c (UNCONDITIONAL_JUMP)  ; LAB_0040fc9c
    PUSH 0x1                            ; 0040fe10
        ;   Label: LAB_0040fe10
    PUSH 0x5b63e8                       ; 0040fe12 | = "LAND_GROUND"
    PUSH ESI                            ; 0040fe17
    JMP 0x0040fc9d                      ; 0040fe18
        ;   XREF to: 0040fc9d (UNCONDITIONAL_JUMP)  ; LAB_0040fc9d
    PUSH 0x1                            ; 0040fe1d
        ;   Label: LAB_0040fe1d
    PUSH 0x5b63f4                       ; 0040fe1f | = "STAND"
    PUSH ESI                            ; 0040fe24
    JMP 0x0040fc9d                      ; 0040fe25
        ;   XREF to: 0040fc9d (UNCONDITIONAL_JUMP)  ; LAB_0040fc9d
    JBE 0x0040fe04                      ; 0040fe2a
        ;   XREF to: 0040fe04 (CONDITIONAL_JUMP)  ; LAB_0040fe04
        ;   Label: LAB_0040fe2a
    CMP EAX,0x3                         ; 0040fe2c
    JZ 0x0040fddd                       ; 0040fe2f
        ;   XREF to: 0040fddd (CONDITIONAL_JUMP)  ; LAB_0040fddd
    MOV EDI,dword ptr [EBX + 0x2704]    ; 0040fe31
        ;   Label: LAB_0040fe31
    LEA ESI,[EBX + 0x158]               ; 0040fe37
    TEST EDI,EDI                        ; 0040fe3d
    JZ 0x0040fe1d                       ; 0040fe3f
        ;   XREF to: 0040fe1d (CONDITIONAL_JUMP)  ; LAB_0040fe1d
    PUSH 0x5b63d5                       ; 0040fe41 | = "WPPerch*"
    PUSH EDI                            ; 0040fe46
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0040fe47
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040fe4c
    CMP EAX,0x1                         ; 0040fe4f
    JNZ 0x0040fe10                      ; 0040fe52
        ;   XREF to: 0040fe10 (CONDITIONAL_JUMP)  ; LAB_0040fe10
    PUSH EAX                            ; 0040fe54
    PUSH 0x5b63de                       ; 0040fe55 | = "LAND_TREE"
    PUSH ESI                            ; 0040fe5a
    JMP 0x0040fc9d                      ; 0040fe5b
        ;   XREF to: 0040fc9d (UNCONDITIONAL_JUMP)  ; LAB_0040fc9d

