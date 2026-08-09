; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[12]:
;   cockpit_drawsurf.cpp_setColorBlack_FUN_0045b960 at 0045b966
;   cockpit_drawsurf.cpp_setColorBlue_FUN_0045b9d0 at 0045b9d9
;   cockpit_drawsurf.cpp_setColorCyan_FUN_0045ba30 at 0045ba3c
;   cockpit_drawsurf.cpp_setColorDarkGray_FUN_0045ba50 at 0045ba56
;   cockpit_drawsurf.cpp_setColorGray_FUN_0045ba60 at 0045ba6f
;   cockpit_drawsurf.cpp_setColorGreen_FUN_0045b9b0 at 0045b9b9
;   cockpit_drawsurf.cpp_setColorLightGray_FUN_0045ba80 at 0045ba8f
;   cockpit_drawsurf.cpp_setColorMagenta_FUN_0045ba10 at 0045ba1c
;   cockpit_drawsurf.cpp_setColorRed_FUN_0045b990 at 0045b999
;   cockpit_drawsurf.cpp_setColorWhite_FUN_0045b970 at 0045b97f
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d8cd
;   TerminatedCString s_Invalid_bitsPerPixel_in_0057d8e5
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d714
;   undefined4 DAT_01b4d71c
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b800
        ;   Label: cockpit_drawsurf.cpp_setColorRGB_FUN_0045b800
    PUSH ESI                            ; 0045b801
    PUSH EDI                            ; 0045b802
    PUSH EBP                            ; 0045b803
    SUB ESP,0x8                         ; 0045b804
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045b807
    MOV ESI,dword ptr [ESP + 0x20]      ; 0045b80b
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045b80f
    AND EAX,0xff                        ; 0045b813
    AND ESI,0xff                        ; 0045b818
    MOV EDI,EAX                         ; 0045b81e
    MOV ECX,ESI                         ; 0045b820
    SAR EDI,0x3                         ; 0045b822
    SAR ECX,0x3                         ; 0045b825
    SHL EDI,0xa                         ; 0045b828
    SHL ECX,0x5                         ; 0045b82b
    AND EBX,0xff                        ; 0045b82e
    ADD ECX,EDI                         ; 0045b834
    MOV EDI,EBX                         ; 0045b836
    SAR EDI,0x3                         ; 0045b838
    ADD EDI,ECX                         ; 0045b83b
    XOR ECX,ECX                         ; 0045b83d
    MOV CL,byte ptr [EDI + 0x1bf7720]   ; 0045b83f
    XOR EDX,EDX                         ; 0045b845
    MOV dword ptr [0x01b4d714],ECX      ; 0045b847 | DAT_01b4d714
    MOV ECX,dword ptr [0x005b7624]      ; 0045b84d | g_BitsPerPixel
    MOV dword ptr [0x01b4d71c],EDX      ; 0045b853 | DAT_01b4d71c
    CMP ECX,0x10                        ; 0045b859
    JNC 0x0045b92b                      ; 0045b85c
        ;   XREF to: 0045b92b (CONDITIONAL_JUMP)  ; LAB_0045b92b
    CMP ECX,0x8                         ; 0045b862
    JNZ 0x0045b936                      ; 0045b865
        ;   XREF to: 0045b936 (CONDITIONAL_JUMP)  ; LAB_0045b936
    XOR EAX,EAX                         ; 0045b86b
    MOV AL,byte ptr [EDI + 0x1bf7720]   ; 0045b86d
    MOV [0x01b4d710],EAX                ; 0045b873 | DAT_01b4d710
    ADD ESP,0x8                         ; 0045b878
    POP EBP                             ; 0045b87b
    POP EDI                             ; 0045b87c
    POP ESI                             ; 0045b87d
    POP EBX                             ; 0045b87e
    RET                                 ; 0045b87f
    DIV dword ptr [0x01c00628]          ; 0045b880 | g_RedScaleFactor
        ;   Label: LAB_0045b880
    MOV dword ptr [ESP],ESI             ; 0045b886
    MOV EDI,EAX                         ; 0045b889
    XOR EDX,EDX                         ; 0045b88b
    MOV EAX,ESI                         ; 0045b88d
    DIV dword ptr [0x01c00634]          ; 0045b88f | g_GreenScaleFactor
    MOV EBP,dword ptr [0x01c00640]      ; 0045b895 | g_BlueScaleFactor
    MOV dword ptr [ESP],EAX             ; 0045b89b
    XOR EDX,EDX                         ; 0045b89e
    MOV EAX,EBX                         ; 0045b8a0
    DIV EBP                             ; 0045b8a2
    MOV CL,byte ptr [0x01c00624]        ; 0045b8a4 | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EBX       ; 0045b8aa
    SHL EDI,CL                          ; 0045b8ae
    MOV CL,byte ptr [0x01c00630]        ; 0045b8b0 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 0045b8b6
    MOV EAX,dword ptr [ESP]             ; 0045b8ba
    SHL EAX,CL                          ; 0045b8bd
    MOV CL,byte ptr [0x01c0063c]        ; 0045b8bf | g_BlueBitPosition
    OR EDI,EAX                          ; 0045b8c5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b8c7
    SHL EAX,CL                          ; 0045b8cb
    OR EAX,EDI                          ; 0045b8cd
    AND EAX,0xffff                      ; 0045b8cf
    MOV [0x01b4d710],EAX                ; 0045b8d4 | DAT_01b4d710
    ADD ESP,0x8                         ; 0045b8d9
    POP EBP                             ; 0045b8dc
    POP EDI                             ; 0045b8dd
    POP ESI                             ; 0045b8de
    POP EBX                             ; 0045b8df
    RET                                 ; 0045b8e0
    CMP ECX,ECX                         ; 0045b8e1
        ;   Label: LAB_0045b8e1
    JNZ 0x0045b911                      ; 0045b8e3
        ;   XREF to: 0045b911 (CONDITIONAL_JUMP)  ; LAB_0045b911
    MOV CL,byte ptr [0x01c00624]        ; 0045b8e5 | g_RedBitPosition
    SHL EAX,CL                          ; 0045b8eb
    MOV CL,byte ptr [0x01c00630]        ; 0045b8ed | g_GreenBitPosition
    SHL ESI,CL                          ; 0045b8f3
    MOV CL,byte ptr [0x01c0063c]        ; 0045b8f5 | g_BlueBitPosition
    SHL EBX,CL                          ; 0045b8fb
    OR EAX,ESI                          ; 0045b8fd
    MOV ECX,EBX                         ; 0045b8ff
    OR ECX,EAX                          ; 0045b901
    MOV dword ptr [0x01b4d710],ECX      ; 0045b903 | DAT_01b4d710
    ADD ESP,0x8                         ; 0045b909
    POP EBP                             ; 0045b90c
    POP EDI                             ; 0045b90d
    POP ESI                             ; 0045b90e
    POP EBX                             ; 0045b90f
    RET                                 ; 0045b910
    MOV ECX,EAX                         ; 0045b911
        ;   Label: LAB_0045b911
    SHL ESI,0x8                         ; 0045b913
    SHL ECX,0x10                        ; 0045b916
    OR ECX,ESI                          ; 0045b919
    OR ECX,EBX                          ; 0045b91b
    MOV dword ptr [0x01b4d710],ECX      ; 0045b91d | DAT_01b4d710
    ADD ESP,0x8                         ; 0045b923
    POP EBP                             ; 0045b926
    POP EDI                             ; 0045b927
    POP ESI                             ; 0045b928
    POP EBX                             ; 0045b929
    RET                                 ; 0045b92a
    JBE 0x0045b880                      ; 0045b92b
        ;   XREF to: 0045b880 (CONDITIONAL_JUMP)  ; LAB_0045b880
        ;   Label: LAB_0045b92b
    CMP ECX,0x20                        ; 0045b931
    JZ 0x0045b8e1                       ; 0045b934
        ;   XREF to: 0045b8e1 (CONDITIONAL_JUMP)  ; LAB_0045b8e1
    MOV EAX,0x57d8cd                    ; 0045b936 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045b936
    MOV EDX,0x11d                       ; 0045b93b
    PUSH 0x57d8e5                       ; 0045b940 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x01cc4800],EAX                ; 0045b945 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0045b94a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0045b950
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045b955
    ADD ESP,0x8                         ; 0045b958
    POP EBP                             ; 0045b95b
    POP EDI                             ; 0045b95c
    POP ESI                             ; 0045b95d
    POP EBX                             ; 0045b95e
    RET                                 ; 0045b95f

