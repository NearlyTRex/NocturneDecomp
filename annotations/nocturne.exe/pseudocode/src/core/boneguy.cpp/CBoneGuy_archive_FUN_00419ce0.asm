; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419ce0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_speed_00579446
;   TerminatedCString s_modelName_0057944c
;   TerminatedCString s_guardDistance_00579456
;   TerminatedCString s_motion_state_00579464
;   TerminatedCString s_deathEvent_00579471
;   TerminatedCString s_recombineTime_0057947c
;   TerminatedCString s_blownUp_0057948a
;   TerminatedCString s_param_00579492
;   TerminatedCString s_boxCount_00579498
;   TerminatedCString s_partStatus_005794a1
;   TerminatedCString s_boxListPos_005794ac
;   TerminatedCString s_boxListOrient_005794b7
;   TerminatedCString s_boxListDestOrient_005794c5
;   TerminatedCString s_boxListStartOrient_005794d7
;   TerminatedCString s_sourcePos_005794ea
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_actor.cpp_archiveQuaternion_FUN_0040c630
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419ce0
        ;   Label: core_boneguy.cpp_CBoneGuy_archive_FUN_00419ce0
    PUSH ESI                            ; 00419ce1
    PUSH EDI                            ; 00419ce2
    PUSH EBP                            ; 00419ce3
    SUB ESP,0xc                         ; 00419ce4
    MOV EDX,dword ptr [ESP + 0x20]      ; 00419ce7
    PUSH EDX                            ; 00419ceb
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00419cec
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00419cf1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419cf4
    PUSH 0x579446                       ; 00419cf8 | = "speed"
    ADD EAX,0xbc8c                      ; 00419cfd
    PUSH EAX                            ; 00419d02
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00419d03
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419d08
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d0b
    PUSH 0x57944c                       ; 00419d0f | = "modelName"
    ADD EAX,0x150                       ; 00419d14
    PUSH EAX                            ; 00419d19
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 00419d1a
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x005ad054]      ; 00419d1f | g_INT_005ad054
    ADD ESP,0x8                         ; 00419d25
    CMP ECX,0x4                         ; 00419d28
    JL 0x00419ee8                       ; 00419d2b
        ;   XREF to: 00419ee8 (CONDITIONAL_JUMP)  ; LAB_00419ee8
    MOV EBX,dword ptr [ESP + 0x20]      ; 00419d31
        ;   Label: LAB_00419d31
    PUSH 0x579464                       ; 00419d35 | = "motion state"
    ADD EBX,0x150                       ; 00419d3a
    PUSH EBX                            ; 00419d40
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 00419d41
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    MOV ESI,dword ptr [0x005ad054]      ; 00419d46 | g_INT_005ad054
    ADD ESP,0x8                         ; 00419d4c
    CMP ESI,0x2                         ; 00419d4f
    JL 0x00419ed0                       ; 00419d52
        ;   XREF to: 00419ed0 (CONDITIONAL_JUMP)  ; LAB_00419ed0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d58
    PUSH 0x579471                       ; 00419d5c | = "deathEvent"
    ADD EAX,0xbd38                      ; 00419d61
    PUSH EAX                            ; 00419d66
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00419d67
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00419d6c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d6f
    PUSH 0x57947c                       ; 00419d73 | = "recombineTime"
    ADD EAX,0xbd9c                      ; 00419d78
    PUSH EAX                            ; 00419d7d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00419d7e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419d83
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d86
    PUSH 0x57948a                       ; 00419d8a | = "blownUp"
    ADD EAX,0xc344                      ; 00419d8f
    PUSH EAX                            ; 00419d94
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00419d95
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419d9a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419d9d
    PUSH 0x579492                       ; 00419da1 | = "param"
    ADD EAX,0xc348                      ; 00419da6
    PUSH EAX                            ; 00419dab
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00419dac
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419db1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419db4
    PUSH 0x579498                       ; 00419db8 | = "boxCount"
    ADD EAX,0xbda0                      ; 00419dbd
    PUSH EAX                            ; 00419dc2
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00419dc3
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419dc8
    PUSH 0x5794a1                       ; 00419dcb | = "partStatus"
    PUSH EBX                            ; 00419dd0
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 00419dd1
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419dd6
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419dd9
    MOV EDI,dword ptr [EAX + 0xbda0]    ; 00419ddd
    XOR EBX,EBX                         ; 00419de3
    TEST EDI,EDI                        ; 00419de5
    JLE 0x00419ed0                      ; 00419de7
        ;   XREF to: 00419ed0 (CONDITIONAL_JUMP)  ; LAB_00419ed0
    MOV ESI,dword ptr [ESP + 0x20]      ; 00419ded
    ADD EAX,0xbda4                      ; 00419df1
    MOV EDI,dword ptr [ESP + 0x20]      ; 00419df6
    MOV dword ptr [ESP],EAX             ; 00419dfa
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419dfd
    MOV EBP,dword ptr [ESP + 0x20]      ; 00419e01
    ADD EAX,0xbde8                      ; 00419e05
    ADD ESI,0xbddc                      ; 00419e0a
    MOV dword ptr [ESP + 0x8],EAX       ; 00419e10
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419e14
    ADD EDI,0xbdbc                      ; 00419e18
    ADD EAX,0xbdcc                      ; 00419e1e
    ADD EBP,0xbdb0                      ; 00419e23
    MOV dword ptr [ESP + 0x4],EAX       ; 00419e29
    IMUL EAX,EBX,0x48                   ; 00419e2d
        ;   Label: LAB_00419e2d
    MOV EDX,dword ptr [ESP]             ; 00419e30
    PUSH 0x5794ac                       ; 00419e33 | = "boxListPos"
    ADD EAX,EDX                         ; 00419e38
    PUSH EAX                            ; 00419e3a
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00419e3b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419e40
    PUSH 0x5794b7                       ; 00419e43 | = "boxListOrient"
    PUSH EBP                            ; 00419e48
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00419e49
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419e4e
    PUSH 0x5794c5                       ; 00419e51 | = "boxListDestOrient"
    PUSH EDI                            ; 00419e56
    CALL core_actor.cpp_archiveQuaternion_FUN_0040c630 ; 00419e57
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 00419e5c
    PUSH 0x5794d7                       ; 00419e5f | = "boxListStartOrient"
    MOV ECX,dword ptr [ESP + 0x8]       ; 00419e64
    PUSH ECX                            ; 00419e68
    CALL core_actor.cpp_archiveQuaternion_FUN_0040c630 ; 00419e69
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 00419e6e
    PUSH 0x5794ea                       ; 00419e71 | = "sourcePos"
    PUSH ESI                            ; 00419e76
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00419e77
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419e7c
    PUSH 0x5794f4                       ; 00419e7f | = "boxListPart"
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419e84
    INC EBX                             ; 00419e88
    PUSH EAX                            ; 00419e89
    ADD EBP,0x48                        ; 00419e8a
    ADD EDI,0x48                        ; 00419e8d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00419e90
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419e95
    ADD ESI,0x48                        ; 00419e98
    MOV EDX,dword ptr [ESP + 0x8]       ; 00419e9b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419e9f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419ea3
    ADD EDX,0x48                        ; 00419ea7
    ADD ECX,0x48                        ; 00419eaa
    MOV dword ptr [ESP + 0x8],EDX       ; 00419ead
    MOV EDX,dword ptr [EAX + 0xbda0]    ; 00419eb1
    MOV dword ptr [ESP + 0x4],ECX       ; 00419eb7
    CMP EBX,EDX                         ; 00419ebb
    JL 0x00419e2d                       ; 00419ebd
        ;   XREF to: 00419e2d (CONDITIONAL_JUMP)  ; LAB_00419e2d
    LEA EAX,[EAX]                       ; 00419ec3
    LEA EDX,[EDX]                       ; 00419ec9
    NOP                                 ; 00419ecf
    MOV ECX,dword ptr [0x005ad054]      ; 00419ed0 | g_INT_005ad054
        ;   Label: LAB_00419ed0
    CMP ECX,0x3                         ; 00419ed6
    JL 0x00419ee0                       ; 00419ed9
        ;   XREF to: 00419ee0 (CONDITIONAL_JUMP)  ; LAB_00419ee0
    CMP ECX,0x5                         ; 00419edb
    JL 0x00419f04                       ; 00419ede
        ;   XREF to: 00419f04 (CONDITIONAL_JUMP)  ; LAB_00419f04
    ADD ESP,0xc                         ; 00419ee0
        ;   Label: LAB_00419ee0
    POP EBP                             ; 00419ee3
    POP EDI                             ; 00419ee4
    POP ESI                             ; 00419ee5
    POP EBX                             ; 00419ee6
    RET                                 ; 00419ee7
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419ee8
        ;   Label: LAB_00419ee8
    PUSH 0x579456                       ; 00419eec | = "guardDistance"
    ADD EAX,0xbc9c                      ; 00419ef1
    PUSH EAX                            ; 00419ef6
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00419ef7
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419efc
    JMP 0x00419d31                      ; 00419eff
        ;   XREF to: 00419d31 (UNCONDITIONAL_JUMP)  ; LAB_00419d31
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419f04
        ;   Label: LAB_00419f04
    PUSH 0x579500                       ; 00419f08 | = "victimHeight"
    ADD EAX,0xbd18                      ; 00419f0d
    PUSH EAX                            ; 00419f12
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00419f13
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00419f18
    ADD ESP,0xc                         ; 00419f1b
    POP EBP                             ; 00419f1e
    POP EDI                             ; 00419f1f
    POP ESI                             ; 00419f20
    POP EBX                             ; 00419f21
    RET                                 ; 00419f22

