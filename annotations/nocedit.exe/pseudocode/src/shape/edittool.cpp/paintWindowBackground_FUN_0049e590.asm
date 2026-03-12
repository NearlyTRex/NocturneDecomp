; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)
;
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a1006
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 at 004a0dd7
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622fbb
;   TerminatedCString s_paintWindowBackground_ca_00622fd1
;   int g_BitsPerPixel = 0x8
;   int g_WindowStackCount
;   SWindow[5] g_WindowStack
;   undefined4 DAT_02cf1ea8
;   undefined4 DAT_02cf1eac
;   undefined4 DAT_02cf1eb0
;   undefined4 DAT_02cf1eb4
;   undefined4 DAT_02cf1eb8
;   void*[1200] g_ScreenBufferArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e590
        ;   Label: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
    PUSH ESI                            ; 0049e591
    PUSH EDI                            ; 0049e592
    PUSH EBP                            ; 0049e593
    SUB ESP,0x8                         ; 0049e594
    CMP dword ptr [0x02cf1cdc],0x1      ; 0049e597 | g_WindowStackCount
    JL 0x0049e678                       ; 0049e59e
        ;   XREF to: 0049e678 (CONDITIONAL_JUMP)  ; LAB_0049e678
    MOV EDX,dword ptr [0x02cf1cdc]      ; 0049e5a4 | g_WindowStackCount
        ;   Label: LAB_0049e5a4
    DEC EDX                             ; 0049e5aa
    MOV EAX,EDX                         ; 0049e5ab
    SHL EAX,0x4                         ; 0049e5ad
    SUB EAX,EDX                         ; 0049e5b0
    SHL EAX,0x2                         ; 0049e5b2
    ADD EAX,EDX                         ; 0049e5b5
    MOV EDX,0x2cf1ce0                   ; 0049e5b7 | g_WindowStack
    SHL EAX,0x3                         ; 0049e5bc
    ADD EDX,EAX                         ; 0049e5bf
    MOV EBX,dword ptr [EDX + 0x1c8]     ; 0049e5c1 | DAT_02cf1ea8
    MOV dword ptr [ESP + 0x4],EDX       ; 0049e5c7
    TEST EBX,EBX                        ; 0049e5cb
    JZ 0x0049e670                       ; 0049e5cd
        ;   XREF to: 0049e670 (CONDITIONAL_JUMP)  ; LAB_0049e670
    MOV ESI,dword ptr [0x0067939c]      ; 0049e5d3 | g_BitsPerPixel
    MOV EDX,dword ptr [EDX + 0x1d4]     ; 0049e5d9 | DAT_02cf1eb4
    IMUL EDX,ESI                        ; 0049e5df
    MOV EAX,EDX                         ; 0049e5e2
    SAR EDX,0x1f                        ; 0049e5e4
    SHL EDX,0x3                         ; 0049e5e7
    SBB EAX,EDX                         ; 0049e5ea
    SAR EAX,0x3                         ; 0049e5ec
    MOV dword ptr [ESP],EAX             ; 0049e5ef
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049e5f2
    MOV EDI,dword ptr [EAX + 0x1d8]     ; 0049e5f6 | DAT_02cf1eb8
    XOR EBP,EBP                         ; 0049e5fc
    TEST EDI,EDI                        ; 0049e5fe
    JLE 0x0049e670                      ; 0049e600
        ;   XREF to: 0049e670 (CONDITIONAL_JUMP)  ; LAB_0049e670
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049e602
        ;   Label: LAB_0049e602
    MOV EAX,dword ptr [EAX + 0x1d0]     ; 0049e606 | DAT_02cf1eb0
    ADD EAX,EBP                         ; 0049e60c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049e60e
    LEA EDI,[EAX*0x4 + 0x0]             ; 0049e612
    MOV EDX,dword ptr [EDX + 0x1cc]     ; 0049e619 | DAT_02cf1eac
    MOV EAX,[0x0067939c]                ; 0049e61f | g_BitsPerPixel
    IMUL EDX,EAX                        ; 0049e624
    MOV EAX,EDX                         ; 0049e627
    SAR EDX,0x1f                        ; 0049e629
    SHL EDX,0x3                         ; 0049e62c
    SBB EAX,EDX                         ; 0049e62f
    SAR EAX,0x3                         ; 0049e631
    MOV ECX,dword ptr [ESP]             ; 0049e634
    MOV EDI,dword ptr [EDI + 0x2cf6a9c] ; 0049e637 | g_ScreenBufferArray
    MOV ESI,EBX                         ; 0049e63d
    ADD EDI,EAX                         ; 0049e63f
    PUSH EDI                            ; 0049e641
    MOV EAX,ECX                         ; 0049e642
    SHR ECX,0x2                         ; 0049e644
    MOVSD.REP ES:EDI,ESI                ; 0049e647
    MOV CL,AL                           ; 0049e649
    AND CL,0x3                          ; 0049e64b
    MOVSB.REP ES:EDI,ESI                ; 0049e64e
    POP EDI                             ; 0049e650
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049e651
    INC EBP                             ; 0049e655
    MOV EDX,dword ptr [ESP]             ; 0049e656
    MOV ECX,dword ptr [EAX + 0x1d8]     ; 0049e659 | DAT_02cf1eb8
    ADD EBX,EDX                         ; 0049e65f
    CMP EBP,ECX                         ; 0049e661
    JL 0x0049e602                       ; 0049e663
        ;   XREF to: 0049e602 (CONDITIONAL_JUMP)  ; LAB_0049e602
    LEA EAX,[EAX]                       ; 0049e665
    LEA EDX,[EDX]                       ; 0049e66b
    MOV EBX,EBX                         ; 0049e66e
    ADD ESP,0x8                         ; 0049e670
        ;   Label: LAB_0049e670
    POP EBP                             ; 0049e673
    POP EDI                             ; 0049e674
    POP ESI                             ; 0049e675
    POP EBX                             ; 0049e676
    RET                                 ; 0049e677
    MOV ECX,0x622fbb                    ; 0049e678 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049e678
    MOV EBX,0x36e                       ; 0049e67d
    PUSH 0x622fd1                       ; 0049e682 | = "paintWindowBackground called but no w..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e687 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e68d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e693
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049e698
    JMP 0x0049e5a4                      ; 0049e69b
        ;   XREF to: 0049e5a4 (UNCONDITIONAL_JUMP)  ; LAB_0049e5a4

