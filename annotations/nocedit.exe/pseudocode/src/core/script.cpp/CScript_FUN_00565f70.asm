; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00565f70(CScript *this_ptr,char *param_2)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 0053adc4
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
;   core_script.cpp_CCmdParse_bestParse_FUN_00561db0
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_FUN_00566390
;   core_script.cpp_CScript_FUN_00566910
;   core_script.cpp_CScript_FUN_005669a0
;   core_script.cpp_CScript_FUN_00566a90
;   core_script.cpp_CScript_FUN_00566b30
;   core_script.cpp_FUN_005624f0
;   core_script.cpp_FUN_00562760
;   core_script.cpp_FUN_005644e0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565f70
        ;   Label: core_script.cpp_CScript_FUN_00565f70
    PUSH ESI                            ; 00565f71
    PUSH EDI                            ; 00565f72
    PUSH EBP                            ; 00565f73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565f74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00565f78
    CMP dword ptr [0x0310fd48],0x0      ; 00565f7c | DAT_0310fd48
    JGE 0x00565f8a                      ; 00565f83
        ;   XREF to: 00565f8a (CONDITIONAL_JUMP)  ; LAB_00565f8a
    POP EBP                             ; 00565f85
        ;   Label: LAB_00565f85
    POP EDI                             ; 00565f86
    POP ESI                             ; 00565f87
    POP EBX                             ; 00565f88
    RET                                 ; 00565f89
    LEA EDI,[EBX + 0x38]                ; 00565f8a
        ;   Label: LAB_00565f8a
    PUSH EDI                            ; 00565f8d
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00565f8e
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    MOV ECX,dword ptr [0x0310fd48]      ; 00565f93 | DAT_0310fd48
    ADD ESP,0x4                         ; 00565f99
    CMP EAX,ECX                         ; 00565f9c
    JLE 0x00565f85                      ; 00565f9e
        ;   XREF to: 00565f85 (CONDITIONAL_JUMP)  ; LAB_00565f85
    MOV EBP,dword ptr [0x0310fd44]      ; 00565fa0 | DAT_0310fd44
    PUSH EBP                            ; 00565fa6
    PUSH ECX                            ; 00565fa7
    PUSH EBX                            ; 00565fa8
    CALL core_script.cpp_CScript_FUN_00566a90 ; 00565fa9
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_FUN_00566a90(CScript * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 00565fae
    PUSH 0x78                           ; 00565fb1
    PUSH 0x680e28                       ; 00565fb3 | PTR_s_label_006441c0_00680e28
    PUSH EAX                            ; 00565fb8
    MOV EDX,dword ptr [0x0310fd48]      ; 00565fb9 | DAT_0310fd48
    PUSH EDX                            ; 00565fbf
    PUSH EDI                            ; 00565fc0
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565fc1
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00565fc6
    PUSH EAX                            ; 00565fc9
    PUSH 0x310cb74                      ; 00565fca | DAT_0310cb74
    CALL core_script.cpp_CCmdParse_bestParse_FUN_00561db0 ; 00565fcf
        ;   XREF to: 00561db0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse * this_ptr, int param_2, int param_3, int * param_4, ...)
    MOV EBP,EAX                         ; 00565fd4
    ADD ESP,0x14                        ; 00565fd6
    TEST EAX,EAX                        ; 00565fd9
    JL 0x0056606b                       ; 00565fdb
        ;   XREF to: 0056606b (CONDITIONAL_JUMP)  ; LAB_0056606b
    IMUL EAX,EAX,0x328                  ; 00565fe1
    ADD EAX,0x310cc44                   ; 00565fe7 | DAT_0310cc44
    LEA EDI,[EAX + 0x64]                ; 00565fec
    PUSH EDI                            ; 00565fef
    MOV AL,byte ptr [ESI]               ; 00565ff0
        ;   Label: LAB_00565ff0
    MOV byte ptr [EDI],AL               ; 00565ff2 | DAT_0310cca8 | DAT_0310ccaa
    CMP AL,0x0                          ; 00565ff4
    JZ 0x00566008                       ; 00565ff6
        ;   XREF to: 00566008 (CONDITIONAL_JUMP)  ; LAB_00566008
    MOV AL,byte ptr [ESI + 0x1]         ; 00565ff8
    ADD ESI,0x2                         ; 00565ffb
    MOV byte ptr [EDI + 0x1],AL         ; 00565ffe | DAT_0310cca9 | DAT_0310ccab
    ADD EDI,0x2                         ; 00566001
    CMP AL,0x0                          ; 00566004
    JNZ 0x00565ff0                      ; 00566006
        ;   XREF to: 00565ff0 (CONDITIONAL_JUMP)  ; LAB_00565ff0
    POP EDI                             ; 00566008
        ;   Label: LAB_00566008
    PUSH 0x31101c0                      ; 00566009 | DAT_031101c0
    PUSH 0x310cb74                      ; 0056600e | DAT_0310cb74
    CALL core_script.cpp_FUN_005624f0   ; 00566013
        ;   XREF to: 005624f0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005624f0(int param_1, char * param_2)
    ADD ESP,0x8                         ; 00566018
    MOV ECX,dword ptr [0x0310fd48]      ; 0056601b | DAT_0310fd48
    PUSH ECX                            ; 00566021
    PUSH EBX                            ; 00566022
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00566023
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00566028
    PUSH EBP                            ; 0056602b
    PUSH 0x310cb74                      ; 0056602c | DAT_0310cb74
    CALL core_script.cpp_FUN_00562760   ; 00566031
        ;   XREF to: 00562760 (UNCONDITIONAL_CALL)  ; int core_script.cpp_FUN_00562760(int param_1, int param_2)
    ADD ESP,0x8                         ; 00566036
    PUSH EAX                            ; 00566039
    MOV ESI,dword ptr [0x0310fd48]      ; 0056603a | DAT_0310fd48
    PUSH ESI                            ; 00566040
    PUSH EBX                            ; 00566041
    CALL core_script.cpp_CScript_FUN_00566b30 ; 00566042
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_FUN_00566b30(CScript * this_ptr, int param_2, uint param_3)
    ADD ESP,0xc                         ; 00566047
    MOV [0x0310fd44],EAX                ; 0056604a | DAT_0310fd44
    CALL core_script.cpp_FUN_005644e0   ; 0056604f
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005644e0()
    PUSH EBX                            ; 00566054
    CALL core_script.cpp_CScript_FUN_00566910 ; 00566055
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 0056605a
    PUSH EBX                            ; 0056605d
    CALL core_script.cpp_CScript_FUN_005669a0 ; 0056605e
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_005669a0(CScript * this_ptr)
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
    CALL core_script.cpp_CScript_FUN_00566390 ; 0056606f
        ;   XREF to: 00566390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00566390(CScript * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 00566074
    POP EBP                             ; 00566077
    POP EDI                             ; 00566078
    POP ESI                             ; 00566079
    POP EBX                             ; 0056607a
    RET                                 ; 0056607b

