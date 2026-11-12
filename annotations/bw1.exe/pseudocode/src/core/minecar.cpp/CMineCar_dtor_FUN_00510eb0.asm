; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_00510eb0(CMineCar *this_ptr,uint flags)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMineCarTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_course.cpp_CCourse_dtor_FUN_00447d30
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510eb0
        ;   Label: core_minecar.cpp_CMineCar_dtor_FUN_00510eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510eb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00510eb5
    JNZ 0x00510eed                      ; 00510eba
        ;   XREF to: 00510eed (CONDITIONAL_JUMP)  ; LAB_00510eed
    PUSH 0x0                            ; 00510ebc
    ADD EBX,0x310                       ; 00510ebe
    PUSH EBX                            ; 00510ec4
    CALL core_course.cpp_CCourse_dtor_FUN_00447d30 ; 00510ec5
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00447d30(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00510eca
    PUSH 0x1                            ; 00510ecd
    LEA EBX,[EAX + 0xfffffcf0]          ; 00510ecf
    PUSH EBX                            ; 00510ed5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00510ed6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00510edb
    MOV DL,byte ptr [ESP + 0xc]         ; 00510ede
    MOV EBX,EAX                         ; 00510ee2
    TEST DL,0x2                         ; 00510ee4
    JNZ 0x00510f08                      ; 00510ee7
        ;   XREF to: 00510f08 (CONDITIONAL_JUMP)  ; LAB_00510f08
    MOV EAX,EBX                         ; 00510ee9
    POP EBX                             ; 00510eeb
    RET                                 ; 00510eec
    PUSH 0x603c50                       ; 00510eed | g_CMineCarTypeInfo
        ;   Label: LAB_00510eed
    PUSH EBX                            ; 00510ef2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00510ef3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00510ef8
    PUSH EAX                            ; 00510efb
    CALL crt_unknown.c_FUN_005c0336     ; 00510efc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00510f01
    MOV EAX,EBX                         ; 00510f04
    POP EBX                             ; 00510f06
    RET                                 ; 00510f07
    PUSH EAX                            ; 00510f08
        ;   Label: LAB_00510f08
    CALL crt_unknown.c_FUN_005c0344     ; 00510f09
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00510f0e
    MOV EAX,EBX                         ; 00510f11
    POP EBX                             ; 00510f13
    RET                                 ; 00510f14

