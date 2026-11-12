; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(char *filename,uchar *output_palette)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; uchar *          Stack[0x8]:4   output_palette
;
; XREF[4]:
;   cockpit_ckptutil.c_applyActPalette_FUN_0042c670 at 0042c689
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00516cb0 at 00516cc1
;   cockpit_pkbitmap.cpp_FUN_00517400 at 00517500
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40 at 00517e51
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c6f0
        ;   Label: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0
    PUSH ESI                            ; 0042c6f1
    PUSH EDI                            ; 0042c6f2
    SUB ESP,0x300                       ; 0042c6f3
    MOV EAX,ESP                         ; 0042c6f9
    PUSH EAX                            ; 0042c6fb
    MOV EDX,dword ptr [ESP + 0x314]     ; 0042c6fc
    PUSH EDX                            ; 0042c703
    CALL cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 ; 0042c704
        ;   XREF to: 0042c780 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780(char * base_filename, uchar * output_buffer)
    ADD ESP,0x8                         ; 0042c709
    MOV ECX,ESP                         ; 0042c70c
    MOV EBX,dword ptr [ESP + 0x314]     ; 0042c70e
    LEA EDI,[ECX + 0x300]               ; 0042c715
    XOR EDX,EDX                         ; 0042c71b
        ;   Label: LAB_0042c71b
    MOV DL,byte ptr [ECX]               ; 0042c71d
    MOV EAX,EDX                         ; 0042c71f
    SAR EDX,0x1f                        ; 0042c721
    SHL EDX,0x3                         ; 0042c724
    SBB EAX,EDX                         ; 0042c727
    SAR EAX,0x3                         ; 0042c729
    XOR EDX,EDX                         ; 0042c72c
    MOV DL,byte ptr [ECX + 0x1]         ; 0042c72e
    MOV ESI,EAX                         ; 0042c731
    MOV EAX,EDX                         ; 0042c733
    SAR EDX,0x1f                        ; 0042c735
    SHL EDX,0x3                         ; 0042c738
    SBB EAX,EDX                         ; 0042c73b
    SAR EAX,0x3                         ; 0042c73d
    SHL ESI,0xa                         ; 0042c740
    XOR EDX,EDX                         ; 0042c743
    SHL EAX,0x5                         ; 0042c745
    MOV DL,byte ptr [ECX + 0x2]         ; 0042c748
    ADD ESI,EAX                         ; 0042c74b
    MOV EAX,EDX                         ; 0042c74d
    SAR EDX,0x1f                        ; 0042c74f
    SHL EDX,0x3                         ; 0042c752
    SBB EAX,EDX                         ; 0042c755
    SAR EAX,0x3                         ; 0042c757
    INC EBX                             ; 0042c75a
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1c2c910] ; 0042c75b
    ADD ECX,0x3                         ; 0042c762
    MOV byte ptr [EBX + -0x1],AL        ; 0042c765
    CMP ECX,EDI                         ; 0042c768
    JNZ 0x0042c71b                      ; 0042c76a
        ;   XREF to: 0042c71b (CONDITIONAL_JUMP)  ; LAB_0042c71b
    ADD ESP,0x300                       ; 0042c76c
    POP EDI                             ; 0042c772
    POP ESI                             ; 0042c773
    POP EBX                             ; 0042c774
    RET                                 ; 0042c775

