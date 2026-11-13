; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004a79f0(CFlies *this_ptr,uint flags)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFliesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a79f0
        ;   Label: core_flies.cpp_CFlies_dtor_FUN_004a79f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a79f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a79f5
    JNZ 0x004a7a16                      ; 004a79fa
        ;   XREF to: 004a7a16 (CONDITIONAL_JUMP)  ; LAB_004a7a16
    PUSH 0x1                            ; 004a79fc
    PUSH EBX                            ; 004a79fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004a79ff
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a7a04
    MOV DL,byte ptr [ESP + 0xc]         ; 004a7a07
    MOV EBX,EAX                         ; 004a7a0b
    TEST DL,0x2                         ; 004a7a0d
    JNZ 0x004a7a31                      ; 004a7a10
        ;   XREF to: 004a7a31 (CONDITIONAL_JUMP)  ; LAB_004a7a31
    MOV EAX,EBX                         ; 004a7a12
    POP EBX                             ; 004a7a14
    RET                                 ; 004a7a15
    PUSH 0x5f7190                       ; 004a7a16 | g_CFliesTypeInfo
        ;   Label: LAB_004a7a16
    PUSH EBX                            ; 004a7a1b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a7a1c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a7a21
    PUSH EAX                            ; 004a7a24
    CALL crt_unknown.c_FUN_005b7fce     ; 004a7a25
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a7a2a
    MOV EAX,EBX                         ; 004a7a2d
    POP EBX                             ; 004a7a2f
    RET                                 ; 004a7a30
    PUSH EAX                            ; 004a7a31
        ;   Label: LAB_004a7a31
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a7a32
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a7a37
    MOV EAX,EBX                         ; 004a7a3a
    POP EBX                             ; 004a7a3c
    RET                                 ; 004a7a3d

