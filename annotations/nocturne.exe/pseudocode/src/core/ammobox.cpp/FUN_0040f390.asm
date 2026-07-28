; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_FUN_0040f390(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00578399
;   TerminatedCString s_weaponClassName_005783a3
;   TerminatedCString s_ammoCount_005783b3
;   TerminatedCString s_ammoType_005783bd
;   TerminatedCString s_item_005783c6
;   TerminatedCString s_hasCollision_005783cb
;   TerminatedCString s_openSound_005783d8
;   int g_INT_005aceb4 = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f390
        ;   Label: core_ammobox.cpp_FUN_0040f390
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f391
    PUSH EBX                            ; 0040f395
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0040f396
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f39b
    PUSH 0x578399                       ; 0040f39e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0040f3a3
    PUSH EAX                            ; 0040f3a9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0040f3aa
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f3af
    PUSH 0x5783a3                       ; 0040f3b2 | = "weaponClassName"
    LEA EAX,[EBX + 0x2cc]               ; 0040f3b7
    PUSH EAX                            ; 0040f3bd
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040f3be
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040f3c3
    PUSH 0x5783b3                       ; 0040f3c6 | = "ammoCount"
    LEA EAX,[EBX + 0x30c]               ; 0040f3cb
    PUSH EAX                            ; 0040f3d1
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040f3d2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f3d7
    PUSH 0x5783bd                       ; 0040f3da | = "ammoType"
    LEA EAX,[EBX + 0x310]               ; 0040f3df
    PUSH EAX                            ; 0040f3e5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040f3e6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f3eb
    PUSH 0x0                            ; 0040f3ee
    LEA EAX,[EBX + 0x314]               ; 0040f3f0
    PUSH EAX                            ; 0040f3f6
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040f3f7
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005aceb4]      ; 0040f3fc | g_INT_005aceb4
    ADD ESP,0x8                         ; 0040f402
    CMP EDX,0x2                         ; 0040f405
    JGE 0x0040f432                      ; 0040f408
        ;   XREF to: 0040f432 (CONDITIONAL_JUMP)  ; LAB_0040f432
    CMP dword ptr [0x005aceb4],0x3      ; 0040f40a | g_INT_005aceb4
        ;   Label: LAB_0040f40a
    JL 0x0040f427                       ; 0040f411
        ;   XREF to: 0040f427 (CONDITIONAL_JUMP)  ; LAB_0040f427
    PUSH 0x5783cb                       ; 0040f413 | = "hasCollision"
    LEA EAX,[EBX + 0x31c]               ; 0040f418
    PUSH EAX                            ; 0040f41e
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040f41f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f424
    CMP dword ptr [0x005aceb4],0x4      ; 0040f427 | g_INT_005aceb4
        ;   Label: LAB_0040f427
    JGE 0x0040f448                      ; 0040f42e
        ;   XREF to: 0040f448 (CONDITIONAL_JUMP)  ; LAB_0040f448
    POP EBX                             ; 0040f430
    RET                                 ; 0040f431
    PUSH 0x5783c6                       ; 0040f432 | = "item"
        ;   Label: LAB_0040f432
    LEA EAX,[EBX + 0x318]               ; 0040f437
    PUSH EAX                            ; 0040f43d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0040f43e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040f443
    JMP 0x0040f40a                      ; 0040f446
        ;   XREF to: 0040f40a (UNCONDITIONAL_JUMP)  ; LAB_0040f40a
    PUSH 0x5783d8                       ; 0040f448 | = "openSound"
        ;   Label: LAB_0040f448
    ADD EBX,0x320                       ; 0040f44d
    PUSH EBX                            ; 0040f453
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040f454
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040f459
    POP EBX                             ; 0040f45c
    RET                                 ; 0040f45d

