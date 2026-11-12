; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPatrolPoint * core_hpatrol_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)
;
; Parameters:
; CPatrolPoint *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CPatrolPointVTable
;   WatcomTypeInfo g_CPatrolPointTypeInfo
;
; Called Functions:
;   core_trigger.cpp_CTrigger_dtor_FUN_00577840
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c610
        ;   Label: core_hpatrol.cpp_CPatrolPoint_dtor_FUN_0059c610
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c611
    TEST byte ptr [ESP + 0xc],0x4       ; 0059c615
    JNZ 0x0059c640                      ; 0059c61a
        ;   XREF to: 0059c640 (CONDITIONAL_JUMP)  ; LAB_0059c640
    PUSH 0x1                            ; 0059c61c
    PUSH EBX                            ; 0059c61e
    MOV dword ptr [EBX + 0x2b0],0x5fe7b4 ; 0059c61f | g_CPatrolPointVTable
    CALL core_trigger.cpp_CTrigger_dtor_FUN_00577840 ; 0059c629
        ;   XREF to: 00577840 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_dtor_FUN_00577840(CTrigger * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059c62e
    MOV DL,byte ptr [ESP + 0xc]         ; 0059c631
    MOV EBX,EAX                         ; 0059c635
    TEST DL,0x2                         ; 0059c637
    JNZ 0x0059c65b                      ; 0059c63a
        ;   XREF to: 0059c65b (CONDITIONAL_JUMP)  ; LAB_0059c65b
    MOV EAX,EBX                         ; 0059c63c
    POP EBX                             ; 0059c63e
    RET                                 ; 0059c63f
    PUSH 0x5fe8a0                       ; 0059c640 | g_CPatrolPointTypeInfo
        ;   Label: LAB_0059c640
    PUSH EBX                            ; 0059c645
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0059c646
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0059c64b
    PUSH EAX                            ; 0059c64e
    CALL crt_unknown.c_FUN_005b7fce     ; 0059c64f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0059c654
    MOV EAX,EBX                         ; 0059c657
    POP EBX                             ; 0059c659
    RET                                 ; 0059c65a
    PUSH EAX                            ; 0059c65b
        ;   Label: LAB_0059c65b
    CALL crt_unknown.c_FUN_005b7fdc     ; 0059c65c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059c661
    MOV EAX,EBX                         ; 0059c664
    POP EBX                             ; 0059c666
    RET                                 ; 0059c667

