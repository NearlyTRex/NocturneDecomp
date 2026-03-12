; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_loadState_FUN_00560820(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[256]        Stack[-0x118]:256  local_118
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1a36
;
; Referenced Globals:
;   TerminatedCString s_d_006433f2
;   TerminatedCString s_core_script_cpp_006433f6
;   TerminatedCString s_CScript_loadState_file_v_00643409
;   TerminatedCString s_d_0064343e
;   TerminatedCString s_d_00643442
;   TerminatedCString s_d_00643446
;   TerminatedCString s_g_0064344a
;   TerminatedCString s_d_0064344e
;   TerminatedCString s_anon_00643452
;   TerminatedCString s_anon_00643459
;   TerminatedCString s_g_0064345c
;   TerminatedCString s_g_00643460
;   TerminatedCString s_d_00643464
;   TerminatedCString s_d_00643468
;   TerminatedCString s_d_0064346c
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_computeChecksum_FUN_00560d80
;   core_script.cpp_readActorReference_FUN_00560760
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560820
        ;   Label: core_script.cpp_CScript_loadState_FUN_00560820
    PUSH ESI                            ; 00560821
    PUSH EDI                            ; 00560822
    PUSH EBP                            ; 00560823
    SUB ESP,0x108                       ; 00560824
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0056082a
    MOV EDI,dword ptr [ESP + 0x120]     ; 00560831
    PUSH EDI                            ; 00560838
    PUSH 0xff                           ; 00560839
    LEA EAX,[ESP + 0x8]                 ; 0056083e
    PUSH EAX                            ; 00560842
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560843
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560848
    LEA EAX,[ESP + 0x100]               ; 0056084b
    PUSH EAX                            ; 00560852
    PUSH 0x6433f2                       ; 00560853 | = "%d\n"
    PUSH EDI                            ; 00560858
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560859
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056085e
    CMP dword ptr [ESP + 0x100],0x6     ; 00560861
    JG 0x00560ac5                       ; 00560869
        ;   XREF to: 00560ac5 (CONDITIONAL_JUMP)  ; LAB_00560ac5
    PUSH EDI                            ; 0056086f
        ;   Label: LAB_0056086f
    PUSH 0xff                           ; 00560870
    LEA EAX,[ESP + 0x8]                 ; 00560875
    PUSH EAX                            ; 00560879
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0056087a
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,[0x0067b654]                ; 0056087f | g_CGamePtr
    ADD ESP,0xc                         ; 00560884
    ADD EAX,0x228                       ; 00560887
    PUSH EAX                            ; 0056088c | DAT_02d81cc4
    PUSH 0x64343e                       ; 0056088d | = "%d\n"
    PUSH EDI                            ; 00560892
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560893
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560898
    CMP dword ptr [ESP + 0x100],0x2     ; 0056089b
    JL 0x005608d1                       ; 005608a3
        ;   XREF to: 005608d1 (CONDITIONAL_JUMP)  ; LAB_005608d1
    PUSH EDI                            ; 005608a5
    PUSH 0xff                           ; 005608a6
    LEA EAX,[ESP + 0x8]                 ; 005608ab
    PUSH EAX                            ; 005608af
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005608b0
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,[0x0067b654]                ; 005608b5 | g_CGamePtr
    ADD ESP,0xc                         ; 005608ba
    ADD EAX,0x22c                       ; 005608bd
    PUSH EAX                            ; 005608c2 | DAT_02d81cc8
    PUSH 0x643442                       ; 005608c3 | = "%d\n"
    PUSH EDI                            ; 005608c8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005608c9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005608ce
    CMP dword ptr [ESP + 0x100],0x3     ; 005608d1
        ;   Label: LAB_005608d1
    JL 0x00560907                       ; 005608d9
        ;   XREF to: 00560907 (CONDITIONAL_JUMP)  ; LAB_00560907
    PUSH EDI                            ; 005608db
    PUSH 0xff                           ; 005608dc
    LEA EAX,[ESP + 0x8]                 ; 005608e1
    PUSH EAX                            ; 005608e5
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005608e6
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV EAX,[0x0067b654]                ; 005608eb | g_CGamePtr
    ADD ESP,0xc                         ; 005608f0
    ADD EAX,0x230                       ; 005608f3
    PUSH EAX                            ; 005608f8 | DAT_02d81ccc
    PUSH 0x643446                       ; 005608f9 | = "%d\n"
    PUSH EDI                            ; 005608fe
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005608ff
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560904
    PUSH EDI                            ; 00560907
        ;   Label: LAB_00560907
    PUSH 0xff                           ; 00560908
    LEA EAX,[ESP + 0x8]                 ; 0056090d
    PUSH EAX                            ; 00560911
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560912
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560917
    PUSH 0x310f4a0                      ; 0056091a | g_ScriptTimeScale
    PUSH 0x64344a                       ; 0056091f | = "%g\n"
    PUSH EDI                            ; 00560924
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560925
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056092a
    PUSH EDI                            ; 0056092d
    PUSH 0xff                           ; 0056092e
    LEA EAX,[ESP + 0x8]                 ; 00560933
    PUSH EAX                            ; 00560937
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560938
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0056093d
    LEA EAX,[EBP + 0x48]                ; 00560940
    PUSH EAX                            ; 00560943
    PUSH 0x64344e                       ; 00560944 | = "%d\n"
    PUSH EDI                            ; 00560949
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056094a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056094f
    PUSH EDI                            ; 00560952
    PUSH 0xff                           ; 00560953
    LEA EAX,[ESP + 0x8]                 ; 00560958
    PUSH EAX                            ; 0056095c
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0056095d
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560962
    LEA EBX,[EBP + 0x54]                ; 00560965
    PUSH EBX                            ; 00560968
    PUSH 0x643452                       ; 00560969 | = "\"%[^\"]"
    PUSH EDI                            ; 0056096e
    MOV byte ptr [EBP + 0x54],0x0       ; 0056096f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560973
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560978
    PUSH EBX                            ; 0056097b
    PUSH 0x643459                       ; 0056097c | = "\"\n"
    PUSH EDI                            ; 00560981
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560982
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560987
    PUSH EDI                            ; 0056098a
    PUSH 0xff                           ; 0056098b
    LEA EAX,[ESP + 0x8]                 ; 00560990
    PUSH EAX                            ; 00560994
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560995
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0056099a
    LEA EAX,[EBP + 0x4c]                ; 0056099d
    PUSH EAX                            ; 005609a0
    PUSH 0x64345c                       ; 005609a1 | = "%g\n"
    PUSH EDI                            ; 005609a6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005609a7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005609ac
    PUSH EDI                            ; 005609af
    PUSH 0xff                           ; 005609b0
    LEA EAX,[ESP + 0x8]                 ; 005609b5
    PUSH EAX                            ; 005609b9
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005609ba
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005609bf
    LEA EAX,[EBP + 0x50]                ; 005609c2
    PUSH EAX                            ; 005609c5
    PUSH 0x643460                       ; 005609c6 | = "%g\n"
    PUSH EDI                            ; 005609cb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005609cc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005609d1
    PUSH EDI                            ; 005609d4
    PUSH 0xff                           ; 005609d5
    LEA EAX,[ESP + 0x8]                 ; 005609da
    PUSH EAX                            ; 005609de
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005609df
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005609e4
    LEA EAX,[EBP + 0x4]                 ; 005609e7
    PUSH EAX                            ; 005609ea
    PUSH EDI                            ; 005609eb
    CALL core_script.cpp_readActorReference_FUN_00560760 ; 005609ec
        ;   XREF to: 00560760 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_00560760(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 005609f1
    PUSH EDI                            ; 005609f4
    PUSH 0xff                           ; 005609f5
    LEA EAX,[ESP + 0x8]                 ; 005609fa
    PUSH EAX                            ; 005609fe
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005609ff
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560a04
    LEA EAX,[EBP + 0xc]                 ; 00560a07
    PUSH EAX                            ; 00560a0a
    PUSH EDI                            ; 00560a0b
    CALL core_script.cpp_readActorReference_FUN_00560760 ; 00560a0c
        ;   XREF to: 00560760 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_00560760(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 00560a11
    CMP dword ptr [ESP + 0x100],0x5     ; 00560a14
    JL 0x00560a43                       ; 00560a1c
        ;   XREF to: 00560a43 (CONDITIONAL_JUMP)  ; LAB_00560a43
    PUSH EDI                            ; 00560a1e
    PUSH 0xff                           ; 00560a1f
    LEA EAX,[ESP + 0x8]                 ; 00560a24
    PUSH EAX                            ; 00560a28
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560a29
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560a2e
    LEA EAX,[EBP + 0x14]                ; 00560a31
    PUSH EAX                            ; 00560a34
    PUSH 0x643464                       ; 00560a35 | = "%d\n"
    PUSH EDI                            ; 00560a3a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560a3b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560a40
    CMP dword ptr [ESP + 0x100],0x4     ; 00560a43
        ;   Label: LAB_00560a43
    JL 0x00560ab0                       ; 00560a4b
        ;   XREF to: 00560ab0 (CONDITIONAL_JUMP)  ; LAB_00560ab0
    PUSH EDI                            ; 00560a4d
    PUSH 0xff                           ; 00560a4e
    LEA EAX,[ESP + 0x8]                 ; 00560a53
    PUSH EAX                            ; 00560a57
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560a58
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560a5d
    LEA EAX,[EBP + 0x45c]               ; 00560a60
    PUSH EAX                            ; 00560a66
    PUSH 0x643468                       ; 00560a67 | = "%d\n"
    PUSH EDI                            ; 00560a6c
    XOR ESI,ESI                         ; 00560a6d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560a6f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EBX,dword ptr [EBP + 0x45c]     ; 00560a74
    ADD ESP,0xc                         ; 00560a7a
    TEST EBX,EBX                        ; 00560a7d
    JLE 0x00560ab0                      ; 00560a7f
        ;   XREF to: 00560ab0 (CONDITIONAL_JUMP)  ; LAB_00560ab0
    LEA EBX,[EBP + 0x460]               ; 00560a81
    PUSH EBX                            ; 00560a87
        ;   Label: LAB_00560a87
    PUSH 0x64346c                       ; 00560a88 | = "%d\n"
    PUSH EDI                            ; 00560a8d
    INC ESI                             ; 00560a8e
    ADD EBX,0x4                         ; 00560a8f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560a92
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x45c]     ; 00560a97
    ADD ESP,0xc                         ; 00560a9d
    CMP ESI,EAX                         ; 00560aa0
    JL 0x00560a87                       ; 00560aa2
        ;   XREF to: 00560a87 (CONDITIONAL_JUMP)  ; LAB_00560a87
    LEA EAX,[EAX]                       ; 00560aa4
    LEA EDX,[EDX]                       ; 00560aaa
    CMP dword ptr [ESP + 0x100],0x6     ; 00560ab0
        ;   Label: LAB_00560ab0
    JGE 0x00560aed                      ; 00560ab8
        ;   XREF to: 00560aed (CONDITIONAL_JUMP)  ; LAB_00560aed
    ADD ESP,0x108                       ; 00560aba
        ;   Label: LAB_00560aba
    POP EBP                             ; 00560ac0
    POP EDI                             ; 00560ac1
    POP ESI                             ; 00560ac2
    POP EBX                             ; 00560ac3
    RET                                 ; 00560ac4
    MOV ECX,0x6433f6                    ; 00560ac5 | = "..\\core\\script.cpp"
        ;   Label: LAB_00560ac5
    MOV EBX,0xf56                       ; 00560aca
    PUSH 0x643409                       ; 00560acf | = "CScript::loadState - file version is ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00560ad4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00560ada | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00560ae0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00560ae5
    JMP 0x0056086f                      ; 00560ae8
        ;   XREF to: 0056086f (UNCONDITIONAL_JUMP)  ; LAB_0056086f
    PUSH EDI                            ; 00560aed
        ;   Label: LAB_00560aed
    PUSH 0xff                           ; 00560aee
    LEA EAX,[ESP + 0x8]                 ; 00560af3
    PUSH EAX                            ; 00560af7
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00560af8
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00560afd
    LEA EAX,[ESP + 0x104]               ; 00560b00
    PUSH EAX                            ; 00560b07
    PUSH 0x643470                       ; 00560b08 | = "%u\n"
    PUSH EDI                            ; 00560b0d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560b0e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00560b13
    PUSH EBP                            ; 00560b16
    CALL core_script.cpp_CScript_computeChecksum_FUN_00560d80 ; 00560b17
        ;   XREF to: 00560d80 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_00560d80(CScript * this_ptr)
    ADD ESP,0x4                         ; 00560b1c
    CMP EAX,dword ptr [ESP + 0x104]     ; 00560b1f
    JZ 0x00560aba                       ; 00560b26
        ;   XREF to: 00560aba (CONDITIONAL_JUMP)  ; LAB_00560aba
    PUSH 0x643474                       ; 00560b28 | = "The script you were using when this g..."
    MOV EBX,dword ptr [0x00678a60]      ; 00560b2d | g_CEditorToolsPtr
    PUSH EBX                            ; 00560b33 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 00560b34
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00560b39
    ADD ESP,0x108                       ; 00560b3c
    POP EBP                             ; 00560b42
    POP EDI                             ; 00560b43
    POP ESI                             ; 00560b44
    POP EBX                             ; 00560b45
    RET                                 ; 00560b46

