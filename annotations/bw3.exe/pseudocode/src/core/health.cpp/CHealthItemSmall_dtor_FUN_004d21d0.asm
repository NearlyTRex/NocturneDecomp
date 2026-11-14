; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_dtor_FUN_004d21d0(CHealthItemSmall *this_ptr,uint flags)
;
; Parameters:
; CHealthItemSmall * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealthItemSmallTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d21d0
        ;   Label: core_health.cpp_CHealthItemSmall_dtor_FUN_004d21d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d21d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d21d5
    JNZ 0x004d21f6                      ; 004d21da
        ;   XREF to: 004d21f6 (CONDITIONAL_JUMP)  ; LAB_004d21f6
    PUSH 0x1                            ; 004d21dc
    PUSH EBX                            ; 004d21de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d21df
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d21e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004d21e7
    MOV EBX,EAX                         ; 004d21eb
    TEST DL,0x2                         ; 004d21ed
    JNZ 0x004d2211                      ; 004d21f0
        ;   XREF to: 004d2211 (CONDITIONAL_JUMP)  ; LAB_004d2211
    MOV EAX,EBX                         ; 004d21f2
    POP EBX                             ; 004d21f4
    RET                                 ; 004d21f5
    PUSH 0x5e14d0                       ; 004d21f6 | g_CHealthItemSmallTypeInfo
        ;   Label: LAB_004d21f6
    PUSH EBX                            ; 004d21fb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d21fc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d2201
    PUSH EAX                            ; 004d2204
    CALL crt_unknown.c_FUN_005a30b6     ; 004d2205
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d220a
    MOV EAX,EBX                         ; 004d220d
    POP EBX                             ; 004d220f
    RET                                 ; 004d2210
    PUSH EAX                            ; 004d2211
        ;   Label: LAB_004d2211
    CALL crt_unknown.c_FUN_005a30c4     ; 004d2212
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d2217
    MOV EAX,EBX                         ; 004d221a
    POP EBX                             ; 004d221c
    RET                                 ; 004d221d

