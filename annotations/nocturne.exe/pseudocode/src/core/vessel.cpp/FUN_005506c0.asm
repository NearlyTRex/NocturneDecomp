; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_vessel_cpp_FUN_005506c0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CCryptVesselTypeInfo_005a3e60
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005506c0
        ;   Label: core_vessel.cpp_FUN_005506c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005506c1
    TEST byte ptr [ESP + 0xc],0x4       ; 005506c5
    JNZ 0x005506fd                      ; 005506ca
        ;   XREF to: 005506fd (CONDITIONAL_JUMP)  ; LAB_005506fd
    PUSH 0x1                            ; 005506cc
    ADD EBX,0x3bc                       ; 005506ce
    PUSH EBX                            ; 005506d4
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005506d5
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005506da
    PUSH 0x1                            ; 005506dd
    LEA EBX,[EAX + 0xfffffc44]          ; 005506df
    PUSH EBX                            ; 005506e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005506e6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005506eb
    MOV DL,byte ptr [ESP + 0xc]         ; 005506ee
    MOV EBX,EAX                         ; 005506f2
    TEST DL,0x2                         ; 005506f4
    JNZ 0x00550718                      ; 005506f7
        ;   XREF to: 00550718 (CONDITIONAL_JUMP)  ; LAB_00550718
    MOV EAX,EBX                         ; 005506f9
    POP EBX                             ; 005506fb
    RET                                 ; 005506fc
    PUSH 0x5a3e60                       ; 005506fd | g_CCryptVesselTypeInfo_005a3e60
        ;   Label: LAB_005506fd
    PUSH EBX                            ; 00550702
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00550703
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00550708
    PUSH EAX                            ; 0055070b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0055070c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00550711
    MOV EAX,EBX                         ; 00550714
    POP EBX                             ; 00550716
    RET                                 ; 00550717
    PUSH EAX                            ; 00550718
        ;   Label: LAB_00550718
    CALL crt_unknown.c_FUN_00564494     ; 00550719
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0055071e
    MOV EAX,EBX                         ; 00550721
    POP EBX                             ; 00550723
    RET                                 ; 00550724

