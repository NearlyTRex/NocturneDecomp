; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *this_ptr,uint flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CFont_vtable g_CWinFontVTable
;   undefined4 DAT_005a44a0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   engine_palette.cpp_CFont_dtor_FUN_004eefc0
;   engine_winfont.cpp_CWinFont_reset_FUN_005586a0
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558000
        ;   Label: engine_winfont.cpp_CWinFont_dtor_FUN_00558000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558001
    TEST byte ptr [ESP + 0xc],0x4       ; 00558005
    JNZ 0x00558035                      ; 0055800a
        ;   XREF to: 00558035 (CONDITIONAL_JUMP)  ; LAB_00558035
    PUSH EBX                            ; 0055800c
    MOV dword ptr [EBX],0x5a4484        ; 0055800d | g_CWinFontVTable
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005586a0 ; 00558013
        ;   XREF to: 005586a0 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_005586a0(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 00558018
    PUSH 0x1                            ; 0055801b
    PUSH EBX                            ; 0055801d
    CALL engine_palette.cpp_CFont_dtor_FUN_004eefc0 ; 0055801e
        ;   XREF to: 004eefc0 (UNCONDITIONAL_CALL)  ; CFont * engine_palette.cpp_CFont_dtor_FUN_004eefc0(CFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00558023
    MOV DL,byte ptr [ESP + 0xc]         ; 00558026
    MOV EBX,EAX                         ; 0055802a
    TEST DL,0x2                         ; 0055802c
    JNZ 0x00558050                      ; 0055802f
        ;   XREF to: 00558050 (CONDITIONAL_JUMP)  ; LAB_00558050
    MOV EAX,EBX                         ; 00558031
    POP EBX                             ; 00558033
    RET                                 ; 00558034
    PUSH 0x5a44a0                       ; 00558035 | DAT_005a44a0
        ;   Label: LAB_00558035
    PUSH EBX                            ; 0055803a
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0055803b
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00558040
    PUSH EAX                            ; 00558043
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00558044
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00558049
    MOV EAX,EBX                         ; 0055804c
    POP EBX                             ; 0055804e
    RET                                 ; 0055804f
    PUSH EAX                            ; 00558050
        ;   Label: LAB_00558050
    CALL crt_unknown.c_FUN_00564494     ; 00558051
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00558056
    MOV EAX,EBX                         ; 00558059
    POP EBX                             ; 0055805b
    RET                                 ; 0055805c

