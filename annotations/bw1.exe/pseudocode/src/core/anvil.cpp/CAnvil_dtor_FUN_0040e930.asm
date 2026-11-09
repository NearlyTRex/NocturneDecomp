; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040e930(CAnvil *this_ptr,uint flags)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAnvilTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e930
        ;   Label: core_anvil.cpp_CAnvil_dtor_FUN_0040e930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e931
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e935
    JNZ 0x0040e956                      ; 0040e93a
        ;   XREF to: 0040e956 (CONDITIONAL_JUMP)  ; LAB_0040e956
    PUSH 0x1                            ; 0040e93c
    PUSH EBX                            ; 0040e93e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040e93f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e944
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e947
    MOV EBX,EAX                         ; 0040e94b
    TEST DL,0x2                         ; 0040e94d
    JNZ 0x0040e971                      ; 0040e950
        ;   XREF to: 0040e971 (CONDITIONAL_JUMP)  ; LAB_0040e971
    MOV EAX,EBX                         ; 0040e952
    POP EBX                             ; 0040e954
    RET                                 ; 0040e955
    PUSH 0x5fb790                       ; 0040e956 | g_CAnvilTypeInfo
        ;   Label: LAB_0040e956
    PUSH EBX                            ; 0040e95b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040e95c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0040e961
    PUSH EAX                            ; 0040e964
    CALL crt_unknown.c_FUN_005c0336     ; 0040e965
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040e96a
    MOV EAX,EBX                         ; 0040e96d
    POP EBX                             ; 0040e96f
    RET                                 ; 0040e970
    PUSH EAX                            ; 0040e971
        ;   Label: LAB_0040e971
    CALL crt_unknown.c_FUN_005c0344     ; 0040e972
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040e977
    MOV EAX,EBX                         ; 0040e97a
    POP EBX                             ; 0040e97c
    RET                                 ; 0040e97d

