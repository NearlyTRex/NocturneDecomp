; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050764d
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507262
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 at 004a45a0
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e2ee
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049ef6f
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049df43
;
; Referenced Globals:
;   CEdButton* g_ActiveButton
;   int g_MouseX
;   int g_MouseY
;   int g_MouseButtonFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6830
        ;   Label: shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
    MOV ECX,dword ptr [0x02cf2b00]      ; 004a6831 | CEdButton * g_ActiveButton
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6837
    CMP dword ptr [EAX],0x0             ; 004a683b
    JZ 0x004a686e                       ; 004a683e | LAB_004a686e
        ;   XREF to: 004a686e (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004a6840
        ;   Label: LAB_004a6840
    CMP ECX,EAX                         ; 004a6842
        ;   Label: LAB_004a6842
    JNZ 0x004a68a5                      ; 004a6844 | LAB_004a68a5
        ;   XREF to: 004a68a5 (CONDITIONAL_JUMP)
    MOV BH,byte ptr [0x02cf6a94]        ; 004a6846 | int g_MouseButtonFlags
    MOV dword ptr [EAX + 0x18],EDX      ; 004a684c
    TEST BH,0x1                         ; 004a684f
    JNZ 0x004a68a1                      ; 004a6852 | LAB_004a68a1
        ;   XREF to: 004a68a1 (CONDITIONAL_JUMP)
    XOR ECX,EAX                         ; 004a6854
    TEST EDX,EDX                        ; 004a6856
    JZ 0x004a68a1                       ; 004a6858 | LAB_004a68a1
        ;   XREF to: 004a68a1 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x18],0x0      ; 004a685a
    MOV EAX,0x1                         ; 004a6861
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6866 | CEdButton * g_ActiveButton
        ;   Label: LAB_004a6866
    POP EBX                             ; 004a686c
    RET                                 ; 004a686d
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a686e | int g_MouseX
        ;   Label: LAB_004a686e
    CMP EDX,dword ptr [EAX + 0x8]       ; 004a6874
    JL 0x004a6840                       ; 004a6877 | LAB_004a6840
        ;   XREF to: 004a6840 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a6879 | int g_MouseY
    CMP EDX,dword ptr [EAX + 0xc]       ; 004a687f
    JL 0x004a6840                       ; 004a6882 | LAB_004a6840
        ;   XREF to: 004a6840 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a6884 | int g_MouseX
    CMP EDX,dword ptr [EAX + 0x10]      ; 004a688a
    JGE 0x004a6840                      ; 004a688d | LAB_004a6840
        ;   XREF to: 004a6840 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a688f | int g_MouseY
    CMP EDX,dword ptr [EAX + 0x14]      ; 004a6895
    JGE 0x004a6840                      ; 004a6898 | LAB_004a6840
        ;   XREF to: 004a6840 (CONDITIONAL_JUMP)
    MOV EDX,0x1                         ; 004a689a
    JMP 0x004a6842                      ; 004a689f | LAB_004a6842
        ;   XREF to: 004a6842 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004a68a1
        ;   Label: LAB_004a68a1
    JMP 0x004a6866                      ; 004a68a3 | LAB_004a6866
        ;   XREF to: 004a6866 (UNCONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 004a68a5
        ;   Label: LAB_004a68a5
    JNZ 0x004a68b6                      ; 004a68a7 | LAB_004a68b6
        ;   XREF to: 004a68b6 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02cf6a94],0x1      ; 004a68a9 | int g_MouseButtonFlags
    JZ 0x004a68b6                       ; 004a68b0 | LAB_004a68b6
        ;   XREF to: 004a68b6 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004a68b2
    JNZ 0x004a68c0                      ; 004a68b4 | LAB_004a68c0
        ;   XREF to: 004a68c0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004a68b6
        ;   Label: LAB_004a68b6
    MOV dword ptr [0x02cf2b00],ECX      ; 004a68b8 | CEdButton * g_ActiveButton
    POP EBX                             ; 004a68be
    RET                                 ; 004a68bf
    MOV ECX,EAX                         ; 004a68c0
        ;   Label: LAB_004a68c0
    MOV dword ptr [EAX + 0x18],0x1      ; 004a68c2
    XOR EAX,EAX                         ; 004a68c9
    MOV dword ptr [0x02cf2b00],ECX      ; 004a68cb | CEdButton * g_ActiveButton
    POP EBX                             ; 004a68d1
    RET                                 ; 004a68d2

