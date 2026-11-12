; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a7480(CFlameCan *this_ptr,uint flags)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameCanTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7480
        ;   Label: core_flamecan.cpp_CFlameCan_dtor_FUN_004a7480
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7481
    TEST byte ptr [ESP + 0xc],0x4       ; 004a7485
    JNZ 0x004a74bd                      ; 004a748a
        ;   XREF to: 004a74bd (CONDITIONAL_JUMP)  ; LAB_004a74bd
    PUSH 0x1                            ; 004a748c
    ADD EBX,0x340                       ; 004a748e
    PUSH EBX                            ; 004a7494
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004a7495
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a749a
    PUSH 0x1                            ; 004a749d
    LEA EBX,[EAX + 0xfffffcc0]          ; 004a749f
    PUSH EBX                            ; 004a74a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004a74a6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a74ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004a74ae
    MOV EBX,EAX                         ; 004a74b2
    TEST DL,0x2                         ; 004a74b4
    JNZ 0x004a74d8                      ; 004a74b7
        ;   XREF to: 004a74d8 (CONDITIONAL_JUMP)  ; LAB_004a74d8
    MOV EAX,EBX                         ; 004a74b9
    POP EBX                             ; 004a74bb
    RET                                 ; 004a74bc
    PUSH 0x5e0050                       ; 004a74bd | g_CFlameCanTypeInfo
        ;   Label: LAB_004a74bd
    PUSH EBX                            ; 004a74c2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a74c3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a74c8
    PUSH EAX                            ; 004a74cb
    CALL crt_unknown.c_FUN_005a30b6     ; 004a74cc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a74d1
    MOV EAX,EBX                         ; 004a74d4
    POP EBX                             ; 004a74d6
    RET                                 ; 004a74d7
    PUSH EAX                            ; 004a74d8
        ;   Label: LAB_004a74d8
    CALL crt_unknown.c_FUN_005a30c4     ; 004a74d9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a74de
    MOV EAX,EBX                         ; 004a74e1
    POP EBX                             ; 004a74e3
    RET                                 ; 004a74e4

