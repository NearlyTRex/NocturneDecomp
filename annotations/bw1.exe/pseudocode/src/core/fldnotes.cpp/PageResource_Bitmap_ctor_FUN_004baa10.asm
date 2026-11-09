; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004baa10(SPageResourceBitmap *this_ptr)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bab60 at 004bab71
;
; Referenced Globals:
;   void* g_PageResource_BitmapVTable = 004baad0
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   unkaddr_004b9ab0.cpp_FUN_004ba730
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004baa10
        ;   Label: core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004baa10
    PUSH EAX                            ; 004baa14
    CALL unkaddr_004b9ab0.cpp_FUN_004ba730 ; 004baa15
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004ba730()
    ADD ESP,0x4                         ; 004baa1a
    ADD EAX,0x18                        ; 004baa1d
    PUSH EAX                            ; 004baa20
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004baa21
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004baa26
    MOV dword ptr [EAX + -0x4],0x600944 ; 004baa29 | g_PageResource_BitmapVTable
    SUB EAX,0x18                        ; 004baa30
    RET                                 ; 004baa33

