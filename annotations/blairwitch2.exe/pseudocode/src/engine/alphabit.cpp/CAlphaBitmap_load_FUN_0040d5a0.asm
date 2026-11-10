; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap *this_ptr,char *filename,int width,int height)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[19]:
;   core_fldnotes.cpp_FUN_004a2170 at 004a21d2
;   core_fldnotes.cpp_FUN_004a2290 at 004a230a
;   core_fldnotes.cpp_FUN_004a24f0 at 004a25cf
;   core_fldnotes.cpp_FUN_004a38e0 at 004a38fb
;   core_fldnotes.cpp_FUN_004a5700 at 004a5c77
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be0d9
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be491
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b6125
;   core_game.cpp_FUN_004bdc1e at 004bdc51
;   core_inv.cpp_loadAssets_FUN_004da990 at 004da9d7
;   ... and 9 more
;
; Referenced Globals:
;   TerminatedCString s_s_raw_005cb020
;   undefined4 DAT_005cb027
;   undefined4 DAT_005cb02a
;   TerminatedCString s_engine_alphabit_cpp_005cb02e
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005cb045
;   TerminatedCString s_s_act_005cb068
;   undefined4 DAT_005cb06f
;   undefined4 DAT_005cb072
;   TerminatedCString s_engine_alphabit_cpp_005cb076
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005cb08d
;   TerminatedCString s_s_opa_005cb0b0
;   undefined4 DAT_005cb0b7
;   undefined4 DAT_005cb0ba
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_alphabit.cpp_FUN_0040d460
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d5a0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
    PUSH ESI                            ; 0040d5a1
    PUSH EDI                            ; 0040d5a2
    PUSH EBP                            ; 0040d5a3
    SUB ESP,0x114                       ; 0040d5a4
    MOV EBP,dword ptr [ESP + 0x128]     ; 0040d5aa
    MOV EDX,dword ptr [ESP + 0x134]     ; 0040d5b1
    PUSH EDX                            ; 0040d5b8
    MOV ECX,dword ptr [ESP + 0x134]     ; 0040d5b9
    PUSH ECX                            ; 0040d5c0
    PUSH EBP                            ; 0040d5c1
    CALL engine_alphabit.cpp_FUN_0040d460 ; 0040d5c2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d460()
    ADD ESP,0xc                         ; 0040d5c7
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0040d5ca
    PUSH EBX                            ; 0040d5d1
    PUSH 0x5cb020                       ; 0040d5d2 | = "%s.raw"
    LEA EAX,[ESP + 0x8]                 ; 0040d5d7
    PUSH EAX                            ; 0040d5db
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0040d5dc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d5e1
    PUSH 0x5cb027                       ; 0040d5e4 | DAT_005cb027
    LEA EAX,[ESP + 0x4]                 ; 0040d5e9
    PUSH EAX                            ; 0040d5ed
    PUSH 0x5cb02a                       ; 0040d5ee | DAT_005cb02a
    CALL engine_dosio.cpp_FUN_00460c70  ; 0040d5f3
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d5f8
    MOV dword ptr [ESP + 0x110],EAX     ; 0040d5fb
    TEST EAX,EAX                        ; 0040d602
    JZ 0x0040d807                       ; 0040d604
        ;   XREF to: 0040d807 (CONDITIONAL_JUMP)  ; LAB_0040d807
    MOV EAX,dword ptr [ESP + 0x110]     ; 0040d60a
        ;   Label: LAB_0040d60a
    PUSH EAX                            ; 0040d611
    MOV EDX,dword ptr [ESP + 0x138]     ; 0040d612
    PUSH EDX                            ; 0040d619
    MOV ECX,dword ptr [ESP + 0x138]     ; 0040d61a
    PUSH ECX                            ; 0040d621
    MOV EBX,dword ptr [EBP]             ; 0040d622
    PUSH EBX                            ; 0040d625
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0040d626
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0040d62b
    MOV ESI,dword ptr [ESP + 0x110]     ; 0040d62e
    PUSH ESI                            ; 0040d635
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0040d636
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0040d63b
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0040d63e
    PUSH EDI                            ; 0040d645
    PUSH 0x5cb068                       ; 0040d646 | = "%s.act"
    LEA EAX,[ESP + 0x8]                 ; 0040d64b
    PUSH EAX                            ; 0040d64f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0040d650
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d655
    PUSH 0x5cb06f                       ; 0040d658 | DAT_005cb06f
    LEA EAX,[ESP + 0x4]                 ; 0040d65d
    PUSH EAX                            ; 0040d661
    PUSH 0x5cb072                       ; 0040d662 | DAT_005cb072
    CALL engine_dosio.cpp_FUN_00460c70  ; 0040d667
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d66c
    MOV dword ptr [ESP + 0x110],EAX     ; 0040d66f
    TEST EAX,EAX                        ; 0040d676
    JZ 0x0040d832                       ; 0040d678
        ;   XREF to: 0040d832 (CONDITIONAL_JUMP)  ; LAB_0040d832
    XOR ECX,ECX                         ; 0040d67e
        ;   Label: LAB_0040d67e
    MOV dword ptr [ESP + 0x10c],ECX     ; 0040d680
    MOV EBX,dword ptr [ESP + 0x110]     ; 0040d687
        ;   Label: LAB_0040d687
    PUSH EBX                            ; 0040d68e
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040d68f
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040d694
    MOV ESI,dword ptr [ESP + 0x110]     ; 0040d697
    PUSH ESI                            ; 0040d69e
    MOV EBX,EAX                         ; 0040d69f
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040d6a1
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040d6a6
    MOV EDI,dword ptr [ESP + 0x110]     ; 0040d6a9
    PUSH EDI                            ; 0040d6b0
    MOV ESI,EAX                         ; 0040d6b1
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040d6b3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    MOV EDI,EAX                         ; 0040d6b8
    MOV EAX,[0x006141c0]                ; 0040d6ba | DAT_006141c0
    ADD ESP,0x4                         ; 0040d6bf
    CMP EAX,0x10                        ; 0040d6c2
    JNZ 0x0040d85c                      ; 0040d6c5
        ;   XREF to: 0040d85c (CONDITIONAL_JUMP)  ; LAB_0040d85c
    MOV ECX,dword ptr [0x01c35818]      ; 0040d6cb | DAT_01c35818
    MOV EAX,EBX                         ; 0040d6d1
    XOR EDX,EDX                         ; 0040d6d3
    DIV ECX                             ; 0040d6d5
    MOV dword ptr [ESP + 0x100],EBX     ; 0040d6d7
    MOV EBX,dword ptr [0x01c35824]      ; 0040d6de | DAT_01c35824
    MOV dword ptr [ESP + 0x100],EAX     ; 0040d6e4
    XOR EDX,EDX                         ; 0040d6eb
    MOV EAX,ESI                         ; 0040d6ed
    DIV EBX                             ; 0040d6ef
    MOV dword ptr [ESP + 0x104],ESI     ; 0040d6f1
    MOV ESI,dword ptr [0x01c35830]      ; 0040d6f8 | DAT_01c35830
    MOV dword ptr [ESP + 0x104],EAX     ; 0040d6fe
    XOR EDX,EDX                         ; 0040d705
    MOV EAX,EDI                         ; 0040d707
    DIV ESI                             ; 0040d709
    MOV dword ptr [ESP + 0x108],EDI     ; 0040d70b
    MOV CL,byte ptr [0x01c35814]        ; 0040d712 | DAT_01c35814
    MOV dword ptr [ESP + 0x108],EAX     ; 0040d718
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040d71f
    MOV EBX,dword ptr [ESP + 0x104]     ; 0040d726
    SHL EAX,CL                          ; 0040d72d
    MOV CL,byte ptr [0x01c35820]        ; 0040d72f | DAT_01c35820
    SHL EBX,CL                          ; 0040d735
    MOV CL,byte ptr [0x01c3582c]        ; 0040d737 | DAT_01c3582c
    OR EBX,EAX                          ; 0040d73d
    MOV EAX,dword ptr [ESP + 0x108]     ; 0040d73f
    SHL EAX,CL                          ; 0040d746
    OR EAX,EBX                          ; 0040d748
    XOR ECX,ECX                         ; 0040d74a
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0040d74c
    MOV CX,AX                           ; 0040d753
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d756
    ADD EAX,EDI                         ; 0040d759
    MOV dword ptr [EAX],ECX             ; 0040d75b
        ;   Label: LAB_0040d75b
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0040d75d
    ADD EAX,0x4                         ; 0040d764
    MOV dword ptr [ESP + 0x10c],EAX     ; 0040d767
    CMP EAX,0x400                       ; 0040d76e
    JNZ 0x0040d687                      ; 0040d773
        ;   XREF to: 0040d687 (CONDITIONAL_JUMP)  ; LAB_0040d687
    MOV ECX,dword ptr [ESP + 0x110]     ; 0040d779
    PUSH ECX                            ; 0040d780
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0040d781
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0040d786
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0040d789
    PUSH EBX                            ; 0040d790
    PUSH 0x5cb0b0                       ; 0040d791 | = "%s.opa"
    LEA EAX,[ESP + 0x8]                 ; 0040d796
    PUSH EAX                            ; 0040d79a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0040d79b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d7a0
    PUSH 0x5cb0b7                       ; 0040d7a3 | DAT_005cb0b7
    LEA EAX,[ESP + 0x4]                 ; 0040d7a8
    PUSH EAX                            ; 0040d7ac
    PUSH 0x5cb0ba                       ; 0040d7ad | DAT_005cb0ba
    CALL engine_dosio.cpp_FUN_00460c70  ; 0040d7b2
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 0040d7b7
    ADD ESP,0xc                         ; 0040d7b9
    TEST EAX,EAX                        ; 0040d7bc
    JNZ 0x0040d8ad                      ; 0040d7be
        ;   XREF to: 0040d8ad (CONDITIONAL_JUMP)  ; LAB_0040d8ad
    MOV ESI,dword ptr [ESP + 0x130]     ; 0040d7c4
    IMUL ESI,dword ptr [ESP + 0x134]    ; 0040d7cb
    TEST ESI,ESI                        ; 0040d7d3
    JLE 0x0040d7fc                      ; 0040d7d5
        ;   XREF to: 0040d7fc (CONDITIONAL_JUMP)  ; LAB_0040d7fc
    MOV ECX,dword ptr [EBP]             ; 0040d7d7
        ;   Label: LAB_0040d7d7
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0040d7da
    AND ECX,0xff                        ; 0040d7dd
    MOV EBX,dword ptr [EBP + 0x8]       ; 0040d7e3
    CMP dword ptr [EBX + ECX*0x4],0x0   ; 0040d7e6
    JNZ 0x0040d8de                      ; 0040d7ea
        ;   XREF to: 0040d8de (CONDITIONAL_JUMP)  ; LAB_0040d8de
    MOV ECX,dword ptr [EBP + 0x4]       ; 0040d7f0
    MOV byte ptr [ECX + EAX*0x1],0x0    ; 0040d7f3
    INC EAX                             ; 0040d7f7
    CMP EAX,ESI                         ; 0040d7f8
    JL 0x0040d7d7                       ; 0040d7fa
        ;   XREF to: 0040d7d7 (CONDITIONAL_JUMP)  ; LAB_0040d7d7
    ADD ESP,0x114                       ; 0040d7fc
        ;   Label: LAB_0040d7fc
    POP EBP                             ; 0040d802
    POP EDI                             ; 0040d803
    POP ESI                             ; 0040d804
    POP EBX                             ; 0040d805
    RET                                 ; 0040d806
    MOV EAX,ESP                         ; 0040d807
        ;   Label: LAB_0040d807
    PUSH EAX                            ; 0040d809
    MOV ESI,0x5cb02e                    ; 0040d80a | = "..\\engine\\alphabit.cpp"
    MOV EDI,0xe1                        ; 0040d80f
    PUSH 0x5cb045                       ; 0040d814 | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d046a0],ESI      ; 0040d819 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0040d81f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040d825
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040d82a
    JMP 0x0040d60a                      ; 0040d82d
        ;   XREF to: 0040d60a (UNCONDITIONAL_JUMP)  ; LAB_0040d60a
    MOV dword ptr [0x01d046a0],0x5cb076 ; 0040d832 | DAT_01d046a0 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d832
    MOV EAX,ESP                         ; 0040d83c
    PUSH EAX                            ; 0040d83e
    MOV EDX,0xe7                        ; 0040d83f
    PUSH 0x5cb08d                       ; 0040d844 | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d046a4],EDX      ; 0040d849 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040d84f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040d854
    JMP 0x0040d67e                      ; 0040d857
        ;   XREF to: 0040d67e (UNCONDITIONAL_JUMP)  ; LAB_0040d67e
    CMP EAX,0x20                        ; 0040d85c
        ;   Label: LAB_0040d85c
    JNZ 0x0040d890                      ; 0040d85f
        ;   XREF to: 0040d890 (CONDITIONAL_JUMP)  ; LAB_0040d890
    MOV CL,byte ptr [0x01c35814]        ; 0040d861 | DAT_01c35814
    SHL EBX,CL                          ; 0040d867
    MOV CL,byte ptr [0x01c35820]        ; 0040d869 | DAT_01c35820
    SHL ESI,CL                          ; 0040d86f
    MOV CL,byte ptr [0x01c3582c]        ; 0040d871 | DAT_01c3582c
    SHL EDI,CL                          ; 0040d877
    OR EBX,ESI                          ; 0040d879
    MOV ECX,EDI                         ; 0040d87b
    OR ECX,EBX                          ; 0040d87d
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0040d87f
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d886
    ADD EAX,EBX                         ; 0040d889
    JMP 0x0040d75b                      ; 0040d88b
        ;   XREF to: 0040d75b (UNCONDITIONAL_JUMP)  ; LAB_0040d75b
    MOV ECX,EBX                         ; 0040d890
        ;   Label: LAB_0040d890
    SHL ESI,0x8                         ; 0040d892
    SHL ECX,0x10                        ; 0040d895
    OR ECX,ESI                          ; 0040d898
    OR ECX,EDI                          ; 0040d89a
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0040d89c
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d8a3
    ADD EAX,EBX                         ; 0040d8a6
    JMP 0x0040d75b                      ; 0040d8a8
        ;   XREF to: 0040d75b (UNCONDITIONAL_JUMP)  ; LAB_0040d75b
    PUSH EAX                            ; 0040d8ad
        ;   Label: LAB_0040d8ad
    MOV EAX,dword ptr [ESP + 0x138]     ; 0040d8ae
    PUSH EAX                            ; 0040d8b5
    MOV EDX,dword ptr [ESP + 0x138]     ; 0040d8b6
    PUSH EDX                            ; 0040d8bd
    MOV ECX,dword ptr [EBP + 0x4]       ; 0040d8be
    PUSH ECX                            ; 0040d8c1
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0040d8c2
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0040d8c7
    PUSH ESI                            ; 0040d8ca
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0040d8cb
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0040d8d0
    ADD ESP,0x114                       ; 0040d8d3
    POP EBP                             ; 0040d8d9
    POP EDI                             ; 0040d8da
    POP ESI                             ; 0040d8db
    POP EBX                             ; 0040d8dc
    RET                                 ; 0040d8dd
    MOV ECX,dword ptr [EBP + 0x4]       ; 0040d8de
        ;   Label: LAB_0040d8de
    MOV byte ptr [ECX + EAX*0x1],0xff   ; 0040d8e1
    INC EAX                             ; 0040d8e5
    CMP EAX,ESI                         ; 0040d8e6
    JL 0x0040d7d7                       ; 0040d8e8
        ;   XREF to: 0040d7d7 (CONDITIONAL_JUMP)  ; LAB_0040d7d7
    ADD ESP,0x114                       ; 0040d8ee
    POP EBP                             ; 0040d8f4
    POP EDI                             ; 0040d8f5
    POP ESI                             ; 0040d8f6
    POP EBX                             ; 0040d8f7
    RET                                 ; 0040d8f8

