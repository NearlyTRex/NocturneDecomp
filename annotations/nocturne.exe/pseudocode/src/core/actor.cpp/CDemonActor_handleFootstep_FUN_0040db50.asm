; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040db50(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EGroundType      Stack[0xc]:4   ground_type
; float            Stack[0x10]:4   volume
; Local Variables:
; undefined8       Stack[-0x94]:8  local_94
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   void* PTR_caseD_1_0040db24 = 0040dc6a
;   TerminatedCString s_footstep_s_s_wav_f_00578021
;   double DOUBLE_0057803d = 5.87890821882528E-39
;   void* PTR_DAT_005b9284 = 01c70f74
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_01cae0e8
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonCamera_01fb8508.position.x
;   undefined4 g_CDemonCamera_01fb8508.position.y
;   undefined4 g_CDemonCamera_01fb8508.position.z
;
; Called Functions:
;   core_gore.cpp_CGore_createFootstep_FUN_004b06b0
;   core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
;   core_ground.cpp_getGroundTypeCode_FUN_004b11b0
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   crt_stdio.c_sprintf_FUN_00563c90
;   xxx_unk.c_FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040db50
        ;   Label: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040db50
    PUSH ESI                            ; 0040db51
    PUSH EDI                            ; 0040db52
    PUSH EBP                            ; 0040db53
    SUB ESP,0x7c                        ; 0040db54
    MOV EBX,dword ptr [ESP + 0x90]      ; 0040db57
    MOV ESI,dword ptr [ESP + 0x94]      ; 0040db5e
    MOV EDI,dword ptr [ESP + 0x98]      ; 0040db65
    MOV EAX,[0x01fb860c]                ; 0040db6c | g_CDemonCamera_01fb8508.position.x
    MOV dword ptr [ESP + 0x64],EAX      ; 0040db71
    MOV EAX,0x1fb860c                   ; 0040db75
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040db7a | g_CDemonCamera_01fb8508.position.y
    MOV dword ptr [ESP + 0x68],EAX      ; 0040db7d
    MOV EAX,0x1fb860c                   ; 0040db81
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040db86 | g_CDemonCamera_01fb8508.position.z
    MOV dword ptr [ESP + 0x6c],EAX      ; 0040db89
    FLD float ptr [ESI]                 ; 0040db8d
    FSUB float ptr [ESP + 0x64]         ; 0040db8f
    FMUL ST0                            ; 0040db93
    FLD float ptr [ESI + 0x4]           ; 0040db95
    FSUB float ptr [ESP + 0x68]         ; 0040db98
    FMUL ST0                            ; 0040db9c
    FLD float ptr [ESI + 0x8]           ; 0040db9e
    FXCH                                ; 0040dba1
    FADDP ST2,ST0                       ; 0040dba3
    FSUB float ptr [ESP + 0x6c]         ; 0040dba5
    FMUL ST0                            ; 0040dba9
    FADDP                               ; 0040dbab
    FCOMP float ptr [0x0057803d]        ; 0040dbad | DOUBLE_0057803d
    FNSTSW AX                           ; 0040dbb3
    SAHF                                ; 0040dbb5
    JBE 0x0040dbc2                      ; 0040dbb6
        ;   XREF to: 0040dbc2 (CONDITIONAL_JUMP)  ; LAB_0040dbc2
    XOR EAX,EAX                         ; 0040dbb8
    ADD ESP,0x7c                        ; 0040dbba
    POP EBP                             ; 0040dbbd
    POP EDI                             ; 0040dbbe
    POP ESI                             ; 0040dbbf
    POP EBX                             ; 0040dbc0
    RET                                 ; 0040dbc1
    PUSH ESI                            ; 0040dbc2
        ;   Label: LAB_0040dbc2
    MOV EDX,dword ptr [0x005be368]      ; 0040dbc3 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0040dbc9 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50 ; 0040dbca
        ;   XREF to: 00511b50 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040dbcf
    TEST EAX,EAX                        ; 0040dbd2
    JZ 0x0040dbdb                       ; 0040dbd4
        ;   XREF to: 0040dbdb (CONDITIONAL_JUMP)  ; LAB_0040dbdb
    MOV EDI,0x6                         ; 0040dbd6
    LEA EAX,[EBX + 0x118]               ; 0040dbdb
        ;   Label: LAB_0040dbdb
    PUSH EAX                            ; 0040dbe1
    PUSH ESI                            ; 0040dbe2
    MOV ECX,dword ptr [0x005b96c4]      ; 0040dbe3 | g_CGore_PTR_005b96c4
    PUSH ECX                            ; 0040dbe9
    CALL core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730 ; 0040dbea
        ;   XREF to: 004b0730 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(CGore * this_ptr, CVector3f * position, int * out_blood_type)
    ADD ESP,0xc                         ; 0040dbef
    TEST EAX,EAX                        ; 0040dbf2
    JZ 0x0040dcb8                       ; 0040dbf4
        ;   XREF to: 0040dcb8 (CONDITIONAL_JUMP)  ; LAB_0040dcb8
    MOV dword ptr [EBX + 0x114],0xffff  ; 0040dbfa
    MOV EDX,dword ptr [EBX + 0x118]     ; 0040dc04
        ;   Label: LAB_0040dc04
    PUSH EDX                            ; 0040dc0a
    MOV ECX,dword ptr [EBX + 0x114]     ; 0040dc0b
    PUSH ECX                            ; 0040dc11
    PUSH 0xb                            ; 0040dc12
    LEA EAX,[EBX + 0x30]                ; 0040dc14
    PUSH EAX                            ; 0040dc17
    PUSH ESI                            ; 0040dc18
    MOV EBP,dword ptr [0x005b96c4]      ; 0040dc19 | g_CGore_PTR_005b96c4
    PUSH EBP                            ; 0040dc1f
    CALL core_gore.cpp_CGore_createFootstep_FUN_004b06b0 ; 0040dc20
        ;   XREF to: 004b06b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004b06b0(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    MOV EAX,dword ptr [EBX + 0x114]     ; 0040dc25
    SUB EAX,0x2000                      ; 0040dc2b
    ADD ESP,0x18                        ; 0040dc30
    MOV dword ptr [EBX + 0x114],EAX     ; 0040dc33
    TEST EAX,EAX                        ; 0040dc39
    JL 0x0040dced                       ; 0040dc3b
        ;   XREF to: 0040dced (CONDITIONAL_JUMP)  ; LAB_0040dced
    MOV EAX,[0x01cae0e8]                ; 0040dc41 | DAT_01cae0e8
        ;   Label: LAB_0040dc41
    CMP EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0040dc46
    JNZ 0x0040dc6a                      ; 0040dc4d
        ;   XREF to: 0040dc6a (CONDITIONAL_JUMP)  ; caseD_b
    CMP EDI,0xd                         ; 0040dc4f
    JA 0x0040dc5b                       ; 0040dc52
        ;   XREF to: 0040dc5b (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x40db0c]  ; 0040dc54 | caseD_d | caseD_b | caseD_5
        ;   Label: switchD
    MOV EDX,dword ptr [0x005b9284]      ; 0040dc5b | PTR_DAT_005b9284
        ;   Label: caseD_0
    PUSH EDX                            ; 0040dc61
    CALL xxx_unk.c_FUN_004940d0         ; 0040dc62
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 0040dc67
        ;   Label: LAB_0040dc67
    FLD float ptr [ESP + 0x9c]          ; 0040dc6a
        ;   Label: caseD_1
    SUB ESP,0x8                         ; 0040dc71
    FSTP double ptr [ESP]               ; 0040dc74
    PUSH EDI                            ; 0040dc77
    CALL core_ground.cpp_getGroundTypeCode_FUN_004b11b0 ; 0040dc78
        ;   XREF to: 004b11b0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004b11b0(EGroundType type)
    ADD ESP,0x4                         ; 0040dc7d
    PUSH EAX                            ; 0040dc80
    LEA EAX,[EBX + 0x11c]               ; 0040dc81
    PUSH EAX                            ; 0040dc87
    PUSH 0x578021                       ; 0040dc88 | = "footstep-%s-!-%s-?.wav @ %f"
    LEA EAX,[ESP + 0x14]                ; 0040dc8d
    PUSH EAX                            ; 0040dc91
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040dc92
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x18                        ; 0040dc97
    PUSH ESI                            ; 0040dc9a
    LEA EAX,[ESP + 0x4]                 ; 0040dc9b
    PUSH EAX                            ; 0040dc9f
    PUSH EBX                            ; 0040dca0
    MOV ECX,dword ptr [0x005bed68]      ; 0040dca1 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 0040dca7
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 0040dca8
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040dcad
    ADD ESP,0x7c                        ; 0040dcb0
    POP EBP                             ; 0040dcb3
    POP EDI                             ; 0040dcb4
    POP ESI                             ; 0040dcb5
    POP EBX                             ; 0040dcb6
    RET                                 ; 0040dcb7
    CMP dword ptr [EBX + 0x114],0x0     ; 0040dcb8
        ;   Label: LAB_0040dcb8
    JG 0x0040dc04                       ; 0040dcbf
        ;   XREF to: 0040dc04 (CONDITIONAL_JUMP)  ; LAB_0040dc04
    CMP EDI,0x3                         ; 0040dcc5
    JNZ 0x0040dc41                      ; 0040dcc8
        ;   XREF to: 0040dc41 (CONDITIONAL_JUMP)  ; LAB_0040dc41
    PUSH EAX                            ; 0040dcce
    PUSH 0x4000                         ; 0040dccf
    PUSH EDI                            ; 0040dcd4
    LEA EAX,[EBX + 0x30]                ; 0040dcd5
    PUSH EAX                            ; 0040dcd8
    PUSH ESI                            ; 0040dcd9
    MOV EAX,[0x005b96c4]                ; 0040dcda | g_CGore_PTR_005b96c4
    PUSH EAX                            ; 0040dcdf
    CALL core_gore.cpp_CGore_createFootstep_FUN_004b06b0 ; 0040dce0
        ;   XREF to: 004b06b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004b06b0(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    ADD ESP,0x18                        ; 0040dce5
    JMP 0x0040dc41                      ; 0040dce8
        ;   XREF to: 0040dc41 (UNCONDITIONAL_JUMP)  ; LAB_0040dc41
    MOV dword ptr [EBX + 0x114],0x0     ; 0040dced
        ;   Label: LAB_0040dced
    JMP 0x0040dc41                      ; 0040dcf7
        ;   XREF to: 0040dc41 (UNCONDITIONAL_JUMP)  ; LAB_0040dc41
    MOV EAX,[0x005b9284]                ; 0040dcfc | PTR_DAT_005b9284
        ;   Label: caseD_3
    PUSH EAX                            ; 0040dd01
    CALL xxx_unk.c_FUN_004940d0         ; 0040dd02
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    JMP 0x0040dc67                      ; 0040dd07
        ;   XREF to: 0040dc67 (UNCONDITIONAL_JUMP)  ; LAB_0040dc67
    MOV EBP,dword ptr [0x005b9284]      ; 0040dd0c | PTR_DAT_005b9284
        ;   Label: caseD_7
    PUSH EBP                            ; 0040dd12
    CALL xxx_unk.c_FUN_004940d0         ; 0040dd13
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    JMP 0x0040dc67                      ; 0040dd18
        ;   XREF to: 0040dc67 (UNCONDITIONAL_JUMP)  ; LAB_0040dc67

