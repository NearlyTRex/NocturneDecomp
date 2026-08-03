; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_modelName_005973d0
;   TerminatedCString s_tireCount_005973da
;   TerminatedCString s_static_bpos_005973e4
;   TerminatedCString s_radius_005973f0
;   TerminatedCString s_width_005973f7
;   TerminatedCString s_curTime_005973fd
;   TerminatedCString s_totalTime_00597405
;   TerminatedCString s_courseName_0059740f
;   TerminatedCString s_lastMobsterLeft_0059741a
;   TerminatedCString s_lastMobsterRight_0059742a
;   int INT_005c11a0 = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f370
        ;   Label: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
    PUSH EBP                            ; 0054f371
    SUB ESP,0x8                         ; 0054f372
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054f375
    PUSH EDX                            ; 0054f379
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0054f37a
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054f37f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f382
    PUSH 0x5973d0                       ; 0054f386 | = "modelName"
    ADD EAX,0x150                       ; 0054f38b
    PUSH EAX                            ; 0054f390
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0054f391
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f396
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f399
    PUSH 0x5973da                       ; 0054f39d | = "tireCount"
    ADD EAX,0x930                       ; 0054f3a2
    PUSH EAX                            ; 0054f3a7
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054f3a8
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f3ad
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f3b0
    MOV ECX,dword ptr [EAX + 0x930]     ; 0054f3b4
    XOR EBX,EBX                         ; 0054f3ba
    TEST ECX,ECX                        ; 0054f3bc
    JLE 0x0054f459                      ; 0054f3be
        ;   XREF to: 0054f459 (CONDITIONAL_JUMP)  ; LAB_0054f459
    PUSH EDI                            ; 0054f3c4
    PUSH ESI                            ; 0054f3c5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054f3c6
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0054f3ca
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054f3ce
    ADD EAX,0x934                       ; 0054f3d2
    ADD ESI,0x944                       ; 0054f3d7
    ADD EBP,0x940                       ; 0054f3dd
    ADD EDI,0x948                       ; 0054f3e3
    MOV dword ptr [ESP + 0xc],EAX       ; 0054f3e9
    IMUL EAX,EBX,0x1b4                  ; 0054f3ed
        ;   Label: LAB_0054f3ed
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054f3f3
    PUSH 0x0                            ; 0054f3f7
    ADD EDX,EAX                         ; 0054f3f9
    PUSH EDI                            ; 0054f3fb
    MOV dword ptr [ESP + 0x10],EDX      ; 0054f3fc
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0054f400
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f405
    PUSH 0x5973e4                       ; 0054f408 | = "static_bpos"
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054f40d
    PUSH EAX                            ; 0054f411
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0054f412
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f417
    PUSH 0x5973f0                       ; 0054f41a | = "radius"
    PUSH EBP                            ; 0054f41f
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054f420
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f425
    PUSH 0x5973f7                       ; 0054f428 | = "width"
    PUSH ESI                            ; 0054f42d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054f42e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f433
    ADD EDI,0x1b4                       ; 0054f436
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054f43c
    INC EBX                             ; 0054f440
    ADD EBP,0x1b4                       ; 0054f441
    MOV EDX,dword ptr [EAX + 0x930]     ; 0054f447
    ADD ESI,0x1b4                       ; 0054f44d
    CMP EBX,EDX                         ; 0054f453
    JL 0x0054f3ed                       ; 0054f455
        ;   XREF to: 0054f3ed (CONDITIONAL_JUMP)  ; LAB_0054f3ed
    POP ESI                             ; 0054f457
    POP EDI                             ; 0054f458
    CMP dword ptr [0x005c11a0],0x2      ; 0054f459 | INT_005c11a0
        ;   Label: LAB_0054f459
    JGE 0x0054f471                      ; 0054f460
        ;   XREF to: 0054f471 (CONDITIONAL_JUMP)  ; LAB_0054f471
    CMP dword ptr [0x005c11a0],0x3      ; 0054f462 | INT_005c11a0
    JGE 0x0054f4c5                      ; 0054f469
        ;   XREF to: 0054f4c5 (CONDITIONAL_JUMP)  ; LAB_0054f4c5
    ADD ESP,0x8                         ; 0054f46b
    POP EBP                             ; 0054f46e
    POP EBX                             ; 0054f46f
    RET                                 ; 0054f470
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f471
        ;   Label: LAB_0054f471
    PUSH 0x5973fd                       ; 0054f475 | = "curTime"
    ADD EAX,0x1024                      ; 0054f47a
    PUSH EAX                            ; 0054f47f
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054f480
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f485
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f488
    PUSH 0x597405                       ; 0054f48c | = "totalTime"
    ADD EAX,0x1028                      ; 0054f491
    PUSH EAX                            ; 0054f496
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054f497
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f49c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f49f
    PUSH 0x59740f                       ; 0054f4a3 | = "courseName"
    ADD EAX,0x102c                      ; 0054f4a8
    PUSH EAX                            ; 0054f4ad
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0054f4ae
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054f4b3
    CMP dword ptr [0x005c11a0],0x3      ; 0054f4b6 | INT_005c11a0
    JGE 0x0054f4c5                      ; 0054f4bd
        ;   XREF to: 0054f4c5 (CONDITIONAL_JUMP)  ; LAB_0054f4c5
    ADD ESP,0x8                         ; 0054f4bf
    POP EBP                             ; 0054f4c2
    POP EBX                             ; 0054f4c3
    RET                                 ; 0054f4c4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054f4c5
        ;   Label: LAB_0054f4c5
    PUSH 0x59741a                       ; 0054f4c9 | = "lastMobsterLeft"
    ADD EBX,0x1068                      ; 0054f4ce
    PUSH EBX                            ; 0054f4d4
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054f4d5
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f4da
    PUSH 0x59742a                       ; 0054f4dd | = "lastMobsterRight"
    PUSH EBX                            ; 0054f4e2
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054f4e3
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054f4e8
    ADD ESP,0x8                         ; 0054f4eb
    POP EBP                             ; 0054f4ee
    POP EBX                             ; 0054f4ef
    RET                                 ; 0054f4f0

