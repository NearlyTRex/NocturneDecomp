; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_path.cpp_FUN_005485f0()
;
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063ea78
;   TerminatedCString s_Global_pathmap_list_corr_0063ea89
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathMapCount
;   CPathMap*[200] g_PathMapList
;   undefined4 DAT_030c3ac0
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_FUN_00547fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005485f0
        ;   Label: core_path.cpp_FUN_005485f0
    PUSH ESI                            ; 005485f1
    PUSH EDI                            ; 005485f2
    PUSH EBP                            ; 005485f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005485f4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005485f8
    MOV EDX,dword ptr [0x030c3ab8]      ; 005485fc | int g_PathMapCount
    XOR ESI,ESI                         ; 00548602
    TEST EDX,EDX                        ; 00548604
    JLE 0x00548633                      ; 00548606 | LAB_00548633
        ;   XREF to: 00548633 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00548608
    CMP dword ptr [EBX + 0x30c3abc],0x0 ; 0054860a | CPathMap *[200] g_PathMapList
        ;   Label: LAB_0054860a
    JZ 0x00548638                       ; 00548611 | LAB_00548638
        ;   XREF to: 00548638 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x30c3abc] ; 00548613 | CPathMap *[200] g_PathMapList
        ;   Label: LAB_00548613
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 00548619
    JLE 0x0054865d                      ; 00548623 | LAB_0054865d
        ;   XREF to: 0054865d (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x030c3ab8]      ; 00548625 | int g_PathMapCount
        ;   Label: LAB_00548625
    INC ESI                             ; 0054862b
    ADD EBX,0x4                         ; 0054862c
    CMP ESI,ECX                         ; 0054862f
    JL 0x0054860a                       ; 00548631 | LAB_0054860a
        ;   XREF to: 0054860a (CONDITIONAL_JUMP)
    POP EBP                             ; 00548633
        ;   Label: LAB_00548633
    POP EDI                             ; 00548634
    POP ESI                             ; 00548635
    POP EBX                             ; 00548636
    RET                                 ; 00548637
    MOV EDX,0x63ea78                    ; 00548638 | = "..\\core\\path.cpp" | s_core_path_cpp_0063ea78 = ..\core\path.cpp
        ;   Label: LAB_00548638
    MOV ECX,0x6a8                       ; 0054863d
    PUSH 0x63ea89                       ; 00548642 | = "Global pathmap list corruption" | s_Global_pathmap_list_corr_0063ea89 = Global pathmap list corruption
    MOV dword ptr [0x02f0ca48],EDX      ; 00548647 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054864d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00548653 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00548658
    JMP 0x00548613                      ; 0054865b | LAB_00548613
        ;   XREF to: 00548613 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054865d
        ;   Label: LAB_0054865d
    PUSH EAX                            ; 00548661
    PUSH EDI                            ; 00548662
    MOV ECX,dword ptr [ESP + 0x20]      ; 00548663
    PUSH ECX                            ; 00548667
    PUSH EBP                            ; 00548668
    PUSH EDX                            ; 00548669
    CALL core_path.cpp_FUN_00547fc0     ; 0054866a | undefined core_path.cpp_FUN_00547fc0()
        ;   XREF to: 00547fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0054866f
    JMP 0x00548625                      ; 00548672 | LAB_00548625
        ;   XREF to: 00548625 (UNCONDITIONAL_JUMP)

