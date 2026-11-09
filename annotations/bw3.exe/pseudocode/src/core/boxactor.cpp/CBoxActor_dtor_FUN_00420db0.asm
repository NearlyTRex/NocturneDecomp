; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00420db0(CBoxActor *this_ptr,uint flags)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoxActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_box.cpp_CBox_dtor_FUN_0041adf0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420db0
        ;   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_00420db0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00420db1
    TEST byte ptr [ESP + 0xc],0x4       ; 00420db5
    JNZ 0x00420ded                      ; 00420dba
        ;   XREF to: 00420ded (CONDITIONAL_JUMP)  ; LAB_00420ded
    PUSH 0x0                            ; 00420dbc
    ADD EBX,0x394                       ; 00420dbe
    PUSH EBX                            ; 00420dc4
    CALL core_box.cpp_CBox_dtor_FUN_0041adf0 ; 00420dc5
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041adf0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00420dca
    PUSH 0x1                            ; 00420dcd
    LEA EBX,[EAX + 0xfffffc6c]          ; 00420dcf
    PUSH EBX                            ; 00420dd5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00420dd6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00420ddb
    MOV DL,byte ptr [ESP + 0xc]         ; 00420dde
    MOV EBX,EAX                         ; 00420de2
    TEST DL,0x2                         ; 00420de4
    JNZ 0x00420e08                      ; 00420de7
        ;   XREF to: 00420e08 (CONDITIONAL_JUMP)  ; LAB_00420e08
    MOV EAX,EBX                         ; 00420de9
    POP EBX                             ; 00420deb
    RET                                 ; 00420dec
    PUSH 0x5dcb90                       ; 00420ded | g_CBoxActorTypeInfo
        ;   Label: LAB_00420ded
    PUSH EBX                            ; 00420df2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00420df3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00420df8
    PUSH EAX                            ; 00420dfb
    CALL crt_unknown.c_FUN_005a30b6     ; 00420dfc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00420e01
    MOV EAX,EBX                         ; 00420e04
    POP EBX                             ; 00420e06
    RET                                 ; 00420e07
    PUSH EAX                            ; 00420e08
        ;   Label: LAB_00420e08
    CALL crt_unknown.c_FUN_005a30c4     ; 00420e09
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00420e0e
    MOV EAX,EBX                         ; 00420e11
    POP EBX                             ; 00420e13
    RET                                 ; 00420e14

