; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_FUN_0044c560(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c878f
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_0057c10d
;   TerminatedCString s_Medium_font_object_not_a_0057c11f
;   TerminatedCString s_nocfont_raw_0057c141
;   TerminatedCString s_core_dfont_cpp_0057c14d
;   TerminatedCString s_Tiny_font_object_not_all_0057c15f
;   TerminatedCString s_nocsmall_raw_0057c17f
;   TerminatedCString s_core_dfont_cpp_0057c18c
;   TerminatedCString s_Theme_font_object_not_al_0057c19e
;   TerminatedCString s_menufont_raw_0057c1bf
;   TerminatedCString s_core_dfont_cpp_0057c1cc
;   TerminatedCString s_Debug_font_object_not_al_0057c1de
;   TerminatedCString s_fnte_pfd_RAW_0057c1ff
;   TerminatedCString s_core_dfont_cpp_0057c20c
;   TerminatedCString s_Console_font_object_not_0057c21e
;   TerminatedCString s_fnte_f_RAW_0057c241
;   ... and 26 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_0056497c
;   engine_font.cpp_CBitFont_ctor_FUN_0048fe10
;   engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
;   engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140
;   engine_font.cpp_CBitFont_setFontReady_FUN_004931a0
;   engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460
;   engine_winfont.cpp_CWinFont_ctor_FUN_00557f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c560
        ;   Label: core_dfont.cpp_FUN_0044c560
    PUSH ESI                            ; 0044c561
    PUSH EDI                            ; 0044c562
    PUSH EBP                            ; 0044c563
    PUSH 0x3198                         ; 0044c564
    CALL crt_unknown.c_FUN_0056497c     ; 0044c569
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c56e
    TEST EAX,EAX                        ; 0044c571
    JNZ 0x0044c979                      ; 0044c573
        ;   XREF to: 0044c979 (CONDITIONAL_JUMP)  ; LAB_0044c979
    MOV [0x014b98f8],EAX                ; 0044c579 | DAT_014b98f8
        ;   Label: LAB_0044c579
    TEST EAX,EAX                        ; 0044c57e
    JZ 0x0044c987                       ; 0044c580
        ;   XREF to: 0044c987 (CONDITIONAL_JUMP)  ; LAB_0044c987
    PUSH 0x0                            ; 0044c586
        ;   Label: LAB_0044c586
    PUSH 0x1ae                          ; 0044c588
    PUSH 0x136                          ; 0044c58d
    PUSH 0x57c141                       ; 0044c592 | = "nocfont.raw"
    MOV EBX,dword ptr [0x014b98f8]      ; 0044c597 | DAT_014b98f8
    PUSH EBX                            ; 0044c59d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c59e
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c5a3
    MOV ESI,dword ptr [0x014b98f8]      ; 0044c5a6 | DAT_014b98f8
    PUSH ESI                            ; 0044c5ac
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460 ; 0044c5ad
        ;   XREF to: 00490460 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c5b2
    PUSH 0x7e                           ; 0044c5b5
    PUSH 0x20                           ; 0044c5b7
    PUSH 0x3                            ; 0044c5b9
    MOV EAX,[0x014b98f8]                ; 0044c5bb | DAT_014b98f8
    PUSH EAX                            ; 0044c5c0
    MOV dword ptr [EAX + 0x25e8],0x8    ; 0044c5c1
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c5cb
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c5d0
    PUSH 0xdf                           ; 0044c5d3
    PUSH 0xc0                           ; 0044c5d8
    PUSH 0x1                            ; 0044c5dd
    MOV EDI,dword ptr [0x014b98f8]      ; 0044c5df | DAT_014b98f8
    PUSH EDI                            ; 0044c5e5
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c5e6
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c5eb
    MOV EAX,[0x014b98f8]                ; 0044c5ee | DAT_014b98f8
    PUSH 0x1                            ; 0044c5f3
    MOV dword ptr [EAX + 0x317c],0x2    ; 0044c5f5
    PUSH EAX                            ; 0044c5ff
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c600
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c60a
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0044c60f
    PUSH 0x3198                         ; 0044c612
    CALL crt_unknown.c_FUN_0056497c     ; 0044c617
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c61c
    TEST EAX,EAX                        ; 0044c61f
    JZ 0x0044c62c                       ; 0044c621
        ;   XREF to: 0044c62c (CONDITIONAL_JUMP)  ; LAB_0044c62c
    PUSH EAX                            ; 0044c623
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c624
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c629
    MOV [0x014b98fc],EAX                ; 0044c62c | DAT_014b98fc
        ;   Label: LAB_0044c62c
    TEST EAX,EAX                        ; 0044c631
    JZ 0x0044c9af                       ; 0044c633
        ;   XREF to: 0044c9af (CONDITIONAL_JUMP)  ; LAB_0044c9af
    PUSH 0x0                            ; 0044c639
        ;   Label: LAB_0044c639
    PUSH 0x158                          ; 0044c63b
    PUSH 0xf8                           ; 0044c640
    PUSH 0x57c17f                       ; 0044c645 | = "nocsmall.raw"
    MOV EDX,dword ptr [0x014b98fc]      ; 0044c64a | DAT_014b98fc
    PUSH EDX                            ; 0044c650
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c651
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c656
    MOV ECX,dword ptr [0x014b98fc]      ; 0044c659 | DAT_014b98fc
    PUSH ECX                            ; 0044c65f
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460 ; 0044c660
        ;   XREF to: 00490460 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c665
    PUSH 0x7e                           ; 0044c668
    PUSH 0x20                           ; 0044c66a
    PUSH 0x2                            ; 0044c66c
    MOV EAX,[0x014b98fc]                ; 0044c66e | DAT_014b98fc
    PUSH EAX                            ; 0044c673
    MOV dword ptr [EAX + 0x25e8],0x5    ; 0044c674
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c67e
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c683
    MOV EAX,[0x014b98fc]                ; 0044c686 | DAT_014b98fc
    PUSH 0x1                            ; 0044c68b
    MOV dword ptr [EAX + 0x317c],0x2    ; 0044c68d
    PUSH EAX                            ; 0044c697
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c698
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c6a2
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0044c6a7
    PUSH 0x3198                         ; 0044c6aa
    CALL crt_unknown.c_FUN_0056497c     ; 0044c6af
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c6b4
    TEST EAX,EAX                        ; 0044c6b7
    JZ 0x0044c6c4                       ; 0044c6b9
        ;   XREF to: 0044c6c4 (CONDITIONAL_JUMP)  ; LAB_0044c6c4
    PUSH EAX                            ; 0044c6bb
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c6bc
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c6c1
    MOV [0x014b9900],EAX                ; 0044c6c4 | DAT_014b9900
        ;   Label: LAB_0044c6c4
    TEST EAX,EAX                        ; 0044c6c9
    JZ 0x0044c9d6                       ; 0044c6cb
        ;   XREF to: 0044c9d6 (CONDITIONAL_JUMP)  ; LAB_0044c9d6
    PUSH 0x0                            ; 0044c6d1
        ;   Label: LAB_0044c6d1
    PUSH 0x23f                          ; 0044c6d3
    PUSH 0xfa                           ; 0044c6d8
    PUSH 0x57c1bf                       ; 0044c6dd | = "menufont.raw"
    MOV EDI,dword ptr [0x014b9900]      ; 0044c6e2 | DAT_014b9900
    PUSH EDI                            ; 0044c6e8
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c6e9
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c6ee
    MOV EBP,dword ptr [0x014b9900]      ; 0044c6f1 | DAT_014b9900
    PUSH EBP                            ; 0044c6f7
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460 ; 0044c6f8
        ;   XREF to: 00490460 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c6fd
    PUSH 0x7e                           ; 0044c700
    PUSH 0x20                           ; 0044c702
    PUSH 0x3                            ; 0044c704
    MOV EAX,[0x014b9900]                ; 0044c706 | DAT_014b9900
    PUSH EAX                            ; 0044c70b
    MOV dword ptr [EAX + 0x25e8],0x8    ; 0044c70c
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c716
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c71b
    PUSH 0xdf                           ; 0044c71e
    PUSH 0xc0                           ; 0044c723
    PUSH 0x0                            ; 0044c728
    MOV EAX,[0x014b9900]                ; 0044c72a | DAT_014b9900
    PUSH EAX                            ; 0044c72f
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c730
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c735
    PUSH 0xff                           ; 0044c738
    PUSH 0xe0                           ; 0044c73d
    PUSH 0x1                            ; 0044c742
    MOV EDX,dword ptr [0x014b9900]      ; 0044c744 | DAT_014b9900
    PUSH EDX                            ; 0044c74a
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c74b
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c750
    MOV EAX,[0x014b9900]                ; 0044c753 | DAT_014b9900
    PUSH 0x1                            ; 0044c758
    MOV dword ptr [EAX + 0x317c],0x2    ; 0044c75a
    PUSH EAX                            ; 0044c764
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c765
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c76f
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0044c774
    PUSH 0x3198                         ; 0044c777
    CALL crt_unknown.c_FUN_0056497c     ; 0044c77c
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c781
    TEST EAX,EAX                        ; 0044c784
    JZ 0x0044c791                       ; 0044c786
        ;   XREF to: 0044c791 (CONDITIONAL_JUMP)  ; LAB_0044c791
    PUSH EAX                            ; 0044c788
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c789
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c78e
    MOV [0x014b9904],EAX                ; 0044c791 | DAT_014b9904
        ;   Label: LAB_0044c791
    TEST EAX,EAX                        ; 0044c796
    JZ 0x0044c9fe                       ; 0044c798
        ;   XREF to: 0044c9fe (CONDITIONAL_JUMP)  ; LAB_0044c9fe
    PUSH 0x0                            ; 0044c79e
        ;   Label: LAB_0044c79e
    PUSH 0xec                           ; 0044c7a0
    PUSH 0x94                           ; 0044c7a5
    PUSH 0x57c1ff                       ; 0044c7aa | = "fnte_pfd.RAW"
    MOV ESI,dword ptr [0x014b9904]      ; 0044c7af | DAT_014b9904
    PUSH ESI                            ; 0044c7b5
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c7b6
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c7bb
    MOV EDI,dword ptr [0x014b9904]      ; 0044c7be | DAT_014b9904
    PUSH EDI                            ; 0044c7c4
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460 ; 0044c7c5
        ;   XREF to: 00490460 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c7ca
    PUSH 0x7e                           ; 0044c7cd
    PUSH 0x20                           ; 0044c7cf
    PUSH 0x3                            ; 0044c7d1
    MOV EAX,[0x014b9904]                ; 0044c7d3 | DAT_014b9904
    PUSH EAX                            ; 0044c7d8
    MOV dword ptr [EAX + 0x25e8],0x4    ; 0044c7d9
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c7e3
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c7e8
    MOV EAX,[0x014b9904]                ; 0044c7eb | DAT_014b9904
    PUSH 0x1                            ; 0044c7f0
    MOV dword ptr [EAX + 0x317c],0x1    ; 0044c7f2
    PUSH EAX                            ; 0044c7fc
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c7fd
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c807
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0044c80c
    MOV EAX,[0x014b9904]                ; 0044c80f | DAT_014b9904
    PUSH 0x3198                         ; 0044c814
    MOV [0x01bcd070],EAX                ; 0044c819 | DAT_01bcd070
    CALL crt_unknown.c_FUN_0056497c     ; 0044c81e
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c823
    TEST EAX,EAX                        ; 0044c826
    JZ 0x0044c833                       ; 0044c828
        ;   XREF to: 0044c833 (CONDITIONAL_JUMP)  ; LAB_0044c833
    PUSH EAX                            ; 0044c82a
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c82b
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c830
    MOV [0x014b9908],EAX                ; 0044c833 | DAT_014b9908
        ;   Label: LAB_0044c833
    TEST EAX,EAX                        ; 0044c838
    JZ 0x0044ca26                       ; 0044c83a
        ;   XREF to: 0044ca26 (CONDITIONAL_JUMP)  ; LAB_0044ca26
    PUSH 0xff                           ; 0044c840
        ;   Label: LAB_0044c840
    PUSH 0xec                           ; 0044c845
    PUSH 0x94                           ; 0044c84a
    PUSH 0x57c241                       ; 0044c84f | = "fnte_f.RAW"
    MOV EDX,dword ptr [0x014b9908]      ; 0044c854 | DAT_014b9908
    PUSH EDX                            ; 0044c85a
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c85b
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c860
    PUSH 0x7e                           ; 0044c863
    PUSH 0x20                           ; 0044c865
    PUSH 0x3                            ; 0044c867
    MOV EAX,[0x014b9908]                ; 0044c869 | DAT_014b9908
    PUSH EAX                            ; 0044c86e
    MOV dword ptr [EAX + 0x25e8],0x4    ; 0044c86f
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c879
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c87e
    MOV EAX,[0x014b9908]                ; 0044c881 | DAT_014b9908
    PUSH 0x1                            ; 0044c886
    MOV dword ptr [EAX + 0x317c],0x1    ; 0044c888
    PUSH EAX                            ; 0044c892
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c893
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c89d
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0044c8a2
    MOV EAX,[0x014b9904]                ; 0044c8a5 | DAT_014b9904
    PUSH 0x3198                         ; 0044c8aa
    MOV [0x01bcd070],EAX                ; 0044c8af | DAT_01bcd070
    CALL crt_unknown.c_FUN_0056497c     ; 0044c8b4
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044c8b9
    TEST EAX,EAX                        ; 0044c8bc
    JZ 0x0044c8c9                       ; 0044c8be
        ;   XREF to: 0044c8c9 (CONDITIONAL_JUMP)  ; LAB_0044c8c9
    PUSH EAX                            ; 0044c8c0
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c8c1
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c8c6
    MOV [0x014b990c],EAX                ; 0044c8c9 | DAT_014b990c
        ;   Label: LAB_0044c8c9
    TEST EAX,EAX                        ; 0044c8ce
    JNZ 0x0044c8f5                      ; 0044c8d0
        ;   XREF to: 0044c8f5 (CONDITIONAL_JUMP)  ; LAB_0044c8f5
    MOV ECX,0x57c24c                    ; 0044c8d2 | = "..\\core\\dfont.cpp"
    MOV EBX,0x96                        ; 0044c8d7
    PUSH 0x57c25e                       ; 0044c8dc | = "Micro font object not allocated!"
    MOV dword ptr [0x01cc4800],ECX      ; 0044c8e1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044c8e7 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c8ed
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044c8f2
    PUSH 0x0                            ; 0044c8f5
        ;   Label: LAB_0044c8f5
    PUSH 0xec                           ; 0044c8f7
    PUSH 0x94                           ; 0044c8fc
    PUSH 0x57c27f                       ; 0044c901 | = "micro.raw"
    MOV ESI,dword ptr [0x014b990c]      ; 0044c906 | DAT_014b990c
    PUSH ESI                            ; 0044c90c
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0044c90d
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0044c912
    MOV EDI,dword ptr [0x014b990c]      ; 0044c915 | DAT_014b990c
    PUSH EDI                            ; 0044c91b
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460 ; 0044c91c
        ;   XREF to: 00490460 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c921
    PUSH 0x7e                           ; 0044c924
    PUSH 0x20                           ; 0044c926
    PUSH 0x1                            ; 0044c928
    MOV EAX,[0x014b990c]                ; 0044c92a | DAT_014b990c
    PUSH EAX                            ; 0044c92f
    MOV dword ptr [EAX + 0x25e8],0x4    ; 0044c930
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140 ; 0044c93a
        ;   XREF to: 00493140 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0044c93f
    MOV EAX,[0x014b990c]                ; 0044c942 | DAT_014b990c
    PUSH 0x1                            ; 0044c947
    MOV dword ptr [EAX + 0x317c],0x1    ; 0044c949
    PUSH EAX                            ; 0044c953
    MOV dword ptr [EAX + 0x3180],0x1    ; 0044c954
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004931a0 ; 0044c95e
        ;   XREF to: 004931a0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont * this_ptr, int value)
    MOV EBP,dword ptr [0x01d16810]      ; 0044c963 | DAT_01d16810
    ADD ESP,0x8                         ; 0044c969
    TEST EBP,EBP                        ; 0044c96c
    JNZ 0x0044ca4d                      ; 0044c96e
        ;   XREF to: 0044ca4d (CONDITIONAL_JUMP)  ; LAB_0044ca4d
    POP EBP                             ; 0044c974
    POP EDI                             ; 0044c975
    POP ESI                             ; 0044c976
    POP EBX                             ; 0044c977
    RET                                 ; 0044c978
    PUSH EAX                            ; 0044c979
        ;   Label: LAB_0044c979
    CALL engine_font.cpp_CBitFont_ctor_FUN_0048fe10 ; 0044c97a
        ;   XREF to: 0048fe10 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_0048fe10(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044c97f
    JMP 0x0044c579                      ; 0044c982
        ;   XREF to: 0044c579 (UNCONDITIONAL_JUMP)  ; LAB_0044c579
    MOV EDX,0x57c10d                    ; 0044c987 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044c987
    MOV ECX,0x41                        ; 0044c98c
    PUSH 0x57c11f                       ; 0044c991 | = "Medium font object not allocated!"
    MOV dword ptr [0x01cc4800],EDX      ; 0044c996 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0044c99c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c9a2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044c9a7
    JMP 0x0044c586                      ; 0044c9aa
        ;   XREF to: 0044c586 (UNCONDITIONAL_JUMP)  ; LAB_0044c586
    MOV EBP,0x57c14d                    ; 0044c9af | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044c9af
    MOV EAX,0x51                        ; 0044c9b4
    PUSH 0x57c15f                       ; 0044c9b9 | = "Tiny font object not allocated!"
    MOV dword ptr [0x01cc4800],EBP      ; 0044c9be | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044c9c4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c9c9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044c9ce
    JMP 0x0044c639                      ; 0044c9d1
        ;   XREF to: 0044c639 (UNCONDITIONAL_JUMP)  ; LAB_0044c639
    MOV EBX,0x57c18c                    ; 0044c9d6 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044c9d6
    MOV ESI,0x60                        ; 0044c9db
    PUSH 0x57c19e                       ; 0044c9e0 | = "Theme font object not allocated!"
    MOV dword ptr [0x01cc4800],EBX      ; 0044c9e5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044c9eb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c9f1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044c9f6
    JMP 0x0044c6d1                      ; 0044c9f9
        ;   XREF to: 0044c6d1 (UNCONDITIONAL_JUMP)  ; LAB_0044c6d1
    MOV ECX,0x57c1cc                    ; 0044c9fe | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044c9fe
    MOV EBX,0x71                        ; 0044ca03
    PUSH 0x57c1de                       ; 0044ca08 | = "Debug font object not allocated!"
    MOV dword ptr [0x01cc4800],ECX      ; 0044ca0d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044ca13 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ca19
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ca1e
    JMP 0x0044c79e                      ; 0044ca21
        ;   XREF to: 0044c79e (UNCONDITIONAL_JUMP)  ; LAB_0044c79e
    MOV EBP,0x57c20c                    ; 0044ca26 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044ca26
    MOV EAX,0x84                        ; 0044ca2b
    PUSH 0x57c21e                       ; 0044ca30 | = "Console font object not allocated!"
    MOV dword ptr [0x01cc4800],EBP      ; 0044ca35 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044ca3b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ca40
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ca45
    JMP 0x0044c840                      ; 0044ca48
        ;   XREF to: 0044c840 (UNCONDITIONAL_JUMP)  ; LAB_0044c840
    PUSH 0x13c                          ; 0044ca4d
        ;   Label: LAB_0044ca4d
    CALL crt_unknown.c_FUN_0056497c     ; 0044ca52
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044ca57
    TEST EAX,EAX                        ; 0044ca5a
    JZ 0x0044ca72                       ; 0044ca5c
        ;   XREF to: 0044ca72 (CONDITIONAL_JUMP)  ; LAB_0044ca72
    PUSH 0x2                            ; 0044ca5e
    PUSH 0x2                            ; 0044ca60
    PUSH 0xe                            ; 0044ca62
    PUSH 0x5bdf50                       ; 0044ca64 | DAT_005bdf50
    PUSH EAX                            ; 0044ca69
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_00557f50 ; 0044ca6a
        ;   XREF to: 00557f50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_00557f50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0044ca6f
    MOV [0x014b9910],EAX                ; 0044ca72 | DAT_014b9910
        ;   Label: LAB_0044ca72
    TEST EAX,EAX                        ; 0044ca77
    JNZ 0x0044ca9d                      ; 0044ca79
        ;   XREF to: 0044ca9d (CONDITIONAL_JUMP)  ; LAB_0044ca9d
    MOV EAX,0x57c289                    ; 0044ca7b | = "..\\core\\dfont.cpp"
    MOV EDX,0xa6                        ; 0044ca80
    PUSH 0x57c29b                       ; 0044ca85 | = "initFonts - Can't allocate gMediumOSFont"
    MOV [0x01cc4800],EAX                ; 0044ca8a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044ca8f | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ca95
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ca9a
    MOV EAX,[0x014b98f8]                ; 0044ca9d | DAT_014b98f8
        ;   Label: LAB_0044ca9d
    MOV EDX,dword ptr [0x014b9910]      ; 0044caa2 | DAT_014b9910
    MOV dword ptr [EAX + 0x3190],0x1    ; 0044caa8
    PUSH 0x13c                          ; 0044cab2
    MOV dword ptr [EAX + 0x3194],EDX    ; 0044cab7
    CALL crt_unknown.c_FUN_0056497c     ; 0044cabd
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044cac2
    TEST EAX,EAX                        ; 0044cac5
    JZ 0x0044cadd                       ; 0044cac7
        ;   XREF to: 0044cadd (CONDITIONAL_JUMP)  ; LAB_0044cadd
    PUSH 0x0                            ; 0044cac9
    PUSH 0x0                            ; 0044cacb
    PUSH 0x12                           ; 0044cacd
    PUSH 0x5bdf50                       ; 0044cacf | DAT_005bdf50
    PUSH EAX                            ; 0044cad4
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_00557f50 ; 0044cad5
        ;   XREF to: 00557f50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_00557f50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0044cada
    MOV [0x014b9918],EAX                ; 0044cadd | DAT_014b9918
        ;   Label: LAB_0044cadd
    TEST EAX,EAX                        ; 0044cae2
    JNZ 0x0044cb09                      ; 0044cae4
        ;   XREF to: 0044cb09 (CONDITIONAL_JUMP)  ; LAB_0044cb09
    MOV ECX,0x57c2c4                    ; 0044cae6 | = "..\\core\\dfont.cpp"
    MOV EBX,0xac                        ; 0044caeb
    PUSH 0x57c2d6                       ; 0044caf0 | = "initFonts - Can't allocate gThemeOSFont"
    MOV dword ptr [0x01cc4800],ECX      ; 0044caf5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0044cafb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044cb01
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044cb06
    MOV EAX,[0x014b9900]                ; 0044cb09 | DAT_014b9900
        ;   Label: LAB_0044cb09
    MOV EDX,dword ptr [0x014b9918]      ; 0044cb0e | DAT_014b9918
    MOV dword ptr [EAX + 0x3190],0x1    ; 0044cb14
    PUSH 0x13c                          ; 0044cb1e
    MOV dword ptr [EAX + 0x3194],EDX    ; 0044cb23
    CALL crt_unknown.c_FUN_0056497c     ; 0044cb29
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044cb2e
    TEST EAX,EAX                        ; 0044cb31
    JZ 0x0044cb49                       ; 0044cb33
        ;   XREF to: 0044cb49 (CONDITIONAL_JUMP)  ; LAB_0044cb49
    PUSH 0x0                            ; 0044cb35
    PUSH 0x0                            ; 0044cb37
    PUSH 0xc                            ; 0044cb39
    PUSH 0x5bdf50                       ; 0044cb3b | DAT_005bdf50
    PUSH EAX                            ; 0044cb40
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_00557f50 ; 0044cb41
        ;   XREF to: 00557f50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_00557f50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0044cb46
    MOV [0x014b9914],EAX                ; 0044cb49 | DAT_014b9914
        ;   Label: LAB_0044cb49
    TEST EAX,EAX                        ; 0044cb4e
    JNZ 0x0044cb75                      ; 0044cb50
        ;   XREF to: 0044cb75 (CONDITIONAL_JUMP)  ; LAB_0044cb75
    MOV ESI,0x57c2fe                    ; 0044cb52 | = "..\\core\\dfont.cpp"
    MOV EDI,0xb2                        ; 0044cb57
    PUSH 0x57c310                       ; 0044cb5c | = "initFonts - Can't allocate gTinyOSFont"
    MOV dword ptr [0x01cc4800],ESI      ; 0044cb61 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0044cb67 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044cb6d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044cb72
    MOV EAX,[0x014b98fc]                ; 0044cb75 | DAT_014b98fc
        ;   Label: LAB_0044cb75
    MOV EDX,dword ptr [0x014b9914]      ; 0044cb7a | DAT_014b9914
    MOV dword ptr [EAX + 0x3190],0x1    ; 0044cb80
    PUSH 0x13c                          ; 0044cb8a
    MOV dword ptr [EAX + 0x3194],EDX    ; 0044cb8f
    CALL crt_unknown.c_FUN_0056497c     ; 0044cb95
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044cb9a
    TEST EAX,EAX                        ; 0044cb9d
    JZ 0x0044cbb5                       ; 0044cb9f
        ;   XREF to: 0044cbb5 (CONDITIONAL_JUMP)  ; LAB_0044cbb5
    PUSH 0x0                            ; 0044cba1
    PUSH 0x0                            ; 0044cba3
    PUSH 0xa                            ; 0044cba5
    PUSH 0x5bdf50                       ; 0044cba7 | DAT_005bdf50
    PUSH EAX                            ; 0044cbac
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_00557f50 ; 0044cbad
        ;   XREF to: 00557f50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_00557f50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0044cbb2
    MOV [0x014b991c],EAX                ; 0044cbb5 | DAT_014b991c
        ;   Label: LAB_0044cbb5
    TEST EAX,EAX                        ; 0044cbba
    JNZ 0x0044cbe0                      ; 0044cbbc
        ;   XREF to: 0044cbe0 (CONDITIONAL_JUMP)  ; LAB_0044cbe0
    MOV EBP,0x57c337                    ; 0044cbbe | = "..\\core\\dfont.cpp"
    MOV EAX,0xb8                        ; 0044cbc3
    PUSH 0x57c349                       ; 0044cbc8 | = "initFonts - Can't allocate gDebugOSFont"
    MOV dword ptr [0x01cc4800],EBP      ; 0044cbcd | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044cbd3 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044cbd8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044cbdd
    MOV EAX,[0x014b9904]                ; 0044cbe0 | DAT_014b9904
        ;   Label: LAB_0044cbe0
    MOV EDX,dword ptr [0x014b991c]      ; 0044cbe5 | DAT_014b991c
    MOV dword ptr [EAX + 0x3190],0x1    ; 0044cbeb
    MOV dword ptr [EAX + 0x3194],EDX    ; 0044cbf5
    POP EBP                             ; 0044cbfb
    POP EDI                             ; 0044cbfc
    POP ESI                             ; 0044cbfd
    POP EBX                             ; 0044cbfe
    RET                                 ; 0044cbff

