; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * core_glass_cpp_CGlass_dtor_FUN_004e3a60(CGlass *this_ptr,uint flags)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_mirror.cpp_FUN_00518810
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3a60
        ;   Label: core_glass.cpp_CGlass_dtor_FUN_004e3a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3a61
    TEST byte ptr [ESP + 0xc],0x4       ; 004e3a65
    JNZ 0x004e3a9d                      ; 004e3a6a
        ;   XREF to: 004e3a9d (CONDITIONAL_JUMP)  ; LAB_004e3a9d
    PUSH 0x0                            ; 004e3a6c
    ADD EBX,0x1ec                       ; 004e3a6e
    PUSH EBX                            ; 004e3a74
    CALL core_mirror.cpp_FUN_00518810   ; 004e3a75
        ;   XREF to: 00518810 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_FUN_00518810(CMirror * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e3a7a
    PUSH 0x1                            ; 004e3a7d
    LEA EBX,[EAX + 0xfffffe14]          ; 004e3a7f
    PUSH EBX                            ; 004e3a85
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004e3a86
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e3a8b
    MOV DL,byte ptr [ESP + 0xc]         ; 004e3a8e
    MOV EBX,EAX                         ; 004e3a92
    TEST DL,0x2                         ; 004e3a94
    JNZ 0x004e3ab8                      ; 004e3a97
        ;   XREF to: 004e3ab8 (CONDITIONAL_JUMP)  ; LAB_004e3ab8
    MOV EAX,EBX                         ; 004e3a99
    POP EBX                             ; 004e3a9b
    RET                                 ; 004e3a9c
    PUSH 0x601550                       ; 004e3a9d | g_CGlassTypeInfo
        ;   Label: LAB_004e3a9d
    PUSH EBX                            ; 004e3aa2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004e3aa3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e3aa8
    PUSH EAX                            ; 004e3aab
    CALL crt_unknown.c_FUN_005c0336     ; 004e3aac
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004e3ab1
    MOV EAX,EBX                         ; 004e3ab4
    POP EBX                             ; 004e3ab6
    RET                                 ; 004e3ab7
    PUSH EAX                            ; 004e3ab8
        ;   Label: LAB_004e3ab8
    CALL crt_unknown.c_FUN_005c0344     ; 004e3ab9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004e3abe
    MOV EAX,EBX                         ; 004e3ac1
    POP EBX                             ; 004e3ac3
    RET                                 ; 004e3ac4

