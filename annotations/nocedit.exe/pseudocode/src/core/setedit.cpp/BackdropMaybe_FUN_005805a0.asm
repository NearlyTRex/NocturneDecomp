; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_setedit_cpp_BackdropMaybe_FUN_005805a0(void)
;
; Local Variables:
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x74]:1  local_74
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579502
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580df7
;
; Referenced Globals:
;   TerminatedCString s_backdrop_s_fog_006485b2
;   TerminatedCString s_backdrop_s_pvs_006485c2
;   TerminatedCString s_core_setedit_cpp_006485d2
;   TerminatedCString s_Computing_fog_pvs_d_of_d_006485e6
;   TerminatedCString s_Not_all_fog_files_were_c_00648618
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   CGame g_CGameInstance
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_game.cpp_CGame_setGameRes_FUN_004dade0
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
;   core_set.cpp_CDemonSet_FUN_0056c1a0
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005805a0
        ;   Label: core_setedit.cpp_BackdropMaybe_FUN_005805a0
    PUSH ESI                            ; 005805a1
    PUSH EDI                            ; 005805a2
    PUSH EBP                            ; 005805a3
    SUB ESP,0x164                       ; 005805a4
    MOV ESI,dword ptr [ESP + 0x178]     ; 005805aa
    MOV ECX,dword ptr [ESI]             ; 005805b1
    XOR EDX,EDX                         ; 005805b3
    XOR EBP,EBP                         ; 005805b5
    MOV dword ptr [0x02d807a4],EDX      ; 005805b7 | g_CDemonLightInstance.light_enabled_flag
    TEST ECX,ECX                        ; 005805bd
    JLE 0x0058064a                      ; 005805bf
        ;   XREF to: 0058064a (CONDITIONAL_JUMP)  ; LAB_0058064a
    LEA EDI,[ESI + 0x4]                 ; 005805c5
    MOV EBX,ESI                         ; 005805c8
    PUSH EDI                            ; 005805ca
        ;   Label: LAB_005805ca
    PUSH 0x6485b2                       ; 005805cb | = "backdrop\\%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 005805d0
    PUSH EAX                            ; 005805d4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005805d5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005805da
    MOV EAX,ESP                         ; 005805dd
    PUSH EAX                            ; 005805df
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 005805e0
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 005805e5
    PUSH EDI                            ; 005805e8
    PUSH 0x6485c2                       ; 005805e9 | = "backdrop\\%s.pvs"
    LEA EAX,[ESP + 0x8]                 ; 005805ee
    PUSH EAX                            ; 005805f2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005805f3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005805f8
    MOV EAX,ESP                         ; 005805fb
    PUSH EAX                            ; 005805fd
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 005805fe
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00580603
    MOV EAX,dword ptr [EBX + 0x19c]     ; 00580606
    MOV dword ptr [EBX + 0x198],0x0     ; 0058060c
    TEST EAX,EAX                        ; 00580616
    JZ 0x00580637                       ; 00580618
        ;   XREF to: 00580637 (CONDITIONAL_JUMP)  ; LAB_00580637
    PUSH 0x1059                         ; 0058061a
    PUSH 0x6485d2                       ; 0058061f | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 00580624
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00580625
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0058062a
    MOV dword ptr [EBX + 0x19c],0x0     ; 0058062d
    ADD EBX,0x1a4                       ; 00580637
        ;   Label: LAB_00580637
    INC EBP                             ; 0058063d
    MOV EAX,dword ptr [ESI]             ; 0058063e
    ADD EDI,0x1a4                       ; 00580640
    CMP EBP,EAX                         ; 00580646
    JL 0x005805ca                       ; 00580648
        ;   XREF to: 005805ca (CONDITIONAL_JUMP)  ; LAB_005805ca
    MOV EDX,dword ptr [0x0067b654]      ; 0058064a | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_0058064a
    PUSH EDX                            ; 00580650 | g_CGameInstance
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 00580651
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00580656
    PUSH ESI                            ; 00580659
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0058065a
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058065f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00580662
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [ESI]             ; 00580667
    XOR EBX,EBX                         ; 00580669
    TEST ECX,ECX                        ; 0058066b
    JLE 0x005806ec                      ; 0058066d
        ;   XREF to: 005806ec (CONDITIONAL_JUMP)  ; LAB_005806ec
    PUSH EBX                            ; 00580673
        ;   Label: LAB_00580673
    PUSH ESI                            ; 00580674
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 00580675
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0058067a
    PUSH 0x0                            ; 0058067d
    PUSH ESI                            ; 0058067f
    CALL core_set.cpp_CDemonSet_FUN_0056c1a0 ; 00580680
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00580685
    MOV EDI,dword ptr [ESI]             ; 00580688
    PUSH EDI                            ; 0058068a
    PUSH EBX                            ; 0058068b
    PUSH 0x6485e6                       ; 0058068c | = "Computing fog/pvs %d of %d.  Press ES..."
    LEA EAX,[ESP + 0x10c]               ; 00580691
    PUSH EAX                            ; 00580698
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00580699
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0058069e
    PUSH 0x1                            ; 005806a1
    PUSH 0x1                            ; 005806a3
    LEA EAX,[ESP + 0x108]               ; 005806a5
    PUSH EAX                            ; 005806ac
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005806ad
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 005806b2
    XOR EDI,EDI                         ; 005806b5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005806b7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 005806bc
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_005806bc
    TEST EAX,EAX                        ; 005806c1
    JZ 0x00580714                       ; 005806c3
        ;   XREF to: 00580714 (CONDITIONAL_JUMP)  ; LAB_00580714
    MOV EBP,dword ptr [0x0067cf44]      ; 005806c5 | g_CKeysPtr
    PUSH EBP                            ; 005806cb | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 005806cc
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 005806d1
    CMP EAX,0x1b                        ; 005806d4
    JNZ 0x005806bc                      ; 005806d7
        ;   XREF to: 005806bc (CONDITIONAL_JUMP)  ; LAB_005806bc
    PUSH 0x648618                       ; 005806d9 | = "Not all fog files were computed."
    MOV EAX,[0x00678a60]                ; 005806de | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005806e3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005806e4
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005806e9
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005806ec
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_005806ec
    PUSH ESI                            ; 005806f1
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 005806f2
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005806f7
    MOV EDX,dword ptr [0x0067b654]      ; 005806fa | g_CGameInstance | g_CGamePtr
    PUSH EDX                            ; 00580700 | g_CGameInstance
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 00580701
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00580706
    ADD ESP,0x164                       ; 00580709
    POP EBP                             ; 0058070f
    POP EDI                             ; 00580710
    POP ESI                             ; 00580711
    POP EBX                             ; 00580712
    RET                                 ; 00580713
    TEST EDI,EDI                        ; 00580714
        ;   Label: LAB_00580714
    JNZ 0x005806ec                      ; 00580716
        ;   XREF to: 005806ec (CONDITIONAL_JUMP)  ; LAB_005806ec
    INC EBX                             ; 00580718
    CMP EBX,dword ptr [ESI]             ; 00580719
    JL 0x00580673                       ; 0058071b
        ;   XREF to: 00580673 (CONDITIONAL_JUMP)  ; LAB_00580673
    JMP 0x005806ec                      ; 00580721
        ;   XREF to: 005806ec (UNCONDITIONAL_JUMP)  ; LAB_005806ec

