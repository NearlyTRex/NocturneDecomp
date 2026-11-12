; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004ac6b0(int param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf896
;
; Referenced Globals:
;   undefined4 DAT_005fe370
;   undefined4 DAT_005fe390
;   undefined4 DAT_005fe394
;   undefined4 DAT_005fe3a8
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_01d0e36c
;   SNotesMap[10] SNotesMap_ARRAY_01d0e370
;   undefined4 SNotesMap_ARRAY_01d0e370[1].entry
;   undefined4 DAT_01d19ba8
;   undefined4 CAlphaBitmap_01d19cc4.width
;   undefined4 CAlphaBitmap_01d19cc4.height
;   ... and 7 more
;
; Called Functions:
;   core_flashlit.cpp_FUN_004a80d0
;   core_flashlit.cpp_FUN_004a8180
;   core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0
;   core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac6b0
        ;   Label: core_fldnotes.cpp_FUN_004ac6b0
    PUSH ESI                            ; 004ac6b1
    PUSH EBP                            ; 004ac6b2
    MOV EDX,dword ptr [0x01d0e36c]      ; 004ac6b3 | DAT_01d0e36c
    XOR EBX,EBX                         ; 004ac6b9
    TEST EDX,EDX                        ; 004ac6bb
    JLE 0x004ac6e0                      ; 004ac6bd
        ;   XREF to: 004ac6e0 (CONDITIONAL_JUMP)  ; LAB_004ac6e0
    MOV ESI,0x1d0e370                   ; 004ac6bf
    PUSH ESI                            ; 004ac6c4 | SNotesMap_ARRAY_01d0e370 | SNotesMap_ARRAY_01d0e370[1].entry
        ;   Label: LAB_004ac6c4
    CALL core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0 ; 004ac6c5
        ;   XREF to: 004aa0b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0(SNotesMap * this_ptr)
    INC EBX                             ; 004ac6ca
    MOV ECX,dword ptr [0x01d0e36c]      ; 004ac6cb | DAT_01d0e36c
    ADD ESP,0x4                         ; 004ac6d1
    ADD ESI,0x126c                      ; 004ac6d4
    CMP EBX,ECX                         ; 004ac6da
    JL 0x004ac6c4                       ; 004ac6dc
        ;   XREF to: 004ac6c4 (CONDITIONAL_JUMP)  ; LAB_004ac6c4
    MOV EAX,EAX                         ; 004ac6de
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ac6e0
        ;   Label: LAB_004ac6e0
    CMP dword ptr [EAX + 0x40],0x0      ; 004ac6e4
    JZ 0x004ac700                       ; 004ac6e8
        ;   XREF to: 004ac700 (CONDITIONAL_JUMP)  ; LAB_004ac700
    MOV EAX,[0x005fe9dc]                ; 004ac6ea | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x24c],0x0     ; 004ac6ef | g_CGameInstance.letterbox_mode
    JZ 0x004ac7be                       ; 004ac6f6
        ;   XREF to: 004ac7be (CONDITIONAL_JUMP)  ; LAB_004ac7be
    POP EBP                             ; 004ac6fc
        ;   Label: LAB_004ac6fc
    POP ESI                             ; 004ac6fd
    POP EBX                             ; 004ac6fe
    RET                                 ; 004ac6ff
    PUSH 0x1d19bac                      ; 004ac700
        ;   Label: LAB_004ac700
    MOV EBX,0x1d19bc0                   ; 004ac705
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac70a
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac70f
    LEA ESI,[EBX + 0x78]                ; 004ac712
    PUSH EBX                            ; 004ac715
        ;   Label: LAB_004ac715
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac716
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ac71b
    ADD ESP,0x4                         ; 004ac71e
    CMP EBX,ESI                         ; 004ac721
    JNZ 0x004ac715                      ; 004ac723
        ;   XREF to: 004ac715 (CONDITIONAL_JUMP)  ; LAB_004ac715
    PUSH 0x1d19c38                      ; 004ac725
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac72a
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac72f
    PUSH 0x1d19c4c                      ; 004ac732
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac737
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac73c
    PUSH 0x1d19c60                      ; 004ac73f
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac744
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac749
    PUSH 0x1d19c74                      ; 004ac74c
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac751
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac756
    PUSH 0x1d19c9c                      ; 004ac759
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac75e
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac763
    PUSH 0x1d19cb0                      ; 004ac766
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac76b
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac770
    PUSH 0x1d19cc4                      ; 004ac773
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac778
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ac77d
    PUSH 0x1d19cd8                      ; 004ac780
    XOR EBX,ESI                         ; 004ac785
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ac787
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    MOV EAX,0x1                         ; 004ac78c
    MOV ECX,0xffffffff                  ; 004ac791
    ADD ESP,0x4                         ; 004ac796
    MOV dword ptr [0x01d1a058],EBX      ; 004ac799 | DAT_01d1a058
    XOR EDX,EDX                         ; 004ac79f
    MOV [0x005fe370],EAX                ; 004ac7a1 | DAT_005fe370
    MOV dword ptr [0x01d19f78],EDX      ; 004ac7a6 | DAT_01d19f78
    XOR DH,DH                           ; 004ac7ac
    MOV dword ptr [0x005fe3a8],ECX      ; 004ac7ae | DAT_005fe3a8
    MOV byte ptr [0x01d19f90],DH        ; 004ac7b4 | DAT_01d19f90
    POP EBP                             ; 004ac7ba
    POP ESI                             ; 004ac7bb
    POP EBX                             ; 004ac7bc
    RET                                 ; 004ac7bd
    PUSH 0x200                          ; 004ac7be
        ;   Label: LAB_004ac7be
    MOV EAX,[0x00600284]                ; 004ac7c3 | DAT_00600284
    PUSH EAX                            ; 004ac7c8 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ac7c9 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004ac7cb
    MOV AH,byte ptr [0x01c5fae4]        ; 004ac7ce | DAT_01c5fae4
    ADD ESP,0x8                         ; 004ac7d4
    TEST AH,0x1                         ; 004ac7d7
    JZ 0x004ac6fc                       ; 004ac7da
        ;   XREF to: 004ac6fc (CONDITIONAL_JUMP)  ; LAB_004ac6fc
    PUSH EDI                            ; 004ac7e0
    MOV EDI,dword ptr [0x01c5fae0]      ; 004ac7e1 | DAT_01c5fae0
    PUSH EDI                            ; 004ac7e7
    MOV EBP,dword ptr [0x01c5fadc]      ; 004ac7e8 | DAT_01c5fadc
    PUSH EBP                            ; 004ac7ee
    CALL core_flashlit.cpp_FUN_004a80d0 ; 004ac7ef
        ;   XREF to: 004a80d0 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a80d0()
    ADD ESP,0x8                         ; 004ac7f4
    TEST EAX,EAX                        ; 004ac7f7
    JL 0x004ac81a                       ; 004ac7f9
        ;   XREF to: 004ac81a (CONDITIONAL_JUMP)  ; LAB_004ac81a
    LEA EBX,[EAX*0x8 + 0x0]             ; 004ac7fb
    ADD EBX,EAX                         ; 004ac802
    SHL EBX,0x2                         ; 004ac804
    ADD EBX,EAX                         ; 004ac807
    SHL EBX,0x2                         ; 004ac809
    MOV EAX,EBX                         ; 004ac80c
    MOV EAX,dword ptr [EAX + EBX*0x4 + 0x1d0d354] ; 004ac80e
    MOV [0x01d19ba8],EAX                ; 004ac815 | DAT_01d19ba8
    MOV EAX,[0x01c5fae0]                ; 004ac81a | DAT_01c5fae0
        ;   Label: LAB_004ac81a
    PUSH EAX                            ; 004ac81f
    MOV EDX,dword ptr [0x01c5fadc]      ; 004ac820 | DAT_01c5fadc
    PUSH EDX                            ; 004ac826
    CALL core_flashlit.cpp_FUN_004a8180 ; 004ac827
        ;   XREF to: 004a8180 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a8180()
    MOV ECX,dword ptr [0x01d19ba8]      ; 004ac82c | DAT_01d19ba8
    MOV EBX,dword ptr [0x01c5fadc]      ; 004ac832 | DAT_01c5fadc
    MOV ESI,dword ptr [0x01c5fae0]      ; 004ac838 | DAT_01c5fae0
    MOV EDI,dword ptr [0x005fe390]      ; 004ac83e | DAT_005fe390
    ADD ECX,EAX                         ; 004ac844
    ADD ESP,0x8                         ; 004ac846
    MOV dword ptr [0x01d19ba8],ECX      ; 004ac849 | DAT_01d19ba8
    CMP EBX,EDI                         ; 004ac84f
    JGE 0x004ac8ba                      ; 004ac851
        ;   XREF to: 004ac8ba (CONDITIONAL_JUMP)  ; LAB_004ac8ba
    MOV EBX,dword ptr [0x01c5fae0]      ; 004ac853 | DAT_01c5fae0
        ;   Label: LAB_004ac853
    MOV EAX,[0x01d19ba8]                ; 004ac859 | DAT_01d19ba8
    PUSH EBX                            ; 004ac85e
    LEA EBX,[EAX*0x4 + 0x0]             ; 004ac85f
    ADD EBX,EAX                         ; 004ac866
    SHL EBX,0x4                         ; 004ac868
    MOV ESI,dword ptr [0x01c5fadc]      ; 004ac86b | DAT_01c5fadc
    ADD EBX,EAX                         ; 004ac871
    MOV EAX,[0x01d19d6c]                ; 004ac873 | g_STextViewInstance.pages
    SHL EBX,0x2                         ; 004ac878
    PUSH ESI                            ; 004ac87b
    ADD EAX,EBX                         ; 004ac87c
    PUSH EAX                            ; 004ac87e
    CALL core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50 ; 004ac87f
        ;   XREF to: 004a8d50 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a8d50(STextPage * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004ac884
    TEST EAX,EAX                        ; 004ac887
    JZ 0x004ac8ae                       ; 004ac889
        ;   XREF to: 004ac8ae (CONDITIONAL_JUMP)  ; LAB_004ac8ae
    MOV EBX,dword ptr [0x01c5fae0]      ; 004ac88b | DAT_01c5fae0
    MOV EBP,dword ptr [EAX + 0x4]       ; 004ac891
    MOV EDX,dword ptr [0x01c5fadc]      ; 004ac894 | DAT_01c5fadc
    SUB EBX,EBP                         ; 004ac89a
    MOV EDI,dword ptr [EAX]             ; 004ac89c
    PUSH EBX                            ; 004ac89e
    SUB EDX,EDI                         ; 004ac89f
    PUSH EDX                            ; 004ac8a1
    PUSH 0x1                            ; 004ac8a2
    MOV ESI,dword ptr [EAX + 0x14]      ; 004ac8a4
    PUSH EAX                            ; 004ac8a7
    CALL dword ptr [ESI + 0x8]          ; 004ac8a8
    ADD ESP,0x10                        ; 004ac8ab
    AND byte ptr [0x01c5fae4],0xfe      ; 004ac8ae | DAT_01c5fae4
        ;   Label: LAB_004ac8ae
    POP EDI                             ; 004ac8b5
    POP EBP                             ; 004ac8b6
    POP ESI                             ; 004ac8b7
    POP EBX                             ; 004ac8b8
    RET                                 ; 004ac8b9
    MOV EBP,dword ptr [0x005fe394]      ; 004ac8ba | DAT_005fe394
        ;   Label: LAB_004ac8ba
    CMP ESI,EBP                         ; 004ac8c0
    JL 0x004ac853                       ; 004ac8c2
        ;   XREF to: 004ac853 (CONDITIONAL_JUMP)  ; LAB_004ac853
    MOV EDX,dword ptr [0x01d19cd0]      ; 004ac8c4 | CAlphaBitmap_01d19cc4.width
    LEA EAX,[EDI + EDX*0x1]             ; 004ac8ca
    CMP EBX,EAX                         ; 004ac8cd
    JGE 0x004ac853                      ; 004ac8cf
        ;   XREF to: 004ac853 (CONDITIONAL_JUMP)  ; LAB_004ac853
    MOV ECX,dword ptr [0x01d19cd4]      ; 004ac8d1 | CAlphaBitmap_01d19cc4.height
    LEA EAX,[ECX + EBP*0x1]             ; 004ac8d7
    CMP ESI,EAX                         ; 004ac8da
    JGE 0x004ac853                      ; 004ac8dc
        ;   XREF to: 004ac853 (CONDITIONAL_JUMP)  ; LAB_004ac853
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ac8e2
    MOV dword ptr [EAX + 0x40],0x0      ; 004ac8e6
    JMP 0x004ac853                      ; 004ac8ed
        ;   XREF to: 004ac853 (UNCONDITIONAL_JUMP)  ; LAB_004ac853

