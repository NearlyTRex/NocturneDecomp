; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void)
;
;
; XREF[1]:
;   engine_2d.c_loadOrBuildColorMap_FUN_00402930 at 004029c6
;
; Referenced Globals:
;   double g_LuminanceScaleFactor = 0.577350270000000
;   float[256] g_PaletteLuminanceCache
;   undefined4 g_PaletteLuminanceCache[1]
;   uchar[32768] g_ColorCubeLookup
;   uchar[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   undefined4 CHAR_ARRAY_02d01f4b
;   undefined4 CHAR_ARRAY_02d01f4c
;   undefined4 CHAR_ARRAY_02d01f4d
;
; Called Functions:
;   engine_2d.c_findBestPaletteMatch_FUN_00401460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402870
        ;   Label: engine_2d.c_buildColorLookupTable_FUN_00402870
    PUSH ESI                            ; 00402871
    PUSH EDI                            ; 00402872
    PUSH EBP                            ; 00402873
    SUB ESP,0x10                        ; 00402874
    XOR EBX,EBX                         ; 00402877
    XOR ESI,ESI                         ; 00402879
    FLD double ptr [0x006130ec]         ; 0040287b | g_LuminanceScaleFactor
    XOR EAX,EAX                         ; 00402881
        ;   Label: LAB_00402881
    MOV AL,byte ptr [EBX + 0x2d01f48]   ; 00402883 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    MOV dword ptr [ESP + 0xc],EAX       ; 00402889
    XOR EAX,EAX                         ; 0040288d
    FILD word ptr [ESP + 0xc]           ; 0040288f
    MOV AL,byte ptr [EBX + 0x2d01f49]   ; 00402893 | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
    FLD ST0                             ; 00402899
    MOV dword ptr [ESP + 0xc],EAX       ; 0040289b
    FMULP                               ; 0040289f
    FILD word ptr [ESP + 0xc]           ; 004028a1
    XOR EAX,EAX                         ; 004028a5
    FLD ST0                             ; 004028a7
    MOV AL,byte ptr [EBX + 0x2d01f4a]   ; 004028a9 | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    FMULP                               ; 004028af
    MOV dword ptr [ESP + 0xc],EAX       ; 004028b1
    FADDP                               ; 004028b5
    FILD word ptr [ESP + 0xc]           ; 004028b7
    FMUL ST0                            ; 004028bb
    FADDP                               ; 004028bd
    FSQRT                               ; 004028bf
    FMUL ST1                            ; 004028c1
    ADD ESI,0x4                         ; 004028c3
    ADD EBX,0x3                         ; 004028c6
    FSTP float ptr [ESI + 0x772634]     ; 004028c9 | g_PaletteLuminanceCache | g_PaletteLuminanceCache[1]
    CMP ESI,0x400                       ; 004028cf
    JNZ 0x00402881                      ; 004028d5
        ;   XREF to: 00402881 (CONDITIONAL_JUMP)  ; LAB_00402881
    FSTP ST0                            ; 004028d7
    MOV ESI,0x2cf9020                   ; 004028d9 | g_ColorCubeLookup
    XOR EBP,EBP                         ; 004028de
    XOR EDI,EDI                         ; 004028e0
        ;   Label: LAB_004028e0
    XOR EBX,EBX                         ; 004028e2
        ;   Label: LAB_004028e2
    PUSH 0xe5                           ; 004028e4
        ;   Label: LAB_004028e4
    PUSH 0xa                            ; 004028e9
    PUSH EBX                            ; 004028eb
    PUSH EDI                            ; 004028ec
    PUSH EBP                            ; 004028ed
    INC ESI                             ; 004028ee
    ADD EBX,0x8                         ; 004028ef
    CALL engine_2d.c_findBestPaletteMatch_FUN_00401460 ; 004028f2
        ;   XREF to: 00401460 (UNCONDITIONAL_CALL)  ; int engine_2d.c_findBestPaletteMatch_FUN_00401460(int red, int green, int blue, int start_index, ...)
    ADD ESP,0x14                        ; 004028f7
    MOV byte ptr [ESI + -0x1],AL        ; 004028fa | g_ColorCubeLookup
    CMP EBX,0x100                       ; 004028fd
    JL 0x004028e4                       ; 00402903
        ;   XREF to: 004028e4 (CONDITIONAL_JUMP)  ; LAB_004028e4
    ADD EDI,0x8                         ; 00402905
    CMP EDI,0x100                       ; 00402908
    JL 0x004028e2                       ; 0040290e
        ;   XREF to: 004028e2 (CONDITIONAL_JUMP)  ; LAB_004028e2
    ADD EBP,0x8                         ; 00402910
    CMP EBP,0x100                       ; 00402913
    JL 0x004028e0                       ; 00402919
        ;   XREF to: 004028e0 (CONDITIONAL_JUMP)  ; LAB_004028e0
    XOR AH,AH                           ; 0040291b
    MOV byte ptr [0x02cf9020],AH        ; 0040291d | g_ColorCubeLookup
    ADD ESP,0x10                        ; 00402923
    POP EBP                             ; 00402926
    POP EDI                             ; 00402927
    POP ESI                             ; 00402928
    POP EBX                             ; 00402929
    RET                                 ; 0040292a

