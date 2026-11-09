; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00414640(CBattery *this_ptr,uint flags)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatteryTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414640
        ;   Label: core_battery.cpp_CBattery_dtor_FUN_00414640
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414641
    TEST byte ptr [ESP + 0xc],0x4       ; 00414645
    JNZ 0x00414666                      ; 0041464a
        ;   XREF to: 00414666 (CONDITIONAL_JUMP)  ; LAB_00414666
    PUSH 0x1                            ; 0041464c
    PUSH EBX                            ; 0041464e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0041464f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414654
    MOV DL,byte ptr [ESP + 0xc]         ; 00414657
    MOV EBX,EAX                         ; 0041465b
    TEST DL,0x2                         ; 0041465d
    JNZ 0x00414681                      ; 00414660
        ;   XREF to: 00414681 (CONDITIONAL_JUMP)  ; LAB_00414681
    MOV EAX,EBX                         ; 00414662
    POP EBX                             ; 00414664
    RET                                 ; 00414665
    PUSH 0x5fc3f0                       ; 00414666 | g_CBatteryTypeInfo
        ;   Label: LAB_00414666
    PUSH EBX                            ; 0041466b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0041466c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00414671
    PUSH EAX                            ; 00414674
    CALL crt_unknown.c_FUN_005c0336     ; 00414675
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0041467a
    MOV EAX,EBX                         ; 0041467d
    POP EBX                             ; 0041467f
    RET                                 ; 00414680
    PUSH EAX                            ; 00414681
        ;   Label: LAB_00414681
    CALL crt_unknown.c_FUN_005c0344     ; 00414682
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00414687
    MOV EAX,EBX                         ; 0041468a
    POP EBX                             ; 0041468c
    RET                                 ; 0041468d

