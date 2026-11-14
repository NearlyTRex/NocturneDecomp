; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_004595c0(CActorDestination *this_ptr,uint flags)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CActorDestinationTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004595c0
        ;   Label: core_dest.cpp_CActorDestination_dtor_FUN_004595c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004595c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004595c5
    JNZ 0x004595e6                      ; 004595ca
        ;   XREF to: 004595e6 (CONDITIONAL_JUMP)  ; LAB_004595e6
    PUSH 0x1                            ; 004595cc
    PUSH EBX                            ; 004595ce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004595cf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004595d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004595d7
    MOV EBX,EAX                         ; 004595db
    TEST DL,0x2                         ; 004595dd
    JNZ 0x00459601                      ; 004595e0
        ;   XREF to: 00459601 (CONDITIONAL_JUMP)  ; LAB_00459601
    MOV EAX,EBX                         ; 004595e2
    POP EBX                             ; 004595e4
    RET                                 ; 004595e5
    PUSH 0x5de2e0                       ; 004595e6 | g_CActorDestinationTypeInfo
        ;   Label: LAB_004595e6
    PUSH EBX                            ; 004595eb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004595ec
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004595f1
    PUSH EAX                            ; 004595f4
    CALL crt_unknown.c_FUN_005a30b6     ; 004595f5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004595fa
    MOV EAX,EBX                         ; 004595fd
    POP EBX                             ; 004595ff
    RET                                 ; 00459600
    PUSH EAX                            ; 00459601
        ;   Label: LAB_00459601
    CALL crt_unknown.c_FUN_005a30c4     ; 00459602
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00459607
    MOV EAX,EBX                         ; 0045960a
    POP EBX                             ; 0045960c
    RET                                 ; 0045960d

