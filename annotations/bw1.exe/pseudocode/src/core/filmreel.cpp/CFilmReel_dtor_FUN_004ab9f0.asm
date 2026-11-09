; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0(CFilmReel *this_ptr,uint flags)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmReelTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab9f0
        ;   Label: core_filmreel.cpp_CFilmReel_dtor_FUN_004ab9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ab9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ab9f5
    JNZ 0x004aba16                      ; 004ab9fa
        ;   XREF to: 004aba16 (CONDITIONAL_JUMP)  ; LAB_004aba16
    PUSH 0x1                            ; 004ab9fc
    PUSH EBX                            ; 004ab9fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ab9ff
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004aba04
    MOV DL,byte ptr [ESP + 0xc]         ; 004aba07
    MOV EBX,EAX                         ; 004aba0b
    TEST DL,0x2                         ; 004aba0d
    JNZ 0x004aba31                      ; 004aba10
        ;   XREF to: 004aba31 (CONDITIONAL_JUMP)  ; LAB_004aba31
    MOV EAX,EBX                         ; 004aba12
    POP EBX                             ; 004aba14
    RET                                 ; 004aba15
    PUSH 0x5ffed0                       ; 004aba16 | g_CFilmReelTypeInfo
        ;   Label: LAB_004aba16
    PUSH EBX                            ; 004aba1b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004aba1c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004aba21
    PUSH EAX                            ; 004aba24
    CALL crt_unknown.c_FUN_005c0336     ; 004aba25
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004aba2a
    MOV EAX,EBX                         ; 004aba2d
    POP EBX                             ; 004aba2f
    RET                                 ; 004aba30
    PUSH EAX                            ; 004aba31
        ;   Label: LAB_004aba31
    CALL crt_unknown.c_FUN_005c0344     ; 004aba32
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004aba37
    MOV EAX,EBX                         ; 004aba3a
    POP EBX                             ; 004aba3c
    RET                                 ; 004aba3d

