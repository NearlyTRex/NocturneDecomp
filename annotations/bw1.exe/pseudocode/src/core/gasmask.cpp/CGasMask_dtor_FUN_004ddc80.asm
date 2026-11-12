; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004ddc80(CGasMask *this_ptr,uint flags)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGasMaskTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddc80
        ;   Label: core_gasmask.cpp_CGasMask_dtor_FUN_004ddc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ddc81
    TEST byte ptr [ESP + 0xc],0x4       ; 004ddc85
    JNZ 0x004ddca6                      ; 004ddc8a
        ;   XREF to: 004ddca6 (CONDITIONAL_JUMP)  ; LAB_004ddca6
    PUSH 0x1                            ; 004ddc8c
    PUSH EBX                            ; 004ddc8e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ddc8f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ddc94
    MOV DL,byte ptr [ESP + 0xc]         ; 004ddc97
    MOV EBX,EAX                         ; 004ddc9b
    TEST DL,0x2                         ; 004ddc9d
    JNZ 0x004ddcc1                      ; 004ddca0
        ;   XREF to: 004ddcc1 (CONDITIONAL_JUMP)  ; LAB_004ddcc1
    MOV EAX,EBX                         ; 004ddca2
    POP EBX                             ; 004ddca4
    RET                                 ; 004ddca5
    PUSH 0x601280                       ; 004ddca6 | g_CGasMaskTypeInfo
        ;   Label: LAB_004ddca6
    PUSH EBX                            ; 004ddcab
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ddcac
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004ddcb1
    PUSH EAX                            ; 004ddcb4
    CALL crt_unknown.c_FUN_005c0336     ; 004ddcb5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ddcba
    MOV EAX,EBX                         ; 004ddcbd
    POP EBX                             ; 004ddcbf
    RET                                 ; 004ddcc0
    PUSH EAX                            ; 004ddcc1
        ;   Label: LAB_004ddcc1
    CALL crt_unknown.c_FUN_005c0344     ; 004ddcc2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ddcc7
    MOV EAX,EBX                         ; 004ddcca
    POP EBX                             ; 004ddccc
    RET                                 ; 004ddccd

