; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,int surface_type,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   surface_type
; float            Stack[0x10]:4   volume
; Local Variables:
; undefined8       Stack[-0x94]:8  local_94
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   TerminatedCString s_footstep_s_s_wav_f_006142c8
;   float FLOAT_006142e4 = 10000
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CGore g_CGoreInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032758e8
;   undefined4 g_CDemonCameraInstance.base.position.y
;   undefined4 g_CDemonCameraInstance.base.position.z
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_gore.cpp_CGore_createFootstep_FUN_004ee070
;   core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0
;   core_ground.cpp_getGroundTypeCode_FUN_004eece0
;   core_setcolid.cpp_CDemonSet_FUN_00574580
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ca10
        ;   Label: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
    PUSH ESI                            ; 0040ca11
    PUSH EDI                            ; 0040ca12
    PUSH EBP                            ; 0040ca13
    SUB ESP,0x7c                        ; 0040ca14
    MOV EBX,dword ptr [ESP + 0x90]      ; 0040ca17
    MOV ESI,dword ptr [ESP + 0x94]      ; 0040ca1e
    MOV EDI,dword ptr [ESP + 0x98]      ; 0040ca25
    MOV EAX,[0x032758e8]                ; 0040ca2c | DAT_032758e8
    MOV dword ptr [ESP + 0x64],EAX      ; 0040ca31
    MOV EAX,0x32758e8                   ; 0040ca35 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040ca3a | g_CDemonCameraInstance.base.position.y
    MOV dword ptr [ESP + 0x68],EAX      ; 0040ca3d
    MOV EAX,0x32758e8                   ; 0040ca41 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040ca46 | g_CDemonCameraInstance.base.position.z
    MOV dword ptr [ESP + 0x6c],EAX      ; 0040ca49
    FLD float ptr [ESI]                 ; 0040ca4d
    FSUB float ptr [ESP + 0x64]         ; 0040ca4f
    FMUL ST0                            ; 0040ca53
    FLD float ptr [ESI + 0x4]           ; 0040ca55
    FSUB float ptr [ESP + 0x68]         ; 0040ca58
    FMUL ST0                            ; 0040ca5c
    FLD float ptr [ESI + 0x8]           ; 0040ca5e
    FXCH                                ; 0040ca61
    FADDP ST2,ST0                       ; 0040ca63
    FSUB float ptr [ESP + 0x6c]         ; 0040ca65
    FMUL ST0                            ; 0040ca69
    FADDP                               ; 0040ca6b
    FCOMP float ptr [0x006142e4]        ; 0040ca6d | FLOAT_006142e4
    FNSTSW AX                           ; 0040ca73
    SAHF                                ; 0040ca75
    JBE 0x0040ca82                      ; 0040ca76
        ;   XREF to: 0040ca82 (CONDITIONAL_JUMP)  ; LAB_0040ca82
    XOR EAX,EAX                         ; 0040ca78
    ADD ESP,0x7c                        ; 0040ca7a
    POP EBP                             ; 0040ca7d
    POP EDI                             ; 0040ca7e
    POP ESI                             ; 0040ca7f
    POP EBX                             ; 0040ca80
    RET                                 ; 0040ca81
    PUSH ESI                            ; 0040ca82
        ;   Label: LAB_0040ca82
    MOV EDX,dword ptr [0x006810c8]      ; 0040ca83 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0040ca89 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574580 ; 0040ca8a
        ;   XREF to: 00574580 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_FUN_00574580(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0040ca8f
    TEST EAX,EAX                        ; 0040ca92
    JZ 0x0040ca9b                       ; 0040ca94
        ;   XREF to: 0040ca9b (CONDITIONAL_JUMP)  ; LAB_0040ca9b
    MOV EDI,0x6                         ; 0040ca96
    LEA EAX,[EBX + 0x118]               ; 0040ca9b
        ;   Label: LAB_0040ca9b
    PUSH EAX                            ; 0040caa1
    PUSH ESI                            ; 0040caa2
    MOV ECX,dword ptr [0x0067b9a0]      ; 0040caa3 | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 0040caa9 | g_CGoreInstance
    CALL core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0 ; 0040caaa
        ;   XREF to: 004ee0f0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0(CGore * this_ptr, CVector3f * position, int * out_blood_type)
    ADD ESP,0xc                         ; 0040caaf
    TEST EAX,EAX                        ; 0040cab2
    JZ 0x0040cb55                       ; 0040cab4
        ;   XREF to: 0040cb55 (CONDITIONAL_JUMP)  ; LAB_0040cb55
    MOV dword ptr [EBX + 0x114],0xffff  ; 0040caba
    MOV EDX,dword ptr [EBX + 0x118]     ; 0040cac4
        ;   Label: LAB_0040cac4
    PUSH EDX                            ; 0040caca
    MOV ECX,dword ptr [EBX + 0x114]     ; 0040cacb
    PUSH ECX                            ; 0040cad1
    PUSH 0xb                            ; 0040cad2
    LEA EAX,[EBX + 0x30]                ; 0040cad4
    PUSH EAX                            ; 0040cad7
    PUSH ESI                            ; 0040cad8
    MOV EBP,dword ptr [0x0067b9a0]      ; 0040cad9 | g_CGorePtr
    PUSH EBP                            ; 0040cadf | g_CGoreInstance
    CALL core_gore.cpp_CGore_createFootstep_FUN_004ee070 ; 0040cae0
        ;   XREF to: 004ee070 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004ee070(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    MOV EAX,dword ptr [EBX + 0x114]     ; 0040cae5
    SUB EAX,0x2000                      ; 0040caeb
    ADD ESP,0x18                        ; 0040caf0
    MOV dword ptr [EBX + 0x114],EAX     ; 0040caf3
    TEST EAX,EAX                        ; 0040caf9
    JGE 0x0040cb07                      ; 0040cafb
        ;   XREF to: 0040cb07 (CONDITIONAL_JUMP)  ; LAB_0040cb07
    MOV dword ptr [EBX + 0x114],0x0     ; 0040cafd
    FLD float ptr [ESP + 0x9c]          ; 0040cb07
        ;   Label: LAB_0040cb07
    SUB ESP,0x8                         ; 0040cb0e
    FSTP double ptr [ESP]               ; 0040cb11
    PUSH EDI                            ; 0040cb14
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 0040cb15
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
    ADD ESP,0x4                         ; 0040cb1a
    PUSH EAX                            ; 0040cb1d
    LEA EAX,[EBX + 0x11c]               ; 0040cb1e
    PUSH EAX                            ; 0040cb24
    PUSH 0x6142c8                       ; 0040cb25 | = "footstep-%s-!-%s-?.wav @ %f"
    LEA EAX,[ESP + 0x14]                ; 0040cb2a
    PUSH EAX                            ; 0040cb2e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040cb2f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0040cb34
    PUSH ESI                            ; 0040cb37
    LEA EAX,[ESP + 0x4]                 ; 0040cb38
    PUSH EAX                            ; 0040cb3c
    PUSH EBX                            ; 0040cb3d
    MOV ECX,dword ptr [0x00681ef8]      ; 0040cb3e | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 0040cb44 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 0040cb45
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040cb4a
    ADD ESP,0x7c                        ; 0040cb4d
    POP EBP                             ; 0040cb50
    POP EDI                             ; 0040cb51
    POP ESI                             ; 0040cb52
    POP EBX                             ; 0040cb53
    RET                                 ; 0040cb54
    CMP dword ptr [EBX + 0x114],0x0     ; 0040cb55
        ;   Label: LAB_0040cb55
    JG 0x0040cac4                       ; 0040cb5c
        ;   XREF to: 0040cac4 (CONDITIONAL_JUMP)  ; LAB_0040cac4
    CMP EDI,0x3                         ; 0040cb62
    JNZ 0x0040cb07                      ; 0040cb65
        ;   XREF to: 0040cb07 (CONDITIONAL_JUMP)  ; LAB_0040cb07
    PUSH EAX                            ; 0040cb67
    PUSH 0x4000                         ; 0040cb68
    PUSH EDI                            ; 0040cb6d
    LEA EAX,[EBX + 0x30]                ; 0040cb6e
    PUSH EAX                            ; 0040cb71
    PUSH ESI                            ; 0040cb72
    MOV EAX,[0x0067b9a0]                ; 0040cb73 | g_CGoreInstance | g_CGorePtr
    PUSH EAX                            ; 0040cb78 | g_CGoreInstance
    CALL core_gore.cpp_CGore_createFootstep_FUN_004ee070 ; 0040cb79
        ;   XREF to: 004ee070 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004ee070(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    ADD ESP,0x18                        ; 0040cb7e
    JMP 0x0040cb07                      ; 0040cb81
        ;   XREF to: 0040cb07 (UNCONDITIONAL_JUMP)  ; LAB_0040cb07

