; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00565f70()
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053adc4
;
; Referenced Globals:
;   void* PTR_s_label_006441c0_00680e28 = 006441c0
;   undefined4 DAT_0310cb74
;   undefined4 DAT_0310cc44
;   undefined4 DAT_0310cca8
;   undefined4 DAT_0310cca9
;   undefined4 DAT_0310ccaa
;   undefined4 DAT_0310ccab
;   undefined4 DAT_0310fd44
;   undefined4 DAT_0310fd48
;   undefined1 DAT_031101c0
;
; Called Functions:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_Unk18_FUN_005669a0
;   core_script.cpp_FUN_005624f0
;   core_script.cpp_FUN_00562760
;   core_script.cpp_FUN_005644e0
;   core_script.cpp_FUN_00566390
;   core_script.cpp_SCmdParse_bestParse_FUN_00561db0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565f70
        ;   Label: core_script.cpp_FUN_00565f70
    PUSH ESI                            ; 00565f71
    PUSH EDI                            ; 00565f72
    PUSH EBP                            ; 00565f73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565f74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00565f78
    CMP dword ptr [0x0310fd48],0x0      ; 00565f7c | undefined4 DAT_0310fd48
    JGE 0x00565f8a                      ; 00565f83 | LAB_00565f8a
        ;   XREF to: 00565f8a (CONDITIONAL_JUMP)
    POP EBP                             ; 00565f85
        ;   Label: LAB_00565f85
    POP EDI                             ; 00565f86
    POP ESI                             ; 00565f87
    POP EBX                             ; 00565f88
    RET                                 ; 00565f89
    LEA EDI,[EBX + 0x38]                ; 00565f8a
        ;   Label: LAB_00565f8a
    PUSH EDI                            ; 00565f8d
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00565f8e | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0310fd48]      ; 00565f93 | undefined4 DAT_0310fd48
    ADD ESP,0x4                         ; 00565f99
    CMP EAX,ECX                         ; 00565f9c
    JLE 0x00565f85                      ; 00565f9e | LAB_00565f85
        ;   XREF to: 00565f85 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x0310fd44]      ; 00565fa0 | undefined4 DAT_0310fd44
    PUSH EBP                            ; 00565fa6
    PUSH ECX                            ; 00565fa7
    PUSH EBX                            ; 00565fa8
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565fa9 | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00565fae
    PUSH 0x78                           ; 00565fb1
    PUSH 0x680e28                       ; 00565fb3 | void * PTR_s_label_006441c0_00680e28
    PUSH EAX                            ; 00565fb8
    MOV EDX,dword ptr [0x0310fd48]      ; 00565fb9 | undefined4 DAT_0310fd48
    PUSH EDX                            ; 00565fbf
    PUSH EDI                            ; 00565fc0
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565fc1 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565fc6
    PUSH EAX                            ; 00565fc9
    PUSH 0x310cb74                      ; 00565fca | DAT_0310cb74
    CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0 ; 00565fcf | undefined core_script.cpp_SCmdParse_bestParse_FUN_00561db0()
        ;   XREF to: 00561db0 (UNCONDITIONAL_CALL)
    MOV EBP,EAX                         ; 00565fd4
    ADD ESP,0x14                        ; 00565fd6
    TEST EAX,EAX                        ; 00565fd9
    JL 0x0056606b                       ; 00565fdb | LAB_0056606b
        ;   XREF to: 0056606b (CONDITIONAL_JUMP)
    IMUL EAX,EAX,0x328                  ; 00565fe1
    ADD EAX,0x310cc44                   ; 00565fe7 | DAT_0310cc44
    LEA EDI,[EAX + 0x64]                ; 00565fec
    PUSH EDI                            ; 00565fef
    MOV AL,byte ptr [ESI]               ; 00565ff0
        ;   Label: LAB_00565ff0
    MOV byte ptr [EDI],AL               ; 00565ff2 | DAT_0310cca8
    CMP AL,0x0                          ; 00565ff4
    JZ 0x00566008                       ; 00565ff6 | LAB_00566008
        ;   XREF to: 00566008 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00565ff8
    ADD ESI,0x2                         ; 00565ffb
    MOV byte ptr [EDI + 0x1],AL         ; 00565ffe | DAT_0310cca9
    ADD EDI,0x2                         ; 00566001
    CMP AL,0x0                          ; 00566004
    JNZ 0x00565ff0                      ; 00566006 | LAB_00565ff0
        ;   XREF to: 00565ff0 (CONDITIONAL_JUMP)
    POP EDI                             ; 00566008
        ;   Label: LAB_00566008
    PUSH 0x31101c0                      ; 00566009 | undefined1 DAT_031101c0
    PUSH 0x310cb74                      ; 0056600e | DAT_0310cb74
    CALL core_script.cpp_FUN_005624f0   ; 00566013 | undefined core_script.cpp_FUN_005624f0()
        ;   XREF to: 005624f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00566018
    MOV ECX,dword ptr [0x0310fd48]      ; 0056601b | undefined4 DAT_0310fd48
    PUSH ECX                            ; 00566021
    PUSH EBX                            ; 00566022
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00566023 | undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00566028
    PUSH EBP                            ; 0056602b
    PUSH 0x310cb74                      ; 0056602c | DAT_0310cb74
    CALL core_script.cpp_FUN_00562760   ; 00566031 | undefined core_script.cpp_FUN_00562760()
        ;   XREF to: 00562760 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00566036
    PUSH EAX                            ; 00566039
    MOV ESI,dword ptr [0x0310fd48]      ; 0056603a | undefined4 DAT_0310fd48
    PUSH ESI                            ; 00566040
    PUSH EBX                            ; 00566041
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00566042 | undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00566047
    MOV [0x0310fd44],EAX                ; 0056604a | undefined4 DAT_0310fd44
    CALL core_script.cpp_FUN_005644e0   ; 0056604f | undefined core_script.cpp_FUN_005644e0()
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00566054
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 00566055 | undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056605a
    PUSH EBX                            ; 0056605d
    CALL core_script.cpp_CScript_Unk18_FUN_005669a0 ; 0056605e | undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00566063
    POP EBP                             ; 00566066
    POP EDI                             ; 00566067
    POP ESI                             ; 00566068
    POP EBX                             ; 00566069
    RET                                 ; 0056606a
    PUSH 0x1                            ; 0056606b
        ;   Label: LAB_0056606b
    PUSH ESI                            ; 0056606d
    PUSH EBX                            ; 0056606e
    CALL core_script.cpp_FUN_00566390   ; 0056606f | undefined core_script.cpp_FUN_00566390()
        ;   XREF to: 00566390 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00566074
    POP EBP                             ; 00566077
    POP EDI                             ; 00566078
    POP ESI                             ; 00566079
    POP EBX                             ; 0056607a
    RET                                 ; 0056607b

