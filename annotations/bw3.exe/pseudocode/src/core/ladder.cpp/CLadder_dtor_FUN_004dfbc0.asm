; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004dfbc0(CLadder *this_ptr,uint flags)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLadderTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfbc0
        ;   Label: core_ladder.cpp_CLadder_dtor_FUN_004dfbc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dfbc1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dfbc5
    JNZ 0x004dfbe6                      ; 004dfbca
        ;   XREF to: 004dfbe6 (CONDITIONAL_JUMP)  ; LAB_004dfbe6
    PUSH 0x1                            ; 004dfbcc
    PUSH EBX                            ; 004dfbce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004dfbcf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dfbd4
    MOV DL,byte ptr [ESP + 0xc]         ; 004dfbd7
    MOV EBX,EAX                         ; 004dfbdb
    TEST DL,0x2                         ; 004dfbdd
    JNZ 0x004dfc01                      ; 004dfbe0
        ;   XREF to: 004dfc01 (CONDITIONAL_JUMP)  ; LAB_004dfc01
    MOV EAX,EBX                         ; 004dfbe2
    POP EBX                             ; 004dfbe4
    RET                                 ; 004dfbe5
    PUSH 0x5e2360                       ; 004dfbe6 | g_CLadderTypeInfo
        ;   Label: LAB_004dfbe6
    PUSH EBX                            ; 004dfbeb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004dfbec
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004dfbf1
    PUSH EAX                            ; 004dfbf4
    CALL crt_unknown.c_FUN_005a30b6     ; 004dfbf5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004dfbfa
    MOV EAX,EBX                         ; 004dfbfd
    POP EBX                             ; 004dfbff
    RET                                 ; 004dfc00
    PUSH EAX                            ; 004dfc01
        ;   Label: LAB_004dfc01
    CALL crt_unknown.c_FUN_005a30c4     ; 004dfc02
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004dfc07
    MOV EAX,EBX                         ; 004dfc0a
    POP EBX                             ; 004dfc0c
    RET                                 ; 004dfc0d

