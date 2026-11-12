; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_005a9900(CCryptVessel *this_ptr,uint flags)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCryptVesselTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9900
        ;   Label: core_vessel.cpp_CCryptVessel_dtor_FUN_005a9900
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9901
    TEST byte ptr [ESP + 0xc],0x4       ; 005a9905
    JNZ 0x005a993d                      ; 005a990a
        ;   XREF to: 005a993d (CONDITIONAL_JUMP)  ; LAB_005a993d
    PUSH 0x1                            ; 005a990c
    ADD EBX,0x3c4                       ; 005a990e
    PUSH EBX                            ; 005a9914
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005a9915
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a991a
    PUSH 0x1                            ; 005a991d
    LEA EBX,[EAX + 0xfffffc3c]          ; 005a991f
    PUSH EBX                            ; 005a9925
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005a9926
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a992b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a992e
    MOV EBX,EAX                         ; 005a9932
    TEST DL,0x2                         ; 005a9934
    JNZ 0x005a9958                      ; 005a9937
        ;   XREF to: 005a9958 (CONDITIONAL_JUMP)  ; LAB_005a9958
    MOV EAX,EBX                         ; 005a9939
    POP EBX                             ; 005a993b
    RET                                 ; 005a993c
    PUSH 0x607b80                       ; 005a993d | g_CCryptVesselTypeInfo
        ;   Label: LAB_005a993d
    PUSH EBX                            ; 005a9942
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a9943
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a9948
    PUSH EAX                            ; 005a994b
    CALL crt_unknown.c_FUN_005c0336     ; 005a994c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a9951
    MOV EAX,EBX                         ; 005a9954
    POP EBX                             ; 005a9956
    RET                                 ; 005a9957
    PUSH EAX                            ; 005a9958
        ;   Label: LAB_005a9958
    CALL crt_unknown.c_FUN_005c0344     ; 005a9959
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a995e
    MOV EAX,EBX                         ; 005a9961
    POP EBX                             ; 005a9963
    RET                                 ; 005a9964

