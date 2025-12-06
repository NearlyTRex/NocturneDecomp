; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBattery * core_battery.cpp_CBattery_dtor_FUN_00418160(CBattery * this_ptr, uint d1, uint d2)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatteryTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418160
        ;   Label: core_battery.cpp_CBattery_dtor_FUN_00418160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418161
    TEST byte ptr [ESP + 0xc],0x4       ; 00418165
    JNZ 0x00418186                      ; 0041816a | LAB_00418186
        ;   XREF to: 00418186 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041816c
    PUSH EBX                            ; 0041816e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041816f | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418174
    MOV DL,byte ptr [ESP + 0xc]         ; 00418177
    MOV EBX,EAX                         ; 0041817b
    TEST DL,0x2                         ; 0041817d
    JNZ 0x004181a1                      ; 00418180 | LAB_004181a1
        ;   XREF to: 004181a1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00418182
    POP EBX                             ; 00418184
    RET                                 ; 00418185
    PUSH 0x65aa20                       ; 00418186 | WatcomTypeInfo g_CBatteryTypeInfo
        ;   Label: LAB_00418186
    PUSH EBX                            ; 0041818b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0041818c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418191
    PUSH EAX                            ; 00418194
    CALL crt_memory.c_free_FUN_005fe659 ; 00418195 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041819a
    MOV EAX,EBX                         ; 0041819d
    POP EBX                             ; 0041819f
    RET                                 ; 004181a0
    PUSH EAX                            ; 004181a1
        ;   Label: LAB_004181a1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004181a2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004181a7
    MOV EAX,EBX                         ; 004181aa
    POP EBX                             ; 004181ac
    RET                                 ; 004181ad

