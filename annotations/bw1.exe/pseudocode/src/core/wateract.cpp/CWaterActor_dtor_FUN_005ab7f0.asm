; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0(CWaterActor *this_ptr,uint flags)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWaterActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab7f0
        ;   Label: core_wateract.cpp_CWaterActor_dtor_FUN_005ab7f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab7f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005ab7f5
    JNZ 0x005ab816                      ; 005ab7fa
        ;   XREF to: 005ab816 (CONDITIONAL_JUMP)  ; LAB_005ab816
    PUSH 0x1                            ; 005ab7fc
    PUSH EBX                            ; 005ab7fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005ab7ff
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ab804
    MOV DL,byte ptr [ESP + 0xc]         ; 005ab807
    MOV EBX,EAX                         ; 005ab80b
    TEST DL,0x2                         ; 005ab80d
    JNZ 0x005ab831                      ; 005ab810
        ;   XREF to: 005ab831 (CONDITIONAL_JUMP)  ; LAB_005ab831
    MOV EAX,EBX                         ; 005ab812
    POP EBX                             ; 005ab814
    RET                                 ; 005ab815
    PUSH 0x607d10                       ; 005ab816 | g_CWaterActorTypeInfo
        ;   Label: LAB_005ab816
    PUSH EBX                            ; 005ab81b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005ab81c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ab821
    PUSH EAX                            ; 005ab824
    CALL crt_unknown.c_FUN_005c0336     ; 005ab825
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005ab82a
    MOV EAX,EBX                         ; 005ab82d
    POP EBX                             ; 005ab82f
    RET                                 ; 005ab830
    PUSH EAX                            ; 005ab831
        ;   Label: LAB_005ab831
    CALL crt_unknown.c_FUN_005c0344     ; 005ab832
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005ab837
    MOV EAX,EBX                         ; 005ab83a
    POP EBX                             ; 005ab83c
    RET                                 ; 005ab83d

