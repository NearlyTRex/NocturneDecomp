; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00416790(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_AudioRecPuzzleActive_005d3f4a
;   TerminatedCString s_REC_FOWARD_SWITCH_WAV_005d3f5f
;   TerminatedCString s_ExitFromPuzzle_005d3f75
;   TerminatedCString s_rec_on_switch_wav_005d3f84
;   TerminatedCString s_rec_forward_switch_wav_005d3f96
;   TerminatedCString s_AudioPuzzleSuccess_005d3fad
;   undefined4 DAT_005d3fc2
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_007c397c
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;   unkafter_alphabit.cpp_FUN_00415be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416790
        ;   Label: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00416790
    PUSH ESI                            ; 00416791
    PUSH EDI                            ; 00416792
    PUSH EBP                            ; 00416793
    SUB ESP,0x10                        ; 00416794
    MOV EBX,dword ptr [ESP + 0x24]      ; 00416797
    PUSH 0x5d3f4a                       ; 0041679b | = "AudioRecPuzzleActive"
    MOV EDX,dword ptr [0x0061b4d0]      ; 004167a0 | DAT_0061b4d0
    PUSH EDX                            ; 004167a6
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004167a7
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    MOV ECX,dword ptr [EBX + 0x34]      ; 004167ac
    ADD ESP,0x8                         ; 004167af
    CMP ECX,0x64                        ; 004167b2
    JZ 0x004168ad                       ; 004167b5
        ;   XREF to: 004168ad (CONDITIONAL_JUMP)  ; LAB_004168ad
    CMP dword ptr [EBX + 0x4c],0x0      ; 004167bb
        ;   Label: LAB_004167bb
    JNZ 0x004168c9                      ; 004167bf
        ;   XREF to: 004168c9 (CONDITIONAL_JUMP)  ; LAB_004168c9
    PUSH 0x5d3f75                       ; 004167c5 | = "ExitFromPuzzle"
        ;   Label: LAB_004167c5
    MOV EBP,dword ptr [0x0061b4d0]      ; 004167ca | DAT_0061b4d0
    PUSH EBP                            ; 004167d0
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004167d1
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004167d6
    MOV EAX,[0x0061f2a4]                ; 004167d9 | DAT_0061f2a4
    PUSH 0x200                          ; 004167de
    MOV EDX,dword ptr [EAX]             ; 004167e3 | DAT_01d1bca0
    PUSH EAX                            ; 004167e5 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004167e6
    ADD ESP,0x8                         ; 004167e9
    XOR EAX,EAX                         ; 004167ec
    PUSH EAX                            ; 004167ee
    PUSH EBX                            ; 004167ef
    MOV [0x01c43544],EAX                ; 004167f0 | DAT_01c43544
    CALL unkafter_alphabit.cpp_FUN_00415be0 ; 004167f5
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_00415be0()
    ADD ESP,0x8                         ; 004167fa
    MOV EDX,dword ptr [EBX + 0x24]      ; 004167fd
        ;   Label: LAB_004167fd
    TEST EDX,EDX                        ; 00416800
    JZ 0x004169e7                       ; 00416802
        ;   XREF to: 004169e7 (CONDITIONAL_JUMP)  ; LAB_004169e7
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00416808
    TEST EDI,EDI                        ; 0041680b
    JZ 0x004168db                       ; 0041680d
        ;   XREF to: 004168db (CONDITIONAL_JUMP)  ; LAB_004168db
    MOV EDX,dword ptr [EBX + 0x20]      ; 00416813
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416816
    SUB EAX,EDX                         ; 0041681d
    SHL EAX,0x2                         ; 0041681f
    SUB EAX,EDX                         ; 00416822
    SHL EAX,0x2                         ; 00416824
    ADD EAX,EBX                         ; 00416827
    MOV EBP,dword ptr [EAX + 0x74]      ; 00416829
    CMP EBP,0x2                         ; 0041682c
    JNZ 0x0041694e                      ; 0041682f
        ;   XREF to: 0041694e (CONDITIONAL_JUMP)  ; LAB_0041694e
    CMP dword ptr [0x007c397c],-0x1     ; 00416835 | DAT_007c397c
    JNZ 0x00416848                      ; 0041683c
        ;   XREF to: 00416848 (CONDITIONAL_JUMP)  ; LAB_00416848
    MOV EAX,[0x01c4353c]                ; 0041683e | DAT_01c4353c
    MOV [0x007c397c],EAX                ; 00416843 | DAT_007c397c
    MOV EAX,[0x01c4353c]                ; 00416848 | DAT_01c4353c
        ;   Label: LAB_00416848
    MOV ESI,dword ptr [0x007c397c]      ; 0041684d | DAT_007c397c
    SUB EAX,ESI                         ; 00416853
    MOV dword ptr [ESP + 0xc],EAX       ; 00416855
    FILD dword ptr [ESP + 0xc]          ; 00416859
    FABS                                ; 0041685d
    FCOMP double ptr [0x005d3fc2]       ; 0041685f | DAT_005d3fc2
    FNSTSW AX                           ; 00416865
    SAHF                                ; 00416867
    JBE 0x00416890                      ; 00416868
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    PUSH EBX                            ; 0041686a
    MOV EAX,dword ptr [EBX]             ; 0041686b
    XOR ESI,ESI                         ; 0041686d
    CALL dword ptr [EAX + 0x34]         ; 0041686f
    ADD ESP,0x4                         ; 00416872
    PUSH ESI                            ; 00416875
        ;   Label: LAB_00416875
    MOV EAX,dword ptr [EBX]             ; 00416876
    PUSH EBX                            ; 00416878
    INC ESI                             ; 00416879
    CALL dword ptr [EAX + 0x38]         ; 0041687a
    ADD ESP,0x8                         ; 0041687d
    CMP ESI,0x3                         ; 00416880
    JL 0x00416875                       ; 00416883
        ;   XREF to: 00416875 (CONDITIONAL_JUMP)  ; LAB_00416875
    LEA EAX,[EAX]                       ; 00416885
    LEA EDX,[EDX]                       ; 0041688b
    MOV EBX,EBX                         ; 0041688e
    MOV EDI,EBX                         ; 00416890
        ;   Label: LAB_00416890
    XOR ESI,ESI                         ; 00416892
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00416894
        ;   Label: LAB_00416894
    INC EAX                             ; 00416897
    CMP ESI,EAX                         ; 00416898
    JGE 0x00416adf                      ; 0041689a
        ;   XREF to: 00416adf (CONDITIONAL_JUMP)  ; LAB_00416adf
    ADD EDI,0x2c                        ; 004168a0
    INC ESI                             ; 004168a3
    MOV dword ptr [EDI + 0x5c],0x0      ; 004168a4
    JMP 0x00416894                      ; 004168ab
        ;   XREF to: 00416894 (UNCONDITIONAL_JUMP)  ; LAB_00416894
    PUSH 0x5d3f5f                       ; 004168ad | = "REC-FOWARD-SWITCH.WAV"
        ;   Label: LAB_004168ad
    MOV dword ptr [EBX + 0x34],0x1      ; 004168b2
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 004168b9
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 004168be
    MOV dword ptr [EBX + 0x58],EAX      ; 004168c1
    JMP 0x004167bb                      ; 004168c4
        ;   XREF to: 004167bb (UNCONDITIONAL_JUMP)  ; LAB_004167bb
    CMP dword ptr [EBX + 0xc34],0x1     ; 004168c9
        ;   Label: LAB_004168c9
    JZ 0x004167c5                       ; 004168d0
        ;   XREF to: 004167c5 (CONDITIONAL_JUMP)  ; LAB_004167c5
    JMP 0x004167fd                      ; 004168d6
        ;   XREF to: 004167fd (UNCONDITIONAL_JUMP)  ; LAB_004167fd
    MOV EBP,dword ptr [0x01c43540]      ; 004168db | DAT_01c43540
        ;   Label: LAB_004168db
    PUSH EBP                            ; 004168e1
    MOV EDX,dword ptr [0x01c4353c]      ; 004168e2 | DAT_01c4353c
    PUSH EDX                            ; 004168e8
    MOV EAX,dword ptr [EBX]             ; 004168e9
    PUSH EBX                            ; 004168eb
    MOV dword ptr [EBX + 0x2c],0x1      ; 004168ec
    CALL dword ptr [EAX + 0x2c]         ; 004168f3
    ADD ESP,0xc                         ; 004168f6
    TEST EAX,EAX                        ; 004168f9
    JZ 0x00416934                       ; 004168fb
        ;   XREF to: 00416934 (CONDITIONAL_JUMP)  ; LAB_00416934
    MOV EDX,dword ptr [EBX + 0x20]      ; 004168fd
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416900
    SUB EAX,EDX                         ; 00416907
    SHL EAX,0x2                         ; 00416909
    SUB EAX,EDX                         ; 0041690c
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x74] ; 0041690e
    CMP ESI,0x1                         ; 00416912
    JNZ 0x00416890                      ; 00416915
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    TEST EDX,EDX                        ; 0041691b
    JNZ 0x00416946                      ; 0041691d
        ;   XREF to: 00416946 (CONDITIONAL_JUMP)  ; LAB_00416946
    PUSH 0x5d3f84                       ; 0041691f | = "rec-on-switch.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00416924
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00416929
    MOV dword ptr [EBX + 0x4c],EDI      ; 0041692c
    JMP 0x00416890                      ; 0041692f
        ;   XREF to: 00416890 (UNCONDITIONAL_JUMP)  ; LAB_00416890
    MOV dword ptr [0x007c397c],0xffffffff ; 00416934 | DAT_007c397c
        ;   Label: LAB_00416934
    ADD ESP,0x10                        ; 0041693e
        ;   Label: LAB_0041693e
    POP EBP                             ; 00416941
    POP EDI                             ; 00416942
    POP ESI                             ; 00416943
    POP EBX                             ; 00416944
    RET                                 ; 00416945
    MOV dword ptr [EBX + 0x4c],ESI      ; 00416946
        ;   Label: LAB_00416946
    JMP 0x00416890                      ; 00416949
        ;   XREF to: 00416890 (UNCONDITIONAL_JUMP)  ; LAB_00416890
    CMP EBP,0x3                         ; 0041694e
        ;   Label: LAB_0041694e
    JNZ 0x00416890                      ; 00416951
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    MOV ESI,0x5                         ; 00416957
    MOV EDI,0x4                         ; 0041695c
    XOR EBP,EBP                         ; 00416961
    PUSH ESI                            ; 00416963
        ;   Label: LAB_00416963
    MOV EAX,dword ptr [EBX]             ; 00416964
    PUSH EBX                            ; 00416966
    CALL dword ptr [EAX + 0x54]         ; 00416967
    ADD ESP,0x8                         ; 0041696a
    TEST EAX,EAX                        ; 0041696d
    JZ 0x004169ad                       ; 0041696f
        ;   XREF to: 004169ad (CONDITIONAL_JUMP)  ; LAB_004169ad
    MOV EAX,dword ptr [EBX + 0x44]      ; 00416971
    MOV dword ptr [EBX + 0x48],EAX      ; 00416974
    LEA EAX,[ESI + -0x5]                ; 00416977
    PUSH 0x5d3f96                       ; 0041697a | = "rec-forward-switch.wav"
    MOV dword ptr [EBX + 0x44],EAX      ; 0041697f
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00416982
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    MOV EAX,dword ptr [EBX + 0x48]      ; 00416987
    MOV EDX,dword ptr [EBX + 0x44]      ; 0041698a
    ADD ESP,0x4                         ; 0041698d
    CMP EAX,EDX                         ; 00416990
    JZ 0x0041699b                       ; 00416992
        ;   XREF to: 0041699b (CONDITIONAL_JUMP)  ; LAB_0041699b
    MOV dword ptr [EBX + 0x34],0x64     ; 00416994
    MOV ECX,dword ptr [EBX + 0x44]      ; 0041699b
        ;   Label: LAB_0041699b
    CMP EDI,ECX                         ; 0041699e
    JLE 0x004169b9                      ; 004169a0
        ;   XREF to: 004169b9 (CONDITIONAL_JUMP)  ; LAB_004169b9
    CMP EBP,ECX                         ; 004169a2
    JGE 0x004169b9                      ; 004169a4
        ;   XREF to: 004169b9 (CONDITIONAL_JUMP)  ; LAB_004169b9
    MOV dword ptr [EBX + 0x18],0x1      ; 004169a6
    INC ESI                             ; 004169ad
        ;   Label: LAB_004169ad
    CMP ESI,0xa                         ; 004169ae
    JGE 0x00416890                      ; 004169b1
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    JMP 0x00416963                      ; 004169b7
        ;   XREF to: 00416963 (UNCONDITIONAL_JUMP)  ; LAB_00416963
    CMP EDI,dword ptr [EBX + 0x44]      ; 004169b9
        ;   Label: LAB_004169b9
    JNZ 0x004169d1                      ; 004169bc
        ;   XREF to: 004169d1 (CONDITIONAL_JUMP)  ; LAB_004169d1
    MOV dword ptr [EBX + 0x18],0x2      ; 004169be
    INC ESI                             ; 004169c5
    CMP ESI,0xa                         ; 004169c6
    JGE 0x00416890                      ; 004169c9
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    JMP 0x00416963                      ; 004169cf
        ;   XREF to: 00416963 (UNCONDITIONAL_JUMP)  ; LAB_00416963
    MOV dword ptr [EBX + 0x18],0x3      ; 004169d1
        ;   Label: LAB_004169d1
    INC ESI                             ; 004169d8
    CMP ESI,0xa                         ; 004169d9
    JGE 0x00416890                      ; 004169dc
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    JMP 0x00416963                      ; 004169e2
        ;   XREF to: 00416963 (UNCONDITIONAL_JUMP)  ; LAB_00416963
    CMP EDX,dword ptr [EBX + 0x28]      ; 004169e7
        ;   Label: LAB_004169e7
    JNZ 0x00416a17                      ; 004169ea
        ;   XREF to: 00416a17 (CONDITIONAL_JUMP)  ; LAB_00416a17
    MOV EBP,0x2                         ; 004169ec
        ;   Label: LAB_004169ec
    MOV EDI,EBX                         ; 004169f1
    MOV dword ptr [EBX + 0x18],0x0      ; 004169f3
    XOR ESI,ESI                         ; 004169fa
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004169fc
        ;   Label: LAB_004169fc
    INC EAX                             ; 004169ff
    CMP ESI,EAX                         ; 00416a00
    JGE 0x00416890                      ; 00416a02
        ;   XREF to: 00416890 (CONDITIONAL_JUMP)  ; LAB_00416890
    CMP dword ptr [EDI + 0x88],0x1      ; 00416a08
    JZ 0x00416a2b                       ; 00416a0f
        ;   XREF to: 00416a2b (CONDITIONAL_JUMP)  ; LAB_00416a2b
    INC ESI                             ; 00416a11
        ;   Label: LAB_00416a11
    ADD EDI,0x2c                        ; 00416a12
    JMP 0x004169fc                      ; 00416a15
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    MOV ESI,0xffffffff                  ; 00416a17
        ;   Label: LAB_00416a17
    MOV dword ptr [EBX + 0x20],0xffffffff ; 00416a1c
    MOV dword ptr [0x007c397c],ESI      ; 00416a23 | DAT_007c397c
    JMP 0x004169ec                      ; 00416a29
        ;   XREF to: 004169ec (UNCONDITIONAL_JUMP)  ; LAB_004169ec
    MOV EDX,dword ptr [EDI + 0x74]      ; 00416a2b
        ;   Label: LAB_00416a2b
    CMP EBP,EDX                         ; 00416a2e
    JNZ 0x00416a60                      ; 00416a30
        ;   XREF to: 00416a60 (CONDITIONAL_JUMP)  ; LAB_00416a60
    PUSH ESI                            ; 00416a32
        ;   Label: LAB_00416a32
    MOV EAX,dword ptr [EBX]             ; 00416a33
    PUSH EBX                            ; 00416a35
    CALL dword ptr [EAX + 0x54]         ; 00416a36
    ADD ESP,0x8                         ; 00416a39
    TEST EAX,EAX                        ; 00416a3c
    JZ 0x00416a11                       ; 00416a3e
        ;   XREF to: 00416a11 (CONDITIONAL_JUMP)  ; LAB_00416a11
    CMP ESI,0xc                         ; 00416a40
    JNC 0x00416a84                      ; 00416a43
        ;   XREF to: 00416a84 (CONDITIONAL_JUMP)  ; LAB_00416a84
    CMP ESI,0x4                         ; 00416a45
    JNC 0x00416ac3                      ; 00416a48
        ;   XREF to: 00416ac3 (CONDITIONAL_JUMP)  ; LAB_00416ac3
    CMP ESI,0x2                         ; 00416a4e
    JNZ 0x00416a74                      ; 00416a51
        ;   XREF to: 00416a74 (CONDITIONAL_JUMP)  ; LAB_00416a74
    MOV dword ptr [EBX + 0x18],0x3      ; 00416a53
        ;   Label: LAB_00416a53
    INC ESI                             ; 00416a5a
    ADD EDI,0x2c                        ; 00416a5b
    JMP 0x004169fc                      ; 00416a5e
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    CMP EDX,0x3                         ; 00416a60
        ;   Label: LAB_00416a60
    JZ 0x00416a32                       ; 00416a63
        ;   XREF to: 00416a32 (CONDITIONAL_JUMP)  ; LAB_00416a32
    INC ESI                             ; 00416a65
    ADD EDI,0x2c                        ; 00416a66
    JMP 0x004169fc                      ; 00416a69
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    MOV dword ptr [EBX + 0x18],EBP      ; 00416a6b
        ;   Label: LAB_00416a6b
    INC ESI                             ; 00416a6e
    ADD EDI,0x2c                        ; 00416a6f
    JMP 0x004169fc                      ; 00416a72
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    MOV dword ptr [EBX + 0x18],0x1      ; 00416a74
        ;   Label: LAB_00416a74
    INC ESI                             ; 00416a7b
    ADD EDI,0x2c                        ; 00416a7c
    JMP 0x004169fc                      ; 00416a7f
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    JBE 0x00416a53                      ; 00416a84
        ;   XREF to: 00416a53 (CONDITIONAL_JUMP)  ; LAB_00416a53
        ;   Label: LAB_00416a84
    CMP ESI,0x15                        ; 00416a86
    JNC 0x00416aa7                      ; 00416a89
        ;   XREF to: 00416aa7 (CONDITIONAL_JUMP)  ; LAB_00416aa7
    CMP ESI,0x10                        ; 00416a8b
    JC 0x00416a74                       ; 00416a8e
        ;   XREF to: 00416a74 (CONDITIONAL_JUMP)  ; LAB_00416a74
    JBE 0x00416a6b                      ; 00416a90
        ;   XREF to: 00416a6b (CONDITIONAL_JUMP)  ; LAB_00416a6b
    CMP ESI,0x11                        ; 00416a92
    JZ 0x00416a53                       ; 00416a95
        ;   XREF to: 00416a53 (CONDITIONAL_JUMP)  ; LAB_00416a53
    MOV dword ptr [EBX + 0x18],0x1      ; 00416a97
    INC ESI                             ; 00416a9e
    ADD EDI,0x2c                        ; 00416a9f
    JMP 0x004169fc                      ; 00416aa2
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    JBE 0x00416a6b                      ; 00416aa7
        ;   XREF to: 00416a6b (CONDITIONAL_JUMP)  ; LAB_00416a6b
        ;   Label: LAB_00416aa7
    CMP ESI,0x16                        ; 00416aa9
    JBE 0x00416a53                      ; 00416aac
        ;   XREF to: 00416a53 (CONDITIONAL_JUMP)  ; LAB_00416a53
    CMP ESI,0x1a                        ; 00416aae
    JZ 0x00416a6b                       ; 00416ab1
        ;   XREF to: 00416a6b (CONDITIONAL_JUMP)  ; LAB_00416a6b
    MOV dword ptr [EBX + 0x18],0x1      ; 00416ab3
    INC ESI                             ; 00416aba
    ADD EDI,0x2c                        ; 00416abb
    JMP 0x004169fc                      ; 00416abe
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    JBE 0x00416a6b                      ; 00416ac3
        ;   XREF to: 00416a6b (CONDITIONAL_JUMP)  ; LAB_00416a6b
        ;   Label: LAB_00416ac3
    CMP ESI,0x5                         ; 00416ac5
    JBE 0x00416a53                      ; 00416ac8
        ;   XREF to: 00416a53 (CONDITIONAL_JUMP)  ; LAB_00416a53
    CMP ESI,0x9                         ; 00416aca
    JZ 0x00416a6b                       ; 00416acd
        ;   XREF to: 00416a6b (CONDITIONAL_JUMP)  ; LAB_00416a6b
    MOV dword ptr [EBX + 0x18],0x1      ; 00416acf
    INC ESI                             ; 00416ad6
    ADD EDI,0x2c                        ; 00416ad7
    JMP 0x004169fc                      ; 00416ada
        ;   XREF to: 004169fc (UNCONDITIONAL_JUMP)  ; LAB_004169fc
    MOV EAX,dword ptr [EBX + 0x44]      ; 00416adf
        ;   Label: LAB_00416adf
    LEA EDX,[EAX + 0x5]                 ; 00416ae2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416ae5
    SUB EAX,EDX                         ; 00416aec
    SHL EAX,0x2                         ; 00416aee
    SUB EAX,EDX                         ; 00416af1
    MOV dword ptr [EBX + EAX*0x4 + 0x88],0x1 ; 00416af3
    MOV EAX,dword ptr [EBX + 0x34]      ; 00416afe
    LEA EDX,[EAX + 0x2]                 ; 00416b01
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416b04
    SUB EAX,EDX                         ; 00416b0b
    SHL EAX,0x2                         ; 00416b0d
    SUB EAX,EDX                         ; 00416b10
    MOV dword ptr [EBX + EAX*0x4 + 0x88],0x1 ; 00416b12
    MOV ECX,dword ptr [EBX + 0x34]      ; 00416b1d
    CMP ECX,0x1                         ; 00416b20
    JZ 0x00416c90                       ; 00416b23
        ;   XREF to: 00416c90 (CONDITIONAL_JUMP)  ; LAB_00416c90
    CMP ECX,0x64                        ; 00416b29
    JZ 0x00416c90                       ; 00416b2c
        ;   XREF to: 00416c90 (CONDITIONAL_JUMP)  ; LAB_00416c90
    MOV dword ptr [EBX + 0x240],0x1     ; 00416b32
    CMP dword ptr [EBX + 0x4c],0x0      ; 00416b3c
        ;   Label: LAB_00416b3c
    JNZ 0x00416c9f                      ; 00416b40
        ;   XREF to: 00416c9f (CONDITIONAL_JUMP)  ; LAB_00416c9f
    MOV dword ptr [EBX + 0xb4],0x1      ; 00416b46
    MOV EDI,EBX                         ; 00416b50
        ;   Label: LAB_00416b50
    LEA EAX,[EBX + 0x210]               ; 00416b52
    XOR ESI,ESI                         ; 00416b58
    MOV dword ptr [ESP + 0x8],EAX       ; 00416b5a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00416b5e
        ;   Label: LAB_00416b5e
    MOV ECX,EDI                         ; 00416b62
    XOR EAX,EAX                         ; 00416b64
    ADD EDX,ESI                         ; 00416b66
    CMP EAX,dword ptr [ECX + 0x38]      ; 00416b68
        ;   Label: LAB_00416b68
    JNZ 0x00416b77                      ; 00416b6b
        ;   XREF to: 00416b77 (CONDITIONAL_JUMP)  ; LAB_00416b77
    MOV dword ptr [EDX + 0x88],0x1      ; 00416b6d
    INC EAX                             ; 00416b77
        ;   Label: LAB_00416b77
    ADD EDX,0x2c                        ; 00416b78
    CMP EAX,0x5                         ; 00416b7b
    JL 0x00416b68                       ; 00416b7e
        ;   XREF to: 00416b68 (CONDITIONAL_JUMP)  ; LAB_00416b68
    ADD ESI,0xdc                        ; 00416b80
    ADD EDI,0x4                         ; 00416b86
    CMP ESI,0x294                       ; 00416b89
    JNZ 0x00416b5e                      ; 00416b8f
        ;   XREF to: 00416b5e (CONDITIONAL_JUMP)  ; LAB_00416b5e
    CMP dword ptr [EBX + 0x34],0x1      ; 00416b91
    JNZ 0x00416bc4                      ; 00416b95
        ;   XREF to: 00416bc4 (CONDITIONAL_JUMP)  ; LAB_00416bc4
    MOV EDX,dword ptr [EBX + 0xc14]     ; 00416b97
    PUSH EDX                            ; 00416b9d
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00416b9e
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00416ba3
    MOV ECX,dword ptr [EBX + 0xc18]     ; 00416ba6
    PUSH ECX                            ; 00416bac
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00416bad
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00416bb2
    MOV ESI,dword ptr [EBX + 0xc1c]     ; 00416bb5
    PUSH ESI                            ; 00416bbb
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00416bbc
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00416bc1
    MOV EDI,dword ptr [EBX + 0x34]      ; 00416bc4
        ;   Label: LAB_00416bc4
    CMP EDI,0x1                         ; 00416bc7
    JZ 0x0041693e                       ; 00416bca
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    CMP EDI,0x64                        ; 00416bd0
    JZ 0x0041693e                       ; 00416bd3
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    MOV EAX,dword ptr [EBX + 0x44]      ; 00416bd9
    MOV EDI,dword ptr [EBX + 0x3c]      ; 00416bdc
    MOV dword ptr [ESP + 0x4],EAX       ; 00416bdf
    MOV EAX,dword ptr [EBX + 0x34]      ; 00416be3
    MOV ESI,dword ptr [EBX + 0x40]      ; 00416be6
    MOV dword ptr [ESP],EAX             ; 00416be9
    MOV EAX,dword ptr [EBX + 0x30]      ; 00416bec
    MOV EBP,dword ptr [EBX + 0x38]      ; 00416bef
    TEST EAX,EAX                        ; 00416bf2
    JZ 0x00416cae                       ; 00416bf4
        ;   XREF to: 00416cae (CONDITIONAL_JUMP)  ; LAB_00416cae
    CMP dword ptr [EBX + 0x30],0x0      ; 00416bfa
        ;   Label: LAB_00416bfa
    JZ 0x0041693e                       ; 00416bfe
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    MOV EAX,dword ptr [EBX + 0xc14]     ; 00416c04
    PUSH EAX                            ; 00416c0a
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00416c0b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00416c10
    TEST EAX,EAX                        ; 00416c13
    JNZ 0x0041693e                      ; 00416c15
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    MOV dword ptr [EBX + 0x34],0x64     ; 00416c1b
    MOV EDX,dword ptr [EBX + 0xc20]     ; 00416c22
    MOV dword ptr [EBX + 0x30],EAX      ; 00416c28
    CMP EBP,EDX                         ; 00416c2b
    JNZ 0x0041693e                      ; 00416c2d
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    CMP EDI,dword ptr [EBX + 0xc24]     ; 00416c33
    JNZ 0x0041693e                      ; 00416c39
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    CMP ESI,dword ptr [EBX + 0xc28]     ; 00416c3f
    JNZ 0x0041693e                      ; 00416c45
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00416c4b
    CMP EAX,dword ptr [EBX + 0xc2c]     ; 00416c4f
    JNZ 0x0041693e                      ; 00416c55
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    MOV EAX,dword ptr [ESP]             ; 00416c5b
    CMP EAX,dword ptr [EBX + 0xc30]     ; 00416c5e
    JNZ 0x0041693e                      ; 00416c64
        ;   XREF to: 0041693e (CONDITIONAL_JUMP)  ; LAB_0041693e
    PUSH 0x5d3fad                       ; 00416c6a | = "AudioPuzzleSuccess"
    MOV ECX,dword ptr [0x0061b4d0]      ; 00416c6f | DAT_0061b4d0
    PUSH ECX                            ; 00416c75
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00416c76
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00416c7b
    MOV dword ptr [EBX + 0xc34],0x1     ; 00416c7e
    ADD ESP,0x10                        ; 00416c88
    POP EBP                             ; 00416c8b
    POP EDI                             ; 00416c8c
    POP ESI                             ; 00416c8d
    POP EBX                             ; 00416c8e
    RET                                 ; 00416c8f
    MOV dword ptr [EBX + 0x26c],0x1     ; 00416c90
        ;   Label: LAB_00416c90
    JMP 0x00416b3c                      ; 00416c9a
        ;   XREF to: 00416b3c (UNCONDITIONAL_JUMP)  ; LAB_00416b3c
    MOV dword ptr [EBX + 0x88],0x1      ; 00416c9f
        ;   Label: LAB_00416c9f
    JMP 0x00416b50                      ; 00416ca9
        ;   XREF to: 00416b50 (UNCONDITIONAL_JUMP)  ; LAB_00416b50
    MOV EDX,dword ptr [EBX + 0xc14]     ; 00416cae
        ;   Label: LAB_00416cae
    PUSH EDX                            ; 00416cb4
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00416cb5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00416cba
    TEST EAX,EAX                        ; 00416cbd
    JNZ 0x00416bfa                      ; 00416cbf
        ;   XREF to: 00416bfa (CONDITIONAL_JUMP)  ; LAB_00416bfa
    MOV ECX,dword ptr [ESP]             ; 00416cc5
    PUSH ECX                            ; 00416cc8
    MOV EDX,dword ptr [ESP + 0x8]       ; 00416cc9
    PUSH EDX                            ; 00416ccd
    PUSH ESI                            ; 00416cce
    PUSH EDI                            ; 00416ccf
    PUSH EBP                            ; 00416cd0
    MOV EAX,dword ptr [EBX]             ; 00416cd1
    PUSH EBX                            ; 00416cd3
    CALL dword ptr [EAX + 0x58]         ; 00416cd4
    ADD ESP,0x18                        ; 00416cd7
    MOV dword ptr [EBX + 0x30],0x1      ; 00416cda
    ADD ESP,0x10                        ; 00416ce1
    POP EBP                             ; 00416ce4
    POP EDI                             ; 00416ce5
    POP ESI                             ; 00416ce6
    POP EBX                             ; 00416ce7
    RET                                 ; 00416ce8

