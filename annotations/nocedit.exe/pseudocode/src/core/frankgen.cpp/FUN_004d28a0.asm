; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFrankenstienMachine * core_frankgen.cpp_FUN_004d28a0(CFrankenstienMachine * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CFrankenstienMachineTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d28a0
        ;   Label: core_frankgen.cpp_FUN_004d28a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d28a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d28a5
    JNZ 0x004d28dd                      ; 004d28aa | LAB_004d28dd
        ;   XREF to: 004d28dd (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004d28ac
    ADD EBX,0x300                       ; 004d28ae
    PUSH EBX                            ; 004d28b4
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 004d28b5 | CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d28ba
    PUSH 0x1                            ; 004d28bd
    LEA EBX,[EAX + 0xfffffd00]          ; 004d28bf
    PUSH EBX                            ; 004d28c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004d28c6 | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d28cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004d28ce
    MOV EBX,EAX                         ; 004d28d2
    TEST DL,0x2                         ; 004d28d4
    JNZ 0x004d28f8                      ; 004d28d7 | LAB_004d28f8
        ;   XREF to: 004d28f8 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004d28d9
    POP EBX                             ; 004d28db
    RET                                 ; 004d28dc
    PUSH 0x65e770                       ; 004d28dd | WatcomTypeInfo g_CFrankenstienMachineTypeInfo
        ;   Label: LAB_004d28dd
    PUSH EBX                            ; 004d28e2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004d28e3 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d28e8
    PUSH EAX                            ; 004d28eb
    CALL crt_memory.c_free_FUN_005fe659 ; 004d28ec | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d28f1
    MOV EAX,EBX                         ; 004d28f4
    POP EBX                             ; 004d28f6
    RET                                 ; 004d28f7
    PUSH EAX                            ; 004d28f8
        ;   Label: LAB_004d28f8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004d28f9 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d28fe
    MOV EAX,EBX                         ; 004d2901
    POP EBX                             ; 004d2903
    RET                                 ; 004d2904

