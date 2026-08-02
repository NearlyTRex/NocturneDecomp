; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414fa0(CBattery *this_ptr,uint flags)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatteryTypeInfo_0059a3d0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414fa0
        ;   Label: core_battery.cpp_CBattery_dtor_FUN_00414fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414fa1
    TEST byte ptr [ESP + 0xc],0x4       ; 00414fa5
    JNZ 0x00414fc6                      ; 00414faa
        ;   XREF to: 00414fc6 (CONDITIONAL_JUMP)  ; LAB_00414fc6
    PUSH 0x1                            ; 00414fac
    PUSH EBX                            ; 00414fae
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00414faf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414fb4
    MOV DL,byte ptr [ESP + 0xc]         ; 00414fb7
    MOV EBX,EAX                         ; 00414fbb
    TEST DL,0x2                         ; 00414fbd
    JNZ 0x00414fe1                      ; 00414fc0
        ;   XREF to: 00414fe1 (CONDITIONAL_JUMP)  ; LAB_00414fe1
    MOV EAX,EBX                         ; 00414fc2
    POP EBX                             ; 00414fc4
    RET                                 ; 00414fc5
    PUSH 0x59a3d0                       ; 00414fc6 | g_CBatteryTypeInfo_0059a3d0
        ;   Label: LAB_00414fc6
    PUSH EBX                            ; 00414fcb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00414fcc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414fd1
    PUSH EAX                            ; 00414fd4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00414fd5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00414fda
    MOV EAX,EBX                         ; 00414fdd
    POP EBX                             ; 00414fdf
    RET                                 ; 00414fe0
    PUSH EAX                            ; 00414fe1
        ;   Label: LAB_00414fe1
    CALL crt_unknown.c_FUN_00564494     ; 00414fe2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00414fe7
    MOV EAX,EBX                         ; 00414fea
    POP EBX                             ; 00414fec
    RET                                 ; 00414fed

