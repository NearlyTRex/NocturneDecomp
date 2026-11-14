; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004cf800(CGrave *this_ptr,uint flags)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGraveTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf800
        ;   Label: core_grave.cpp_CGrave_dtor_FUN_004cf800
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cf801
    TEST byte ptr [ESP + 0xc],0x4       ; 004cf805
    JNZ 0x004cf826                      ; 004cf80a
        ;   XREF to: 004cf826 (CONDITIONAL_JUMP)  ; LAB_004cf826
    PUSH 0x1                            ; 004cf80c
    PUSH EBX                            ; 004cf80e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004cf80f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cf814
    MOV DL,byte ptr [ESP + 0xc]         ; 004cf817
    MOV EBX,EAX                         ; 004cf81b
    TEST DL,0x2                         ; 004cf81d
    JNZ 0x004cf841                      ; 004cf820
        ;   XREF to: 004cf841 (CONDITIONAL_JUMP)  ; LAB_004cf841
    MOV EAX,EBX                         ; 004cf822
    POP EBX                             ; 004cf824
    RET                                 ; 004cf825
    PUSH 0x5e1000                       ; 004cf826 | g_CGraveTypeInfo
        ;   Label: LAB_004cf826
    PUSH EBX                            ; 004cf82b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004cf82c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cf831
    PUSH EAX                            ; 004cf834
    CALL crt_unknown.c_FUN_005a30b6     ; 004cf835
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004cf83a
    MOV EAX,EBX                         ; 004cf83d
    POP EBX                             ; 004cf83f
    RET                                 ; 004cf840
    PUSH EAX                            ; 004cf841
        ;   Label: LAB_004cf841
    CALL crt_unknown.c_FUN_005a30c4     ; 004cf842
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004cf847
    MOV EAX,EBX                         ; 004cf84a
    POP EBX                             ; 004cf84c
    RET                                 ; 004cf84d

