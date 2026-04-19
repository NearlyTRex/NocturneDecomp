; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bitmap_count
; int              Stack[0xc]:4   bitmap_width
; int              Stack[0x10]:4   bitmap_height
; int              Stack[0x14]:4   first_char
; Local Variables:
; char[300]        Stack[-0x16c]:300  local_16c
; int *            Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int *            Stack[-0x30]:4  local_30
; char[80] *       Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int *            Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; byte *           Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; byte *           Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 at 004cd235
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a5d0
;   TerminatedCString s_engine_font_cpp_0062a5e3
;   TerminatedCString s_Out_of_memory_0062a5f6
;   TerminatedCString s_No_character_markers_fou_0062a604
;   TerminatedCString s_engine_font_cpp_0062a632
;   TerminatedCString s_Too_many_chars_fontfile__0062a645
;   TerminatedCString s_engine_font_cpp_0062a66b
;   TerminatedCString s_engine_font_cpp_0062a67e
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20
;   shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd550
        ;   Label: engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
    PUSH ESI                            ; 004cd551
    PUSH EDI                            ; 004cd552
    PUSH EBP                            ; 004cd553
    SUB ESP,0x15c                       ; 004cd554
    MOV ESI,dword ptr [ESP + 0x170]     ; 004cd55a
    MOV EBX,dword ptr [ESP + 0x178]     ; 004cd561
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004cd568
    IMUL EBX,EDX                        ; 004cd56f
    PUSH 0x1b7                          ; 004cd572
    PUSH 0x62a5d0                       ; 004cd577 | = "..\\engine\\font.cpp"
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd57c
    PUSH EAX                            ; 004cd583
    CALL shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0 ; 004cd584
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004cd589
    MOV dword ptr [ESP + 0x12c],EAX     ; 004cd58c
    TEST EAX,EAX                        ; 004cd593
    JZ 0x004cd7d0                       ; 004cd595
        ;   XREF to: 004cd7d0 (CONDITIONAL_JUMP)  ; LAB_004cd7d0
    MOV EAX,dword ptr [ESI + 0x3188]    ; 004cd59b
        ;   Label: LAB_004cd59b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004cd5a1
    MOV EAX,dword ptr [ESP + 0x174]     ; 004cd5a8
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x144] ; 004cd5af
    XOR EAX,EAX                         ; 004cd5b6
    TEST EBX,EBX                        ; 004cd5b8
    JLE 0x004cd5d5                      ; 004cd5ba
        ;   XREF to: 004cd5d5 (CONDITIONAL_JUMP)  ; LAB_004cd5d5
    XOR ECX,ECX                         ; 004cd5bc
        ;   Label: LAB_004cd5bc
    MOV EBP,dword ptr [ESI + 0x3188]    ; 004cd5be
    MOV CL,byte ptr [EDX]               ; 004cd5c4
    CMP ECX,EBP                         ; 004cd5c6
    JZ 0x004cd7f8                       ; 004cd5c8
        ;   XREF to: 004cd7f8 (CONDITIONAL_JUMP)  ; LAB_004cd7f8
    MOV dword ptr [ESP + 0x14c],ECX     ; 004cd5ce
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004cd5d5
        ;   Label: LAB_004cd5d5
    CMP EAX,dword ptr [ESI + 0x3188]    ; 004cd5dc
    JNZ 0x004cd630                      ; 004cd5e2
        ;   XREF to: 004cd630 (CONDITIONAL_JUMP)  ; LAB_004cd630
    MOV EDX,dword ptr [ESP + 0x174]     ; 004cd5e4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd5eb
    ADD EAX,EDX                         ; 004cd5f2
    SHL EAX,0x4                         ; 004cd5f4
    LEA EDX,[ESI + 0x4]                 ; 004cd5f7
    ADD EAX,EDX                         ; 004cd5fa
    PUSH EAX                            ; 004cd5fc
    PUSH 0x62a604                       ; 004cd5fd | = "No character markers found in font fi..."
    LEA EAX,[ESP + 0x8]                 ; 004cd602
    PUSH EAX                            ; 004cd606
    MOV EBX,0x1cd                       ; 004cd607
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004cd60c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004cd611
    MOV EAX,ESP                         ; 004cd614
    MOV ECX,0x62a632                    ; 004cd616 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004cd61b
    MOV dword ptr [0x02f0ca4c],EBX      ; 004cd61c | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 004cd622 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd628
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004cd62d
    MOV EAX,dword ptr [ESP + 0x174]     ; 004cd630
        ;   Label: LAB_004cd630
    XOR EDI,EDI                         ; 004cd637
    XOR EBP,EBP                         ; 004cd639
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x144] ; 004cd63b
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004cd642
    MOV dword ptr [ESP + 0x138],EDI     ; 004cd649
    TEST EAX,EAX                        ; 004cd650
    JLE 0x004cd6a5                      ; 004cd652
        ;   XREF to: 004cd6a5 (CONDITIONAL_JUMP)  ; LAB_004cd6a5
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004cd654
    MOV EAX,dword ptr [ESP + 0x178]     ; 004cd65b
        ;   Label: LAB_004cd65b
    MOV EBX,EDX                         ; 004cd662
    XOR EDI,EDI                         ; 004cd664
    TEST EAX,EAX                        ; 004cd666
    JLE 0x004cd690                      ; 004cd668
        ;   XREF to: 004cd690 (CONDITIONAL_JUMP)  ; LAB_004cd690
    XOR EAX,EAX                         ; 004cd66a
        ;   Label: LAB_004cd66a
    MOV AL,byte ptr [EBX]               ; 004cd66c
    CMP EAX,dword ptr [ESP + 0x14c]     ; 004cd66e
    JNZ 0x004cd807                      ; 004cd675
        ;   XREF to: 004cd807 (CONDITIONAL_JUMP)  ; LAB_004cd807
    MOV EBX,dword ptr [ESP + 0x138]     ; 004cd67b
    ADD ECX,0x4                         ; 004cd682
    INC EBX                             ; 004cd685
    MOV dword ptr [ECX + -0x4],EBP      ; 004cd686
    MOV dword ptr [ESP + 0x138],EBX     ; 004cd689
    MOV EBX,dword ptr [ESP + 0x178]     ; 004cd690
        ;   Label: LAB_004cd690
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004cd697
    INC EBP                             ; 004cd69e
    ADD EDX,EBX                         ; 004cd69f
    CMP EBP,EDI                         ; 004cd6a1
    JL 0x004cd65b                       ; 004cd6a3
        ;   XREF to: 004cd65b (CONDITIONAL_JUMP)  ; LAB_004cd65b
    MOV EDX,dword ptr [ESP + 0x138]     ; 004cd6a5
        ;   Label: LAB_004cd6a5
    MOV EBP,dword ptr [ESP + 0x180]     ; 004cd6ac
    XOR EAX,EAX                         ; 004cd6b3
    DEC EDX                             ; 004cd6b5
    MOV dword ptr [ESP + 0x134],EAX     ; 004cd6b6
    MOV dword ptr [ESP + 0x138],EDX     ; 004cd6bd
    TEST EDX,EDX                        ; 004cd6c4
    JLE 0x004cd9b6                      ; 004cd6c6
        ;   XREF to: 004cd9b6 (CONDITIONAL_JUMP)  ; LAB_004cd9b6
    MOV EDX,dword ptr [ESP + 0x174]     ; 004cd6cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd6d3
    ADD EAX,EDX                         ; 004cd6da
    SHL EAX,0x4                         ; 004cd6dc
    LEA EDX,[ESI + 0x4]                 ; 004cd6df
    ADD EDX,EAX                         ; 004cd6e2
    MOV EAX,dword ptr [ESP + 0x174]     ; 004cd6e4
    SHL EAX,0x2                         ; 004cd6eb
    MOV dword ptr [ESP + 0x140],EDX     ; 004cd6ee
    LEA EDX,[ESI + EAX*0x1]             ; 004cd6f5
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004cd6f8
    MOV dword ptr [ESP + 0x130],EDX     ; 004cd6ff
    MOV dword ptr [ESP + 0x13c],EAX     ; 004cd706
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004cd70d
        ;   Label: LAB_004cd70d
    MOV EBX,dword ptr [ESP + 0x178]     ; 004cd714
    MOV EDX,dword ptr [EDX]             ; 004cd71b
    IMUL EDX,EBX                        ; 004cd71d
    MOV EAX,dword ptr [ESP + 0x130]     ; 004cd720
    MOV EAX,dword ptr [EAX + 0x144]     ; 004cd727
    XOR EDI,EDI                         ; 004cd72d
    ADD EAX,EDX                         ; 004cd72f
    MOV dword ptr [ESP + 0x154],EDI     ; 004cd731
    MOV dword ptr [ESP + 0x158],EAX     ; 004cd738
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004cd73f
    MOV EDX,dword ptr [ESP + 0x178]     ; 004cd746
    MOV dword ptr [ESP + 0x148],EAX     ; 004cd74d
    MOV EAX,dword ptr [ESP + 0x158]     ; 004cd754
    LEA EBX,[EBP*0x4 + 0x0]             ; 004cd75b
    ADD EAX,EDX                         ; 004cd762
    ADD EBX,ESI                         ; 004cd764
    MOV dword ptr [ESP + 0x150],EAX     ; 004cd766
    MOV ECX,dword ptr [ESP + 0x144]     ; 004cd76d
        ;   Label: LAB_004cd76d
    MOV EAX,EDI                         ; 004cd774
    MOV EDX,dword ptr [ESP + 0x178]     ; 004cd776
    SUB EAX,ECX                         ; 004cd77d
    CMP EDI,EDX                         ; 004cd77f
    JGE 0x004cd913                      ; 004cd781
        ;   XREF to: 004cd913 (CONDITIONAL_JUMP)  ; LAB_004cd913
    CMP dword ptr [ESP + 0x154],0x0     ; 004cd787
    JNZ 0x004cd885                      ; 004cd78f
        ;   XREF to: 004cd885 (CONDITIONAL_JUMP)  ; LAB_004cd885
    MOV EDX,dword ptr [ESP + 0x158]     ; 004cd795
    XOR EAX,EAX                         ; 004cd79c
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004cd79e
    MOV AL,byte ptr [EDX]               ; 004cd7a5
    CMP EAX,ECX                         ; 004cd7a7
    JZ 0x004cd81d                       ; 004cd7a9
        ;   XREF to: 004cd81d (CONDITIONAL_JUMP)  ; LAB_004cd81d
    MOV EDX,dword ptr [ESP + 0x150]     ; 004cd7af
        ;   Label: LAB_004cd7af
    MOV ECX,dword ptr [ESP + 0x158]     ; 004cd7b6
    INC EDI                             ; 004cd7bd
    INC EDX                             ; 004cd7be
    INC ECX                             ; 004cd7bf
    MOV dword ptr [ESP + 0x150],EDX     ; 004cd7c0
    MOV dword ptr [ESP + 0x158],ECX     ; 004cd7c7
    JMP 0x004cd76d                      ; 004cd7ce
        ;   XREF to: 004cd76d (UNCONDITIONAL_JUMP)  ; LAB_004cd76d
    MOV ECX,0x62a5e3                    ; 004cd7d0 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004cd7d0
    MOV EDI,0x1b8                       ; 004cd7d5
    PUSH 0x62a5f6                       ; 004cd7da | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ECX      ; 004cd7df | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004cd7e5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd7eb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004cd7f0
    JMP 0x004cd59b                      ; 004cd7f3
        ;   XREF to: 004cd59b (UNCONDITIONAL_JUMP)  ; LAB_004cd59b
    INC EAX                             ; 004cd7f8
        ;   Label: LAB_004cd7f8
    INC EDX                             ; 004cd7f9
    CMP EAX,EBX                         ; 004cd7fa
    JL 0x004cd5bc                       ; 004cd7fc
        ;   XREF to: 004cd5bc (CONDITIONAL_JUMP)  ; LAB_004cd5bc
    JMP 0x004cd5d5                      ; 004cd802
        ;   XREF to: 004cd5d5 (UNCONDITIONAL_JUMP)  ; LAB_004cd5d5
    MOV EAX,dword ptr [ESP + 0x178]     ; 004cd807
        ;   Label: LAB_004cd807
    INC EDI                             ; 004cd80e
    INC EBX                             ; 004cd80f
    CMP EDI,EAX                         ; 004cd810
    JL 0x004cd66a                       ; 004cd812
        ;   XREF to: 004cd66a (CONDITIONAL_JUMP)  ; LAB_004cd66a
    JMP 0x004cd690                      ; 004cd818
        ;   XREF to: 004cd690 (UNCONDITIONAL_JUMP)  ; LAB_004cd690
    MOV EAX,0x1                         ; 004cd81d
        ;   Label: LAB_004cd81d
    MOV dword ptr [ESP + 0x144],EDI     ; 004cd822
    MOV dword ptr [ESP + 0x154],EAX     ; 004cd829
    CMP EBP,0x100                       ; 004cd830
    JL 0x004cd873                       ; 004cd836
        ;   XREF to: 004cd873 (CONDITIONAL_JUMP)  ; LAB_004cd873
    PUSH EBP                            ; 004cd838
    MOV EDX,dword ptr [ESP + 0x144]     ; 004cd839
    PUSH EDX                            ; 004cd840
    PUSH 0x62a645                       ; 004cd841 | = "Too many chars: fontfile %s, chars %d"
    LEA EAX,[ESP + 0xc]                 ; 004cd846
    PUSH EAX                            ; 004cd84a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004cd84b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x201                       ; 004cd850
    ADD ESP,0x10                        ; 004cd855
    MOV [0x02f0ca4c],EAX                ; 004cd858 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 004cd85d
    MOV ECX,0x62a66b                    ; 004cd85f | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004cd864
    MOV dword ptr [0x02f0ca48],ECX      ; 004cd865 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd86b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004cd870
    MOV EAX,dword ptr [ESP + 0x150]     ; 004cd873
        ;   Label: LAB_004cd873
    MOV dword ptr [EBX + 0x1d68],EAX    ; 004cd87a
    JMP 0x004cd7af                      ; 004cd880
        ;   XREF to: 004cd7af (UNCONDITIONAL_JUMP)  ; LAB_004cd7af
    MOV ECX,dword ptr [ESP + 0x158]     ; 004cd885
        ;   Label: LAB_004cd885
    XOR EDX,EDX                         ; 004cd88c
    MOV DL,byte ptr [ECX]               ; 004cd88e
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004cd890
    CMP EDX,ECX                         ; 004cd897
    JZ 0x004cd7af                       ; 004cd899
        ;   XREF to: 004cd7af (CONDITIONAL_JUMP)  ; LAB_004cd7af
    MOV dword ptr [EBX + 0x2568],EAX    ; 004cd89f
    XOR EDX,EDX                         ; 004cd8a5
    MOV ECX,dword ptr [ESI + 0x3168]    ; 004cd8a7
    MOV dword ptr [ESP + 0x154],EDX     ; 004cd8ad
    CMP EAX,ECX                         ; 004cd8b4
    JLE 0x004cd8be                      ; 004cd8b6
        ;   XREF to: 004cd8be (CONDITIONAL_JUMP)  ; LAB_004cd8be
    MOV dword ptr [ESI + 0x3168],EAX    ; 004cd8b8
    MOV EAX,dword ptr [ESP + 0x178]     ; 004cd8be
        ;   Label: LAB_004cd8be
    PUSH EAX                            ; 004cd8c5
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004cd8c6
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004cd8cd
    MOV EAX,dword ptr [EAX]             ; 004cd8d4
    MOV EDX,dword ptr [EDX + 0x4]       ; 004cd8d6
    INC EAX                             ; 004cd8d9
    SUB EDX,EAX                         ; 004cd8da
    PUSH EDX                            ; 004cd8dc
    MOV EDX,dword ptr [EBX + 0x2568]    ; 004cd8dd
    PUSH EDX                            ; 004cd8e3
    MOV ECX,dword ptr [EBX + 0x1d68]    ; 004cd8e4
    PUSH ECX                            ; 004cd8ea
    PUSH ESI                            ; 004cd8eb
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20 ; 004cd8ec
        ;   XREF to: 004cda20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x2968],EAX    ; 004cd8f1
    MOV EDX,dword ptr [ESI + 0x316c]    ; 004cd8f7
    ADD ESP,0x14                        ; 004cd8fd
    CMP EAX,EDX                         ; 004cd900
    JLE 0x004cd90a                      ; 004cd902
        ;   XREF to: 004cd90a (CONDITIONAL_JUMP)  ; LAB_004cd90a
    MOV dword ptr [ESI + 0x316c],EAX    ; 004cd904
    INC EBP                             ; 004cd90a
        ;   Label: LAB_004cd90a
    ADD EBX,0x4                         ; 004cd90b
    JMP 0x004cd7af                      ; 004cd90e
        ;   XREF to: 004cd7af (UNCONDITIONAL_JUMP)  ; LAB_004cd7af
    CMP dword ptr [ESP + 0x154],0x1     ; 004cd913
        ;   Label: LAB_004cd913
    JNZ 0x004cd987                      ; 004cd91b
        ;   XREF to: 004cd987 (CONDITIONAL_JUMP)  ; LAB_004cd987
    MOV dword ptr [EBX + 0x2568],EAX    ; 004cd91d
    CMP EAX,dword ptr [ESI + 0x3168]    ; 004cd923
    JLE 0x004cd931                      ; 004cd929
        ;   XREF to: 004cd931 (CONDITIONAL_JUMP)  ; LAB_004cd931
    MOV dword ptr [ESI + 0x3168],EAX    ; 004cd92b
    MOV EAX,dword ptr [ESP + 0x178]     ; 004cd931
        ;   Label: LAB_004cd931
    PUSH EAX                            ; 004cd938
    MOV EAX,dword ptr [ESP + 0x140]     ; 004cd939
    MOV EDX,dword ptr [ESP + 0x140]     ; 004cd940
    MOV EAX,dword ptr [EAX]             ; 004cd947
    MOV EDX,dword ptr [EDX + 0x4]       ; 004cd949
    INC EAX                             ; 004cd94c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004cd94d
    SUB EDX,EAX                         ; 004cd954
    ADD EBX,ESI                         ; 004cd956
    PUSH EDX                            ; 004cd958
    MOV EDX,dword ptr [EBX + 0x2568]    ; 004cd959
    PUSH EDX                            ; 004cd95f
    MOV ECX,dword ptr [EBX + 0x1d68]    ; 004cd960
    PUSH ECX                            ; 004cd966
    PUSH ESI                            ; 004cd967
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20 ; 004cd968
        ;   XREF to: 004cda20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004cda20(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x2968],EAX    ; 004cd96d
    MOV EDI,dword ptr [ESI + 0x316c]    ; 004cd973
    ADD ESP,0x14                        ; 004cd979
    CMP EAX,EDI                         ; 004cd97c
    JLE 0x004cd986                      ; 004cd97e
        ;   XREF to: 004cd986 (CONDITIONAL_JUMP)  ; LAB_004cd986
    MOV dword ptr [ESI + 0x316c],EAX    ; 004cd980
    INC EBP                             ; 004cd986
        ;   Label: LAB_004cd986
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004cd987
        ;   Label: LAB_004cd987
    MOV EAX,dword ptr [ESP + 0x134]     ; 004cd98e
    MOV EDX,dword ptr [ESP + 0x138]     ; 004cd995
    ADD EDI,0x4                         ; 004cd99c
    INC EAX                             ; 004cd99f
    MOV dword ptr [ESP + 0x13c],EDI     ; 004cd9a0
    MOV dword ptr [ESP + 0x134],EAX     ; 004cd9a7
    CMP EAX,EDX                         ; 004cd9ae
    JL 0x004cd70d                       ; 004cd9b0
        ;   XREF to: 004cd70d (CONDITIONAL_JUMP)  ; LAB_004cd70d
    MOV EBX,dword ptr [ESP + 0x180]     ; 004cd9b6
        ;   Label: LAB_004cd9b6
    CMP EBP,EBX                         ; 004cd9bd
    JLE 0x004cd9e0                      ; 004cd9bf
        ;   XREF to: 004cd9e0 (CONDITIONAL_JUMP)  ; LAB_004cd9e0
    LEA EAX,[EBX*0x4 + 0x0]             ; 004cd9c1
    MOV EDX,dword ptr [ESP + 0x174]     ; 004cd9c8
    ADD EAX,ESI                         ; 004cd9cf
    ADD EAX,0x4                         ; 004cd9d1
        ;   Label: LAB_004cd9d1
    INC EBX                             ; 004cd9d4
    MOV dword ptr [EAX + 0x2164],EDX    ; 004cd9d5
    CMP EBX,EBP                         ; 004cd9db
    JL 0x004cd9d1                       ; 004cd9dd
        ;   XREF to: 004cd9d1 (CONDITIONAL_JUMP)  ; LAB_004cd9d1
    NOP                                 ; 004cd9df
    MOV EBX,0x62a67e                    ; 004cd9e0 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004cd9e0
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004cd9e5
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004cd9ec
    PUSH EDI                            ; 004cd9f2
    MOV dword ptr [ESI + 0x3170],EAX    ; 004cd9f3
    MOV ESI,0x23e                       ; 004cd9f9
    MOV dword ptr [0x0067d20c],EBX      ; 004cd9fe | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 004cda04 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004cda0a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004cda0f
    ADD ESP,0x15c                       ; 004cda12
    POP EBP                             ; 004cda18
    POP EDI                             ; 004cda19
    POP ESI                             ; 004cda1a
    POP EBX                             ; 004cda1b
    RET                                 ; 004cda1c

