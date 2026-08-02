; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00534dc0(CTempleStone *this_ptr,uint flags)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTempleStoneTypeInfo_005a26b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534dc0
        ;   Label: core_stone.cpp_CTempleStone_dtor_FUN_00534dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00534dc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00534dc5
    JNZ 0x00534dfd                      ; 00534dca
        ;   XREF to: 00534dfd (CONDITIONAL_JUMP)  ; LAB_00534dfd
    PUSH 0x0                            ; 00534dcc
    ADD EBX,0x38c                       ; 00534dce
    PUSH EBX                            ; 00534dd4
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 00534dd5
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041a6c0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00534dda
    PUSH 0x1                            ; 00534ddd
    LEA EBX,[EAX + 0xfffffc74]          ; 00534ddf
    PUSH EBX                            ; 00534de5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00534de6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00534deb
    MOV DL,byte ptr [ESP + 0xc]         ; 00534dee
    MOV EBX,EAX                         ; 00534df2
    TEST DL,0x2                         ; 00534df4
    JNZ 0x00534e18                      ; 00534df7
        ;   XREF to: 00534e18 (CONDITIONAL_JUMP)  ; LAB_00534e18
    MOV EAX,EBX                         ; 00534df9
    POP EBX                             ; 00534dfb
    RET                                 ; 00534dfc
    PUSH 0x5a26b0                       ; 00534dfd | g_CTempleStoneTypeInfo_005a26b0
        ;   Label: LAB_00534dfd
    PUSH EBX                            ; 00534e02
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00534e03
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00534e08
    PUSH EAX                            ; 00534e0b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00534e0c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00534e11
    MOV EAX,EBX                         ; 00534e14
    POP EBX                             ; 00534e16
    RET                                 ; 00534e17
    PUSH EAX                            ; 00534e18
        ;   Label: LAB_00534e18
    CALL crt_unknown.c_FUN_00564494     ; 00534e19
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00534e1e
    MOV EAX,EBX                         ; 00534e21
    POP EBX                             ; 00534e23
    RET                                 ; 00534e24

