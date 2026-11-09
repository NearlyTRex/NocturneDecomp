; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0047f4c0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   text_content
; uint             Stack[0x1c]:4   window_flags
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 at 0047f484
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_shape_edittool_cpp_005bd1ad
;   TerminatedCString s_Can_t_open_another_windo_005bd1c3
;   undefined4 DAT_005bd1de
;   undefined4 DAT_005bd1e2
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5faec
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a3650
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   engine_font.cpp_FUN_004b2b30
;   engine_font.cpp_FUN_004b2e40
;   engine_font.cpp_FUN_004b30f0
;   shape_edittool.cpp_FUN_0047cbd0
;   unkafter_minecar.cpp_FUN_004ed020
;   unkafter_minecar.cpp_FUN_004ed150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f4c0
        ;   Label: shape_edittool.cpp_FUN_0047f4c0
    PUSH ESI                            ; 0047f4c1
    PUSH EDI                            ; 0047f4c2
    PUSH EBP                            ; 0047f4c3
    SUB ESP,0x1c                        ; 0047f4c4
    MOV EDI,dword ptr [ESP + 0x44]      ; 0047f4c7
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047f4cb | DAT_01c5b0e0
    JZ 0x0047f92e                       ; 0047f4d2
        ;   XREF to: 0047f92e (CONDITIONAL_JUMP)  ; LAB_0047f92e
    MOV EAX,[0x01c5b0e0]                ; 0047f4d8 | DAT_01c5b0e0
        ;   Label: LAB_0047f4d8
    PUSH 0x6a                           ; 0047f4dd
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047f4df
    PUSH EAX                            ; 0047f4e5
    MOV dword ptr [0x01c5bae0],EDX      ; 0047f4e6 | DAT_01c5bae0
    CALL engine_font.cpp_FUN_004b30f0   ; 0047f4ec
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c5b104]      ; 0047f4f1 | DAT_01c5b104
    ADD ESP,0x8                         ; 0047f4f7
    MOV [0x01c5bae4],EAX                ; 0047f4fa | DAT_01c5bae4
    CMP ESI,0x5                         ; 0047f4ff
    JL 0x0047f526                       ; 0047f502
        ;   XREF to: 0047f526 (CONDITIONAL_JUMP)  ; LAB_0047f526
    MOV EBP,0x5bd1ad                    ; 0047f504 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x867                       ; 0047f509
    PUSH 0x5bd1c3                       ; 0047f50e | = "Can't open another window!"
    MOV dword ptr [0x01d71de0],EBP      ; 0047f513 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0047f519 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047f51e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047f523
    MOV EAX,[0x01c5b104]                ; 0047f526 | DAT_01c5b104
        ;   Label: LAB_0047f526
    SHL EAX,0x3                         ; 0047f52b
    MOV EDX,EAX                         ; 0047f52e
    SHL EAX,0x6                         ; 0047f530
    MOV EBX,0x1c5b108                   ; 0047f533
    SUB EAX,EDX                         ; 0047f538
    ADD EBX,EAX                         ; 0047f53a
    MOV EAX,[0x005fba18]                ; 0047f53c | DAT_005fba18
    MOV EDX,EAX                         ; 0047f541
    SAR EDX,0x1f                        ; 0047f543
    SHL EDX,0x7                         ; 0047f546
    SBB EAX,EDX                         ; 0047f549
    SAR EAX,0x7                         ; 0047f54b
    MOV dword ptr [ESP + 0x8],EAX       ; 0047f54e
    MOV EAX,[0x005fba1c]                ; 0047f552 | DAT_005fba1c
    MOV EDX,EAX                         ; 0047f557
    MOV ESI,0x60                        ; 0047f559
    SAR EDX,0x1f                        ; 0047f55e
    IDIV ESI                            ; 0047f561
    MOV ECX,dword ptr [ESP + 0x34]      ; 0047f563
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047f567
    MOV ESI,dword ptr [ESP + 0x38]      ; 0047f56b
    MOV EDX,dword ptr [0x01c5b104]      ; 0047f56f | DAT_01c5b104
    MOV dword ptr [ESP],EAX             ; 0047f575
    INC EDX                             ; 0047f578
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f579
    MOV dword ptr [0x01c5b104],EDX      ; 0047f57d | DAT_01c5b104
    SUB ECX,EAX                         ; 0047f583
    MOV EAX,dword ptr [ESP]             ; 0047f585
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047f588
    SUB ESI,EAX                         ; 0047f58c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f58e
    MOV dword ptr [ESP + 0x34],ECX      ; 0047f592
    ADD EBP,EAX                         ; 0047f596
    MOV EAX,dword ptr [ESP]             ; 0047f598
    MOV dword ptr [ESP + 0x38],ESI      ; 0047f59b
    ADD EDX,EAX                         ; 0047f59f
    MOV dword ptr [ESP + 0x3c],EBP      ; 0047f5a1
    MOV dword ptr [ESP + 0x40],EDX      ; 0047f5a5
    TEST ECX,ECX                        ; 0047f5a9
    JL 0x0047f956                       ; 0047f5ab
        ;   XREF to: 0047f956 (CONDITIONAL_JUMP)  ; LAB_0047f956
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047f5b1
        ;   Label: LAB_0047f5b1
    MOV EBP,dword ptr [0x005fba18]      ; 0047f5b5 | DAT_005fba18
    CMP EAX,EBP                         ; 0047f5bb
    JLE 0x0047f5c3                      ; 0047f5bd
        ;   XREF to: 0047f5c3 (CONDITIONAL_JUMP)  ; LAB_0047f5c3
    MOV dword ptr [ESP + 0x3c],EBP      ; 0047f5bf
    XOR EAX,EAX                         ; 0047f5c3
        ;   Label: LAB_0047f5c3
    MOV byte ptr [EBX + 0x48],0x0       ; 0047f5c5
    MOV dword ptr [ESP + 0x4],EAX       ; 0047f5c9
    TEST EDI,EDI                        ; 0047f5cd
    JZ 0x0047f6b4                       ; 0047f5cf
        ;   XREF to: 0047f6b4 (CONDITIONAL_JUMP)  ; LAB_0047f6b4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0047f5d5
    MOV ECX,dword ptr [ESP + 0x34]      ; 0047f5d9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f5dd
    SUB EDX,ECX                         ; 0047f5e1
    ADD EAX,EAX                         ; 0047f5e3
    SUB EDX,EAX                         ; 0047f5e5
    PUSH EDX                            ; 0047f5e7
    PUSH 0xc8                           ; 0047f5e8
    PUSH 0x14                           ; 0047f5ed
    PUSH 0x1c5a140                      ; 0047f5ef
    PUSH EDI                            ; 0047f5f4
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047f5f5 | DAT_01c5b0e0
    PUSH ESI                            ; 0047f5fb
    LEA EBP,[EBX + 0x48]                ; 0047f5fc
    CALL engine_font.cpp_FUN_004b2e40   ; 0047f5ff
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    ADD ESP,0x18                        ; 0047f604
    XOR EDI,EDI                         ; 0047f607
    MOV dword ptr [ESP + 0xc],EAX       ; 0047f609
    TEST EAX,EAX                        ; 0047f60d
    JLE 0x0047f640                      ; 0047f60f
        ;   XREF to: 0047f640 (CONDITIONAL_JUMP)  ; LAB_0047f640
    MOV ESI,0x1c5a140                   ; 0047f611
    PUSH ESI                            ; 0047f616
        ;   Label: LAB_0047f616
    PUSH 0x5bd1de                       ; 0047f617 | DAT_005bd1de
    PUSH EBP                            ; 0047f61c
    INC EDI                             ; 0047f61d
    CALL crt_unknown.c_FUN_005a28c0     ; 0047f61e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 0047f623
    ADD EBP,EAX                         ; 0047f626
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047f628
    ADD ESI,0xc8                        ; 0047f62c
    CMP EDI,EAX                         ; 0047f632
    JL 0x0047f616                       ; 0047f634
        ;   XREF to: 0047f616 (CONDITIONAL_JUMP)  ; LAB_0047f616
    LEA EAX,[EAX]                       ; 0047f636
    LEA EDX,[EDX]                       ; 0047f63c
    CMP dword ptr [ESP + 0xc],0x0       ; 0047f640
        ;   Label: LAB_0047f640
    JLE 0x0047f6b4                      ; 0047f645
        ;   XREF to: 0047f6b4 (CONDITIONAL_JUMP)  ; LAB_0047f6b4
    LEA EAX,[EBX + 0x48]                ; 0047f647
    PUSH EAX                            ; 0047f64a
    MOV ECX,dword ptr [0x01c5b0e0]      ; 0047f64b | DAT_01c5b0e0
    DEC EBP                             ; 0047f651
    PUSH ECX                            ; 0047f652
    MOV byte ptr [EBP],0x0              ; 0047f653
    CALL engine_font.cpp_FUN_004b2b30   ; 0047f657
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047f65c
    MOV EDX,dword ptr [0x01c5bae4]      ; 0047f65f | DAT_01c5bae4
    PUSH 0x5bd1e2                       ; 0047f665 | DAT_005bd1e2
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047f66a | DAT_01c5b0e0
    ADD EDX,EAX                         ; 0047f670
    PUSH ESI                            ; 0047f672
    MOV dword ptr [ESP + 0xc],EDX       ; 0047f673
    CALL engine_font.cpp_FUN_004b2b30   ; 0047f677
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047f67c
    MOV EDI,dword ptr [0x01c5bae4]      ; 0047f67f | DAT_01c5bae4
    MOV EBP,dword ptr [ESP + 0x4]       ; 0047f685
    ADD EAX,EDI                         ; 0047f689
    CMP EAX,EBP                         ; 0047f68b
    JLE 0x0047f693                      ; 0047f68d
        ;   XREF to: 0047f693 (CONDITIONAL_JUMP)  ; LAB_0047f693
    MOV dword ptr [ESP + 0x4],EAX       ; 0047f68f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047f693
        ;   Label: LAB_0047f693
    MOV EDX,EAX                         ; 0047f697
    SAR EDX,0x1f                        ; 0047f699
    SUB EAX,EDX                         ; 0047f69c
    SAR EAX,0x1                         ; 0047f69e
    MOV ECX,dword ptr [ESP + 0x40]      ; 0047f6a0
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047f6a4
    ADD ECX,EAX                         ; 0047f6a8
    SUB EDX,EAX                         ; 0047f6aa
    MOV dword ptr [ESP + 0x40],ECX      ; 0047f6ac
    MOV dword ptr [ESP + 0x38],EDX      ; 0047f6b0
    CMP dword ptr [ESP + 0x38],0x0      ; 0047f6b4
        ;   Label: LAB_0047f6b4
    JL 0x0047f961                       ; 0047f6b9
        ;   XREF to: 0047f961 (CONDITIONAL_JUMP)  ; LAB_0047f961
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f6bf
        ;   Label: LAB_0047f6bf
    MOV EBP,dword ptr [0x005fba1c]      ; 0047f6c3 | DAT_005fba1c
    CMP EAX,EBP                         ; 0047f6c9
    JLE 0x0047f6d1                      ; 0047f6cb
        ;   XREF to: 0047f6d1 (CONDITIONAL_JUMP)  ; LAB_0047f6d1
    MOV dword ptr [ESP + 0x40],EBP      ; 0047f6cd
    CMP dword ptr [0x01c5baec],0x0      ; 0047f6d1 | DAT_01c5baec
        ;   Label: LAB_0047f6d1
    JZ 0x0047f6df                       ; 0047f6d8
        ;   XREF to: 0047f6df (CONDITIONAL_JUMP)  ; LAB_0047f6df
    OR byte ptr [ESP + 0x48],0x1        ; 0047f6da
    MOV DL,byte ptr [ESP + 0x48]        ; 0047f6df
        ;   Label: LAB_0047f6df
    MOV dword ptr [EBX + 0x1d8],0x0     ; 0047f6e3
    TEST DL,0x1                         ; 0047f6ed
    JNZ 0x0047f800                      ; 0047f6f0
        ;   XREF to: 0047f800 (CONDITIONAL_JUMP)  ; LAB_0047f800
    CMP dword ptr [0x01c5b104],0x1      ; 0047f6f6 | DAT_01c5b104
    JNZ 0x0047f70c                      ; 0047f6fd
        ;   XREF to: 0047f70c (CONDITIONAL_JUMP)  ; LAB_0047f70c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0047f6ff
    PUSH ECX                            ; 0047f703
    CALL shape_edittool.cpp_FUN_0047cbd0 ; 0047f704
        ;   XREF to: 0047cbd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047cbd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047f709
    CMP dword ptr [0x01c5faec],0x0      ; 0047f70c | DAT_01c5faec
        ;   Label: LAB_0047f70c
    JZ 0x0047f800                       ; 0047f713
        ;   XREF to: 0047f800 (CONDITIONAL_JUMP)  ; LAB_0047f800
    MOV EAX,[0x005fba18]                ; 0047f719 | DAT_005fba18
    MOV dword ptr [EBX + 0x1e4],EAX     ; 0047f71e
    MOV EDI,dword ptr [0x005fba20]      ; 0047f724 | DAT_005fba20
    MOV EDX,dword ptr [EBX + 0x1e4]     ; 0047f72a
    IMUL EDX,EDI                        ; 0047f730
    MOV EAX,[0x005fba1c]                ; 0047f733 | DAT_005fba1c
    MOV dword ptr [EBX + 0x1e8],EAX     ; 0047f738
    MOV EAX,EDX                         ; 0047f73e
    SAR EDX,0x1f                        ; 0047f740
    SHL EDX,0x3                         ; 0047f743
    SBB EAX,EDX                         ; 0047f746
    SAR EAX,0x3                         ; 0047f748
    MOV dword ptr [ESP + 0x10],EAX      ; 0047f74b
    MOV EBP,dword ptr [ESP + 0x10]      ; 0047f74f
    MOV EAX,dword ptr [EBX + 0x1e8]     ; 0047f753
    IMUL EAX,EBP                        ; 0047f759
    MOV dword ptr [EBX + 0x1dc],0x0     ; 0047f75c
    PUSH EAX                            ; 0047f766
    MOV dword ptr [EBX + 0x1e0],0x0     ; 0047f767
    CALL crt_unknown.c_FUN_005a3650     ; 0047f771
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0047f776
    MOV dword ptr [EBX + 0x1d8],EAX     ; 0047f779
    TEST EAX,EAX                        ; 0047f77f
    JZ 0x0047f800                       ; 0047f781
        ;   XREF to: 0047f800 (CONDITIONAL_JUMP)  ; LAB_0047f800
    MOV dword ptr [ESP + 0x14],EAX      ; 0047f787
    MOV EDX,dword ptr [EBX + 0x1e8]     ; 0047f78b
    XOR EBP,EBP                         ; 0047f791
    TEST EDX,EDX                        ; 0047f793
    JLE 0x0047f800                      ; 0047f795
        ;   XREF to: 0047f800 (CONDITIONAL_JUMP)  ; LAB_0047f800
    MOV ECX,dword ptr [0x005fba20]      ; 0047f797 | DAT_005fba20
        ;   Label: LAB_0047f797
    MOV EDX,dword ptr [EBX + 0x1dc]     ; 0047f79d
    IMUL EDX,ECX                        ; 0047f7a3
    MOV EAX,EDX                         ; 0047f7a6
    SAR EDX,0x1f                        ; 0047f7a8
    SHL EDX,0x3                         ; 0047f7ab
    SBB EAX,EDX                         ; 0047f7ae
    SAR EAX,0x3                         ; 0047f7b0
    MOV ESI,dword ptr [EBX + 0x1e0]     ; 0047f7b3
    ADD ESI,EBP                         ; 0047f7b9
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047f7bb
    MOV ESI,dword ptr [ESI*0x4 + 0x1c5faec] ; 0047f7bf | DAT_01c5faec
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047f7c6
    ADD ESI,EAX                         ; 0047f7ca
    PUSH EDI                            ; 0047f7cc
    MOV EAX,ECX                         ; 0047f7cd
    SHR ECX,0x2                         ; 0047f7cf
    MOVSD.REP ES:EDI,ESI                ; 0047f7d2
    MOV CL,AL                           ; 0047f7d4
    AND CL,0x3                          ; 0047f7d6
    MOVSB.REP ES:EDI,ESI                ; 0047f7d9
    POP EDI                             ; 0047f7db
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047f7dc
    LEA ESI,[EDI + EAX*0x1]             ; 0047f7e0
    INC EBP                             ; 0047f7e3
    MOV EDI,dword ptr [EBX + 0x1e8]     ; 0047f7e4
    MOV dword ptr [ESP + 0x14],ESI      ; 0047f7ea
    CMP EBP,EDI                         ; 0047f7ee
    JL 0x0047f797                       ; 0047f7f0
        ;   XREF to: 0047f797 (CONDITIONAL_JUMP)  ; LAB_0047f797
    LEA EAX,[EAX]                       ; 0047f7f2
    LEA EDX,[EDX]                       ; 0047f7f8
    MOV EAX,EAX                         ; 0047f7fe
    MOV EAX,[0x01c6b5a8]                ; 0047f800 | DAT_01c6b5a8
        ;   Label: LAB_0047f800
    MOV dword ptr [EBX + 0x10],EAX      ; 0047f805
    MOV EAX,[0x01c6b5ac]                ; 0047f808 | DAT_01c6b5ac
    MOV dword ptr [EBX + 0x14],EAX      ; 0047f80d
    MOV EAX,[0x01c6b5b0]                ; 0047f810 | DAT_01c6b5b0
    MOV dword ptr [EBX + 0x18],EAX      ; 0047f815
    MOV EAX,[0x01c6b5b4]                ; 0047f818 | DAT_01c6b5b4
    MOV dword ptr [EBX + 0x1c],EAX      ; 0047f81d
    MOV EAX,[0x01c6b598]                ; 0047f820 | DAT_01c6b598
    MOV dword ptr [EBX + 0x30],EAX      ; 0047f825
    MOV EAX,[0x01c6b59c]                ; 0047f828 | DAT_01c6b59c
    MOV dword ptr [EBX + 0x34],EAX      ; 0047f82d
    MOV EAX,[0x01c6b5a0]                ; 0047f830 | DAT_01c6b5a0
    MOV dword ptr [EBX + 0x38],EAX      ; 0047f835
    MOV EAX,[0x01c6b5a4]                ; 0047f838 | DAT_01c6b5a4
    MOV dword ptr [EBX + 0x3c],EAX      ; 0047f83d
    MOV EAX,[0x01c6b5b8]                ; 0047f840 | DAT_01c6b5b8
    MOV dword ptr [EBX + 0x40],EAX      ; 0047f845
    MOV EAX,[0x01c6b5bc]                ; 0047f848 | DAT_01c6b5bc
    MOV dword ptr [EBX + 0x44],EAX      ; 0047f84d
    LEA EAX,[EBX + 0x2c]                ; 0047f850
    PUSH EAX                            ; 0047f853
    LEA EAX,[EBX + 0x28]                ; 0047f854
    PUSH EAX                            ; 0047f857
    LEA EAX,[EBX + 0x24]                ; 0047f858
    PUSH EAX                            ; 0047f85b
    LEA EAX,[EBX + 0x20]                ; 0047f85c
    PUSH EAX                            ; 0047f85f
    CALL unkafter_minecar.cpp_FUN_004ed150 ; 0047f860
        ;   XREF to: 004ed150 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_004ed150()
    ADD ESP,0x10                        ; 0047f865
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f868
    MOV dword ptr [ESP + 0x18],EAX      ; 0047f86c
    FILD dword ptr [ESP + 0x18]         ; 0047f870
    SUB ESP,0x4                         ; 0047f874
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f877
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047f87b
    FSTP float ptr [ESP]                ; 0047f87f
    FILD dword ptr [ESP + 0x1c]         ; 0047f882
    SUB ESP,0x4                         ; 0047f886
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f889
    MOV dword ptr [ESP + 0x20],EAX      ; 0047f88d
    FSTP float ptr [ESP]                ; 0047f891
    FILD dword ptr [ESP + 0x20]         ; 0047f894
    SUB ESP,0x4                         ; 0047f898
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f89b
    MOV dword ptr [ESP + 0x24],EAX      ; 0047f89f
    FSTP float ptr [ESP]                ; 0047f8a3
    FILD dword ptr [ESP + 0x24]         ; 0047f8a6
    SUB ESP,0x4                         ; 0047f8aa
    FSTP float ptr [ESP]                ; 0047f8ad
    CALL unkafter_minecar.cpp_FUN_004ed020 ; 0047f8b0
        ;   XREF to: 004ed020 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_004ed020()
    ADD ESP,0x10                        ; 0047f8b5
    MOV EAX,dword ptr [ESP + 0x34]      ; 0047f8b8
    MOV dword ptr [EBX],EAX             ; 0047f8bc
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047f8be
    MOV dword ptr [EBX + 0x4],EAX       ; 0047f8c2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047f8c5
    MOV dword ptr [EBX + 0x8],EAX       ; 0047f8c9
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f8cc
    MOV EBP,dword ptr [ESP + 0x34]      ; 0047f8d0
    MOV dword ptr [EBX + 0xc],EAX       ; 0047f8d4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f8d7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047f8db
    ADD EBP,EAX                         ; 0047f8df
    MOV EAX,dword ptr [ESP]             ; 0047f8e1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0047f8e4
    ADD EDX,EAX                         ; 0047f8e8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f8ea
    MOV EBX,dword ptr [ESP + 0x40]      ; 0047f8ee
    SUB ECX,EAX                         ; 0047f8f2
    MOV EAX,dword ptr [ESP]             ; 0047f8f4
    MOV dword ptr [ESP + 0x38],EDX      ; 0047f8f7
    SUB EBX,EAX                         ; 0047f8fb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047f8fd
    MOV dword ptr [ESP + 0x40],EBX      ; 0047f901
    LEA ESI,[EDX + EAX*0x1]             ; 0047f905
    LEA EAX,[EBX + -0x1]                ; 0047f908
    PUSH EAX                            ; 0047f90b
    MOV dword ptr [ESP + 0x40],ECX      ; 0047f90c
    LEA EAX,[ECX + -0x1]                ; 0047f910
    PUSH EAX                            ; 0047f913
    PUSH ESI                            ; 0047f914
    PUSH EBP                            ; 0047f915
    MOV dword ptr [ESP + 0x44],EBP      ; 0047f916
    MOV dword ptr [ESP + 0x48],ESI      ; 0047f91a
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 0047f91e
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 0047f923
    ADD ESP,0x1c                        ; 0047f926
    POP EBP                             ; 0047f929
    POP EDI                             ; 0047f92a
    POP ESI                             ; 0047f92b
    POP EBX                             ; 0047f92c
    RET                                 ; 0047f92d
    MOV ECX,0x5bcd25                    ; 0047f92e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047f92e
    MOV EBX,0xa7                        ; 0047f933
    PUSH 0x5bcd3b                       ; 0047f938 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047f93d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047f943 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047f949
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047f94e
    JMP 0x0047f4d8                      ; 0047f951
        ;   XREF to: 0047f4d8 (UNCONDITIONAL_JUMP)  ; LAB_0047f4d8
    XOR ESI,ESI                         ; 0047f956
        ;   Label: LAB_0047f956
    MOV dword ptr [ESP + 0x34],ESI      ; 0047f958
    JMP 0x0047f5b1                      ; 0047f95c
        ;   XREF to: 0047f5b1 (UNCONDITIONAL_JUMP)  ; LAB_0047f5b1
    XOR EDI,EDI                         ; 0047f961
        ;   Label: LAB_0047f961
    MOV dword ptr [ESP + 0x38],EDI      ; 0047f963
    JMP 0x0047f6bf                      ; 0047f967
        ;   XREF to: 0047f6bf (UNCONDITIONAL_JUMP)  ; LAB_0047f6bf

