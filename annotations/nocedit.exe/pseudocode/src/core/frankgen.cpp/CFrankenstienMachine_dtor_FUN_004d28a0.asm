; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004d28a0(CFrankenstienMachine *this_ptr,uint flags)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFrankenstienMachineTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d28a0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004d28a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d28a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d28a5
    JNZ 0x004d28dd                      ; 004d28aa
        ;   XREF to: 004d28dd (CONDITIONAL_JUMP)  ; LAB_004d28dd
    PUSH 0x0                            ; 004d28ac
    ADD EBX,0x300                       ; 004d28ae
    PUSH EBX                            ; 004d28b4
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 004d28b5
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d28ba
    PUSH 0x1                            ; 004d28bd
    LEA EBX,[EAX + 0xfffffd00]          ; 004d28bf
    PUSH EBX                            ; 004d28c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004d28c6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d28cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004d28ce
    MOV EBX,EAX                         ; 004d28d2
    TEST DL,0x2                         ; 004d28d4
    JNZ 0x004d28f8                      ; 004d28d7
        ;   XREF to: 004d28f8 (CONDITIONAL_JUMP)  ; LAB_004d28f8
    MOV EAX,EBX                         ; 004d28d9
    POP EBX                             ; 004d28db
    RET                                 ; 004d28dc
    PUSH 0x65e770                       ; 004d28dd | g_CFrankenstienMachineTypeInfo
        ;   Label: LAB_004d28dd
    PUSH EBX                            ; 004d28e2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004d28e3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d28e8
    PUSH EAX                            ; 004d28eb
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004d28ec
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004d28f1
    MOV EAX,EBX                         ; 004d28f4
    POP EBX                             ; 004d28f6
    RET                                 ; 004d28f7
    PUSH EAX                            ; 004d28f8
        ;   Label: LAB_004d28f8
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004d28f9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004d28fe
    MOV EAX,EBX                         ; 004d2901
    POP EBX                             ; 004d2903
    RET                                 ; 004d2904

