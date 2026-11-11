; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_STextView_handleTag_FUN_004bb6f0(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004bb2f0 at 004bb417
;
; Referenced Globals:
;   undefined4 DAT_005dfa0c
;   undefined4 DAT_005dfa0f
;   undefined4 DAT_005dfa12
;   undefined4 DAT_005dfa15
;   TerminatedCString s_image_005dfa19
;   TerminatedCString s_s_d_d_n_005dfa1f
;   TerminatedCString s_Error_parsing_image_tag_005dfa2a
;   TerminatedCString s_core_fldnotes_cpp_005dfa50
;   TerminatedCString s_Out_of_memory_005dfa65
;   TerminatedCString s_twanachar_005dfa73
;   TerminatedCString s_s_n_005dfa7d
;   TerminatedCString s_Error_parsing_twanachar_005dfa83
;   TerminatedCString s_core_fldnotes_cpp_005dfaa9
;   TerminatedCString s_Out_of_memory_005dfabe
;   TerminatedCString s_twanaentry_005dfacc
;   ... and 6 more
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60
;   core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90
;   core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0
;   core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0
;   core_fldnotes.cpp_STextView_newLine_FUN_004bb630
;   core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_FUN_005c0f32
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c__strnicmp_FUN_005c1210
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb6f0
        ;   Label: core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0
    PUSH ESI                            ; 004bb6f1
    PUSH EDI                            ; 004bb6f2
    PUSH EBP                            ; 004bb6f3
    SUB ESP,0x210                       ; 004bb6f4
    MOV EBX,dword ptr [ESP + 0x224]     ; 004bb6fa
    MOV ESI,dword ptr [ESP + 0x228]     ; 004bb701
    PUSH 0x5dfa0c                       ; 004bb708 | DAT_005dfa0c
    PUSH ESI                            ; 004bb70d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bb70e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bb713
    TEST EAX,EAX                        ; 004bb716
    JNZ 0x004bb743                      ; 004bb718
        ;   XREF to: 004bb743 (CONDITIONAL_JUMP)  ; LAB_004bb743
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004bb71a
    CMP ECX,dword ptr [EBX + 0x14]      ; 004bb71d
    JNZ 0x004bb72a                      ; 004bb720
        ;   XREF to: 004bb72a (CONDITIONAL_JUMP)  ; LAB_004bb72a
    MOV ESI,dword ptr [EBX + 0x20]      ; 004bb722
    CMP ESI,dword ptr [EBX + 0x18]      ; 004bb725
    JZ 0x004bb733                       ; 004bb728
        ;   XREF to: 004bb733 (CONDITIONAL_JUMP)  ; LAB_004bb733
    PUSH EBX                            ; 004bb72a
        ;   Label: LAB_004bb72a
    CALL core_fldnotes.cpp_STextView_newLine_FUN_004bb630 ; 004bb72b
        ;   XREF to: 004bb630 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_newLine_FUN_004bb630(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bb730
    MOV EAX,0x1                         ; 004bb733
        ;   Label: LAB_004bb733
    ADD ESP,0x210                       ; 004bb738
        ;   Label: LAB_004bb738
    POP EBP                             ; 004bb73e
    POP EDI                             ; 004bb73f
    POP ESI                             ; 004bb740
    POP EBX                             ; 004bb741
    RET                                 ; 004bb742
    PUSH 0x5dfa0f                       ; 004bb743 | DAT_005dfa0f
        ;   Label: LAB_004bb743
    PUSH ESI                            ; 004bb748
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bb749
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bb74e
    TEST EAX,EAX                        ; 004bb751
    JZ 0x004bb77e                       ; 004bb753
        ;   XREF to: 004bb77e (CONDITIONAL_JUMP)  ; LAB_004bb77e
    PUSH 0x5dfa12                       ; 004bb755 | DAT_005dfa12
    PUSH ESI                            ; 004bb75a
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bb75b
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bb760
    TEST EAX,EAX                        ; 004bb763
    JNZ 0x004bb797                      ; 004bb765
        ;   XREF to: 004bb797 (CONDITIONAL_JUMP)  ; LAB_004bb797
    MOV EAX,0x1                         ; 004bb767
    MOV dword ptr [EBX + 0x34],0x1      ; 004bb76c
    ADD ESP,0x210                       ; 004bb773
    POP EBP                             ; 004bb779
    POP EDI                             ; 004bb77a
    POP ESI                             ; 004bb77b
    POP EBX                             ; 004bb77c
    RET                                 ; 004bb77d
    PUSH EBX                            ; 004bb77e
        ;   Label: LAB_004bb77e
    CALL core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0 ; 004bb77f
        ;   XREF to: 004bb6c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0(STextView * this_ptr)
    MOV EAX,0x1                         ; 004bb784
    ADD ESP,0x4                         ; 004bb789
    ADD ESP,0x210                       ; 004bb78c
    POP EBP                             ; 004bb792
    POP EDI                             ; 004bb793
    POP ESI                             ; 004bb794
    POP EBX                             ; 004bb795
    RET                                 ; 004bb796
    PUSH 0x5dfa15                       ; 004bb797 | DAT_005dfa15
        ;   Label: LAB_004bb797
    PUSH ESI                            ; 004bb79c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bb79d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bb7a2
    TEST EAX,EAX                        ; 004bb7a5
    JNZ 0x004bb7bc                      ; 004bb7a7
        ;   XREF to: 004bb7bc (CONDITIONAL_JUMP)  ; LAB_004bb7bc
    MOV dword ptr [EBX + 0x34],EAX      ; 004bb7a9
    MOV EAX,0x1                         ; 004bb7ac
    ADD ESP,0x210                       ; 004bb7b1
    POP EBP                             ; 004bb7b7
    POP EDI                             ; 004bb7b8
    POP ESI                             ; 004bb7b9
    POP EBX                             ; 004bb7ba
    RET                                 ; 004bb7bb
    PUSH 0x5                            ; 004bb7bc
        ;   Label: LAB_004bb7bc
    PUSH 0x5dfa19                       ; 004bb7be | = "image"
    PUSH ESI                            ; 004bb7c3
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 004bb7c4
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004bb7c9
    TEST EAX,EAX                        ; 004bb7cc
    JNZ 0x004bb8eb                      ; 004bb7ce
        ;   XREF to: 004bb8eb (CONDITIONAL_JUMP)  ; LAB_004bb8eb
    LEA EAX,[ESP + 0x208]               ; 004bb7d4
    PUSH EAX                            ; 004bb7db
    LEA EAX,[ESP + 0x208]               ; 004bb7dc
    PUSH EAX                            ; 004bb7e3
    LEA EAX,[ESP + 0x208]               ; 004bb7e4
    PUSH EAX                            ; 004bb7eb
    LEA EAX,[ESP + 0x10c]               ; 004bb7ec
    PUSH EAX                            ; 004bb7f3
    PUSH 0x5dfa1f                       ; 004bb7f4 | = "%s %d %d%n"
    LEA EAX,[ESI + 0x5]                 ; 004bb7f9
    MOV EBP,0xffffffff                  ; 004bb7fc
    PUSH EAX                            ; 004bb801
    MOV dword ptr [ESP + 0x220],EBP     ; 004bb802
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004bb809
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 004bb80e
    CMP dword ptr [ESP + 0x208],0x3     ; 004bb811
    JL 0x004bb8cb                       ; 004bb819
        ;   XREF to: 004bb8cb (CONDITIONAL_JUMP)  ; LAB_004bb8cb
    MOV EDX,dword ptr [ESP + 0x204]     ; 004bb81f
    PUSH EDX                            ; 004bb826
    MOV ECX,dword ptr [ESP + 0x204]     ; 004bb827
    PUSH ECX                            ; 004bb82e
    PUSH EBX                            ; 004bb82f
    CALL core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0 ; 004bb830
        ;   XREF to: 004bbad0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0(STextView * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004bb835
    TEST EAX,EAX                        ; 004bb838
    JZ 0x004bb738                       ; 004bb83a
        ;   XREF to: 004bb738 (CONDITIONAL_JUMP)  ; LAB_004bb738
    PUSH 0x2c                           ; 004bb840
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004bb842
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bb847
    TEST EAX,EAX                        ; 004bb84a
    JZ 0x004bb86f                       ; 004bb84c
        ;   XREF to: 004bb86f (CONDITIONAL_JUMP)  ; LAB_004bb86f
    MOV ESI,dword ptr [ESP + 0x204]     ; 004bb84e
    PUSH ESI                            ; 004bb855
    MOV EDI,dword ptr [ESP + 0x204]     ; 004bb856
    PUSH EDI                            ; 004bb85d
    LEA ESI,[ESP + 0x108]               ; 004bb85e
    PUSH ESI                            ; 004bb865
    PUSH EAX                            ; 004bb866
    CALL core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40 ; 004bb867
        ;   XREF to: 004baa40 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40(SPageResourceBitmap * this_ptr, char * param_2, int param_3, int param_4)
    ADD ESP,0x10                        ; 004bb86c
    MOV ESI,EAX                         ; 004bb86f
        ;   Label: LAB_004bb86f
    TEST EAX,EAX                        ; 004bb871
    JNZ 0x004bb897                      ; 004bb873
        ;   XREF to: 004bb897 (CONDITIONAL_JUMP)  ; LAB_004bb897
    MOV EBP,0x5dfa50                    ; 004bb875 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x60a                       ; 004bb87a
    PUSH 0x5dfa65                       ; 004bb87f | = "Out of memory"
    MOV dword ptr [0x01d1d400],EBP      ; 004bb884 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bb88a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bb88f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bb894
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bb897
        ;   Label: LAB_004bb897
    MOV dword ptr [ESI],EAX             ; 004bb89a
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bb89c
    MOV dword ptr [ESI + 0x4],EAX       ; 004bb89f
    MOV EAX,dword ptr [ESP + 0x200]     ; 004bb8a2
    MOV EDX,dword ptr [EBX + 0x14]      ; 004bb8a9
    PUSH ESI                            ; 004bb8ac
    ADD EDX,EAX                         ; 004bb8ad
    PUSH EBX                            ; 004bb8af
    MOV dword ptr [EBX + 0x14],EDX      ; 004bb8b0
    CALL core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0 ; 004bb8b3
        ;   XREF to: 004bb5f0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0(STextView * this_ptr, undefined4 param_2)
    MOV EAX,0x1                         ; 004bb8b8
    ADD ESP,0x8                         ; 004bb8bd
    ADD ESP,0x210                       ; 004bb8c0
    POP EBP                             ; 004bb8c6
    POP EDI                             ; 004bb8c7
    POP ESI                             ; 004bb8c8
    POP EBX                             ; 004bb8c9
    RET                                 ; 004bb8ca
    PUSH ESI                            ; 004bb8cb
        ;   Label: LAB_004bb8cb
    PUSH 0x5dfa2a                       ; 004bb8cc | = "Error parsing 'image' tag parms: '%s'"
    PUSH 0x1cc4270                      ; 004bb8d1 | DAT_01cc4270
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004bb8d6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bb8db
    MOV EAX,EBP                         ; 004bb8de
    ADD ESP,0x210                       ; 004bb8e0
    POP EBP                             ; 004bb8e6
    POP EDI                             ; 004bb8e7
    POP ESI                             ; 004bb8e8
    POP EBX                             ; 004bb8e9
    RET                                 ; 004bb8ea
    PUSH 0x9                            ; 004bb8eb
        ;   Label: LAB_004bb8eb
    PUSH 0x5dfa73                       ; 004bb8ed | = "twanachar"
    PUSH ESI                            ; 004bb8f2
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 004bb8f3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004bb8f8
    TEST EAX,EAX                        ; 004bb8fb
    JNZ 0x004bb9fd                      ; 004bb8fd
        ;   XREF to: 004bb9fd (CONDITIONAL_JUMP)  ; LAB_004bb9fd
    LEA EAX,[ESP + 0x20c]               ; 004bb903
    PUSH EAX                            ; 004bb90a
    LEA EAX,[ESP + 0x4]                 ; 004bb90b
    PUSH EAX                            ; 004bb90f
    PUSH 0x5dfa7d                       ; 004bb910 | = " %s%n"
    LEA EAX,[ESI + 0x9]                 ; 004bb915
    MOV ECX,0xffffffff                  ; 004bb918
    PUSH EAX                            ; 004bb91d
    MOV dword ptr [ESP + 0x21c],ECX     ; 004bb91e
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004bb925
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 004bb92a
    CMP dword ptr [ESP + 0x20c],0x3     ; 004bb92d
    JL 0x004bb9c2                       ; 004bb935
        ;   XREF to: 004bb9c2 (CONDITIONAL_JUMP)  ; LAB_004bb9c2
    PUSH 0x4c                           ; 004bb93b
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004bb93d
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bb942
    TEST EAX,EAX                        ; 004bb945
    JZ 0x004bb955                       ; 004bb947
        ;   XREF to: 004bb955 (CONDITIONAL_JUMP)  ; LAB_004bb955
    MOV ESI,ESP                         ; 004bb949
    PUSH ESI                            ; 004bb94b
    PUSH EAX                            ; 004bb94c
    CALL core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60 ; 004bb94d
        ;   XREF to: 004bab60 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60(SPageResourceTwanaCharacter * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bb952
    MOV ESI,EAX                         ; 004bb955
        ;   Label: LAB_004bb955
    TEST EAX,EAX                        ; 004bb957
    JNZ 0x004bb97d                      ; 004bb959
        ;   XREF to: 004bb97d (CONDITIONAL_JUMP)  ; LAB_004bb97d
    MOV EBP,0x5dfaa9                    ; 004bb95b | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x620                       ; 004bb960
    PUSH 0x5dfabe                       ; 004bb965 | = "Out of memory"
    MOV dword ptr [0x01d1d400],EBP      ; 004bb96a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bb970 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bb975
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bb97a
    MOV EDX,dword ptr [ESI + 0xc]       ; 004bb97d
        ;   Label: LAB_004bb97d
    PUSH EDX                            ; 004bb980
    MOV ECX,dword ptr [ESI + 0x8]       ; 004bb981
    PUSH ECX                            ; 004bb984
    PUSH EBX                            ; 004bb985
    CALL core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0 ; 004bb986
        ;   XREF to: 004bbad0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0(STextView * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004bb98b
    TEST EAX,EAX                        ; 004bb98e
    JZ 0x004bb9e5                       ; 004bb990
        ;   XREF to: 004bb9e5 (CONDITIONAL_JUMP)  ; LAB_004bb9e5
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bb992
    MOV dword ptr [ESI],EAX             ; 004bb995
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bb997
    MOV dword ptr [ESI + 0x4],EAX       ; 004bb99a
    MOV EAX,dword ptr [ESI + 0x8]       ; 004bb99d
    MOV EDI,dword ptr [EBX + 0x14]      ; 004bb9a0
    PUSH ESI                            ; 004bb9a3
    ADD EDI,EAX                         ; 004bb9a4
    PUSH EBX                            ; 004bb9a6
    MOV dword ptr [EBX + 0x14],EDI      ; 004bb9a7
    CALL core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0 ; 004bb9aa
        ;   XREF to: 004bb5f0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0(STextView * this_ptr, undefined4 param_2)
    MOV EAX,0x1                         ; 004bb9af
    ADD ESP,0x8                         ; 004bb9b4
    ADD ESP,0x210                       ; 004bb9b7
    POP EBP                             ; 004bb9bd
    POP EDI                             ; 004bb9be
    POP ESI                             ; 004bb9bf
    POP EBX                             ; 004bb9c0
    RET                                 ; 004bb9c1
    PUSH ESI                            ; 004bb9c2
        ;   Label: LAB_004bb9c2
    PUSH 0x5dfa83                       ; 004bb9c3 | = "Error parsing 'twanachar' parms: '%s'"
    PUSH 0x1cc4270                      ; 004bb9c8 | DAT_01cc4270
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004bb9cd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 004bb9d2
    ADD ESP,0xc                         ; 004bb9d7
    ADD ESP,0x210                       ; 004bb9da
    POP EBP                             ; 004bb9e0
    POP EDI                             ; 004bb9e1
    POP ESI                             ; 004bb9e2
    POP EBX                             ; 004bb9e3
    RET                                 ; 004bb9e4
    PUSH 0x2                            ; 004bb9e5
        ;   Label: LAB_004bb9e5
    MOV EAX,dword ptr [ESI + 0x14]      ; 004bb9e7
    PUSH ESI                            ; 004bb9ea
    CALL dword ptr [EAX]                ; 004bb9eb
    ADD ESP,0x8                         ; 004bb9ed
    XOR EAX,EAX                         ; 004bb9f0
    ADD ESP,0x210                       ; 004bb9f2
    POP EBP                             ; 004bb9f8
    POP EDI                             ; 004bb9f9
    POP ESI                             ; 004bb9fa
    POP EBX                             ; 004bb9fb
    RET                                 ; 004bb9fc
    PUSH 0x5dfacc                       ; 004bb9fd | = "twanaentry"
        ;   Label: LAB_004bb9fd
    PUSH ESI                            ; 004bba02
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bba03
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bba08
    TEST EAX,EAX                        ; 004bba0b
    JNZ 0x004bba9f                      ; 004bba0d
        ;   XREF to: 004bba9f (CONDITIONAL_JUMP)  ; LAB_004bba9f
    PUSH 0x118                          ; 004bba13
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004bba18
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bba1d
    TEST EAX,EAX                        ; 004bba20
    JZ 0x004bba2d                       ; 004bba22
        ;   XREF to: 004bba2d (CONDITIONAL_JUMP)  ; LAB_004bba2d
    PUSH EAX                            ; 004bba24
    CALL core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90 ; 004bba25
        ;   XREF to: 004bac90 (UNCONDITIONAL_CALL)  ; SPageResourceTwanaEntry * core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90(SPageResourceTwanaEntry * this_ptr)
    ADD ESP,0x4                         ; 004bba2a
    MOV ESI,EAX                         ; 004bba2d
        ;   Label: LAB_004bba2d
    TEST EAX,EAX                        ; 004bba2f
    JNZ 0x004bba56                      ; 004bba31
        ;   XREF to: 004bba56 (CONDITIONAL_JUMP)  ; LAB_004bba56
    MOV EDX,0x5dfad7                    ; 004bba33 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x638                       ; 004bba38
    PUSH 0x5dfaec                       ; 004bba3d | = "Out of memory"
    MOV dword ptr [0x01d1d400],EDX      ; 004bba42 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bba48 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bba4e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bba53
    MOV EDI,dword ptr [ESI + 0xc]       ; 004bba56
        ;   Label: LAB_004bba56
    PUSH EDI                            ; 004bba59
    MOV EBP,dword ptr [ESI + 0x8]       ; 004bba5a
    PUSH EBP                            ; 004bba5d
    PUSH EBX                            ; 004bba5e
    CALL core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0 ; 004bba5f
        ;   XREF to: 004bbad0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0(STextView * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004bba64
    TEST EAX,EAX                        ; 004bba67
    JZ 0x004bb9e5                       ; 004bba69
        ;   XREF to: 004bb9e5 (CONDITIONAL_JUMP)  ; LAB_004bb9e5
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bba6f
    MOV dword ptr [ESI],EAX             ; 004bba72
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bba74
    MOV dword ptr [ESI + 0x4],EAX       ; 004bba77
    MOV EAX,dword ptr [ESI + 0x8]       ; 004bba7a
    MOV EDX,dword ptr [EBX + 0x14]      ; 004bba7d
    PUSH ESI                            ; 004bba80
    ADD EDX,EAX                         ; 004bba81
    PUSH EBX                            ; 004bba83
    MOV dword ptr [EBX + 0x14],EDX      ; 004bba84
    CALL core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0 ; 004bba87
        ;   XREF to: 004bb5f0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0(STextView * this_ptr, undefined4 param_2)
    MOV EAX,0x1                         ; 004bba8c
    ADD ESP,0x8                         ; 004bba91
    ADD ESP,0x210                       ; 004bba94
    POP EBP                             ; 004bba9a
    POP EDI                             ; 004bba9b
    POP ESI                             ; 004bba9c
    POP EBX                             ; 004bba9d
    RET                                 ; 004bba9e
    PUSH ESI                            ; 004bba9f
        ;   Label: LAB_004bba9f
    PUSH 0x5dfafa                       ; 004bbaa0 | = "Ignoring unknown markup tag: %s"
    PUSH 0x1cc4270                      ; 004bbaa5 | DAT_01cc4270
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004bbaaa
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 004bbaaf
    ADD ESP,0xc                         ; 004bbab4
    ADD ESP,0x210                       ; 004bbab7
    POP EBP                             ; 004bbabd
    POP EDI                             ; 004bbabe
    POP ESI                             ; 004bbabf
    POP EBX                             ; 004bbac0
    RET                                 ; 004bbac1

