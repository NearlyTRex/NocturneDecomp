; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_newmsg_cpp_freeBitmap_FUN_00544730(CAlphaBitmap **objs)
;
; Parameters:
; CAlphaBitmap * * Stack[0x4]:4   objs
;
; XREF[1]:
;   support_newmsg.cpp_CMouse_dtor_FUN_005443e0 at 005443fc
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65e9f0                       ; 00544730 | g_CAlphaBitmapTypeInfo
        ;   Label: support_newmsg.cpp_freeBitmap_FUN_00544730
    PUSH 0x7                            ; 00544735
    MOV EDX,dword ptr [ESP + 0xc]       ; 00544737
    PUSH EDX                            ; 0054473b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0054473c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00544741
    RET                                 ; 00544744

