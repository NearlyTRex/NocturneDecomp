; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00437400(char *filename,uchar *output_palette)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; uchar *          Stack[0x8]:4   output_palette
;
; XREF[3]:
;   cockpit_ckptutil.c_applyActPalette_FUN_00437380 at 00437399
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000 at 00538011
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190 at 005391a1
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437400
        ;   Label: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400
    PUSH ESI                            ; 00437401
    PUSH EDI                            ; 00437402
    SUB ESP,0x300                       ; 00437403
    MOV EAX,ESP                         ; 00437409
    PUSH EAX                            ; 0043740b
    MOV EDX,dword ptr [ESP + 0x314]     ; 0043740c
    PUSH EDX                            ; 00437413
    CALL cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 ; 00437414
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490(char * base_filename, uchar * output_buffer)
    ADD ESP,0x8                         ; 00437419
    MOV ECX,ESP                         ; 0043741c
    MOV EBX,dword ptr [ESP + 0x314]     ; 0043741e
    LEA EDI,[ECX + 0x300]               ; 00437425
    XOR EDX,EDX                         ; 0043742b
        ;   Label: LAB_0043742b
    MOV DL,byte ptr [ECX]               ; 0043742d
    MOV EAX,EDX                         ; 0043742f
    SAR EDX,0x1f                        ; 00437431
    SHL EDX,0x3                         ; 00437434
    SBB EAX,EDX                         ; 00437437
    SAR EAX,0x3                         ; 00437439
    XOR EDX,EDX                         ; 0043743c
    MOV DL,byte ptr [ECX + 0x1]         ; 0043743e
    MOV ESI,EAX                         ; 00437441
    MOV EAX,EDX                         ; 00437443
    SAR EDX,0x1f                        ; 00437445
    SHL EDX,0x3                         ; 00437448
    SBB EAX,EDX                         ; 0043744b
    SAR EAX,0x3                         ; 0043744d
    SHL ESI,0xa                         ; 00437450
    XOR EDX,EDX                         ; 00437453
    SHL EAX,0x5                         ; 00437455
    MOV DL,byte ptr [ECX + 0x2]         ; 00437458
    ADD ESI,EAX                         ; 0043745b
    MOV EAX,EDX                         ; 0043745d
    SAR EDX,0x1f                        ; 0043745f
    SHL EDX,0x3                         ; 00437462
    SBB EAX,EDX                         ; 00437465
    SAR EAX,0x3                         ; 00437467
    INC EBX                             ; 0043746a
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1c45ad0] ; 0043746b
    ADD ECX,0x3                         ; 00437472
    MOV byte ptr [EBX + -0x1],AL        ; 00437475
    CMP ECX,EDI                         ; 00437478
    JNZ 0x0043742b                      ; 0043747a
        ;   XREF to: 0043742b (CONDITIONAL_JUMP)  ; LAB_0043742b
    ADD ESP,0x300                       ; 0043747c
    POP EDI                             ; 00437482
    POP ESI                             ; 00437483
    POP EBX                             ; 00437484
    RET                                 ; 00437485

