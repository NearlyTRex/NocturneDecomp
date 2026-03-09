; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; CBitmap * *      Stack[0x8]:4   bitmap_ptr
;
; XREF[1]:
;   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 at 00556610
;
; Called Functions:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00556470
        ;   Label: shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
    PUSH EDX                            ; 00556474
    PUSH 0x1                            ; 00556475
    MOV ECX,dword ptr [ESP + 0xc]       ; 00556477
    PUSH ECX                            ; 0055647b
    CALL shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 ; 0055647c
        ;   XREF to: 005563d0 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0(CColorQuantizer * this_ptr, int bitmap_count, CBitmap * * bitmap_array)
    ADD ESP,0xc                         ; 00556481
    RET                                 ; 00556484

