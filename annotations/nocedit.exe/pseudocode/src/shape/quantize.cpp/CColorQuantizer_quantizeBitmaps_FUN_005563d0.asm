; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_quantize_cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 (CColorQuantizer *this_ptr,int bitmap_count,CBitmap **bitmap_array)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bitmap_count
; CBitmap * *      Stack[0xc]:4   bitmap_array
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470 at 0055647c
;
; Called Functions:
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
;   shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50
;   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
;   shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005563d0
        ;   Label: shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0
    PUSH ESI                            ; 005563d1
    PUSH EDI                            ; 005563d2
    PUSH EBP                            ; 005563d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005563d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005563d8
    PUSH EDI                            ; 005563dc
    CALL shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40 ; 005563dd
        ;   XREF to: 00554d40 (UNCONDITIONAL_CALL)  ; CColorQuantizer * shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer * this_ptr)
    XOR ESI,ESI                         ; 005563e2
    ADD ESP,0x4                         ; 005563e4
    TEST EBP,EBP                        ; 005563e7
    JLE 0x00556401                      ; 005563e9
        ;   XREF to: 00556401 (CONDITIONAL_JUMP)  ; LAB_00556401
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005563eb
    MOV EAX,dword ptr [EBX]             ; 005563ef
        ;   Label: LAB_005563ef
    MOV DL,byte ptr [EAX + 0x1a]        ; 005563f1
    CMP DL,0x18                         ; 005563f4
    JZ 0x0055643c                       ; 005563f7
        ;   XREF to: 0055643c (CONDITIONAL_JUMP)  ; LAB_0055643c
    INC ESI                             ; 005563f9
        ;   Label: LAB_005563f9
    ADD EBX,0x4                         ; 005563fa
    CMP ESI,EBP                         ; 005563fd
    JL 0x005563ef                       ; 005563ff
        ;   XREF to: 005563ef (CONDITIONAL_JUMP)  ; LAB_005563ef
    PUSH EDI                            ; 00556401
        ;   Label: LAB_00556401
    CALL shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 ; 00556402
        ;   XREF to: 00554cc0 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer * this_ptr)
    ADD ESP,0x4                         ; 00556407
    TEST EAX,EAX                        ; 0055640a
    JZ 0x00556437                       ; 0055640c
        ;   XREF to: 00556437 (CONDITIONAL_JUMP)  ; LAB_00556437
    XOR ESI,ESI                         ; 0055640e
    TEST EBP,EBP                        ; 00556410
    JLE 0x00556429                      ; 00556412
        ;   XREF to: 00556429 (CONDITIONAL_JUMP)  ; LAB_00556429
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00556414
    MOV EAX,dword ptr [EBX]             ; 00556418
        ;   Label: LAB_00556418
    MOV AL,byte ptr [EAX + 0x1a]        ; 0055641a
    CMP AL,0x18                         ; 0055641d
    JZ 0x0055644f                       ; 0055641f
        ;   XREF to: 0055644f (CONDITIONAL_JUMP)  ; LAB_0055644f
    INC ESI                             ; 00556421
        ;   Label: LAB_00556421
    ADD EBX,0x4                         ; 00556422
    CMP ESI,EBP                         ; 00556425
    JL 0x00556418                       ; 00556427
        ;   XREF to: 00556418 (CONDITIONAL_JUMP)  ; LAB_00556418
    PUSH EDI                            ; 00556429
        ;   Label: LAB_00556429
    CALL shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40 ; 0055642a
        ;   XREF to: 00554d40 (UNCONDITIONAL_CALL)  ; CColorQuantizer * shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer * this_ptr)
    MOV EAX,0x1                         ; 0055642f
    ADD ESP,0x4                         ; 00556434
    POP EBP                             ; 00556437
        ;   Label: LAB_00556437
    POP EDI                             ; 00556438
    POP ESI                             ; 00556439
    POP EBX                             ; 0055643a
    RET                                 ; 0055643b
    PUSH EAX                            ; 0055643c
        ;   Label: LAB_0055643c
    PUSH EDI                            ; 0055643d
    CALL shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50 ; 0055643e
        ;   XREF to: 00554a50 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_CColorQuantizer_importBitmap_FUN_00554a50(CColorQuantizer * this_ptr, CBitmap * bitmap)
    ADD ESP,0x8                         ; 00556443
    TEST EAX,EAX                        ; 00556446
    JNZ 0x005563f9                      ; 00556448
        ;   XREF to: 005563f9 (CONDITIONAL_JUMP)  ; LAB_005563f9
    POP EBP                             ; 0055644a
    POP EDI                             ; 0055644b
    POP ESI                             ; 0055644c
    POP EBX                             ; 0055644d
    RET                                 ; 0055644e
    PUSH EBX                            ; 0055644f
        ;   Label: LAB_0055644f
    PUSH EDI                            ; 00556450
    CALL shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 ; 00556451
        ;   XREF to: 00556180 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr)
    ADD ESP,0x8                         ; 00556456
    TEST EAX,EAX                        ; 00556459
    JNZ 0x00556421                      ; 0055645b
        ;   XREF to: 00556421 (CONDITIONAL_JUMP)  ; LAB_00556421
    POP EBP                             ; 0055645d
    POP EDI                             ; 0055645e
    POP ESI                             ; 0055645f
    POP EBX                             ; 00556460
    RET                                 ; 00556461

