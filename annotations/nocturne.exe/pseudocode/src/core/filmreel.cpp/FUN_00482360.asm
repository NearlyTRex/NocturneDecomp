; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_filmreel_cpp_FUN_00482360(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmProjectorTypeInfo_0059d160
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482360
        ;   Label: core_filmreel.cpp_FUN_00482360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00482361
    TEST byte ptr [ESP + 0xc],0x4       ; 00482365
    JNZ 0x00482386                      ; 0048236a
        ;   XREF to: 00482386 (CONDITIONAL_JUMP)  ; LAB_00482386
    PUSH 0x1                            ; 0048236c
    PUSH EBX                            ; 0048236e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0048236f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 00482374
    MOV DL,byte ptr [ESP + 0xc]         ; 00482377
    MOV EBX,EAX                         ; 0048237b
    TEST DL,0x2                         ; 0048237d
    JNZ 0x004823a1                      ; 00482380
        ;   XREF to: 004823a1 (CONDITIONAL_JUMP)  ; LAB_004823a1
    MOV EAX,EBX                         ; 00482382
    POP EBX                             ; 00482384
    RET                                 ; 00482385
    PUSH 0x59d160                       ; 00482386 | g_CFilmProjectorTypeInfo_0059d160
        ;   Label: LAB_00482386
    PUSH EBX                            ; 0048238b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0048238c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00482391
    PUSH EAX                            ; 00482394
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00482395
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0048239a
    MOV EAX,EBX                         ; 0048239d
    POP EBX                             ; 0048239f
    RET                                 ; 004823a0
    PUSH EAX                            ; 004823a1
        ;   Label: LAB_004823a1
    CALL crt_unknown.c_FUN_00564494     ; 004823a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004823a7
    MOV EAX,EBX                         ; 004823aa
    POP EBX                             ; 004823ac
    RET                                 ; 004823ad

