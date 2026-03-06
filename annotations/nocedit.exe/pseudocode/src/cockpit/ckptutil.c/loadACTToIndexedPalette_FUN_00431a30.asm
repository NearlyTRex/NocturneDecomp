; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char *filename,uchar *output_palette)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; uchar *          Stack[0x8]:4   output_palette
; Local Variables:
; undefined1       Stack[-0x30c]:1  local_30c
; undefined1       Stack[-0x30b]:1  local_30b
; undefined1       Stack[-0x30a]:1  local_30a
; uchar            Stack[-0xc]:1  local_c
;
; XREF[4]:
;   cockpit_ckptutil.c_applyActPalette_FUN_004319b0 at 004319c9
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0 at 0054b401
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 at 0054bc50
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 at 0054c5e1
;
; Referenced Globals:
;   uchar[32768] g_ColorCubeLookup
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431a30
        ;   Label: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
    PUSH ESI                            ; 00431a31
    PUSH EDI                            ; 00431a32
    SUB ESP,0x300                       ; 00431a33
    MOV EAX,ESP                         ; 00431a39
    PUSH EAX                            ; 00431a3b
    MOV EDX,dword ptr [ESP + 0x314]     ; 00431a3c
    PUSH EDX                            ; 00431a43
    CALL cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 ; 00431a44
        ;   XREF to: 00431ac0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0(char * base_filename, uchar * output_buffer)
    ADD ESP,0x8                         ; 00431a49
    MOV ECX,ESP                         ; 00431a4c
    MOV EBX,dword ptr [ESP + 0x314]     ; 00431a4e
    LEA EDI,[ECX + 0x300]               ; 00431a55
    XOR EDX,EDX                         ; 00431a5b
        ;   Label: LAB_00431a5b
    MOV DL,byte ptr [ECX]               ; 00431a5d
    MOV EAX,EDX                         ; 00431a5f
    SAR EDX,0x1f                        ; 00431a61
    SHL EDX,0x3                         ; 00431a64
    SBB EAX,EDX                         ; 00431a67
    SAR EAX,0x3                         ; 00431a69
    XOR EDX,EDX                         ; 00431a6c
    MOV DL,byte ptr [ECX + 0x1]         ; 00431a6e
    MOV ESI,EAX                         ; 00431a71
    MOV EAX,EDX                         ; 00431a73
    SAR EDX,0x1f                        ; 00431a75
    SHL EDX,0x3                         ; 00431a78
    SBB EAX,EDX                         ; 00431a7b
    SAR EAX,0x3                         ; 00431a7d
    SHL ESI,0xa                         ; 00431a80
    XOR EDX,EDX                         ; 00431a83
    SHL EAX,0x5                         ; 00431a85
    MOV DL,byte ptr [ECX + 0x2]         ; 00431a88
    ADD ESI,EAX                         ; 00431a8b
    MOV EAX,EDX                         ; 00431a8d
    SAR EDX,0x1f                        ; 00431a8f
    SHL EDX,0x3                         ; 00431a92
    SBB EAX,EDX                         ; 00431a95
    SAR EAX,0x3                         ; 00431a97
    INC EBX                             ; 00431a9a
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020] ; 00431a9b | g_ColorCubeLookup
    ADD ECX,0x3                         ; 00431aa2
    MOV byte ptr [EBX + -0x1],AL        ; 00431aa5
    CMP ECX,EDI                         ; 00431aa8
    JNZ 0x00431a5b                      ; 00431aaa
        ;   XREF to: 00431a5b (CONDITIONAL_JUMP)  ; LAB_00431a5b
    ADD ESP,0x300                       ; 00431aac
    POP EDI                             ; 00431ab2
    POP ESI                             ; 00431ab3
    POP EBX                             ; 00431ab4
    RET                                 ; 00431ab5

