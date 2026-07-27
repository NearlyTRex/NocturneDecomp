; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_vehicle_cpp_FUN_0054f7f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVehicleTypeInfo_005a3d40
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
;   core_vehicle.cpp_FUN_0054f8a0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f7f0
        ;   Label: core_vehicle.cpp_FUN_0054f7f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054f7f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0054f7f5
    JNZ 0x0054f83d                      ; 0054f7fa
        ;   XREF to: 0054f83d (CONDITIONAL_JUMP)  ; LAB_0054f83d
    PUSH 0x0                            ; 0054f7fc
    ADD EBX,0x1018                      ; 0054f7fe
    PUSH EBX                            ; 0054f804
    CALL core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0 ; 0054f805
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0()
    ADD ESP,0x8                         ; 0054f80a
    PUSH 0x0                            ; 0054f80d
    SUB EAX,0x6e4                       ; 0054f80f
    PUSH EAX                            ; 0054f814
    CALL core_vehicle.cpp_FUN_0054f8a0  ; 0054f815
        ;   XREF to: 0054f8a0 (UNCONDITIONAL_CALL)  ; undefined core_vehicle.cpp_FUN_0054f8a0()
    ADD ESP,0x8                         ; 0054f81a
    PUSH 0x1                            ; 0054f81d
    LEA EBX,[EAX + 0xfffff6cc]          ; 0054f81f
    PUSH EBX                            ; 0054f825
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054f826
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0054f82b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054f82e
    MOV EBX,EAX                         ; 0054f832
    TEST DL,0x2                         ; 0054f834
    JNZ 0x0054f858                      ; 0054f837
        ;   XREF to: 0054f858 (CONDITIONAL_JUMP)  ; LAB_0054f858
    MOV EAX,EBX                         ; 0054f839
    POP EBX                             ; 0054f83b
    RET                                 ; 0054f83c
    PUSH 0x5a3d40                       ; 0054f83d | g_CVehicleTypeInfo_005a3d40
        ;   Label: LAB_0054f83d
    PUSH EBX                            ; 0054f842
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0054f843
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0054f848
    PUSH EAX                            ; 0054f84b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0054f84c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0054f851
    MOV EAX,EBX                         ; 0054f854
    POP EBX                             ; 0054f856
    RET                                 ; 0054f857
    PUSH EAX                            ; 0054f858
        ;   Label: LAB_0054f858
    CALL crt_unknown.c_FUN_00564494     ; 0054f859
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0054f85e
    MOV EAX,EBX                         ; 0054f861
    POP EBX                             ; 0054f863
    RET                                 ; 0054f864

