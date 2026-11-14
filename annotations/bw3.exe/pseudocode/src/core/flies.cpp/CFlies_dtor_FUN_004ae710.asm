; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004ae710(CFlies *this_ptr,uint flags)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFliesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae710
        ;   Label: core_flies.cpp_CFlies_dtor_FUN_004ae710
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ae711
    TEST byte ptr [ESP + 0xc],0x4       ; 004ae715
    JNZ 0x004ae736                      ; 004ae71a
        ;   XREF to: 004ae736 (CONDITIONAL_JUMP)  ; LAB_004ae736
    PUSH 0x1                            ; 004ae71c
    PUSH EBX                            ; 004ae71e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004ae71f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ae724
    MOV DL,byte ptr [ESP + 0xc]         ; 004ae727
    MOV EBX,EAX                         ; 004ae72b
    TEST DL,0x2                         ; 004ae72d
    JNZ 0x004ae751                      ; 004ae730
        ;   XREF to: 004ae751 (CONDITIONAL_JUMP)  ; LAB_004ae751
    MOV EAX,EBX                         ; 004ae732
    POP EBX                             ; 004ae734
    RET                                 ; 004ae735
    PUSH 0x5e0520                       ; 004ae736 | g_CFliesTypeInfo
        ;   Label: LAB_004ae736
    PUSH EBX                            ; 004ae73b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004ae73c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004ae741
    PUSH EAX                            ; 004ae744
    CALL crt_unknown.c_FUN_005a30b6     ; 004ae745
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004ae74a
    MOV EAX,EBX                         ; 004ae74d
    POP EBX                             ; 004ae74f
    RET                                 ; 004ae750
    PUSH EAX                            ; 004ae751
        ;   Label: LAB_004ae751
    CALL crt_unknown.c_FUN_005a30c4     ; 004ae752
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004ae757
    MOV EAX,EBX                         ; 004ae75a
    POP EBX                             ; 004ae75c
    RET                                 ; 004ae75d

