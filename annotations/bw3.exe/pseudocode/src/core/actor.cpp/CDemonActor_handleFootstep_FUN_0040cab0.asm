; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040cab0(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EGroundType      Stack[0xc]:4   ground_type
; float            Stack[0x10]:4   volume
;
; Referenced Globals:
;   TerminatedCString s_CHero_005b5e99
;   TerminatedCString s_FeetAreWet_005b5e9f
;   TerminatedCString s_twig_wav_005b5eaa
;   TerminatedCString s_CShadow_005b5eb4
;   TerminatedCString s_footstep_s_s_wav_f_005b5ebc
;   undefined4 DAT_005b5ed9
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonCameraInstance.base.position
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_fire.cpp_FUN_004a2930
;   core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0
;   core_gore.cpp_FUN_004cee70
;   core_ground.cpp_getGroundTypeCode_FUN_004cf9a0
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cab0
        ;   Label: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0
    PUSH ESI                            ; 0040cab1
    PUSH EDI                            ; 0040cab2
    PUSH EBP                            ; 0040cab3
    SUB ESP,0xc0                        ; 0040cab4
    MOV EBP,dword ptr [ESP + 0xd4]      ; 0040caba
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0040cac1
    LEA EDI,[ESP + 0x88]                ; 0040cac8
    MOV ESI,0x2038f50                   ; 0040cacf
    MOVSD ES:EDI,ESI                    ; 0040cad4 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 0040cad5 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 0040cad6 | g_CDemonCameraInstance.base.position+8
    LEA EDI,[ESP + 0x7c]                ; 0040cad7
    LEA ESI,[ESP + 0x88]                ; 0040cadb
    MOVSD ES:EDI,ESI                    ; 0040cae2
    MOVSD ES:EDI,ESI                    ; 0040cae3
    MOVSD ES:EDI,ESI                    ; 0040cae4
    FLD float ptr [EBX]                 ; 0040cae5
    FSUB float ptr [ESP + 0x7c]         ; 0040cae7
    FMUL ST0                            ; 0040caeb
    FLD float ptr [EBX + 0x4]           ; 0040caed
    FSUB float ptr [ESP + 0x80]         ; 0040caf0
    FMUL ST0                            ; 0040caf7
    FLD float ptr [EBX + 0x8]           ; 0040caf9
    FXCH                                ; 0040cafc
    FADDP ST2,ST0                       ; 0040cafe
    FSUB float ptr [ESP + 0x84]         ; 0040cb00
    FMUL ST0                            ; 0040cb07
    FADDP                               ; 0040cb09
    FCOMP float ptr [0x005b5ed9]        ; 0040cb0b | DAT_005b5ed9
    FNSTSW AX                           ; 0040cb11
    SAHF                                ; 0040cb13
    JBE 0x0040cb23                      ; 0040cb14
        ;   XREF to: 0040cb23 (CONDITIONAL_JUMP)  ; LAB_0040cb23
    XOR EAX,EAX                         ; 0040cb16
    ADD ESP,0xc0                        ; 0040cb18
    POP EBP                             ; 0040cb1e
    POP EDI                             ; 0040cb1f
    POP ESI                             ; 0040cb20
    POP EBX                             ; 0040cb21
    RET                                 ; 0040cb22
    PUSH EBX                            ; 0040cb23
        ;   Label: LAB_0040cb23
    MOV EDX,dword ptr [0x00603b28]      ; 0040cb24 | g_CDemonSetPtr
    PUSH EDX                            ; 0040cb2a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60 ; 0040cb2b
        ;   XREF to: 0053ef60 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040cb30
    TEST EAX,EAX                        ; 0040cb33
    JZ 0x0040cb69                       ; 0040cb35
        ;   XREF to: 0040cb69 (CONDITIONAL_JUMP)  ; LAB_0040cb69
    PUSH 0x5b5e99                       ; 0040cb37 | = "CHero"
    MOV ECX,0x6                         ; 0040cb3c
    PUSH EBP                            ; 0040cb41
    MOV dword ptr [ESP + 0xe4],ECX      ; 0040cb42
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0040cb49
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040cb4e
    TEST EAX,EAX                        ; 0040cb51
    JZ 0x0040cb69                       ; 0040cb53
        ;   XREF to: 0040cb69 (CONDITIONAL_JUMP)  ; LAB_0040cb69
    PUSH 0x5b5e9f                       ; 0040cb55 | = "FeetAreWet"
    MOV ESI,dword ptr [0x005fba60]      ; 0040cb5a | DAT_005fba60
    PUSH ESI                            ; 0040cb60
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0040cb61
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0040cb66
    LEA EAX,[EBP + 0x118]               ; 0040cb69
        ;   Label: LAB_0040cb69
    PUSH EAX                            ; 0040cb6f
    PUSH EBX                            ; 0040cb70
    MOV EDI,dword ptr [0x005fed24]      ; 0040cb71 | g_CGorePtr
    PUSH EDI                            ; 0040cb77
    CALL core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0 ; 0040cb78
        ;   XREF to: 004ceef0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0(CGore * this_ptr, CVector3f * position, int * out_blood_type)
    ADD ESP,0xc                         ; 0040cb7d
    TEST EAX,EAX                        ; 0040cb80
    JZ 0x0040cd4e                       ; 0040cb82
        ;   XREF to: 0040cd4e (CONDITIONAL_JUMP)  ; LAB_0040cd4e
    MOV dword ptr [EBP + 0x114],0xffff  ; 0040cb88
    MOV ESI,dword ptr [EBP + 0x118]     ; 0040cb92
        ;   Label: LAB_0040cb92
    PUSH ESI                            ; 0040cb98
    MOV EDI,dword ptr [EBP + 0x114]     ; 0040cb99
    PUSH EDI                            ; 0040cb9f
    PUSH 0xb                            ; 0040cba0
    LEA EAX,[EBP + 0x30]                ; 0040cba2
    PUSH EAX                            ; 0040cba5
    PUSH EBX                            ; 0040cba6
    MOV EAX,[0x005fed24]                ; 0040cba7 | g_CGorePtr
    PUSH EAX                            ; 0040cbac
    CALL core_gore.cpp_FUN_004cee70     ; 0040cbad
        ;   XREF to: 004cee70 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cee70()
    MOV EDX,dword ptr [EBP + 0x114]     ; 0040cbb2
    SUB EDX,0x2000                      ; 0040cbb8
    ADD ESP,0x18                        ; 0040cbbe
    MOV dword ptr [EBP + 0x114],EDX     ; 0040cbc1
    TEST EDX,EDX                        ; 0040cbc7
    JL 0x0040cd8c                       ; 0040cbc9
        ;   XREF to: 0040cd8c (CONDITIONAL_JUMP)  ; LAB_0040cd8c
    CMP dword ptr [ESP + 0xdc],0xe      ; 0040cbcf
        ;   Label: LAB_0040cbcf
    JNZ 0x0040ccf6                      ; 0040cbd7
        ;   XREF to: 0040ccf6 (CONDITIONAL_JUMP)  ; LAB_0040ccf6
    PUSH 0x3c23d70a                     ; 0040cbdd
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0040cbe2
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0040cbe7
    TEST EAX,EAX                        ; 0040cbea
    JZ 0x0040cc04                       ; 0040cbec
        ;   XREF to: 0040cc04 (CONDITIONAL_JUMP)  ; LAB_0040cc04
    PUSH EBX                            ; 0040cbee
    PUSH 0x5b5eaa                       ; 0040cbef | = "twig?.wav"
    PUSH EBP                            ; 0040cbf4
    MOV EDI,dword ptr [0x006045f8]      ; 0040cbf5 | DAT_006045f8
    PUSH EDI                            ; 0040cbfb
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0040cbfc
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040cc01
    PUSH 0x5b5eb4                       ; 0040cc04 | = "CShadow"
        ;   Label: LAB_0040cc04
    PUSH EBP                            ; 0040cc09
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0040cc0a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040cc0f
    TEST EAX,EAX                        ; 0040cc12
    JZ 0x0040cd9b                       ; 0040cc14
        ;   XREF to: 0040cd9b (CONDITIONAL_JUMP)  ; LAB_0040cd9b
    MOV dword ptr [EBP + 0x11c],0x1     ; 0040cc1a
    MOV EAX,dword ptr [EBP + 0x11c]     ; 0040cc24
        ;   Label: LAB_0040cc24
    XOR ESI,ESI                         ; 0040cc2a
    TEST EAX,EAX                        ; 0040cc2c
    JLE 0x0040ccf6                      ; 0040cc2e
        ;   XREF to: 0040ccf6 (CONDITIONAL_JUMP)  ; LAB_0040ccf6
    PUSH 0x3fc90fdb                     ; 0040cc34
        ;   Label: LAB_0040cc34
    PUSH 0x3f490fdb                     ; 0040cc39
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040cc3e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040cc43
    FLD float ptr [ESP + 0xc4]          ; 0040cc4a
    ADD ESP,0x8                         ; 0040cc51
    PUSH 0x40c90fdb                     ; 0040cc54
    PUSH 0x0                            ; 0040cc59
    FSTP float ptr [ESP + 0xa8]         ; 0040cc5b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040cc62
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040cc67
    FLD float ptr [ESP + 0xc4]          ; 0040cc6e
    ADD ESP,0x8                         ; 0040cc75
    FLD float ptr [ESP + 0xa0]          ; 0040cc78
    FCOS                                ; 0040cc7f
    FLD ST1                             ; 0040cc81
    FCOS                                ; 0040cc83
    FXCH ST2                            ; 0040cc85
    FSIN                                ; 0040cc87
    FXCH ST2                            ; 0040cc89
    FMUL ST1                            ; 0040cc8b
    FXCH ST2                            ; 0040cc8d
    FMULP                               ; 0040cc8f
    XOR EDI,EDI                         ; 0040cc91
    MOV EAX,0x41700000                  ; 0040cc93
    MOV dword ptr [ESP + 0x74],EDI      ; 0040cc98
    MOV dword ptr [ESP + 0xb8],EAX      ; 0040cc9c
    LEA EAX,[ESP + 0x64]                ; 0040cca3
    FXCH                                ; 0040cca7
    FSTP float ptr [ESP + 0x70]         ; 0040cca9
    FSTP float ptr [ESP + 0x78]         ; 0040ccad
    CMP EAX,EBX                         ; 0040ccb1
    JZ 0x0040ccc9                       ; 0040ccb3
        ;   XREF to: 0040ccc9 (CONDITIONAL_JUMP)  ; LAB_0040ccc9
    MOV EAX,dword ptr [EBX]             ; 0040ccb5
    MOV dword ptr [ESP + 0x64],EAX      ; 0040ccb7
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040ccbb
    MOV dword ptr [ESP + 0x68],EAX      ; 0040ccbe
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040ccc2
    MOV dword ptr [ESP + 0x6c],EAX      ; 0040ccc5
    PUSH dword ptr [ESP + 0xb8]         ; 0040ccc9
        ;   Label: LAB_0040ccc9
    PUSH 0x0                            ; 0040ccd0
    LEA EAX,[ESP + 0x78]                ; 0040ccd2
    PUSH EAX                            ; 0040ccd6
    PUSH EBX                            ; 0040ccd7
    MOV EDX,dword ptr [0x005fc5a0]      ; 0040ccd8 | DAT_005fc5a0
    PUSH EDX                            ; 0040ccde
    INC ESI                             ; 0040ccdf
    CALL core_fire.cpp_FUN_004a2930     ; 0040cce0
        ;   XREF to: 004a2930 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2930()
    MOV ECX,dword ptr [EBP + 0x11c]     ; 0040cce5
    ADD ESP,0x14                        ; 0040cceb
    CMP ESI,ECX                         ; 0040ccee
    JL 0x0040cc34                       ; 0040ccf0
        ;   XREF to: 0040cc34 (CONDITIONAL_JUMP)  ; LAB_0040cc34
    FLD float ptr [ESP + 0xe0]          ; 0040ccf6
        ;   Label: LAB_0040ccf6
    SUB ESP,0x8                         ; 0040ccfd
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0040cd00
    FSTP double ptr [ESP]               ; 0040cd07
    PUSH EDX                            ; 0040cd0a
    CALL core_ground.cpp_getGroundTypeCode_FUN_004cf9a0 ; 0040cd0b
        ;   XREF to: 004cf9a0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
    ADD ESP,0x4                         ; 0040cd10
    PUSH EAX                            ; 0040cd13
    LEA EAX,[EBP + 0x120]               ; 0040cd14
    PUSH EAX                            ; 0040cd1a
    PUSH 0x5b5ebc                       ; 0040cd1b | = "footstep-%s-!-%s-?.wav @ %f"
    LEA EAX,[ESP + 0x14]                ; 0040cd20
    PUSH EAX                            ; 0040cd24
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0040cd25
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0040cd2a
    PUSH EBX                            ; 0040cd2d
    LEA EAX,[ESP + 0x4]                 ; 0040cd2e
    PUSH EAX                            ; 0040cd32
    PUSH EBP                            ; 0040cd33
    MOV ECX,dword ptr [0x006045f8]      ; 0040cd34 | DAT_006045f8
    PUSH ECX                            ; 0040cd3a
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0040cd3b
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040cd40
    ADD ESP,0xc0                        ; 0040cd43
    POP EBP                             ; 0040cd49
    POP EDI                             ; 0040cd4a
    POP ESI                             ; 0040cd4b
    POP EBX                             ; 0040cd4c
    RET                                 ; 0040cd4d
    CMP dword ptr [EBP + 0x114],0x0     ; 0040cd4e
        ;   Label: LAB_0040cd4e
    JG 0x0040cb92                       ; 0040cd55
        ;   XREF to: 0040cb92 (CONDITIONAL_JUMP)  ; LAB_0040cb92
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0040cd5b
    CMP EDX,0x3                         ; 0040cd62
    JNZ 0x0040cbcf                      ; 0040cd65
        ;   XREF to: 0040cbcf (CONDITIONAL_JUMP)  ; LAB_0040cbcf
    PUSH 0x0                            ; 0040cd6b
    PUSH 0x4000                         ; 0040cd6d
    PUSH EDX                            ; 0040cd72
    LEA EAX,[EBP + 0x30]                ; 0040cd73
    PUSH EAX                            ; 0040cd76
    PUSH EBX                            ; 0040cd77
    MOV ECX,dword ptr [0x005fed24]      ; 0040cd78 | g_CGorePtr
    PUSH ECX                            ; 0040cd7e
    CALL core_gore.cpp_FUN_004cee70     ; 0040cd7f
        ;   XREF to: 004cee70 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cee70()
    ADD ESP,0x18                        ; 0040cd84
    JMP 0x0040cbcf                      ; 0040cd87
        ;   XREF to: 0040cbcf (UNCONDITIONAL_JUMP)  ; LAB_0040cbcf
    MOV dword ptr [EBP + 0x114],0x0     ; 0040cd8c
        ;   Label: LAB_0040cd8c
    JMP 0x0040cbcf                      ; 0040cd96
        ;   XREF to: 0040cbcf (UNCONDITIONAL_JUMP)  ; LAB_0040cbcf
    PUSH 0x3                            ; 0040cd9b
        ;   Label: LAB_0040cd9b
    PUSH 0x1                            ; 0040cd9d
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0040cd9f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0040cda4
    MOV dword ptr [EBP + 0x11c],EAX     ; 0040cda7
    JMP 0x0040cc24                      ; 0040cdad
        ;   XREF to: 0040cc24 (UNCONDITIONAL_JUMP)  ; LAB_0040cc24

