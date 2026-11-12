; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004e3cf0(CGoggles *this_ptr,uint flags)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGogglesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3cf0
        ;   Label: core_goggles.cpp_CGoggles_dtor_FUN_004e3cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3cf1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e3cf5
    JNZ 0x004e3d16                      ; 004e3cfa
        ;   XREF to: 004e3d16 (CONDITIONAL_JUMP)  ; LAB_004e3d16
    PUSH 0x1                            ; 004e3cfc
    PUSH EBX                            ; 004e3cfe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004e3cff
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e3d04
    MOV DL,byte ptr [ESP + 0xc]         ; 004e3d07
    MOV EBX,EAX                         ; 004e3d0b
    TEST DL,0x2                         ; 004e3d0d
    JNZ 0x004e3d31                      ; 004e3d10
        ;   XREF to: 004e3d31 (CONDITIONAL_JUMP)  ; LAB_004e3d31
    MOV EAX,EBX                         ; 004e3d12
    POP EBX                             ; 004e3d14
    RET                                 ; 004e3d15
    PUSH 0x601670                       ; 004e3d16 | g_CGogglesTypeInfo
        ;   Label: LAB_004e3d16
    PUSH EBX                            ; 004e3d1b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004e3d1c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e3d21
    PUSH EAX                            ; 004e3d24
    CALL crt_unknown.c_FUN_005c0336     ; 004e3d25
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004e3d2a
    MOV EAX,EBX                         ; 004e3d2d
    POP EBX                             ; 004e3d2f
    RET                                 ; 004e3d30
    PUSH EAX                            ; 004e3d31
        ;   Label: LAB_004e3d31
    CALL crt_unknown.c_FUN_005c0344     ; 004e3d32
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004e3d37
    MOV EAX,EBX                         ; 004e3d3a
    POP EBX                             ; 004e3d3c
    RET                                 ; 004e3d3d

