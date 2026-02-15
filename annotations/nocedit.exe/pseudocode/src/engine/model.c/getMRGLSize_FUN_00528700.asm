; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_model_c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined1       Stack[-0x100]:1  local_100
;
; XREF[10]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407af0
;   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 at 004b556a
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 at 00502294
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 at 00501d71
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 at 0050238a
;   engine_model.c_byteswapMRGLData_FUN_00527e40 at 00527e50
;   engine_model.c_loadMRGLTextures_FUN_00528870 at 005288aa
;   engine_palette.cpp_CPaletteManager_FUN_00545060 at 005450e1
;   shape_design.c_findVertexListInModel_FUN_00468000 at 00468022
;   shape_design.c_getVertexCountFromModel_FUN_00468080 at 004680a2
;
; Referenced Globals:
;   void* switchdataD_005285ec = 0052871f
;   TerminatedCString s_MRGLSize_Bad_type_d_00639c36
;   TerminatedCString s_engine_model_c_00639c4e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00528700
        ;   Label: engine_model.c_getMRGLSize_FUN_00528700
    MOV EAX,dword ptr [ESP + 0x104]     ; 00528706
    MOV EDX,dword ptr [EAX]             ; 0052870d
    CMP EDX,0x42                        ; 0052870f
    JA 0x00528825                       ; 00528712
        ;   XREF to: 00528825 (CONDITIONAL_JUMP)  ; caseD_3c
    JMP dword ptr [EDX*0x4 + 0x5285ec]  ; 00528718 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4                         ; 0052871f
        ;   Label: caseD_0
    ADD ESP,0x100                       ; 00528724
    RET                                 ; 0052872a
    MOV EAX,0x10                        ; 0052872b
        ;   Label: caseD_1
    ADD ESP,0x100                       ; 00528730
    RET                                 ; 00528736
    MOV EDX,dword ptr [EAX + 0x8]       ; 00528737
        ;   Label: caseD_3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052873a
    SUB EAX,EDX                         ; 00528741
    SHL EAX,0x2                         ; 00528743
    ADD EAX,0xc                         ; 00528746
    ADD ESP,0x100                       ; 00528749
    RET                                 ; 0052874f
    MOV EAX,dword ptr [EAX + 0x8]       ; 00528750
        ;   Label: caseD_4
    SHL EAX,0x3                         ; 00528753
    ADD EAX,0xc                         ; 00528756
    ADD ESP,0x100                       ; 00528759
    RET                                 ; 0052875f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00528760
        ;   Label: caseD_3b
    SHL EAX,0x2                         ; 00528763
    ADD EAX,0x18                        ; 00528766
    ADD ESP,0x100                       ; 00528769
    RET                                 ; 0052876f
    MOV EAX,0x20                        ; 00528770
        ;   Label: caseD_9
    ADD ESP,0x100                       ; 00528775
    RET                                 ; 0052877b
    MOV EAX,0x8                         ; 0052877c
        ;   Label: caseD_3d
    ADD ESP,0x100                       ; 00528781
    RET                                 ; 00528787
    MOV EAX,0x1c                        ; 00528788
        ;   Label: caseD_c
    ADD ESP,0x100                       ; 0052878d
    RET                                 ; 00528793
    MOV EAX,0x18                        ; 00528794
        ;   Label: caseD_d
    ADD ESP,0x100                       ; 00528799
    RET                                 ; 0052879f
    MOV EAX,0x48                        ; 005287a0
        ;   Label: caseD_40
    ADD ESP,0x100                       ; 005287a5
    RET                                 ; 005287ab
    MOV EDX,dword ptr [EAX + 0x4]       ; 005287ac
        ;   Label: caseD_42
    LEA EAX,[EDX*0x4 + 0x0]             ; 005287af
    SUB EAX,EDX                         ; 005287b6
    SHL EAX,0x2                         ; 005287b8
    ADD EAX,0x18                        ; 005287bb
    ADD ESP,0x100                       ; 005287be
    RET                                 ; 005287c4
    MOV EAX,0x14                        ; 005287c5
        ;   Label: caseD_10
    ADD ESP,0x100                       ; 005287ca
    RET                                 ; 005287d0
    MOV EAX,dword ptr [EAX + 0x4]       ; 005287d1
        ;   Label: caseD_16
    SHL EAX,0x2                         ; 005287d4
    ADD EAX,0x8                         ; 005287d7
    ADD ESP,0x100                       ; 005287da
    RET                                 ; 005287e0
    MOV EAX,0xc                         ; 005287e1
        ;   Label: caseD_17
    ADD ESP,0x100                       ; 005287e6
    RET                                 ; 005287ec
    MOV EAX,dword ptr [EAX + 0x8]       ; 005287ed
        ;   Label: caseD_1d
    SHL EAX,0x5                         ; 005287f0
    ADD EAX,0x1c                        ; 005287f3
    ADD ESP,0x100                       ; 005287f6
    RET                                 ; 005287fc
    MOV EAX,dword ptr [EAX + 0x8]       ; 005287fd
        ;   Label: caseD_1f
    SHL EAX,0x2                         ; 00528800
    ADD EAX,0xc                         ; 00528803
    ADD ESP,0x100                       ; 00528806
    RET                                 ; 0052880c
    MOV EAX,0x158                       ; 0052880d
        ;   Label: caseD_20
    ADD ESP,0x100                       ; 00528812
    RET                                 ; 00528818
    MOV EAX,0x3d60                      ; 00528819
        ;   Label: caseD_26
    ADD ESP,0x100                       ; 0052881e
    RET                                 ; 00528824
    PUSH EDX                            ; 00528825
        ;   Label: caseD_3f
    PUSH 0x639c36                       ; 00528826 | = "MRGLSize: Bad type : %d"
    LEA EAX,[ESP + 0x8]                 ; 0052882b
    PUSH EAX                            ; 0052882f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00528830
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x639c4e                    ; 00528835 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0052883a
    MOV EAX,ESP                         ; 0052883d
    MOV ECX,0x25b                       ; 0052883f
    PUSH EAX                            ; 00528844
    MOV dword ptr [0x02f0ca48],EDX      ; 00528845 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0052884b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528851
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x4                         ; 00528856
    ADD ESP,0x4                         ; 0052885b
    ADD ESP,0x100                       ; 0052885e
    RET                                 ; 00528864

