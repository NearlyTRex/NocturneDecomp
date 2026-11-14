; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_fldnotes_cpp_CAlphaBitmap_arrdtor3_FUN_004a66f0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470 at 004a249e
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004a66f0 | g_CAlphaBitmapTypeInfo
        ;   Label: core_fldnotes.cpp_CAlphaBitmap_arrdtor3_FUN_004a66f0
    PUSH 0x3                            ; 004a66f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a66f7
    PUSH EDX                            ; 004a66fb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004a66fc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a6701
    RET                                 ; 004a6704

