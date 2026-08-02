; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CFilmReel *this_ptr,uint flags)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmReelTypeInfo_0059d140
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482310
        ;   Label: core_filmreel.cpp_CFilmReel_dtor_FUN_00482310
    MOV EBX,dword ptr [ESP + 0x8]       ; 00482311
    TEST byte ptr [ESP + 0xc],0x4       ; 00482315
    JNZ 0x00482336                      ; 0048231a
        ;   XREF to: 00482336 (CONDITIONAL_JUMP)  ; LAB_00482336
    PUSH 0x1                            ; 0048231c
    PUSH EBX                            ; 0048231e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0048231f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00482324
    MOV DL,byte ptr [ESP + 0xc]         ; 00482327
    MOV EBX,EAX                         ; 0048232b
    TEST DL,0x2                         ; 0048232d
    JNZ 0x00482351                      ; 00482330
        ;   XREF to: 00482351 (CONDITIONAL_JUMP)  ; LAB_00482351
    MOV EAX,EBX                         ; 00482332
    POP EBX                             ; 00482334
    RET                                 ; 00482335
    PUSH 0x59d140                       ; 00482336 | g_CFilmReelTypeInfo_0059d140
        ;   Label: LAB_00482336
    PUSH EBX                            ; 0048233b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0048233c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00482341
    PUSH EAX                            ; 00482344
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00482345
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0048234a
    MOV EAX,EBX                         ; 0048234d
    POP EBX                             ; 0048234f
    RET                                 ; 00482350
    PUSH EAX                            ; 00482351
        ;   Label: LAB_00482351
    CALL crt_unknown.c_FUN_00564494     ; 00482352
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00482357
    MOV EAX,EBX                         ; 0048235a
    POP EBX                             ; 0048235c
    RET                                 ; 0048235d

