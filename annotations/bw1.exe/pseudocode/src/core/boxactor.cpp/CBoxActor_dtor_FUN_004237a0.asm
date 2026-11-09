; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_004237a0(CBoxActor *this_ptr,uint flags)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoxActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004237a0
        ;   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_004237a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004237a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004237a5
    JNZ 0x004237dd                      ; 004237aa
        ;   XREF to: 004237dd (CONDITIONAL_JUMP)  ; LAB_004237dd
    PUSH 0x0                            ; 004237ac
    ADD EBX,0x394                       ; 004237ae
    PUSH EBX                            ; 004237b4
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 004237b5
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004237ba
    PUSH 0x1                            ; 004237bd
    LEA EBX,[EAX + 0xfffffc6c]          ; 004237bf
    PUSH EBX                            ; 004237c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004237c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004237cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004237ce
    MOV EBX,EAX                         ; 004237d2
    TEST DL,0x2                         ; 004237d4
    JNZ 0x004237f8                      ; 004237d7
        ;   XREF to: 004237f8 (CONDITIONAL_JUMP)  ; LAB_004237f8
    MOV EAX,EBX                         ; 004237d9
    POP EBX                             ; 004237db
    RET                                 ; 004237dc
    PUSH 0x5fd050                       ; 004237dd | g_CBoxActorTypeInfo
        ;   Label: LAB_004237dd
    PUSH EBX                            ; 004237e2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004237e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004237e8
    PUSH EAX                            ; 004237eb
    CALL crt_unknown.c_FUN_005c0336     ; 004237ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004237f1
    MOV EAX,EBX                         ; 004237f4
    POP EBX                             ; 004237f6
    RET                                 ; 004237f7
    PUSH EAX                            ; 004237f8
        ;   Label: LAB_004237f8
    CALL crt_unknown.c_FUN_005c0344     ; 004237f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004237fe
    MOV EAX,EBX                         ; 00423801
    POP EBX                             ; 00423803
    RET                                 ; 00423804

