; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004968e0(CFilmProjector *this_ptr,uint flags)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmProjectorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004968e0
        ;   Label: core_filmreel.cpp_CFilmProjector_dtor_FUN_004968e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004968e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004968e5
    JNZ 0x00496906                      ; 004968ea
        ;   XREF to: 00496906 (CONDITIONAL_JUMP)  ; LAB_00496906
    PUSH 0x1                            ; 004968ec
    PUSH EBX                            ; 004968ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004968ef
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004968f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004968f7
    MOV EBX,EAX                         ; 004968fb
    TEST DL,0x2                         ; 004968fd
    JNZ 0x00496921                      ; 00496900
        ;   XREF to: 00496921 (CONDITIONAL_JUMP)  ; LAB_00496921
    MOV EAX,EBX                         ; 00496902
    POP EBX                             ; 00496904
    RET                                 ; 00496905
    PUSH 0x5df840                       ; 00496906 | g_CFilmProjectorTypeInfo
        ;   Label: LAB_00496906
    PUSH EBX                            ; 0049690b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0049690c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00496911
    PUSH EAX                            ; 00496914
    CALL crt_unknown.c_FUN_005a30b6     ; 00496915
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0049691a
    MOV EAX,EBX                         ; 0049691d
    POP EBX                             ; 0049691f
    RET                                 ; 00496920
    PUSH EAX                            ; 00496921
        ;   Label: LAB_00496921
    CALL crt_unknown.c_FUN_005a30c4     ; 00496922
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00496927
    MOV EAX,EBX                         ; 0049692a
    POP EBX                             ; 0049692c
    RET                                 ; 0049692d

