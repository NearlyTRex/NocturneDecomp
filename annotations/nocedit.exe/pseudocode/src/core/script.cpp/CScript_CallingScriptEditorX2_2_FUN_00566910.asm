; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910(void)
;
;
; XREF[9]:
;   core_script.cpp_CScript_Unk18_FUN_005669a0 at 005669a9
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565166
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 005648c8
;   core_script.cpp_FUN_00565ae0 at 00565c51
;   core_script.cpp_FUN_00565d00 at 00565e11
;   core_script.cpp_FUN_00565f70 at 00566055
;   core_script.cpp_FUN_00566080 at 00566144
;   core_script.cpp_FUN_00566880 at 00566889
;   core_script.cpp_FUN_005677a0 at 005679e5
;
; Referenced Globals:
;   undefined4 CEdScrollBar_0310fcd8.current_value
;   undefined4 DAT_0310fd44
;   undefined4 DAT_0310fd48
;
; Called Functions:
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566910
        ;   Label: core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
    PUSH EBP                            ; 00566911
    MOV EBX,dword ptr [ESP + 0xc]       ; 00566912
    LEA EAX,[EBX + 0x38]                ; 00566916
    PUSH EAX                            ; 00566919
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 0056691a
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD EAX,0x2                         ; 0056691f
    MOV [0x0310fcdc],EAX                ; 00566922 | CEdScrollBar_0310fcd8.current_value
    MOV EAX,[0x0310fd48]                ; 00566927 | DAT_0310fd48
    MOV EDX,dword ptr [0x0310fcdc]      ; 0056692c | CEdScrollBar_0310fcd8.current_value
    ADD ESP,0x4                         ; 00566932
    CMP EAX,EDX                         ; 00566935
    JGE 0x0056697f                      ; 00566937
        ;   XREF to: 0056697f (CONDITIONAL_JUMP)  ; LAB_0056697f
    CMP dword ptr [0x0310fd48],0x0      ; 00566939 | DAT_0310fd48
        ;   Label: LAB_00566939
    JL 0x00566989                       ; 00566940
        ;   XREF to: 00566989 (CONDITIONAL_JUMP)  ; LAB_00566989
    CMP dword ptr [0x0310fd44],0x0      ; 00566942 | DAT_0310fd44
        ;   Label: LAB_00566942
    JL 0x00566995                       ; 00566949
        ;   XREF to: 00566995 (CONDITIONAL_JUMP)  ; LAB_00566995
    MOV EAX,[0x0310fd44]                ; 0056694b | DAT_0310fd44
        ;   Label: LAB_0056694b
    PUSH EAX                            ; 00566950
    MOV EDX,dword ptr [0x0310fd48]      ; 00566951 | DAT_0310fd48
    PUSH EDX                            ; 00566957
    PUSH EBX                            ; 00566958
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00566959
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
    ADD ESP,0xc                         ; 0056695e
    PUSH EAX                            ; 00566961
    MOV ECX,dword ptr [0x0310fd48]      ; 00566962 | DAT_0310fd48
    PUSH ECX                            ; 00566968
    PUSH EBX                            ; 00566969
    MOV [0x0310fd44],EAX                ; 0056696a | DAT_0310fd44
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 0056696f
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
    ADD ESP,0xc                         ; 00566974
    MOV [0x0310fd44],EAX                ; 00566977 | DAT_0310fd44
    POP EBP                             ; 0056697c
    POP EBX                             ; 0056697d
    RET                                 ; 0056697e
    LEA EAX,[EDX + -0x1]                ; 0056697f
        ;   Label: LAB_0056697f
    MOV [0x0310fd48],EAX                ; 00566982 | DAT_0310fd48
    JMP 0x00566939                      ; 00566987
        ;   XREF to: 00566939 (UNCONDITIONAL_JUMP)  ; LAB_00566939
    PUSH ESI                            ; 00566989
        ;   Label: LAB_00566989
    XOR ESI,ESI                         ; 0056698a
    MOV dword ptr [0x0310fd48],ESI      ; 0056698c | DAT_0310fd48
    POP ESI                             ; 00566992
    JMP 0x00566942                      ; 00566993
        ;   XREF to: 00566942 (UNCONDITIONAL_JUMP)  ; LAB_00566942
    XOR EBP,EBP                         ; 00566995
        ;   Label: LAB_00566995
    MOV dword ptr [0x0310fd44],EBP      ; 00566997 | DAT_0310fd44
    JMP 0x0056694b                      ; 0056699d
        ;   XREF to: 0056694b (UNCONDITIONAL_JUMP)  ; LAB_0056694b

