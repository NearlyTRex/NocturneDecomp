; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr,uint flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CFont_vtable g_CWinFontVTable
;   WatcomTypeInfo g_CWinFontTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   engine_palette.cpp_CFont_dtor_FUN_00544ec0
;   engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2390
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f2391
    TEST byte ptr [ESP + 0xc],0x4       ; 005f2395
    JNZ 0x005f23c5                      ; 005f239a
        ;   XREF to: 005f23c5 (CONDITIONAL_JUMP)  ; LAB_005f23c5
    PUSH EBX                            ; 005f239c
    MOV dword ptr [EBX],0x665914        ; 005f239d | g_CWinFontVTable
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005f2a30 ; 005f23a3
        ;   XREF to: 005f2a30 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 005f23a8
    PUSH 0x1                            ; 005f23ab
    PUSH EBX                            ; 005f23ad
    CALL engine_palette.cpp_CFont_dtor_FUN_00544ec0 ; 005f23ae
        ;   XREF to: 00544ec0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_CFont_dtor_FUN_00544ec0(CFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005f23b3
    MOV DL,byte ptr [ESP + 0xc]         ; 005f23b6
    MOV EBX,EAX                         ; 005f23ba
    TEST DL,0x2                         ; 005f23bc
    JNZ 0x005f23e0                      ; 005f23bf
        ;   XREF to: 005f23e0 (CONDITIONAL_JUMP)  ; LAB_005f23e0
    MOV EAX,EBX                         ; 005f23c1
    POP EBX                             ; 005f23c3
    RET                                 ; 005f23c4
    PUSH 0x665930                       ; 005f23c5 | g_CWinFontTypeInfo
        ;   Label: LAB_005f23c5
    PUSH EBX                            ; 005f23ca
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005f23cb
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005f23d0
    PUSH EAX                            ; 005f23d3
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005f23d4
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005f23d9
    MOV EAX,EBX                         ; 005f23dc
    POP EBX                             ; 005f23de
    RET                                 ; 005f23df
    PUSH EAX                            ; 005f23e0
        ;   Label: LAB_005f23e0
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005f23e1
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005f23e6
    MOV EAX,EBX                         ; 005f23e9
    POP EBX                             ; 005f23eb
    RET                                 ; 005f23ec

