; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004a8650(SPageResourceBitmap *this_ptr)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004a87a0 at 004a87b1
;
; Referenced Globals:
;   void* g_SPageResourceBitmapVTable = 004a8710
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8650
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650
    PUSH EAX                            ; 004a8654
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370 ; 004a8655
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004a8370(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004a865a
    ADD EAX,0x18                        ; 004a865d
    PUSH EAX                            ; 004a8660
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a8661
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a8666
    MOV dword ptr [EAX + -0x4],0x5e02a4 ; 004a8669 | g_SPageResourceBitmapVTable
    SUB EAX,0x18                        ; 004a8670
    RET                                 ; 004a8673

