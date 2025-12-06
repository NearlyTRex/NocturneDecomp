; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWinFont * engine_winfont.cpp_CWinFont_dtor_FUN_005f2390(CWinFont * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   CFont_vtable g_CWinFontVTable
;   WatcomTypeInfo g_CWinFontTypeInfo
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   engine_palette.cpp_CFont_dtor_FUN_00544ec0
;   engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2390
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f2391
    TEST byte ptr [ESP + 0xc],0x4       ; 005f2395
    JNZ 0x005f23c5                      ; 005f239a | LAB_005f23c5
        ;   XREF to: 005f23c5 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005f239c
    MOV dword ptr [EBX],0x665914        ; 005f239d | CFont_vtable g_CWinFontVTable
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005f2a30 ; 005f23a3 | void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)
        ;   XREF to: 005f2a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f23a8
    PUSH 0x1                            ; 005f23ab
    PUSH EBX                            ; 005f23ad
    CALL engine_palette.cpp_CFont_dtor_FUN_00544ec0 ; 005f23ae | CFont * engine_palette.cpp_CFont_dtor_FUN_00544ec0(CFont * this_ptr)
        ;   XREF to: 00544ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005f23b3
    MOV DL,byte ptr [ESP + 0xc]         ; 005f23b6
    MOV EBX,EAX                         ; 005f23ba
    TEST DL,0x2                         ; 005f23bc
    JNZ 0x005f23e0                      ; 005f23bf | LAB_005f23e0
        ;   XREF to: 005f23e0 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005f23c1
    POP EBX                             ; 005f23c3
    RET                                 ; 005f23c4
    PUSH 0x665930                       ; 005f23c5 | WatcomTypeInfo g_CWinFontTypeInfo
        ;   Label: LAB_005f23c5
    PUSH EBX                            ; 005f23ca
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005f23cb | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005f23d0
    PUSH EAX                            ; 005f23d3
    CALL crt_memory.c_free_FUN_005fe659 ; 005f23d4 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f23d9
    MOV EAX,EBX                         ; 005f23dc
    POP EBX                             ; 005f23de
    RET                                 ; 005f23df
    PUSH EAX                            ; 005f23e0
        ;   Label: LAB_005f23e0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005f23e1 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f23e6
    MOV EAX,EBX                         ; 005f23e9
    POP EBX                             ; 005f23eb
    RET                                 ; 005f23ec

