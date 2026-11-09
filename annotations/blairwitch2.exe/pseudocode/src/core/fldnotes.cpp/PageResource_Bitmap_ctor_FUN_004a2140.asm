; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a2140(SPageResourceBitmap *this_ptr)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a2290 at 004a22a1
;
; Referenced Globals:
;   void* g_PageResource_BitmapVTable = 004a2200
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   unkaddr_004a1200.cpp_FUN_004a1e60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2140
        ;   Label: core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004a2140
    PUSH EAX                            ; 004a2144
    CALL unkaddr_004a1200.cpp_FUN_004a1e60 ; 004a2145
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a1200.cpp_FUN_004a1e60()
    ADD ESP,0x4                         ; 004a214a
    ADD EAX,0x18                        ; 004a214d
    PUSH EAX                            ; 004a2150
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004a2151
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a2156
    MOV dword ptr [EAX + -0x4],0x5f6ee4 ; 004a2159 | g_PageResource_BitmapVTable
    SUB EAX,0x18                        ; 004a2160
    RET                                 ; 004a2163

