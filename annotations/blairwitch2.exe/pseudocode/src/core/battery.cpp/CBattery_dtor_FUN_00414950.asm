; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414950(CBattery *this_ptr,uint flags)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatteryTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414950
        ;   Label: core_battery.cpp_CBattery_dtor_FUN_00414950
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414951
    TEST byte ptr [ESP + 0xc],0x4       ; 00414955
    JNZ 0x00414976                      ; 0041495a
        ;   XREF to: 00414976 (CONDITIONAL_JUMP)  ; LAB_00414976
    PUSH 0x1                            ; 0041495c
    PUSH EBX                            ; 0041495e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0041495f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414964
    MOV DL,byte ptr [ESP + 0xc]         ; 00414967
    MOV EBX,EAX                         ; 0041496b
    TEST DL,0x2                         ; 0041496d
    JNZ 0x00414991                      ; 00414970
        ;   XREF to: 00414991 (CONDITIONAL_JUMP)  ; LAB_00414991
    MOV EAX,EBX                         ; 00414972
    POP EBX                             ; 00414974
    RET                                 ; 00414975
    PUSH 0x5f3330                       ; 00414976 | g_CBatteryTypeInfo
        ;   Label: LAB_00414976
    PUSH EBX                            ; 0041497b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0041497c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414981
    PUSH EAX                            ; 00414984
    CALL crt_unknown.c_FUN_005b7fce     ; 00414985
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0041498a
    MOV EAX,EBX                         ; 0041498d
    POP EBX                             ; 0041498f
    RET                                 ; 00414990
    PUSH EAX                            ; 00414991
        ;   Label: LAB_00414991
    CALL crt_unknown.c_FUN_005b7fdc     ; 00414992
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00414997
    MOV EAX,EBX                         ; 0041499a
    POP EBX                             ; 0041499c
    RET                                 ; 0041499d

