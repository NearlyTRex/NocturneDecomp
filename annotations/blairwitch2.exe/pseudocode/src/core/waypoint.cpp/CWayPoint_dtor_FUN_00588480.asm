; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00588480(CWayPoint *this_ptr,uint flags)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWayPointTypeInfo
;
; Called Functions:
;   core_trigger.cpp_CTrigger_dtor_FUN_00577840
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588480
        ;   Label: core_waypoint.cpp_CWayPoint_dtor_FUN_00588480
    MOV EBX,dword ptr [ESP + 0x8]       ; 00588481
    TEST byte ptr [ESP + 0xc],0x4       ; 00588485
    JNZ 0x005884a6                      ; 0058848a
        ;   XREF to: 005884a6 (CONDITIONAL_JUMP)  ; LAB_005884a6
    PUSH 0x1                            ; 0058848c
    PUSH EBX                            ; 0058848e
    CALL core_trigger.cpp_CTrigger_dtor_FUN_00577840 ; 0058848f
        ;   XREF to: 00577840 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_dtor_FUN_00577840(CTrigger * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00588494
    MOV DL,byte ptr [ESP + 0xc]         ; 00588497
    MOV EBX,EAX                         ; 0058849b
    TEST DL,0x2                         ; 0058849d
    JNZ 0x005884c1                      ; 005884a0
        ;   XREF to: 005884c1 (CONDITIONAL_JUMP)  ; LAB_005884c1
    MOV EAX,EBX                         ; 005884a2
    POP EBX                             ; 005884a4
    RET                                 ; 005884a5
    PUSH 0x5fdf20                       ; 005884a6 | g_CWayPointTypeInfo
        ;   Label: LAB_005884a6
    PUSH EBX                            ; 005884ab
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005884ac
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005884b1
    PUSH EAX                            ; 005884b4
    CALL crt_unknown.c_FUN_005b7fce     ; 005884b5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005884ba
    MOV EAX,EBX                         ; 005884bd
    POP EBX                             ; 005884bf
    RET                                 ; 005884c0
    PUSH EAX                            ; 005884c1
        ;   Label: LAB_005884c1
    CALL crt_unknown.c_FUN_005b7fdc     ; 005884c2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005884c7
    MOV EAX,EBX                         ; 005884ca
    POP EBX                             ; 005884cc
    RET                                 ; 005884cd

