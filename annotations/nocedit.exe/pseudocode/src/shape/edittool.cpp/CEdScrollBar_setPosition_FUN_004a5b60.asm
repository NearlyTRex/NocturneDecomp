; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_pos
; int              Stack[0xc]:4   top_pos
; int              Stack[0x10]:4   right_pos
; int              Stack[0x14]:4   bottom_pos
;
; XREF[7]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507598
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005071ad
;   core_msnedit.cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0 at 0053c5bd
;   core_msnedit.cpp_showEditorHelpScreen_FUN_00535e70 at 00536a3d
;   core_script.cpp_CScript_initEditorLayout_FUN_00566660 at 0056674e
;   core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0 at 00577ba6
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a4af4
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623f14
;   TerminatedCString s_CEdScrollBar_setPosition_00623f2a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5b60
        ;   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
    PUSH ESI                            ; 004a5b61
    PUSH EBP                            ; 004a5b62
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a5b63
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a5b67
    MOV dword ptr [EAX + 0x14],EDX      ; 004a5b6b
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a5b6e
    MOV dword ptr [EAX + 0x18],EDX      ; 004a5b72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a5b75
    INC EDX                             ; 004a5b79
    MOV dword ptr [EAX + 0x1c],EDX      ; 004a5b7a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a5b7d
    INC EDX                             ; 004a5b81
    MOV dword ptr [EAX + 0x20],EDX      ; 004a5b82
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004a5b85
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a5b88
    MOV EBX,dword ptr [EAX + 0x18]      ; 004a5b8b
    SUB ECX,EDX                         ; 004a5b8e
    MOV EDX,dword ptr [EAX + 0x20]      ; 004a5b90
    SUB EDX,EBX                         ; 004a5b93
    CMP ECX,EDX                         ; 004a5b95
    JG 0x004a5bcd                       ; 004a5b97
        ;   XREF to: 004a5bcd (CONDITIONAL_JUMP)  ; LAB_004a5bcd
    MOV EBX,dword ptr [EAX + 0x18]      ; 004a5b99
    ADD EBX,ECX                         ; 004a5b9c
    DEC EBX                             ; 004a5b9e
    MOV dword ptr [EAX + 0x24],EBX      ; 004a5b9f
    MOV EBX,dword ptr [EAX + 0x20]      ; 004a5ba2
    SUB EBX,ECX                         ; 004a5ba5
    MOV dword ptr [EAX + 0x10],0x0      ; 004a5ba7
    INC EBX                             ; 004a5bae
        ;   Label: LAB_004a5bae
    MOV dword ptr [EAX + 0x28],EBX      ; 004a5baf
    CMP ECX,0x4                         ; 004a5bb2
    JL 0x004a5be4                       ; 004a5bb5
        ;   XREF to: 004a5be4 (CONDITIONAL_JUMP)  ; LAB_004a5be4
    CMP EDX,0x4                         ; 004a5bb7
    JL 0x004a5be4                       ; 004a5bba
        ;   XREF to: 004a5be4 (CONDITIONAL_JUMP)  ; LAB_004a5be4
    MOV ESI,dword ptr [EAX + 0x24]      ; 004a5bbc
    MOV EDX,dword ptr [EAX + 0x28]      ; 004a5bbf
    SUB EDX,ESI                         ; 004a5bc2
    CMP EDX,0x4                         ; 004a5bc4
    JL 0x004a5be4                       ; 004a5bc7
        ;   XREF to: 004a5be4 (CONDITIONAL_JUMP)  ; LAB_004a5be4
    POP EBP                             ; 004a5bc9
    POP ESI                             ; 004a5bca
    POP EBX                             ; 004a5bcb
    RET                                 ; 004a5bcc
    MOV EBX,dword ptr [EAX + 0x14]      ; 004a5bcd
        ;   Label: LAB_004a5bcd
    ADD EBX,EDX                         ; 004a5bd0
    DEC EBX                             ; 004a5bd2
    MOV dword ptr [EAX + 0x24],EBX      ; 004a5bd3
    MOV EBX,dword ptr [EAX + 0x1c]      ; 004a5bd6
    SUB EBX,EDX                         ; 004a5bd9
    MOV dword ptr [EAX + 0x10],0x1      ; 004a5bdb
    JMP 0x004a5bae                      ; 004a5be2
        ;   XREF to: 004a5bae (UNCONDITIONAL_JUMP)  ; LAB_004a5bae
    PUSH EDI                            ; 004a5be4
        ;   Label: LAB_004a5be4
    MOV EDI,0x623f14                    ; 004a5be5 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x110b                      ; 004a5bea
    PUSH 0x623f2a                       ; 004a5bef | = "CEdScrollBar::setPosition - invalid d..."
    MOV dword ptr [0x02f0ca48],EDI      ; 004a5bf4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004a5bfa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a5c00
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5c05
    POP EDI                             ; 004a5c08
    POP EBP                             ; 004a5c09
    POP ESI                             ; 004a5c0a
    POP EBX                             ; 004a5c0b
    RET                                 ; 004a5c0c

