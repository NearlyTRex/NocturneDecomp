; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(char *filename,uchar *output_palette)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; uchar *          Stack[0x8]:4   output_palette
;
; XREF[4]:
;   cockpit_ckptutil.c_applyActPalette_FUN_0042d370 at 0042d389
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5110 at 004f5210
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00 at 004f4a11
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20 at 004f5b31
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d3f0
        ;   Label: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
    PUSH ESI                            ; 0042d3f1
    PUSH EDI                            ; 0042d3f2
    SUB ESP,0x300                       ; 0042d3f3
    MOV EAX,ESP                         ; 0042d3f9
    PUSH EAX                            ; 0042d3fb
    MOV EDX,dword ptr [ESP + 0x314]     ; 0042d3fc
    PUSH EDX                            ; 0042d403
    CALL cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480 ; 0042d404
        ;   XREF to: 0042d480 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480(char * base_filename, uchar * output_buffer)
    ADD ESP,0x8                         ; 0042d409
    MOV ECX,ESP                         ; 0042d40c
    MOV EBX,dword ptr [ESP + 0x314]     ; 0042d40e
    LEA EDI,[ECX + 0x300]               ; 0042d415
    XOR EDX,EDX                         ; 0042d41b
        ;   Label: LAB_0042d41b
    MOV DL,byte ptr [ECX]               ; 0042d41d
    MOV EAX,EDX                         ; 0042d41f
    SAR EDX,0x1f                        ; 0042d421
    SHL EDX,0x3                         ; 0042d424
    SBB EAX,EDX                         ; 0042d427
    SAR EAX,0x3                         ; 0042d429
    XOR EDX,EDX                         ; 0042d42c
    MOV DL,byte ptr [ECX + 0x1]         ; 0042d42e
    MOV ESI,EAX                         ; 0042d431
    MOV EAX,EDX                         ; 0042d433
    SAR EDX,0x1f                        ; 0042d435
    SHL EDX,0x3                         ; 0042d438
    SBB EAX,EDX                         ; 0042d43b
    SAR EAX,0x3                         ; 0042d43d
    SHL ESI,0xa                         ; 0042d440
    XOR EDX,EDX                         ; 0042d443
    SHL EAX,0x5                         ; 0042d445
    MOV DL,byte ptr [ECX + 0x2]         ; 0042d448
    ADD ESI,EAX                         ; 0042d44b
    MOV EAX,EDX                         ; 0042d44d
    SAR EDX,0x1f                        ; 0042d44f
    SHL EDX,0x3                         ; 0042d452
    SBB EAX,EDX                         ; 0042d455
    SAR EAX,0x3                         ; 0042d457
    INC EBX                             ; 0042d45a
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1bf7720] ; 0042d45b
    ADD ECX,0x3                         ; 0042d462
    MOV byte ptr [EBX + -0x1],AL        ; 0042d465
    CMP ECX,EDI                         ; 0042d468
    JNZ 0x0042d41b                      ; 0042d46a
        ;   XREF to: 0042d41b (CONDITIONAL_JUMP)  ; LAB_0042d41b
    ADD ESP,0x300                       ; 0042d46c
    POP EDI                             ; 0042d472
    POP ESI                             ; 0042d473
    POP EBX                             ; 0042d474
    RET                                 ; 0042d475

