; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_0059c220(CGoggles *this_ptr,uint flags)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGogglesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c220
        ;   Label: core_goggles.cpp_CGoggles_dtor_FUN_0059c220
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c221
    TEST byte ptr [ESP + 0xc],0x4       ; 0059c225
    JNZ 0x0059c246                      ; 0059c22a
        ;   XREF to: 0059c246 (CONDITIONAL_JUMP)  ; LAB_0059c246
    PUSH 0x1                            ; 0059c22c
    PUSH EBX                            ; 0059c22e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0059c22f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059c234
    MOV DL,byte ptr [ESP + 0xc]         ; 0059c237
    MOV EBX,EAX                         ; 0059c23b
    TEST DL,0x2                         ; 0059c23d
    JNZ 0x0059c261                      ; 0059c240
        ;   XREF to: 0059c261 (CONDITIONAL_JUMP)  ; LAB_0059c261
    MOV EAX,EBX                         ; 0059c242
    POP EBX                             ; 0059c244
    RET                                 ; 0059c245
    PUSH 0x5fe720                       ; 0059c246 | g_CGogglesTypeInfo
        ;   Label: LAB_0059c246
    PUSH EBX                            ; 0059c24b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0059c24c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0059c251
    PUSH EAX                            ; 0059c254
    CALL crt_unknown.c_FUN_005b7fce     ; 0059c255
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0059c25a
    MOV EAX,EBX                         ; 0059c25d
    POP EBX                             ; 0059c25f
    RET                                 ; 0059c260
    PUSH EAX                            ; 0059c261
        ;   Label: LAB_0059c261
    CALL crt_unknown.c_FUN_005b7fdc     ; 0059c262
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059c267
    MOV EAX,EBX                         ; 0059c26a
    POP EBX                             ; 0059c26c
    RET                                 ; 0059c26d

