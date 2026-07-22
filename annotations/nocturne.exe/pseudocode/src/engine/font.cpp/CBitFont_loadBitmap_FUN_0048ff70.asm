; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x440]:1  local_440
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0 at 004901ff
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0058175b
;   string s_Too_many_bitmaps_0058176e
;   TerminatedCString s_art_0058177f
;   string s_Invalid_font_file_size_(%s)._00581783
;   string s_..\\engine\\font.cpp_005817a0
;   string s_Unable_to_allocate_memory_for_fo_005817b3
;   string s_..\\engine\\font.cpp_005817e3
;   TerminatedCString s_act_005817f6
;   TerminatedCString s_rb_005817fa
;   TerminatedCString s_art_005817fd
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c_splitpath_FUN_00566498
;   crt_string.c_strupr_FUN_00566ad0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
;   FUN_00490470
;   FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ff70
        ;   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
    PUSH ESI                            ; 0048ff71
    PUSH EDI                            ; 0048ff72
    PUSH EBP                            ; 0048ff73
    SUB ESP,0x430                       ; 0048ff74
    MOV EBX,dword ptr [ESP + 0x444]     ; 0048ff7a
    MOV EBP,dword ptr [ESP + 0x448]     ; 0048ff81
    CMP dword ptr [EBX],0x4             ; 0048ff88
    JGE 0x004901a0                      ; 0048ff8b
        ;   XREF to: 004901a0 (CONDITIONAL_JUMP)  ; LAB_004901a0
    MOV EDX,dword ptr [EBX]             ; 0048ff91
        ;   Label: LAB_0048ff91
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048ff93
    ADD EAX,EDX                         ; 0048ff9a
    SHL EAX,0x4                         ; 0048ff9c
    LEA EDX,[EBX + 0x4]                 ; 0048ff9f
    MOV ESI,EBP                         ; 0048ffa2
    LEA EDI,[EDX + EAX*0x1]             ; 0048ffa4
    PUSH EDI                            ; 0048ffa7
    MOV AL,byte ptr [ESI]               ; 0048ffa8
        ;   Label: LAB_0048ffa8
    MOV byte ptr [EDI],AL               ; 0048ffaa
    CMP AL,0x0                          ; 0048ffac
    JZ 0x0048ffc0                       ; 0048ffae
        ;   XREF to: 0048ffc0 (CONDITIONAL_JUMP)  ; LAB_0048ffc0
    MOV AL,byte ptr [ESI + 0x1]         ; 0048ffb0
    ADD ESI,0x2                         ; 0048ffb3
    MOV byte ptr [EDI + 0x1],AL         ; 0048ffb6
    ADD EDI,0x2                         ; 0048ffb9
    CMP AL,0x0                          ; 0048ffbc
    JNZ 0x0048ffa8                      ; 0048ffbe
        ;   XREF to: 0048ffa8 (CONDITIONAL_JUMP)  ; LAB_0048ffa8
    POP EDI                             ; 0048ffc0
        ;   Label: LAB_0048ffc0
    MOV ESI,dword ptr [EBX]             ; 0048ffc1
    LEA EAX,[ESI*0x4 + 0x0]             ; 0048ffc3
    ADD EAX,ESI                         ; 0048ffca
    SHL EAX,0x4                         ; 0048ffcc
    ADD EAX,EDX                         ; 0048ffcf
    PUSH EAX                            ; 0048ffd1
    CALL crt_string.c_strupr_FUN_00566ad0 ; 0048ffd2
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_strupr_FUN_00566ad0()
    ADD ESP,0x4                         ; 0048ffd7
    MOV EDX,dword ptr [ESP + 0x44c]     ; 0048ffda
    MOV EDI,dword ptr [ESP + 0x450]     ; 0048ffe1
    MOV ESI,EDX                         ; 0048ffe8
    IMUL ESI,EDI                        ; 0048ffea
    PUSH EBP                            ; 0048ffed
    MOV EAX,dword ptr [EBX]             ; 0048ffee
    PUSH 0x58177f                       ; 0048fff0 | = "art"
    MOV dword ptr [EBX + EAX*0x4 + 0x154],EDX ; 0048fff5
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 0048fffc
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 00490001
    CMP EAX,ESI                         ; 00490004
    JGE 0x0049003b                      ; 00490006
        ;   XREF to: 0049003b (CONDITIONAL_JUMP)  ; LAB_0049003b
    PUSH EBP                            ; 00490008
    PUSH 0x581783                       ; 00490009 | = "Invalid font file size (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0049000e
    PUSH EAX                            ; 00490012
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00490013
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x5817a0                    ; 00490018 | = "..\\engine\\font.cpp"
    ADD ESP,0xc                         ; 0049001d
    MOV [0x01cc4800],EAX                ; 00490020 | DAT_01cc4800
    MOV EAX,ESP                         ; 00490025
    MOV EDX,0xec                        ; 00490027
    PUSH EAX                            ; 0049002c
    MOV dword ptr [0x01cc4804],EDX      ; 0049002d | DAT_01cc4804
    CALL FUN_004c8440                   ; 00490033
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00490038
    PUSH ESI                            ; 0049003b
        ;   Label: LAB_0049003b
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0049003c
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    MOV EDX,dword ptr [EBX]             ; 00490041
    MOV dword ptr [EBX + EDX*0x4 + 0x144],EAX ; 00490043
    MOV EAX,dword ptr [EBX]             ; 0049004a
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x144] ; 0049004c
    ADD ESP,0x4                         ; 00490053
    TEST ECX,ECX                        ; 00490056
    JNZ 0x0049008d                      ; 00490058
        ;   XREF to: 0049008d (CONDITIONAL_JUMP)  ; LAB_0049008d
    PUSH EBP                            ; 0049005a
    PUSH 0x5817b3                       ; 0049005b | = "Unable to allocate memory for font bi..."
    LEA EAX,[ESP + 0x8]                 ; 00490060
    PUSH EAX                            ; 00490064
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00490065
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0xf4                        ; 0049006a
    ADD ESP,0xc                         ; 0049006f
    MOV [0x01cc4804],EAX                ; 00490072 | DAT_01cc4804
    MOV EAX,ESP                         ; 00490077
    MOV EDI,0x5817e3                    ; 00490079 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 0049007e
    MOV dword ptr [0x01cc4800],EDI      ; 0049007f | DAT_01cc4800
    CALL FUN_004c8440                   ; 00490085
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0049008a
    MOV EAX,dword ptr [EBX]             ; 0049008d
        ;   Label: LAB_0049008d
    PUSH ESI                            ; 0049008f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x144] ; 00490090
    PUSH EDX                            ; 00490097
    PUSH EBP                            ; 00490098
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 ; 00490099
        ;   XREF to: 0042d240 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_readBitmapFile_FUN_0042d240()
    ADD ESP,0xc                         ; 0049009e
    PUSH 0x0                            ; 004900a1
    LEA EAX,[ESP + 0x234]               ; 004900a3
    PUSH EAX                            ; 004900aa
    LEA EAX,[ESP + 0x338]               ; 004900ab
    PUSH EAX                            ; 004900b2
    PUSH 0x0                            ; 004900b3
    PUSH EBP                            ; 004900b5
    CALL crt_string.c_splitpath_FUN_00566498 ; 004900b6
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 004900bb
    PUSH 0x5817f6                       ; 004900be | = "act"
    LEA EAX,[ESP + 0x234]               ; 004900c3
    PUSH EAX                            ; 004900ca
    LEA EAX,[ESP + 0x338]               ; 004900cb
    PUSH EAX                            ; 004900d2
    PUSH 0x0                            ; 004900d3
    LEA EAX,[ESP + 0x13c]               ; 004900d5
    PUSH EAX                            ; 004900dc
    CALL crt_file.c_makepath_FUN_0056626c ; 004900dd
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 004900e2
    PUSH 0x5817fa                       ; 004900e5 | = "rb"
    LEA EAX,[ESP + 0x130]               ; 004900ea
    PUSH EAX                            ; 004900f1
    PUSH 0x5817fd                       ; 004900f2 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004900f7
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004900fc
    MOV EDI,EAX                         ; 004900ff
    TEST EAX,EAX                        ; 00490101
    JZ 0x00490163                       ; 00490103
        ;   XREF to: 00490163 (CONDITIONAL_JUMP)  ; LAB_00490163
    XOR ESI,ESI                         ; 00490105
    PUSH EDI                            ; 00490107
        ;   Label: LAB_00490107
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00490108
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    IMUL EDX,dword ptr [EBX],0x300      ; 0049010d
    ADD ESP,0x4                         ; 00490113
    ADD EDX,EBX                         ; 00490116
    PUSH EDI                            ; 00490118
    MOV byte ptr [EDX + ESI*0x1 + 0x164],AL ; 00490119
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00490120
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    IMUL EDX,dword ptr [EBX],0x300      ; 00490125
    ADD ESP,0x4                         ; 0049012b
    ADD EDX,EBX                         ; 0049012e
    PUSH EDI                            ; 00490130
    MOV byte ptr [EDX + ESI*0x1 + 0x165],AL ; 00490131
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00490138
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    IMUL EDX,dword ptr [EBX],0x300      ; 0049013d
    ADD ESI,0x3                         ; 00490143
    ADD EDX,EBX                         ; 00490146
    ADD ESP,0x4                         ; 00490148
    MOV byte ptr [EDX + ESI*0x1 + 0x163],AL ; 0049014b
    CMP ESI,0x300                       ; 00490152
    JNZ 0x00490107                      ; 00490158
        ;   XREF to: 00490107 (CONDITIONAL_JUMP)  ; LAB_00490107
    PUSH EDI                            ; 0049015a
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0049015b
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00490160
    MOV ESI,dword ptr [ESP + 0x454]     ; 00490163
        ;   Label: LAB_00490163
    PUSH ESI                            ; 0049016a
    MOV EDI,dword ptr [ESP + 0x454]     ; 0049016b
    PUSH EDI                            ; 00490172
    MOV EBP,dword ptr [ESP + 0x454]     ; 00490173
    PUSH EBP                            ; 0049017a
    MOV EAX,dword ptr [EBX]             ; 0049017b
    PUSH EAX                            ; 0049017d
    PUSH EBX                            ; 0049017e
    CALL FUN_00490470                   ; 0049017f
        ;   XREF to: 00490470 (UNCONDITIONAL_CALL)  ; undefined FUN_00490470()
    MOV EDX,dword ptr [EBX]             ; 00490184
    ADD ESP,0x14                        ; 00490186
    INC EDX                             ; 00490189
    PUSH EBX                            ; 0049018a
    MOV dword ptr [EBX],EDX             ; 0049018b
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004931b0 ; 0049018d
        ;   XREF to: 004931b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_remapPalette_FUN_004931b0()
    ADD ESP,0x4                         ; 00490192
    ADD ESP,0x430                       ; 00490195
    POP EBP                             ; 0049019b
    POP EDI                             ; 0049019c
    POP ESI                             ; 0049019d
    POP EBX                             ; 0049019e
    RET                                 ; 0049019f
    MOV ECX,0x58175b                    ; 004901a0 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004901a0
    MOV ESI,0xd7                        ; 004901a5
    PUSH 0x58176e                       ; 004901aa | = "Too many bitmaps"
    MOV dword ptr [0x01cc4800],ECX      ; 004901af | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004901b5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004901bb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004901c0
    JMP 0x0048ff91                      ; 004901c3
        ;   XREF to: 0048ff91 (UNCONDITIONAL_JUMP)  ; LAB_0048ff91

