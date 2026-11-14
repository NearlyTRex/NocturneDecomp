; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00503020(CLightCone *this_ptr,uint flags)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightConeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503020
        ;   Label: core_litecone.cpp_CLightCone_dtor_FUN_00503020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503021
    TEST byte ptr [ESP + 0xc],0x4       ; 00503025
    JNZ 0x00503046                      ; 0050302a
        ;   XREF to: 00503046 (CONDITIONAL_JUMP)  ; LAB_00503046
    PUSH 0x1                            ; 0050302c
    PUSH EBX                            ; 0050302e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0050302f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503034
    MOV DL,byte ptr [ESP + 0xc]         ; 00503037
    MOV EBX,EAX                         ; 0050303b
    TEST DL,0x2                         ; 0050303d
    JNZ 0x00503061                      ; 00503040
        ;   XREF to: 00503061 (CONDITIONAL_JUMP)  ; LAB_00503061
    MOV EAX,EBX                         ; 00503042
    POP EBX                             ; 00503044
    RET                                 ; 00503045
    PUSH 0x6033b0                       ; 00503046 | g_CLightConeTypeInfo
        ;   Label: LAB_00503046
    PUSH EBX                            ; 0050304b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0050304c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00503051
    PUSH EAX                            ; 00503054
    CALL crt_unknown.c_FUN_005c0336     ; 00503055
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0050305a
    MOV EAX,EBX                         ; 0050305d
    POP EBX                             ; 0050305f
    RET                                 ; 00503060
    PUSH EAX                            ; 00503061
        ;   Label: LAB_00503061
    CALL crt_unknown.c_FUN_005c0344     ; 00503062
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00503067
    MOV EAX,EBX                         ; 0050306a
    POP EBX                             ; 0050306c
    RET                                 ; 0050306d

