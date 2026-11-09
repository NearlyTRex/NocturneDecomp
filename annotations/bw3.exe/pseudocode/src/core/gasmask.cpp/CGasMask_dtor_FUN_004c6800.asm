; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004c6800(CGasMask *this_ptr,uint flags)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGasMaskTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6800
        ;   Label: core_gasmask.cpp_CGasMask_dtor_FUN_004c6800
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6801
    TEST byte ptr [ESP + 0xc],0x4       ; 004c6805
    JNZ 0x004c6826                      ; 004c680a
        ;   XREF to: 004c6826 (CONDITIONAL_JUMP)  ; LAB_004c6826
    PUSH 0x1                            ; 004c680c
    PUSH EBX                            ; 004c680e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004c680f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c6814
    MOV DL,byte ptr [ESP + 0xc]         ; 004c6817
    MOV EBX,EAX                         ; 004c681b
    TEST DL,0x2                         ; 004c681d
    JNZ 0x004c6841                      ; 004c6820
        ;   XREF to: 004c6841 (CONDITIONAL_JUMP)  ; LAB_004c6841
    MOV EAX,EBX                         ; 004c6822
    POP EBX                             ; 004c6824
    RET                                 ; 004c6825
    PUSH 0x5e09f0                       ; 004c6826 | g_CGasMaskTypeInfo
        ;   Label: LAB_004c6826
    PUSH EBX                            ; 004c682b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004c682c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004c6831
    PUSH EAX                            ; 004c6834
    CALL crt_unknown.c_FUN_005a30b6     ; 004c6835
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004c683a
    MOV EAX,EBX                         ; 004c683d
    POP EBX                             ; 004c683f
    RET                                 ; 004c6840
    PUSH EAX                            ; 004c6841
        ;   Label: LAB_004c6841
    CALL crt_unknown.c_FUN_005a30c4     ; 004c6842
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004c6847
    MOV EAX,EBX                         ; 004c684a
    POP EBX                             ; 004c684c
    RET                                 ; 004c684d

