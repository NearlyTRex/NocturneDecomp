; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00577840(CTrigger *this_ptr,uint flags)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_patrpoin.cpp_CPatrolPoint_dtor_FUN_0059c610 at 0059c629
;   core_waypoint.cpp_CWayPoint_dtor_FUN_00588480 at 0058848f
;
; Referenced Globals:
;   undefined4 g_CTriggerVTable
;   WatcomTypeInfo g_CTriggerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577840
        ;   Label: core_trigger.cpp_CTrigger_dtor_FUN_00577840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577841
    TEST byte ptr [ESP + 0xc],0x4       ; 00577845
    JNZ 0x00577870                      ; 0057784a
        ;   XREF to: 00577870 (CONDITIONAL_JUMP)  ; LAB_00577870
    PUSH 0x1                            ; 0057784c
    PUSH EBX                            ; 0057784e
    MOV dword ptr [EBX + 0x2b0],0x5fd224 ; 0057784f | g_CTriggerVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00577859
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057785e
    MOV DL,byte ptr [ESP + 0xc]         ; 00577861
    MOV EBX,EAX                         ; 00577865
    TEST DL,0x2                         ; 00577867
    JNZ 0x0057788b                      ; 0057786a
        ;   XREF to: 0057788b (CONDITIONAL_JUMP)  ; LAB_0057788b
    MOV EAX,EBX                         ; 0057786c
    POP EBX                             ; 0057786e
    RET                                 ; 0057786f
    PUSH 0x5fd310                       ; 00577870 | g_CTriggerTypeInfo
        ;   Label: LAB_00577870
    PUSH EBX                            ; 00577875
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00577876
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057787b
    PUSH EAX                            ; 0057787e
    CALL crt_unknown.c_FUN_005b7fce     ; 0057787f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00577884
    MOV EAX,EBX                         ; 00577887
    POP EBX                             ; 00577889
    RET                                 ; 0057788a
    PUSH EAX                            ; 0057788b
        ;   Label: LAB_0057788b
    CALL crt_unknown.c_FUN_005b7fdc     ; 0057788c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00577891
    MOV EAX,EBX                         ; 00577894
    POP EBX                             ; 00577896
    RET                                 ; 00577897

