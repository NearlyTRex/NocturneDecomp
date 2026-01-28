; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap *bitmap)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   bitmap
;
; XREF[1]:
;   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 at 005443ec
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65e9f0                       ; 00544750 | g_CAlphaBitmapTypeInfo
        ;   Label: support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
    PUSH 0xf                            ; 00544755
    MOV EDX,dword ptr [ESP + 0xc]       ; 00544757
    PUSH EDX                            ; 0054475b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0054475c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00544761
    RET                                 ; 00544764

