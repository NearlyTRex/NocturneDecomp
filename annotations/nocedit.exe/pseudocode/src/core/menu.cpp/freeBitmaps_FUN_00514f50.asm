; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_freeBitmaps_FUN_00514f50(CAlphaBitmap * * array)
;
; Parameters:
; CAlphaBitmap * * Stack[0x4]:4   array
;
; XREF[1]:
;   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 at 0054440c
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65e9f0                       ; 00514f50 | g_CAlphaBitmapTypeInfo
        ;   Label: core_menu.cpp_freeBitmaps_FUN_00514f50
    PUSH 0x8                            ; 00514f55
    MOV EDX,dword ptr [ESP + 0xc]       ; 00514f57
    PUSH EDX                            ; 00514f5b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 00514f5c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00514f61
    RET                                 ; 00514f64

