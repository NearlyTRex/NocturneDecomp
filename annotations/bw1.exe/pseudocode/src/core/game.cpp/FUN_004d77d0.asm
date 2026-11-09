; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d77d0(CGame *param_1)
;
; Local Variables:
; undefined        Stack[-0x62c]:1  local_62c
; undefined        Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004d033c
;
; Referenced Globals:
;   TerminatedCString s_art_005e32a4
;   TerminatedCString s_Can_t_open_s_005e32a8
;   TerminatedCString s_s_is_d_bytes_but_expecte_005e32b6
;   TerminatedCString s_act_005e32e6
;   undefined4 s_act_005e32e6+1
;   undefined4 s_act_005e32e6+2
;   undefined4 s_act_005e32e6+3
;   TerminatedCString s_rb_005e32eb
;   TerminatedCString s_art_005e32ee
;   TerminatedCString s_Can_t_open_s_005e32f2
;   undefined4 DAT_005e3300
;   undefined4 DAT_005e3303
;   TerminatedCString s_core_game_cpp_005e3307
;   TerminatedCString s_Can_t_open_s_005e3318
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   ... and 19 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_FUN_004cbf20
;   core_game.cpp_FUN_004d19d0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_string.c_splitpath_FUN_005c2238
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   engine_special.cpp_FUN_00581f50
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d77d0
        ;   Label: core_game.cpp_FUN_004d77d0
    PUSH ESI                            ; 004d77d1
    PUSH EDI                            ; 004d77d2
    PUSH EBP                            ; 004d77d3
    SUB ESP,0xa1c                       ; 004d77d4
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d77da
    CMP byte ptr [EAX + 0x8e8],0x0      ; 004d77e1
    JNZ 0x004d77f5                      ; 004d77e8
        ;   XREF to: 004d77f5 (CONDITIONAL_JUMP)  ; LAB_004d77f5
    ADD ESP,0xa1c                       ; 004d77ea
    POP EBP                             ; 004d77f0
    POP EDI                             ; 004d77f1
    POP ESI                             ; 004d77f2
    POP EBX                             ; 004d77f3
    RET                                 ; 004d77f4
    LEA ESI,[EAX + 0x8e8]               ; 004d77f5
        ;   Label: LAB_004d77f5
    PUSH ESI                            ; 004d77fb
    PUSH 0x5e32a4                       ; 004d77fc | = "art"
    MOV dword ptr [EAX + 0xe0],0x0      ; 004d7801
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 004d780b
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    MOV EDX,EAX                         ; 004d7810
    ADD ESP,0x8                         ; 004d7812
    TEST EAX,EAX                        ; 004d7815
    JL 0x004d7bd8                       ; 004d7817
        ;   XREF to: 004d7bd8 (CONDITIONAL_JUMP)  ; LAB_004d7bd8
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004d781d
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7824
    MOV EBX,dword ptr [ECX + 0x9ec]     ; 004d782b
    MOV EAX,dword ptr [EAX + 0x9e8]     ; 004d7831
    IMUL EAX,EBX                        ; 004d7837
    CMP EDX,EAX                         ; 004d783a
    JNZ 0x004d7c06                      ; 004d783c
        ;   XREF to: 004d7c06 (CONDITIONAL_JUMP)  ; LAB_004d7c06
    PUSH 0x0                            ; 004d7842
    LEA EAX,[ESP + 0x904]               ; 004d7844
    PUSH EAX                            ; 004d784b
    PUSH 0x0                            ; 004d784c
    PUSH 0x0                            ; 004d784e
    PUSH ESI                            ; 004d7850
    CALL crt_string.c_splitpath_FUN_005c2238 ; 004d7851
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004d7856
    LEA EDI,[ESP + 0x900]               ; 004d7859
    MOV ESI,0x5e32e6                    ; 004d7860 | = ".act"
    PUSH EDI                            ; 004d7865
    SUB ECX,ECX                         ; 004d7866
    DEC ECX                             ; 004d7868
    MOV AL,0x0                          ; 004d7869
    SCASB.REPNE ES:EDI                  ; 004d786b
    DEC EDI                             ; 004d786d
    MOV AL,byte ptr [ESI]               ; 004d786e | = ".act" | s_act_005e32e6+2
        ;   Label: LAB_004d786e
    MOV byte ptr [EDI],AL               ; 004d7870
    CMP AL,0x0                          ; 004d7872
    JZ 0x004d7886                       ; 004d7874
        ;   XREF to: 004d7886 (CONDITIONAL_JUMP)  ; LAB_004d7886
    MOV AL,byte ptr [ESI + 0x1]         ; 004d7876 | s_act_005e32e6+1 | s_act_005e32e6+3
    ADD ESI,0x2                         ; 004d7879
    MOV byte ptr [EDI + 0x1],AL         ; 004d787c
    ADD EDI,0x2                         ; 004d787f
    CMP AL,0x0                          ; 004d7882
    JNZ 0x004d786e                      ; 004d7884
        ;   XREF to: 004d786e (CONDITIONAL_JUMP)  ; LAB_004d786e
    POP EDI                             ; 004d7886
        ;   Label: LAB_004d7886
    PUSH 0x5e32eb                       ; 004d7887 | = "rb"
    LEA EAX,[ESP + 0x904]               ; 004d788c
    PUSH EAX                            ; 004d7893
    PUSH 0x5e32ee                       ; 004d7894 | = "art"
    CALL engine_dosio.cpp_FUN_00479180  ; 004d7899
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004d789e
    ADD ESP,0xc                         ; 004d78a0
    TEST EAX,EAX                        ; 004d78a3
    JZ 0x004d7c3d                       ; 004d78a5
        ;   XREF to: 004d7c3d (CONDITIONAL_JUMP)  ; LAB_004d7c3d
    PUSH EAX                            ; 004d78ab
    PUSH 0x300                          ; 004d78ac
    PUSH 0x1                            ; 004d78b1
    LEA EAX,[ESP + 0x40c]               ; 004d78b3
    PUSH EAX                            ; 004d78ba
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 004d78bb
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 004d78c0
    PUSH EBX                            ; 004d78c3
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d78c4
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d78c9
    XOR EBX,EBX                         ; 004d78cc
    XOR ESI,ESI                         ; 004d78ce
    MOV dword ptr [ESP + 0xa10],EBX     ; 004d78d0
    CMP dword ptr [0x0061b4a0],0x10     ; 004d78d7 | DAT_0061b4a0
        ;   Label: LAB_004d78d7
    JNZ 0x004d7c72                      ; 004d78de
        ;   XREF to: 004d7c72 (CONDITIONAL_JUMP)  ; LAB_004d7c72
    XOR EAX,EAX                         ; 004d78e4
    MOV EDI,dword ptr [0x01c4e9d8]      ; 004d78e6 | DAT_01c4e9d8
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004d78ec
    XOR EDX,EDX                         ; 004d78f3
    MOV dword ptr [ESP + 0xa00],EAX     ; 004d78f5
    DIV EDI                             ; 004d78fc
    XOR ECX,ECX                         ; 004d78fe
    MOV CL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004d7900
    MOV dword ptr [ESP + 0xa00],EAX     ; 004d7907
    XOR EDX,EDX                         ; 004d790e
    MOV EAX,ECX                         ; 004d7910
    DIV dword ptr [0x01c4e9e4]          ; 004d7912 | DAT_01c4e9e4
    MOVZX EBP,byte ptr [ESP + EBX*0x1 + 0x402] ; 004d7918
    MOV dword ptr [ESP + 0xa04],EBP     ; 004d7920
    MOV EDI,EAX                         ; 004d7927
    XOR EDX,EDX                         ; 004d7929
    MOV EAX,EBP                         ; 004d792b
    DIV dword ptr [0x01c4e9f0]          ; 004d792d | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 004d7933 | DAT_01c4e9d4
    MOV dword ptr [ESP + 0xa04],EAX     ; 004d7939
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004d7940
    SHL EAX,CL                          ; 004d7947
    MOV CL,byte ptr [0x01c4e9e0]        ; 004d7949 | DAT_01c4e9e0
    SHL EDI,CL                          ; 004d794f
    MOV CL,byte ptr [0x01c4e9ec]        ; 004d7951 | DAT_01c4e9ec
    OR EDI,EAX                          ; 004d7957
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004d7959
    SHL EAX,CL                          ; 004d7960
    OR EAX,EDI                          ; 004d7962
    MOV word ptr [ESP + ESI*0x1 + 0x700],AX ; 004d7964
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004d796c
        ;   Label: LAB_004d796c
    ADD ESI,0x2                         ; 004d7973
    ADD EAX,0x4                         ; 004d7976
    ADD EBX,0x3                         ; 004d7979
    MOV dword ptr [ESP + 0xa10],EAX     ; 004d797c
    CMP ESI,0x200                       ; 004d7983
    JNZ 0x004d78d7                      ; 004d7989
        ;   XREF to: 004d78d7 (CONDITIONAL_JUMP)  ; LAB_004d78d7
    CALL wincore_wddvmem.cpp_FUN_005acb10 ; 004d798f
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005acb10()
    CALL engine_special.cpp_FUN_00581f50 ; 004d7994
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004d7999
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0x0                            ; 004d799e
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 004d79a0
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 004d79a5
    CALL wincore_wddvmem.cpp_FUN_005acc00 ; 004d79a8
        ;   XREF to: 005acc00 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acc00()
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004d79ad
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d79b2
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004d79b9
    MOV EAX,dword ptr [EAX + 0x9e8]     ; 004d79c0
    IMUL EAX,dword ptr [EDX + 0x9ec]    ; 004d79c6
    PUSH EAX                            ; 004d79cd
    CALL crt_unknown.c_FUN_005c08d0     ; 004d79ce
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004d79d3
    MOV dword ptr [ESP + 0xa14],EAX     ; 004d79d6
    TEST EAX,EAX                        ; 004d79dd
    JZ 0x004d7c59                       ; 004d79df
        ;   XREF to: 004d7c59 (CONDITIONAL_JUMP)  ; LAB_004d7c59
    MOV EBX,dword ptr [ESP + 0xa30]     ; 004d79e5
    PUSH 0x5e3300                       ; 004d79ec | DAT_005e3300
    ADD EBX,0x8e8                       ; 004d79f1
    PUSH EBX                            ; 004d79f7
    PUSH 0x5e3303                       ; 004d79f8 | DAT_005e3303
    CALL engine_dosio.cpp_FUN_00479180  ; 004d79fd
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d7a02
    MOV ESI,EAX                         ; 004d7a05
    TEST EAX,EAX                        ; 004d7a07
    JNZ 0x004d7a2f                      ; 004d7a09
        ;   XREF to: 004d7a2f (CONDITIONAL_JUMP)  ; LAB_004d7a2f
    PUSH EBX                            ; 004d7a0b
    MOV EDI,0x5e3307                    ; 004d7a0c | = "..\\core\\game.cpp"
    MOV EBP,0x1250                      ; 004d7a11
    PUSH 0x5e3318                       ; 004d7a16 | = "Can't open %s"
    MOV dword ptr [0x01d1d400],EDI      ; 004d7a1b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004d7a21 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d7a27
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004d7a2c
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7a2f
        ;   Label: LAB_004d7a2f
    PUSH ESI                            ; 004d7a36
    MOV EDX,dword ptr [EAX + 0x9ec]     ; 004d7a37
    PUSH EDX                            ; 004d7a3d
    MOV ECX,dword ptr [EAX + 0x9e8]     ; 004d7a3e
    PUSH ECX                            ; 004d7a44
    MOV EBX,dword ptr [ESP + 0xa20]     ; 004d7a45
    PUSH EBX                            ; 004d7a4c
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 004d7a4d
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 004d7a52
    PUSH ESI                            ; 004d7a55
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d7a56
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d7a5b
    XOR ESI,ESI                         ; 004d7a5e
    MOV EDI,dword ptr [0x0061b49c]      ; 004d7a60 | DAT_0061b49c
    MOV dword ptr [ESP + 0xa08],ESI     ; 004d7a66
    TEST EDI,EDI                        ; 004d7a6d
    JLE 0x004d7b62                      ; 004d7a6f
        ;   XREF to: 004d7b62 (CONDITIONAL_JUMP)  ; LAB_004d7b62
    MOV dword ptr [ESP + 0xa0c],ESI     ; 004d7a75
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7a7c
        ;   Label: LAB_004d7a7c
    MOV EDX,dword ptr [ESP + 0xa08]     ; 004d7a83
    IMUL EDX,dword ptr [EAX + 0x9ec]    ; 004d7a8a
    MOV EDI,dword ptr [0x0061b49c]      ; 004d7a91 | DAT_0061b49c
    MOV EAX,EDX                         ; 004d7a97
    SAR EDX,0x1f                        ; 004d7a99
    IDIV EDI                            ; 004d7a9c
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004d7a9e
    MOV EDX,dword ptr [EDX + 0x9e8]     ; 004d7aa5
    IMUL EDX,EAX                        ; 004d7aab
    MOV EBP,dword ptr [0x0061b498]      ; 004d7aae | DAT_0061b498
    XOR ECX,ECX                         ; 004d7ab4
    MOV dword ptr [ESP + 0xa18],EDX     ; 004d7ab6
    TEST EBP,EBP                        ; 004d7abd
    JLE 0x004d7b34                      ; 004d7abf
        ;   XREF to: 004d7b34 (CONDITIONAL_JUMP)  ; LAB_004d7b34
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004d7ac1
    XOR ESI,ESI                         ; 004d7ac8
    XOR EBX,EBX                         ; 004d7aca
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004d7acc
        ;   Label: LAB_004d7acc
    MOV EDX,dword ptr [EDX + 0x9e8]     ; 004d7ad3
    IMUL EDX,ECX                        ; 004d7ad9
    MOV EBP,dword ptr [0x0061b498]      ; 004d7adc | DAT_0061b498
    MOV EAX,EDX                         ; 004d7ae2
    SAR EDX,0x1f                        ; 004d7ae4
    IDIV EBP                            ; 004d7ae7
    MOV EDX,dword ptr [ESP + 0xa18]     ; 004d7ae9
    MOV EBP,dword ptr [ESP + 0xa14]     ; 004d7af0
    ADD EAX,EDX                         ; 004d7af7
    MOV EDX,dword ptr [0x0061b4a0]      ; 004d7af9 | DAT_0061b4a0
    ADD EAX,EBP                         ; 004d7aff
    CMP EDX,0x10                        ; 004d7b01
    JNZ 0x004d7cdf                      ; 004d7b04
        ;   XREF to: 004d7cdf (CONDITIONAL_JUMP)  ; LAB_004d7cdf
    MOV AL,byte ptr [EAX]               ; 004d7b0a
    MOV EDX,dword ptr [EDI + 0x1c4354c] ; 004d7b0c | DAT_01c4354c
    AND EAX,0xff                        ; 004d7b12
    MOV AX,word ptr [ESP + EAX*0x2 + 0x700] ; 004d7b17
    MOV word ptr [EDX + EBX*0x1],AX     ; 004d7b1f
    MOV EBP,dword ptr [0x0061b498]      ; 004d7b23 | DAT_0061b498
        ;   Label: LAB_004d7b23
    ADD ESI,0x4                         ; 004d7b29
    INC ECX                             ; 004d7b2c
    ADD EBX,0x2                         ; 004d7b2d
    CMP ECX,EBP                         ; 004d7b30
    JL 0x004d7acc                       ; 004d7b32
        ;   XREF to: 004d7acc (CONDITIONAL_JUMP)  ; LAB_004d7acc
    MOV EBP,dword ptr [ESP + 0xa0c]     ; 004d7b34
        ;   Label: LAB_004d7b34
    MOV EAX,dword ptr [ESP + 0xa08]     ; 004d7b3b
    MOV EDX,dword ptr [0x0061b49c]      ; 004d7b42 | DAT_0061b49c
    ADD EBP,0x4                         ; 004d7b48
    INC EAX                             ; 004d7b4b
    MOV dword ptr [ESP + 0xa0c],EBP     ; 004d7b4c
    MOV dword ptr [ESP + 0xa08],EAX     ; 004d7b53
    CMP EAX,EDX                         ; 004d7b5a
    JL 0x004d7a7c                       ; 004d7b5c
        ;   XREF to: 004d7a7c (CONDITIONAL_JUMP)  ; LAB_004d7a7c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d7b62
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004d7b62
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004d7b67
    PUSH ECX                            ; 004d7b6e
    CALL core_game.cpp_FUN_004d19d0     ; 004d7b6f
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 004d7b74
    MOV EBX,dword ptr [ESP + 0xa30]     ; 004d7b77
    ADD EBX,0x3b8                       ; 004d7b7e
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004d7b84
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
        ;   Label: LAB_004d7b84
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7b89
    CMP dword ptr [EAX + 0xd0],0x2      ; 004d7b90
    JNZ 0x004d7ba2                      ; 004d7b97
        ;   XREF to: 004d7ba2 (CONDITIONAL_JUMP)  ; LAB_004d7ba2
    PUSH EAX                            ; 004d7b99
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 004d7b9a
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d7b9f
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 004d7ba2
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_004d7ba2
    TEST EAX,EAX                        ; 004d7ba7
    JZ 0x004d7cf7                       ; 004d7ba9
        ;   XREF to: 004d7cf7 (CONDITIONAL_JUMP)  ; LAB_004d7cf7
    XOR EBX,EBX                         ; 004d7baf
        ;   Label: LAB_004d7baf
    CMP EBX,dword ptr [0x01c43544]      ; 004d7bb1 | DAT_01c43544
        ;   Label: LAB_004d7bb1
    JZ 0x004d7d69                       ; 004d7bb7
        ;   XREF to: 004d7d69 (CONDITIONAL_JUMP)  ; LAB_004d7d69
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7bbd
        ;   Label: LAB_004d7bbd
    CMP dword ptr [EAX + 0xd0],0x2      ; 004d7bc4
    JZ 0x004d7dc9                       ; 004d7bcb
        ;   XREF to: 004d7dc9 (CONDITIONAL_JUMP)  ; LAB_004d7dc9
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004d7bd1
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    JMP 0x004d7bb1                      ; 004d7bd6
        ;   XREF to: 004d7bb1 (UNCONDITIONAL_JUMP)  ; LAB_004d7bb1
    PUSH ESI                            ; 004d7bd8
        ;   Label: LAB_004d7bd8
    PUSH 0x5e32a8                       ; 004d7bd9 | = "Can't open %s"
    MOV EBX,dword ptr [0x0061abc0]      ; 004d7bde | g_CEditorToolsPtr
    PUSH EBX                            ; 004d7be4
    CALL shape_edittool.cpp_FUN_004943a0 ; 004d7be5
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004d7bea
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7bed
    MOV byte ptr [EAX + 0x8e8],0x0      ; 004d7bf4
    ADD ESP,0xa1c                       ; 004d7bfb
    POP EBP                             ; 004d7c01
    POP EDI                             ; 004d7c02
    POP ESI                             ; 004d7c03
    POP EBX                             ; 004d7c04
    RET                                 ; 004d7c05
    PUSH EAX                            ; 004d7c06
        ;   Label: LAB_004d7c06
    PUSH EBX                            ; 004d7c07
    MOV EDX,dword ptr [ECX + 0x9e8]     ; 004d7c08
    PUSH EDX                            ; 004d7c0e
    PUSH ESI                            ; 004d7c0f
    PUSH 0x5e32b6                       ; 004d7c10 | = "%s is %d bytes, but expected %dx%d=%d..."
    MOV ECX,dword ptr [0x0061abc0]      ; 004d7c15 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d7c1b
    CALL shape_edittool.cpp_FUN_004943a0 ; 004d7c1c
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x18                        ; 004d7c21
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7c24
    MOV byte ptr [EAX + 0x8e8],0x0      ; 004d7c2b
    ADD ESP,0xa1c                       ; 004d7c32
    POP EBP                             ; 004d7c38
    POP EDI                             ; 004d7c39
    POP ESI                             ; 004d7c3a
    POP EBX                             ; 004d7c3b
    RET                                 ; 004d7c3c
    LEA EAX,[ESP + 0x900]               ; 004d7c3d
        ;   Label: LAB_004d7c3d
    PUSH EAX                            ; 004d7c44
    PUSH 0x5e32f2                       ; 004d7c45 | = "Can't open %s"
    MOV EDI,dword ptr [0x0061abc0]      ; 004d7c4a | g_CEditorToolsPtr
    PUSH EDI                            ; 004d7c50
    CALL shape_edittool.cpp_FUN_004943a0 ; 004d7c51
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004d7c56
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7c59
        ;   Label: LAB_004d7c59
    MOV byte ptr [EAX + 0x8e8],0x0      ; 004d7c60
    ADD ESP,0xa1c                       ; 004d7c67
    POP EBP                             ; 004d7c6d
    POP EDI                             ; 004d7c6e
    POP ESI                             ; 004d7c6f
    POP EBX                             ; 004d7c70
    RET                                 ; 004d7c71
    MOV EBP,dword ptr [0x0061b4a0]      ; 004d7c72 | DAT_0061b4a0
        ;   Label: LAB_004d7c72
    MOVZX EDI,byte ptr [ESP + EBX*0x1 + 0x401] ; 004d7c78
    XOR EAX,EAX                         ; 004d7c80
    XOR EDX,EDX                         ; 004d7c82
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004d7c84
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004d7c8b
    CMP EBP,0x20                        ; 004d7c92
    JNZ 0x004d7cc4                      ; 004d7c95
        ;   XREF to: 004d7cc4 (CONDITIONAL_JUMP)  ; LAB_004d7cc4
    MOV CL,byte ptr [0x01c4e9d4]        ; 004d7c97 | DAT_01c4e9d4
    SHL EAX,CL                          ; 004d7c9d
    MOV CL,byte ptr [0x01c4e9e0]        ; 004d7c9f | DAT_01c4e9e0
    SHL EDI,CL                          ; 004d7ca5
    MOV CL,byte ptr [0x01c4e9ec]        ; 004d7ca7 | DAT_01c4e9ec
    OR EAX,EDI                          ; 004d7cad
    SHL EDX,CL                          ; 004d7caf
    MOV ECX,EAX                         ; 004d7cb1
    OR ECX,EDX                          ; 004d7cb3
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004d7cb5
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004d7cbc
    JMP 0x004d796c                      ; 004d7cbf
        ;   XREF to: 004d796c (UNCONDITIONAL_JUMP)  ; LAB_004d796c
    MOV ECX,EAX                         ; 004d7cc4
        ;   Label: LAB_004d7cc4
    SHL EDI,0x8                         ; 004d7cc6
    SHL ECX,0x10                        ; 004d7cc9
    OR ECX,EDI                          ; 004d7ccc
    OR ECX,EDX                          ; 004d7cce
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004d7cd0
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004d7cd7
    JMP 0x004d796c                      ; 004d7cda
        ;   XREF to: 004d796c (UNCONDITIONAL_JUMP)  ; LAB_004d796c
    MOV AL,byte ptr [EAX]               ; 004d7cdf
        ;   Label: LAB_004d7cdf
    MOV EDX,dword ptr [EDI + 0x1c4354c] ; 004d7ce1 | DAT_01c4354c
    AND EAX,0xff                        ; 004d7ce7
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 004d7cec
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 004d7cef
    JMP 0x004d7b23                      ; 004d7cf2
        ;   XREF to: 004d7b23 (UNCONDITIONAL_JUMP)  ; LAB_004d7b23
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004d7cf7
        ;   Label: LAB_004d7cf7
    MOV ESI,dword ptr [ECX + 0x48]      ; 004d7cfe
    MOV EAX,[0x0061f2a4]                ; 004d7d01 | DAT_0061f2a4
    PUSH ESI                            ; 004d7d06
    MOV EDX,dword ptr [EAX]             ; 004d7d07 | DAT_01d1bca0
    PUSH EAX                            ; 004d7d09 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004d7d0a
    ADD ESP,0x8                         ; 004d7d0c
    TEST EAX,EAX                        ; 004d7d0f
    JNZ 0x004d7baf                      ; 004d7d11
        ;   XREF to: 004d7baf (CONDITIONAL_JUMP)  ; LAB_004d7baf
    CMP dword ptr [0x01c43544],0x0      ; 004d7d17 | DAT_01c43544
    JNZ 0x004d7baf                      ; 004d7d1e
        ;   XREF to: 004d7baf (CONDITIONAL_JUMP)  ; LAB_004d7baf
    CMP dword ptr [0x01cd0b3c],0x1      ; 004d7d24 | DAT_01cd0b3c
    JNZ 0x004d7d4f                      ; 004d7d2b
        ;   XREF to: 004d7d4f (CONDITIONAL_JUMP)  ; LAB_004d7d4f
    MOV EAX,[0x0061d95c]                ; 004d7d2d | g_CGamePtr
        ;   Label: LAB_004d7d2d
    PUSH EAX                            ; 004d7d32 | g_CGameInstance
    CALL core_game.cpp_FUN_004cbf20     ; 004d7d33
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    MOV EAX,[0x0061d95c]                ; 004d7d38 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004d7d3d | g_CGameInstance.field660_0x294
    FSUBR float ptr [EBX]               ; 004d7d43
    ADD ESP,0x4                         ; 004d7d45
    FSTP float ptr [EBX]                ; 004d7d48
    JMP 0x004d7b84                      ; 004d7d4a
        ;   XREF to: 004d7b84 (UNCONDITIONAL_JUMP)  ; LAB_004d7b84
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004d7d4f
        ;   Label: LAB_004d7d4f
    FLDZ                                ; 004d7d56
    FCOMP float ptr [EAX + 0x3b8]       ; 004d7d58
    FNSTSW AX                           ; 004d7d5e
    SAHF                                ; 004d7d60
    JA 0x004d7baf                       ; 004d7d61
        ;   XREF to: 004d7baf (CONDITIONAL_JUMP)  ; LAB_004d7baf
    JMP 0x004d7d2d                      ; 004d7d67
        ;   XREF to: 004d7d2d (UNCONDITIONAL_JUMP)  ; LAB_004d7d2d
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004d7d69
        ;   Label: LAB_004d7d69
    MOV ESI,dword ptr [ECX + 0x48]      ; 004d7d70
    MOV EAX,[0x0061f2a4]                ; 004d7d73 | DAT_0061f2a4
    PUSH ESI                            ; 004d7d78
    MOV EDX,dword ptr [EAX]             ; 004d7d79 | DAT_01d1bca0
    PUSH EAX                            ; 004d7d7b | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004d7d7c
    ADD ESP,0x8                         ; 004d7d7e
    TEST EAX,EAX                        ; 004d7d81
    JNZ 0x004d7bbd                      ; 004d7d83
        ;   XREF to: 004d7bbd (CONDITIONAL_JUMP)  ; LAB_004d7bbd
    MOV EDI,dword ptr [ESP + 0xa30]     ; 004d7d89
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d7d90
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH EDI                            ; 004d7d95
    CALL core_game.cpp_FUN_004d19d0     ; 004d7d96
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 004d7d9b
    PUSH EDI                            ; 004d7d9e
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 004d7d9f
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d7da4
    MOV EAX,dword ptr [ESP + 0xa14]     ; 004d7da7
    PUSH EAX                            ; 004d7dae
    MOV byte ptr [EDI + 0x8e8],0x0      ; 004d7daf
    CALL crt_unknown.c_FUN_005c09f0     ; 004d7db6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004d7dbb
    ADD ESP,0xa1c                       ; 004d7dbe
    POP EBP                             ; 004d7dc4
    POP EDI                             ; 004d7dc5
    POP ESI                             ; 004d7dc6
    POP EBX                             ; 004d7dc7
    RET                                 ; 004d7dc8
    PUSH EAX                            ; 004d7dc9
        ;   Label: LAB_004d7dc9
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 004d7dca
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d7dcf
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004d7dd2
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    JMP 0x004d7bb1                      ; 004d7dd7
        ;   XREF to: 004d7bb1 (UNCONDITIONAL_JUMP)  ; LAB_004d7bb1

