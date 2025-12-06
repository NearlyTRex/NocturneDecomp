; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_editorAction_FUN_00564820()
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565722
;
; Referenced Globals:
;   void* switchdataD_005647d0 = 0056483f
;   TerminatedCString s_core_script_cpp_00643d82
;   TerminatedCString s_Hell_froze_00643d95
;   TerminatedCString s_core_script_cpp_00643da0
;   TerminatedCString s_core_script_cpp_00643db3
;   TerminatedCString s_Out_of_memory_00643dc6
;   TerminatedCString s_core_script_cpp_00643dd5
;   undefined1 DAT_00643de8
;   TerminatedCString s_core_script_cpp_00643de9
;   TerminatedCString s_Hell_froze_00643dfc
;   undefined1 DAT_00643e07
;   undefined1 DAT_00643e08
;   TerminatedCString s_core_script_cpp_00643e09
;   TerminatedCString s_CScript_editorAction_unk_00643e1c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   ... and 19 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_Unk18_FUN_005669a0
;   core_script.cpp_FUN_005644e0
;   core_script.cpp_FUN_00564500
;   core_script.cpp_FUN_00564560
;   core_script.cpp_FUN_00566230
;   core_script.cpp_FUN_00566390
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564820
        ;   Label: core_script.cpp_CScript_editorAction_FUN_00564820
    PUSH ESI                            ; 00564821
    PUSH EDI                            ; 00564822
    PUSH EBP                            ; 00564823
    SUB ESP,0x1c                        ; 00564824
    MOV EBP,dword ptr [ESP + 0x30]      ; 00564827
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056482b
    CMP EAX,0x12                        ; 0056482f
    JA 0x005650f2                       ; 00564832 | default
        ;   XREF to: 005650f2 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5647d0]  ; 00564838 | void * switchdataD_005647d0
        ;   Label: switchD
    MOV EDI,dword ptr [0x0310fd44]      ; 0056483f | undefined4 DAT_0310fd44
        ;   Label: caseD_0
    TEST EDI,EDI                        ; 00564845
    JLE 0x005648c7                      ; 00564847 | LAB_005648c7
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0056484d
    MOV EDX,dword ptr [0x0310fd48]      ; 0056484e | undefined4 DAT_0310fd48
    PUSH EDX                            ; 00564854
    PUSH EBP                            ; 00564855
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564856 | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056485b
    MOV EBX,EAX                         ; 0056485e
    CMP EAX,0x1                         ; 00564860
    JGE 0x00564889                      ; 00564863 | LAB_00564889
        ;   XREF to: 00564889 (CONDITIONAL_JUMP)
    MOV ECX,0x643d82                    ; 00564865 | = "..\\core\\script.cpp" | s_core_script_cpp_00643d82 = ..\core\script.cpp
    MOV EAX,0x643d95                    ; 0056486a | = "Hell froze" | s_Hell_froze_00643d95 = Hell froze
    MOV ESI,0x16c1                      ; 0056486f
    PUSH EAX                            ; 00564874 | = "Hell froze" | s_Hell_froze_00643d95 = Hell froze
    MOV dword ptr [0x02f0ca48],ECX      ; 00564875 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0056487b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564881 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564886
    MOV EDI,dword ptr [0x0310fd48]      ; 00564889 | undefined4 DAT_0310fd48
        ;   Label: LAB_00564889
    PUSH EDI                            ; 0056488f
    PUSH EBP                            ; 00564890
    CALL core_script.cpp_FUN_00566230   ; 00564891 | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0310fd44]                ; 00564896 | undefined4 DAT_0310fd44
    ADD ESP,0x8                         ; 0056489b
    DEC EAX                             ; 0056489e
    MOV EDI,0x31101c0                   ; 0056489f | undefined1 DAT_031101c0
    MOV [0x0310fd44],EAX                ; 005648a4 | undefined4 DAT_0310fd44
    SUB ECX,ECX                         ; 005648a9
    DEC ECX                             ; 005648ab
    XOR EAX,EAX                         ; 005648ac
    SCASB.REPNE ES:EDI                  ; 005648ae | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 005648b0
    DEC ECX                             ; 005648b2
    CMP EBX,ECX                         ; 005648b3
    JA 0x005648c7                       ; 005648b5 | LAB_005648c7
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x31101bf],0x9  ; 005648b7 | DAT_031101bf
    JNZ 0x005648c7                      ; 005648be | LAB_005648c7
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)
    AND byte ptr [0x0310fd44],0xf8      ; 005648c0 | undefined4 DAT_0310fd44
    PUSH EBP                            ; 005648c7
        ;   Label: LAB_005648c7
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 005648c8 | undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
        ;   Label: LAB_005648c8
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005648cd
    PUSH EBP                            ; 005648d0
    CALL core_script.cpp_CScript_Unk18_FUN_005669a0 ; 005648d1 | undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005648d6
    ADD ESP,0x1c                        ; 005648d9
        ;   Label: caseD_b
    POP EBP                             ; 005648dc
    POP EDI                             ; 005648dd
    POP ESI                             ; 005648de
    POP EBX                             ; 005648df
    RET                                 ; 005648e0
    MOV ESI,dword ptr [0x0310fd44]      ; 005648e1 | undefined4 DAT_0310fd44
        ;   Label: caseD_1
    INC ESI                             ; 005648e7
    PUSH EBP                            ; 005648e8
    MOV dword ptr [0x0310fd44],ESI      ; 005648e9 | undefined4 DAT_0310fd44
    JMP 0x005648c8                      ; 005648ef | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x0310fd48]      ; 005648f1 | undefined4 DAT_0310fd48
        ;   Label: caseD_2
    DEC EBX                             ; 005648f7
    PUSH EBP                            ; 005648f8
    MOV dword ptr [0x0310fd48],EBX      ; 005648f9 | undefined4 DAT_0310fd48
    JMP 0x005648c8                      ; 005648ff | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0310fd48]      ; 00564901 | undefined4 DAT_0310fd48
        ;   Label: caseD_3
    INC ECX                             ; 00564907
    PUSH EBP                            ; 00564908
    MOV dword ptr [0x0310fd48],ECX      ; 00564909 | undefined4 DAT_0310fd48
    JMP 0x005648c8                      ; 0056490f | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0310fce0]                ; 00564911 | undefined4 DAT_0310fce0
        ;   Label: caseD_4
    MOV EDI,dword ptr [0x0310fd48]      ; 00564916 | undefined4 DAT_0310fd48
    MOV EDX,dword ptr [0x0310fcd8]      ; 0056491c | undefined4 DAT_0310fcd8
    PUSH EBP                            ; 00564922
    SUB EDI,EAX                         ; 00564923
    SUB EDX,EAX                         ; 00564925
    MOV dword ptr [0x0310fd48],EDI      ; 00564927 | undefined4 DAT_0310fd48
    MOV dword ptr [0x0310fcd8],EDX      ; 0056492d | undefined4 DAT_0310fcd8
    JMP 0x005648c8                      ; 00564933 | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0310fce0]                ; 00564935 | undefined4 DAT_0310fce0
        ;   Label: caseD_5
    MOV EBX,dword ptr [0x0310fd48]      ; 0056493a | undefined4 DAT_0310fd48
    MOV ESI,dword ptr [0x0310fcd8]      ; 00564940 | undefined4 DAT_0310fcd8
    PUSH EBP                            ; 00564946
    ADD EBX,EAX                         ; 00564947
    ADD ESI,EAX                         ; 00564949
    MOV dword ptr [0x0310fd48],EBX      ; 0056494b | undefined4 DAT_0310fd48
    MOV dword ptr [0x0310fcd8],ESI      ; 00564951 | undefined4 DAT_0310fcd8
    JMP 0x005648c8                      ; 00564957 | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0056495c
        ;   Label: caseD_6
    PUSH EBP                            ; 0056495e
    MOV dword ptr [0x0310fd44],ECX      ; 0056495f | undefined4 DAT_0310fd44
    JMP 0x005648c8                      ; 00564965 | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0310fd48],0x0      ; 0056496a | undefined4 DAT_0310fd48
        ;   Label: caseD_7
    JGE 0x00564980                      ; 00564971 | LAB_00564980
        ;   XREF to: 00564980 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00564973
        ;   Label: LAB_00564973
    MOV dword ptr [0x0310fd44],EDX      ; 00564975 | undefined4 DAT_0310fd44
    JMP 0x005648c7                      ; 0056497b | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    LEA EBX,[EBP + 0x38]                ; 00564980
        ;   Label: LAB_00564980
    PUSH EBX                            ; 00564983
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564984 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x0310fd48]      ; 00564989 | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 0056498f
    CMP EAX,ESI                         ; 00564992
    JLE 0x00564973                      ; 00564994 | LAB_00564973
        ;   XREF to: 00564973 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00564996
    PUSH EBX                            ; 00564997
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564998 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056499d
    MOV EDI,EAX                         ; 005649a0
    SUB ECX,ECX                         ; 005649a2
    DEC ECX                             ; 005649a4
    XOR EAX,EAX                         ; 005649a5
    SCASB.REPNE ES:EDI                  ; 005649a7
    NOT ECX                             ; 005649a9
    DEC ECX                             ; 005649ab
    PUSH ECX                            ; 005649ac
    MOV EAX,[0x0310fd48]                ; 005649ad | undefined4 DAT_0310fd48
    PUSH EAX                            ; 005649b2
    PUSH EBP                            ; 005649b3
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 005649b4 | undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005649b9
    MOV [0x0310fd44],EAX                ; 005649bc | undefined4 DAT_0310fd44
    JMP 0x005648c7                      ; 005649c1 | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005649c6
        ;   Label: caseD_8
    PUSH EBP                            ; 005649c8
    MOV dword ptr [0x0310fd48],EDX      ; 005649c9 | undefined4 DAT_0310fd48
    MOV dword ptr [0x0310fd44],EDX      ; 005649cf | undefined4 DAT_0310fd44
    JMP 0x005648c8                      ; 005649d5 | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x38]                ; 005649da
        ;   Label: caseD_9
    PUSH EAX                            ; 005649dd
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 005649de | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    INC EAX                             ; 005649e3
    ADD ESP,0x4                         ; 005649e4
    MOV [0x0310fd48],EAX                ; 005649e7 | undefined4 DAT_0310fd48
    XOR EAX,EAX                         ; 005649ec
    PUSH EBP                            ; 005649ee
    MOV [0x0310fd44],EAX                ; 005649ef | undefined4 DAT_0310fd44
    JMP 0x005648c8                      ; 005649f4 | LAB_005648c8
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 005649f9
        ;   Label: caseD_c
    PUSH 0xd                            ; 005649fb
    PUSH EBP                            ; 005649fd
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005649fe | undefined core_script.cpp_CScript_editorAction_FUN_00564820()
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564a03
    PUSH 0x0                            ; 00564a06
    PUSH 0xf                            ; 00564a08
    PUSH EBP                            ; 00564a0a
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00564a0b | undefined core_script.cpp_CScript_editorAction_FUN_00564820()
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564a10
    ADD ESP,0x1c                        ; 00564a13
    POP EBP                             ; 00564a16
    POP EDI                             ; 00564a17
    POP ESI                             ; 00564a18
    POP EBX                             ; 00564a19
    RET                                 ; 00564a1a
    CALL core_script.cpp_FUN_00564500   ; 00564a1b | undefined core_script.cpp_FUN_00564500()
        ;   Label: caseD_d
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x031141c4]      ; 00564a20 | undefined4 DAT_031141c4
    TEST EDX,EDX                        ; 00564a26
    JL 0x005648d9                       ; 00564a28 | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    CMP dword ptr [0x031141c0],0x0      ; 00564a2e | undefined4 DAT_031141c0
    JL 0x005648d9                       ; 00564a35 | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x031141cc]      ; 00564a3b | undefined4 DAT_031141cc
    XOR EBX,EBX                         ; 00564a41
    XOR ESI,ESI                         ; 00564a43
    MOV dword ptr [ESP + 0x18],EBX      ; 00564a45
    MOV EBX,EDX                         ; 00564a49
    CMP EDX,EDI                         ; 00564a4b
    JG 0x00564b4e                       ; 00564a4d | LAB_00564b4e
        ;   XREF to: 00564b4e (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4]                 ; 00564a53
        ;   Label: LAB_00564a53
    PUSH EAX                            ; 00564a57
    LEA EAX,[ESP + 0x4]                 ; 00564a58
    PUSH EAX                            ; 00564a5c
    PUSH EBX                            ; 00564a5d
    CALL core_script.cpp_FUN_00564560   ; 00564a5e | undefined core_script.cpp_FUN_00564560()
        ;   XREF to: 00564560 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564a63
    MOV EDI,dword ptr [ESP]             ; 00564a66
    PUSH EDI                            ; 00564a69
    PUSH EBX                            ; 00564a6a
    PUSH EBP                            ; 00564a6b
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564a6c | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564a71
    MOV dword ptr [ESP],EAX             ; 00564a74
    MOV EAX,dword ptr [ESP + 0x4]       ; 00564a77
    PUSH EAX                            ; 00564a7b
    PUSH EBX                            ; 00564a7c
    PUSH EBP                            ; 00564a7d
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564a7e | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564a83
    PUSH EBX                            ; 00564a86
    PUSH EBP                            ; 00564a87
    MOV dword ptr [ESP + 0xc],EAX       ; 00564a88
    CALL core_script.cpp_FUN_00566230   ; 00564a8c | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564a91
    MOV EDI,0x31101c0                   ; 00564a94 | undefined1 DAT_031101c0
    SUB ECX,ECX                         ; 00564a99
    DEC ECX                             ; 00564a9b
    XOR EAX,EAX                         ; 00564a9c
    SCASB.REPNE ES:EDI                  ; 00564a9e | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00564aa0
    DEC ECX                             ; 00564aa2
    CMP dword ptr [ESP],0x0             ; 00564aa3
    JL 0x00564b97                       ; 00564aa7 | LAB_00564b97
        ;   XREF to: 00564b97 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [ESP + 0x4]       ; 00564aad
        ;   Label: LAB_00564aad
    JGE 0x00564ab7                      ; 00564ab1 | LAB_00564ab7
        ;   XREF to: 00564ab7 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],ECX       ; 00564ab3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00564ab7
        ;   Label: LAB_00564ab7
    MOV EDX,dword ptr [ESP]             ; 00564abb
    ADD EAX,ESI                         ; 00564abe
    PUSH 0x172e                         ; 00564ac0
    SUB EAX,EDX                         ; 00564ac5
    PUSH 0x643da0                       ; 00564ac7 | = "..\\core\\script.cpp" | s_core_script_cpp_00643da0 = ..\core\script.cpp
    INC EAX                             ; 00564acc
    PUSH EAX                            ; 00564acd
    MOV EDI,dword ptr [ESP + 0x24]      ; 00564ace
    PUSH EDI                            ; 00564ad2
    MOV dword ptr [ESP + 0x1c],EAX      ; 00564ad3
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00564ad7 | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00564adc
    MOV dword ptr [ESP + 0x18],EAX      ; 00564adf
    TEST EAX,EAX                        ; 00564ae3
    JNZ 0x00564b09                      ; 00564ae5 | LAB_00564b09
        ;   XREF to: 00564b09 (CONDITIONAL_JUMP)
    MOV EAX,0x643db3                    ; 00564ae7 | = "..\\core\\script.cpp" | s_core_script_cpp_00643db3 = ..\core\script.cpp
    MOV EDX,0x172f                      ; 00564aec
    PUSH 0x643dc6                       ; 00564af1 | = "Out of memory!" | s_Out_of_memory_00643dc6 = Out of memory!
    MOV [0x02f0ca48],EAX                ; 00564af6 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00564afb | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564b01 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564b06
    MOV ECX,dword ptr [ESP + 0x4]       ; 00564b09
        ;   Label: LAB_00564b09
    MOV EDI,dword ptr [ESP]             ; 00564b0d
    MOV EAX,0x31101c0                   ; 00564b10 | undefined1 DAT_031101c0
    SUB ECX,EDI                         ; 00564b15
    ADD EAX,EDI                         ; 00564b17
    MOV EDI,dword ptr [ESP + 0x18]      ; 00564b19
    ADD EDI,ESI                         ; 00564b1d
    MOV ESI,EAX                         ; 00564b1f
    PUSH EDI                            ; 00564b21
    MOV EAX,ECX                         ; 00564b22
    SHR ECX,0x2                         ; 00564b24
    MOVSD.REP ES:EDI,ESI                ; 00564b27 | undefined1 DAT_031101c0 | DAT_031101c4
    MOV CL,AL                           ; 00564b29
    AND CL,0x3                          ; 00564b2b
    MOVSB.REP ES:EDI,ESI                ; 00564b2e | undefined1 DAT_031101c0 | DAT_031101c4
    POP EDI                             ; 00564b30
    MOV ESI,dword ptr [ESP + 0xc]       ; 00564b31
    MOV EAX,dword ptr [ESP + 0x18]      ; 00564b35
    ADD EAX,ESI                         ; 00564b39
    INC EBX                             ; 00564b3b
    MOV EDI,dword ptr [0x031141cc]      ; 00564b3c | undefined4 DAT_031141cc
    MOV byte ptr [EAX + -0x1],0xa       ; 00564b42
    CMP EBX,EDI                         ; 00564b46
    JLE 0x00564a53                      ; 00564b48 | LAB_00564a53
        ;   XREF to: 00564a53 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x18]      ; 00564b4e
        ;   Label: LAB_00564b4e
    TEST EBP,EBP                        ; 00564b52
    JZ 0x00564b5c                       ; 00564b54 | LAB_00564b5c
        ;   XREF to: 00564b5c (CONDITIONAL_JUMP)
    ADD ESI,EBP                         ; 00564b56
    MOV byte ptr [ESI + -0x1],0x0       ; 00564b58
    MOV EDX,dword ptr [ESP + 0x18]      ; 00564b5c
        ;   Label: LAB_00564b5c
    PUSH EDX                            ; 00564b60
    MOV ECX,dword ptr [0x00678a60]      ; 00564b61 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00564b67 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 00564b68 | void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564b6d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00564b70
    TEST EBX,EBX                        ; 00564b74
    JZ 0x005648d9                       ; 00564b76 | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    PUSH 0x173c                         ; 00564b7c
    PUSH 0x643dd5                       ; 00564b81 | = "..\\core\\script.cpp" | s_core_script_cpp_00643dd5 = ..\core\script.cpp
    PUSH EBX                            ; 00564b86
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00564b87 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564b8c
    ADD ESP,0x1c                        ; 00564b8f
    POP EBP                             ; 00564b92
    POP EDI                             ; 00564b93
    POP ESI                             ; 00564b94
    POP EBX                             ; 00564b95
    RET                                 ; 00564b96
    XOR EDI,EDI                         ; 00564b97
        ;   Label: LAB_00564b97
    MOV dword ptr [ESP],EDI             ; 00564b99
    JMP 0x00564aad                      ; 00564b9c | LAB_00564aad
        ;   XREF to: 00564aad (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00564ba1
        ;   Label: caseD_e
    PUSH 0xf                            ; 00564ba3
    PUSH EBP                            ; 00564ba5
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00564ba6 | undefined core_script.cpp_CScript_editorAction_FUN_00564820()
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564bab
    PUSH 0x1                            ; 00564bae
    MOV EAX,[0x00678a60]                ; 00564bb0 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00564bb5 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30 ; 00564bb6 | char * shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools * this_ptr)
        ;   XREF to: 004a1b30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564bbb
    PUSH EAX                            ; 00564bbe
    PUSH EBP                            ; 00564bbf
    CALL core_script.cpp_FUN_00566390   ; 00564bc0 | undefined core_script.cpp_FUN_00566390()
        ;   XREF to: 00566390 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564bc5
    ADD ESP,0x1c                        ; 00564bc8
    POP EBP                             ; 00564bcb
    POP EDI                             ; 00564bcc
    POP ESI                             ; 00564bcd
    POP EBX                             ; 00564bce
    RET                                 ; 00564bcf
    CALL core_script.cpp_FUN_00564500   ; 00564bd0 | undefined core_script.cpp_FUN_00564500()
        ;   Label: caseD_f
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x031141c4]      ; 00564bd5 | undefined4 DAT_031141c4
    TEST ESI,ESI                        ; 00564bdb
    JL 0x005648d9                       ; 00564bdd | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x031141c0]      ; 00564be3 | undefined4 DAT_031141c0
    TEST EDI,EDI                        ; 00564be9
    JL 0x005648d9                       ; 00564beb | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00564bf1
    PUSH ESI                            ; 00564bf2
    PUSH EBP                            ; 00564bf3
    MOV dword ptr [0x0310fd48],ESI      ; 00564bf4 | undefined4 DAT_0310fd48
    MOV dword ptr [0x0310fd44],EDI      ; 00564bfa | undefined4 DAT_0310fd44
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564c00 | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564c05
    MOV ECX,dword ptr [0x031141c8]      ; 00564c08 | undefined4 DAT_031141c8
    PUSH ECX                            ; 00564c0e
    MOV EBX,dword ptr [0x031141cc]      ; 00564c0f | undefined4 DAT_031141cc
    PUSH EBX                            ; 00564c15
    PUSH EBP                            ; 00564c16
    MOV [0x031141c0],EAX                ; 00564c17 | undefined4 DAT_031141c0
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564c1c | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564c21
    MOV ESI,dword ptr [0x031141c4]      ; 00564c24 | undefined4 DAT_031141c4
    PUSH ESI                            ; 00564c2a
    PUSH EBP                            ; 00564c2b
    MOV [0x031141c8],EAX                ; 00564c2c | undefined4 DAT_031141c8
    CALL core_script.cpp_FUN_00566230   ; 00564c31 | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564c36
    MOV EDI,0x31101c0                   ; 00564c39 | undefined1 DAT_031101c0
    SUB ECX,ECX                         ; 00564c3e
    DEC ECX                             ; 00564c40
    XOR EAX,EAX                         ; 00564c41
    SCASB.REPNE ES:EDI                  ; 00564c43 | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00564c45
    DEC ECX                             ; 00564c47
    MOV EDI,dword ptr [0x031141c0]      ; 00564c48 | undefined4 DAT_031141c0
    MOV EAX,ECX                         ; 00564c4e
    CMP ECX,EDI                         ; 00564c50
    JGE 0x00564c70                      ; 00564c52 | LAB_00564c70
        ;   XREF to: 00564c70 (CONDITIONAL_JUMP)
    MOV DL,0x20                         ; 00564c54
    MOV EBX,dword ptr [0x031141c0]      ; 00564c56 | undefined4 DAT_031141c0
    INC EAX                             ; 00564c5c
        ;   Label: LAB_00564c5c
    MOV byte ptr [EAX + 0x31101bf],DL   ; 00564c5d | undefined1 DAT_031101c0 | DAT_031101c1
    CMP EAX,EBX                         ; 00564c63
    JL 0x00564c5c                       ; 00564c65 | LAB_00564c5c
        ;   XREF to: 00564c5c (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00564c67
    LEA EDX,[EDX]                       ; 00564c6d
    LEA ESI,[EBP + 0x38]                ; 00564c70
        ;   Label: LAB_00564c70
    PUSH ESI                            ; 00564c73
    MOV EBX,0x643de8                    ; 00564c74 | undefined1 DAT_00643de8
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564c79 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x031141cc]      ; 00564c7e | undefined4 DAT_031141cc
    ADD ESP,0x4                         ; 00564c84
    CMP EAX,EDI                         ; 00564c87
    JLE 0x00564c97                      ; 00564c89 | LAB_00564c97
        ;   XREF to: 00564c97 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00564c8b
    PUSH ESI                            ; 00564c8c
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564c8d | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564c92
    MOV EBX,EAX                         ; 00564c95
    MOV EDI,EBX                         ; 00564c97
        ;   Label: LAB_00564c97
    SUB ECX,ECX                         ; 00564c99
    DEC ECX                             ; 00564c9b
    XOR EAX,EAX                         ; 00564c9c
    SCASB.REPNE ES:EDI                  ; 00564c9e | undefined1 DAT_00643de8
    NOT ECX                             ; 00564ca0
    DEC ECX                             ; 00564ca2
    MOV EDX,dword ptr [0x031141c8]      ; 00564ca3 | undefined4 DAT_031141c8
    MOV EAX,ECX                         ; 00564ca9
    CMP ECX,EDX                         ; 00564cab
    JGE 0x00564cb5                      ; 00564cad | LAB_00564cb5
        ;   XREF to: 00564cb5 (CONDITIONAL_JUMP)
    MOV dword ptr [0x031141c8],ECX      ; 00564caf | undefined4 DAT_031141c8
    MOV ECX,dword ptr [0x031141c8]      ; 00564cb5 | undefined4 DAT_031141c8
        ;   Label: LAB_00564cb5
    SUB EAX,ECX                         ; 00564cbb
    INC EAX                             ; 00564cbd
    MOV EDI,dword ptr [0x031141c0]      ; 00564cbe | undefined4 DAT_031141c0
    PUSH EAX                            ; 00564cc4
    ADD EBX,ECX                         ; 00564cc5
    MOV EAX,0x31101c0                   ; 00564cc7 | undefined1 DAT_031101c0
    PUSH EBX                            ; 00564ccc
    ADD EAX,EDI                         ; 00564ccd
    PUSH EAX                            ; 00564ccf
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564cd0 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564cd5
    MOV EAX,[0x031141c4]                ; 00564cd8 | undefined4 DAT_031141c4
    PUSH EAX                            ; 00564cdd
    PUSH EBP                            ; 00564cde
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564cdf | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564ce4
    LEA EBX,[EBP + 0x38]                ; 00564ce7
    PUSH EBX                            ; 00564cea
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564ceb | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x031141cc]      ; 00564cf0 | undefined4 DAT_031141cc
    ADD ESP,0x4                         ; 00564cf6
    CMP EAX,EDX                         ; 00564cf9
    JG 0x00564d0c                       ; 00564cfb | LAB_00564d0c
        ;   XREF to: 00564d0c (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00564cfd
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564cfe | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    DEC EAX                             ; 00564d03
    ADD ESP,0x4                         ; 00564d04
    MOV [0x031141cc],EAX                ; 00564d07 | undefined4 DAT_031141cc
    MOV ECX,dword ptr [0x031141cc]      ; 00564d0c | undefined4 DAT_031141cc
        ;   Label: LAB_00564d0c
    MOV EAX,[0x031141c4]                ; 00564d12 | undefined4 DAT_031141c4
    CMP EAX,ECX                         ; 00564d17
    JGE 0x00564d2a                      ; 00564d19 | LAB_00564d2a
        ;   XREF to: 00564d2a (CONDITIONAL_JUMP)
    PUSH ECX                            ; 00564d1b
    INC EAX                             ; 00564d1c
    PUSH EAX                            ; 00564d1d
    LEA EAX,[EBP + 0x38]                ; 00564d1e
    PUSH EAX                            ; 00564d21
    CALL shape_edittool.cpp_CStrList_remove_FUN_004a2e00 ; 00564d22 | void shape_edittool.cpp_CStrList_remove_FUN_004a2e00(CStrList * this_ptr, int start_index, int end_index)
        ;   XREF to: 004a2e00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564d27
    CALL core_script.cpp_FUN_005644e0   ; 00564d2a | undefined core_script.cpp_FUN_005644e0()
        ;   Label: LAB_00564d2a
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)
    JMP 0x005648c7                      ; 00564d2f | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0310fd44]      ; 00564d34 | undefined4 DAT_0310fd44
        ;   Label: caseD_10
    TEST ECX,ECX                        ; 00564d3a
    JG 0x00564e46                       ; 00564d3c | LAB_00564e46
        ;   XREF to: 00564e46 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0310fd48],0x0      ; 00564d42 | undefined4 DAT_0310fd48
    JLE 0x005648c7                      ; 00564d49 | LAB_005648c7
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x38]                ; 00564d4f
    PUSH EAX                            ; 00564d52
    XOR EBX,EBX                         ; 00564d53
    MOV dword ptr [ESP + 0x18],EAX      ; 00564d55
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564d59 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x0310fd48]      ; 00564d5e | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 00564d64
    CMP EAX,EDI                         ; 00564d67
    JL 0x00564e24                       ; 00564d69 | LAB_00564e24
        ;   XREF to: 00564e24 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + -0x1]                ; 00564d6f
    PUSH EAX                            ; 00564d72
    PUSH EBP                            ; 00564d73
    CALL core_script.cpp_FUN_00566230   ; 00564d74 | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564d79
    MOV EDI,0x31101c0                   ; 00564d7c | undefined1 DAT_031101c0
    SUB ECX,ECX                         ; 00564d81
    DEC ECX                             ; 00564d83
    XOR EAX,EAX                         ; 00564d84
    SCASB.REPNE ES:EDI                  ; 00564d86 | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00564d88
    DEC ECX                             ; 00564d8a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00564d8b
    PUSH EAX                            ; 00564d8f
    MOV ESI,ECX                         ; 00564d90
    MOV EBX,ECX                         ; 00564d92
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564d94 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0310fd48]      ; 00564d99 | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 00564d9f
    CMP EAX,EDX                         ; 00564da2
    JLE 0x00564e24                      ; 00564da4 | LAB_00564e24
        ;   XREF to: 00564e24 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00564daa
    MOV EDI,dword ptr [ESP + 0x18]      ; 00564dab
    PUSH EDI                            ; 00564daf
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564db0 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564db5
    MOV EDI,EAX                         ; 00564db8
    MOV dword ptr [ESP + 0x10],EAX      ; 00564dba
    SUB ECX,ECX                         ; 00564dbe
    DEC ECX                             ; 00564dc0
    XOR EAX,EAX                         ; 00564dc1
    SCASB.REPNE ES:EDI                  ; 00564dc3
    NOT ECX                             ; 00564dc5
    DEC ECX                             ; 00564dc7
    MOV EDX,ECX                         ; 00564dc8
    ADD ECX,ESI                         ; 00564dca
    CMP ECX,0x4000                      ; 00564dcc
    JL 0x00564ddc                       ; 00564dd2 | LAB_00564ddc
        ;   XREF to: 00564ddc (CONDITIONAL_JUMP)
    MOV EDX,0x4000                      ; 00564dd4
    SUB EDX,ESI                         ; 00564dd9
    DEC EDX                             ; 00564ddb
    MOV EDI,0x31101c0                   ; 00564ddc | undefined1 DAT_031101c0
        ;   Label: LAB_00564ddc
    MOV ESI,dword ptr [ESP + 0x10]      ; 00564de1
    MOV ECX,EDX                         ; 00564de5
    ADD EDI,EBX                         ; 00564de7
    PUSH EDI                            ; 00564de9 | undefined1 DAT_031101c0
    MOV EAX,ECX                         ; 00564dea
    SHR ECX,0x2                         ; 00564dec
    MOVSD.REP ES:EDI,ESI                ; 00564def | undefined1 DAT_031101c0
    MOV CL,AL                           ; 00564df1
    AND CL,0x3                          ; 00564df3
    MOVSB.REP ES:EDI,ESI                ; 00564df6 | undefined1 DAT_031101c0 | DAT_031101c1
    POP EDI                             ; 00564df8
    XOR AH,AH                           ; 00564df9
    MOV byte ptr [EDX + EBX*0x1 + 0x31101c0],AH ; 00564dfb | undefined1 DAT_031101c0
    MOV EAX,[0x0310fd48]                ; 00564e02 | undefined4 DAT_0310fd48
    DEC EAX                             ; 00564e07
    PUSH EAX                            ; 00564e08
    PUSH EBP                            ; 00564e09
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564e0a | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564e0f
    MOV EAX,[0x0310fd48]                ; 00564e12 | undefined4 DAT_0310fd48
    PUSH EAX                            ; 00564e17
    LEA EAX,[EBP + 0x38]                ; 00564e18
    PUSH EAX                            ; 00564e1b
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 00564e1c | void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564e21
    MOV EDX,dword ptr [0x0310fd48]      ; 00564e24 | undefined4 DAT_0310fd48
        ;   Label: LAB_00564e24
    PUSH EBX                            ; 00564e2a
    DEC EDX                             ; 00564e2b
    PUSH EDX                            ; 00564e2c
    PUSH EBP                            ; 00564e2d
    MOV dword ptr [0x0310fd48],EDX      ; 00564e2e | undefined4 DAT_0310fd48
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00564e34 | undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564e39
    MOV [0x0310fd44],EAX                ; 00564e3c | undefined4 DAT_0310fd44
    JMP 0x005648c7                      ; 00564e41 | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    PUSH ECX                            ; 00564e46
        ;   Label: LAB_00564e46
    MOV ESI,dword ptr [0x0310fd48]      ; 00564e47 | undefined4 DAT_0310fd48
    PUSH ESI                            ; 00564e4d
    PUSH EBP                            ; 00564e4e
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564e4f | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564e54
    MOV EBX,EAX                         ; 00564e57
    CMP EAX,0x1                         ; 00564e59
    JGE 0x00564e80                      ; 00564e5c | LAB_00564e80
        ;   XREF to: 00564e80 (CONDITIONAL_JUMP)
    MOV EDI,0x643de9                    ; 00564e5e | = "..\\core\\script.cpp" | s_core_script_cpp_00643de9 = ..\core\script.cpp
    MOV EAX,0x177c                      ; 00564e63
    PUSH 0x643dfc                       ; 00564e68 | = "Hell froze" | s_Hell_froze_00643dfc = Hell froze
    MOV dword ptr [0x02f0ca48],EDI      ; 00564e6d | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00564e73 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564e78 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564e7d
    MOV EDX,dword ptr [0x0310fd48]      ; 00564e80 | undefined4 DAT_0310fd48
        ;   Label: LAB_00564e80
    PUSH EDX                            ; 00564e86
    PUSH EBP                            ; 00564e87
    CALL core_script.cpp_FUN_00566230   ; 00564e88 | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564e8d
    MOV EDI,0x31101c0                   ; 00564e90 | undefined1 DAT_031101c0
    DEC EBX                             ; 00564e95
    SUB ECX,ECX                         ; 00564e96
    DEC ECX                             ; 00564e98
    XOR EAX,EAX                         ; 00564e99
    SCASB.REPNE ES:EDI                  ; 00564e9b | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00564e9d
    DEC ECX                             ; 00564e9f
    CMP EBX,ECX                         ; 00564ea0
    JGE 0x00564ed0                      ; 00564ea2 | LAB_00564ed0
        ;   XREF to: 00564ed0 (CONDITIONAL_JUMP)
    SUB ECX,EBX                         ; 00564ea4
    LEA EAX,[EBX + 0x1]                 ; 00564ea6
    PUSH ECX                            ; 00564ea9
    ADD EAX,0x31101c0                   ; 00564eaa | undefined1 DAT_031101c0
    PUSH EAX                            ; 00564eaf
    MOV EAX,0x31101c0                   ; 00564eb0 | undefined1 DAT_031101c0
    ADD EAX,EBX                         ; 00564eb5
    PUSH EAX                            ; 00564eb7
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564eb8 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564ebd
    MOV ECX,dword ptr [0x0310fd48]      ; 00564ec0 | undefined4 DAT_0310fd48
    PUSH ECX                            ; 00564ec6
    PUSH EBP                            ; 00564ec7
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564ec8 | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564ecd
    PUSH EBX                            ; 00564ed0
        ;   Label: LAB_00564ed0
    MOV EBX,dword ptr [0x0310fd48]      ; 00564ed1 | undefined4 DAT_0310fd48
    PUSH EBX                            ; 00564ed7
    PUSH EBP                            ; 00564ed8
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00564ed9 | undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564ede
    MOV [0x0310fd44],EAX                ; 00564ee1 | undefined4 DAT_0310fd44
    JMP 0x005648c7                      ; 00564ee6 | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x38]                ; 00564eeb
        ;   Label: caseD_11
    PUSH EAX                            ; 00564eee
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564eef | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0310fd48]      ; 00564ef4 | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 00564efa
    CMP EAX,EDX                         ; 00564efd
    JLE 0x005648d9                      ; 00564eff | caseD_a
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00564f05
    PUSH EBP                            ; 00564f06
    CALL core_script.cpp_FUN_00566230   ; 00564f07 | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564f0c
    MOV EDI,0x31101c0                   ; 00564f0f | undefined1 DAT_031101c0
    SUB ECX,ECX                         ; 00564f14
    DEC ECX                             ; 00564f16
    XOR EAX,EAX                         ; 00564f17
    SCASB.REPNE ES:EDI                  ; 00564f19 | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00564f1b
    DEC ECX                             ; 00564f1d
    MOV ESI,dword ptr [0x0310fd44]      ; 00564f1e | undefined4 DAT_0310fd44
    PUSH ESI                            ; 00564f24
    MOV EAX,[0x0310fd48]                ; 00564f25 | undefined4 DAT_0310fd48
    PUSH EAX                            ; 00564f2a
    PUSH EBP                            ; 00564f2b
    MOV EBX,ECX                         ; 00564f2c
    MOV EDI,ECX                         ; 00564f2e
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564f30 | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    MOV ECX,EAX                         ; 00564f35
    ADD ESP,0xc                         ; 00564f37
    CMP EAX,EBX                         ; 00564f3a
    JL 0x00564fe6                       ; 00564f3c | LAB_00564fe6
        ;   XREF to: 00564fe6 (CONDITIONAL_JUMP)
    MOV CH,0x20                         ; 00564f42
    CMP EDI,EAX                         ; 00564f44
        ;   Label: LAB_00564f44
    JGE 0x00564f51                      ; 00564f46 | LAB_00564f51
        ;   XREF to: 00564f51 (CONDITIONAL_JUMP)
    INC EDI                             ; 00564f48
    MOV byte ptr [EDI + 0x31101bf],CH   ; 00564f49 | undefined1 DAT_031101c0 | DAT_031101c1
    JMP 0x00564f44                      ; 00564f4f | LAB_00564f44
        ;   XREF to: 00564f44 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0310fd48]                ; 00564f51 | undefined4 DAT_0310fd48
        ;   Label: LAB_00564f51
    LEA EBX,[EBP + 0x38]                ; 00564f56
    INC EAX                             ; 00564f59
    PUSH EBX                            ; 00564f5a
    MOV dword ptr [ESP + 0xc],EAX       ; 00564f5b
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564f5f | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564f64
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564f67
    MOV ESI,0x643e07                    ; 00564f6b | undefined1 DAT_00643e07
    CMP EAX,EDX                         ; 00564f70
    JLE 0x00564f86                      ; 00564f72 | LAB_00564f86
        ;   XREF to: 00564f86 (CONDITIONAL_JUMP)
    MOV EAX,[0x0310fd48]                ; 00564f74 | undefined4 DAT_0310fd48
    INC EAX                             ; 00564f79
    PUSH EAX                            ; 00564f7a
    PUSH EBX                            ; 00564f7b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564f7c | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564f81
    MOV ESI,EAX                         ; 00564f84
    ADD EDI,0x31101c0                   ; 00564f86 | undefined1 DAT_031101c0
        ;   Label: LAB_00564f86
    PUSH EDI                            ; 00564f8c | undefined1 DAT_031101c0 | DAT_031101c1
    MOV AL,byte ptr [ESI]               ; 00564f8d | undefined1 DAT_00643e07
        ;   Label: LAB_00564f8d
    MOV byte ptr [EDI],AL               ; 00564f8f | undefined1 DAT_031101c0 | DAT_031101c1
    CMP AL,0x0                          ; 00564f91
    JZ 0x00564fa5                       ; 00564f93 | LAB_00564fa5
        ;   XREF to: 00564fa5 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00564f95 | undefined1 DAT_00643e08
    ADD ESI,0x2                         ; 00564f98
    MOV byte ptr [EDI + 0x1],AL         ; 00564f9b | DAT_031101c2 | DAT_031101c4
    ADD EDI,0x2                         ; 00564f9e
    CMP AL,0x0                          ; 00564fa1
    JNZ 0x00564f8d                      ; 00564fa3 | LAB_00564f8d
        ;   XREF to: 00564f8d (CONDITIONAL_JUMP)
    POP EDI                             ; 00564fa5
        ;   Label: LAB_00564fa5
    MOV ECX,dword ptr [0x0310fd48]      ; 00564fa6 | undefined4 DAT_0310fd48
    PUSH ECX                            ; 00564fac
    PUSH EBP                            ; 00564fad
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564fae | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564fb3
    LEA EBX,[EBP + 0x38]                ; 00564fb6
    MOV ESI,dword ptr [0x0310fd48]      ; 00564fb9 | undefined4 DAT_0310fd48
    PUSH EBX                            ; 00564fbf
    INC ESI                             ; 00564fc0
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00564fc1 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00564fc6
    CMP ESI,EAX                         ; 00564fc9
    JGE 0x005648c7                      ; 00564fcb | LAB_005648c7
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)
    MOV EAX,[0x0310fd48]                ; 00564fd1 | undefined4 DAT_0310fd48
    INC EAX                             ; 00564fd6
    PUSH EAX                            ; 00564fd7
    PUSH EBX                            ; 00564fd8
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 00564fd9 | void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00564fde
    JMP 0x005648c7                      ; 00564fe1 | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    SUB EBX,EAX                         ; 00564fe6
        ;   Label: LAB_00564fe6
    INC EAX                             ; 00564fe8
    PUSH EBX                            ; 00564fe9
    ADD EAX,0x31101c0                   ; 00564fea | undefined1 DAT_031101c0
    PUSH EAX                            ; 00564fef
    ADD ECX,0x31101c0                   ; 00564ff0 | undefined1 DAT_031101c0
    PUSH ECX                            ; 00564ff6
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564ff7 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00564ffc
    MOV EDX,dword ptr [0x0310fd48]      ; 00564fff | undefined4 DAT_0310fd48
    PUSH EDX                            ; 00565005
    PUSH EBP                            ; 00565006
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00565007 | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056500c
    JMP 0x005648c7                      ; 0056500f | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0068105c]      ; 00565014 | undefined4 DAT_0068105c
        ;   Label: caseD_12
    TEST ESI,ESI                        ; 0056501a
    JNZ 0x00565039                      ; 0056501c | LAB_00565039
        ;   XREF to: 00565039 (CONDITIONAL_JUMP)
    CALL core_script.cpp_FUN_005644e0   ; 0056501e | undefined core_script.cpp_FUN_005644e0()
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0310fd48]                ; 00565023 | undefined4 DAT_0310fd48
    INC EAX                             ; 00565028
    MOV dword ptr [0x0310fd44],ESI      ; 00565029 | undefined4 DAT_0310fd44
    MOV [0x0310fd48],EAX                ; 0056502f | undefined4 DAT_0310fd48
    JMP 0x005648c7                      ; 00565034 | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00565039
        ;   Label: LAB_00565039
    PUSH 0xf                            ; 0056503b
    PUSH EBP                            ; 0056503d
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 0056503e | undefined core_script.cpp_CScript_editorAction_FUN_00564820()
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00565043
    LEA EDI,[EBP + 0x38]                ; 00565046
    PUSH EDI                            ; 00565049
        ;   Label: LAB_00565049
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 0056504a | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0310fd48]      ; 0056504f | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 00565055
    CMP EAX,EDX                         ; 00565058
    JG 0x0056506c                       ; 0056505a | LAB_0056506c
        ;   XREF to: 0056506c (CONDITIONAL_JUMP)
    PUSH 0x643e08                       ; 0056505c | undefined1 DAT_00643e08
    PUSH EDI                            ; 00565061
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00565062 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565067
    JMP 0x00565049                      ; 0056506a | LAB_00565049
        ;   XREF to: 00565049 (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 0056506c
        ;   Label: LAB_0056506c
    PUSH EBP                            ; 0056506d
    CALL core_script.cpp_FUN_00566230   ; 0056506e | undefined core_script.cpp_FUN_00566230()
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565073
    MOV EDI,0x31101c0                   ; 00565076 | undefined1 DAT_031101c0
    SUB ECX,ECX                         ; 0056507b
    DEC ECX                             ; 0056507d
    XOR EAX,EAX                         ; 0056507e
    SCASB.REPNE ES:EDI                  ; 00565080 | undefined1 DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 00565082
    DEC ECX                             ; 00565084
    MOV EBX,dword ptr [0x0310fd44]      ; 00565085 | undefined4 DAT_0310fd44
    PUSH EBX                            ; 0056508b
    MOV EDI,dword ptr [0x0310fd48]      ; 0056508c | undefined4 DAT_0310fd48
    PUSH EDI                            ; 00565092
    PUSH EBP                            ; 00565093
    MOV ESI,ECX                         ; 00565094
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565096 | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056509b
    MOV EBX,EAX                         ; 0056509e
    CMP EAX,ESI                         ; 005650a0
    JLE 0x005650a6                      ; 005650a2 | LAB_005650a6
        ;   XREF to: 005650a6 (CONDITIONAL_JUMP)
    MOV EBX,ESI                         ; 005650a4
    MOV EAX,0x31101c0                   ; 005650a6 | undefined1 DAT_031101c0
        ;   Label: LAB_005650a6
    ADD EAX,EBX                         ; 005650ab
    PUSH EAX                            ; 005650ad | undefined1 DAT_031101c0
    MOV EAX,[0x0310fd48]                ; 005650ae | undefined4 DAT_0310fd48
    INC EAX                             ; 005650b3
    PUSH EAX                            ; 005650b4
    LEA EAX,[EBP + 0x38]                ; 005650b5
    PUSH EAX                            ; 005650b8
    CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 ; 005650b9 | void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
        ;   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005650be
    MOV EAX,[0x0310fd48]                ; 005650c1 | undefined4 DAT_0310fd48
    PUSH EAX                            ; 005650c6
    XOR CL,CL                           ; 005650c7
    PUSH EBP                            ; 005650c9
    MOV byte ptr [EBX + 0x31101c0],CL   ; 005650ca | undefined1 DAT_031101c0
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 005650d0 | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0310fd48]      ; 005650d5 | undefined4 DAT_0310fd48
    ADD ESP,0x8                         ; 005650db
    XOR EDX,EDX                         ; 005650de
    INC ECX                             ; 005650e0
    MOV dword ptr [0x0310fd44],EDX      ; 005650e1 | undefined4 DAT_0310fd44
    MOV dword ptr [0x0310fd48],ECX      ; 005650e7 | undefined4 DAT_0310fd48
    JMP 0x005648c7                      ; 005650ed | LAB_005648c7
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x38]      ; 005650f2
        ;   Label: default
    PUSH EBX                            ; 005650f6
    PUSH EAX                            ; 005650f7
    MOV EDX,0x643e09                    ; 005650f8 | = "..\\core\\script.cpp" | s_core_script_cpp_00643e09 = ..\core\script.cpp
    MOV ECX,0x180d                      ; 005650fd
    PUSH 0x643e1c                       ; 00565102 | = "CScript::editorAction - unknown actio..." | s_CScript_editorAction_unk_00643e1c = CScript::editorAction - unknown action: %d parm %d
    MOV dword ptr [0x02f0ca48],EDX      ; 00565107 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0056510d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00565113 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00565118
    ADD ESP,0x1c                        ; 0056511b
    POP EBP                             ; 0056511e
    POP EDI                             ; 0056511f
    POP ESI                             ; 00565120
    POP EBX                             ; 00565121
    RET                                 ; 00565122

