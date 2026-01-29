; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_moon_cpp_freeAlphaBitmaps_FUN_0052a470(CAlphaBitmap **array)
;
; Parameters:
; CAlphaBitmap * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65e9f0                       ; 0052a470 | g_CAlphaBitmapTypeInfo
        ;   Label: core_moon.cpp_freeAlphaBitmaps_FUN_0052a470
    PUSH 0x1e                           ; 0052a475
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052a477
    PUSH EDX                            ; 0052a47b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052a47c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052a481
    RET                                 ; 0052a484

