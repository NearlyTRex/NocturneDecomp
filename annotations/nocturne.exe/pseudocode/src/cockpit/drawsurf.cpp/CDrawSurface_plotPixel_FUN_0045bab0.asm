; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(int param_1,int param_2,int param_3)
;
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0 at 0045c36e
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0 at 0045c15c
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00 at 0045bf1f
;   cockpit_drawsurf.cpp_FUN_0045cde0 at 0045ce58
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e635
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d914
;   TerminatedCString s_Invalid_bitsPerPixel_0057d92c
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d942
;   TerminatedCString s_Invalid_bitsPerPixel_0057d95a
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d71c
;   undefined4 DAT_01b4d720
;   undefined4 DAT_01b4d730
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bab0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
    PUSH ESI                            ; 0045bab1
    PUSH EDI                            ; 0045bab2
    PUSH EBP                            ; 0045bab3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045bab4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045bab8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045babc
    MOV EBX,dword ptr [ECX + 0x8]       ; 0045bac0
    MOV ESI,dword ptr [ECX + 0xc]       ; 0045bac3
    MOV EDI,dword ptr [ECX + 0x10]      ; 0045bac6
    ADD EAX,EBX                         ; 0045bac9
    ADD EDX,ESI                         ; 0045bacb
    CMP EAX,EDI                         ; 0045bacd
    JL 0x0045bb1f                       ; 0045bacf
        ;   XREF to: 0045bb1f (CONDITIONAL_JUMP)  ; LAB_0045bb1f
    CMP EAX,dword ptr [ECX + 0x18]      ; 0045bad1
    JG 0x0045bb1f                       ; 0045bad4
        ;   XREF to: 0045bb1f (CONDITIONAL_JUMP)  ; LAB_0045bb1f
    CMP EDX,dword ptr [ECX + 0x14]      ; 0045bad6
    JL 0x0045bb1f                       ; 0045bad9
        ;   XREF to: 0045bb1f (CONDITIONAL_JUMP)  ; LAB_0045bb1f
    CMP EDX,dword ptr [ECX + 0x1c]      ; 0045badb
    JG 0x0045bb1f                       ; 0045bade
        ;   XREF to: 0045bb1f (CONDITIONAL_JUMP)  ; LAB_0045bb1f
    MOV EDI,dword ptr [0x01b4d71c]      ; 0045bae0 | DAT_01b4d71c
    LEA EBX,[EAX + EAX*0x1]             ; 0045bae6
    LEA ECX,[EDX*0x4 + 0x0]             ; 0045bae9
    LEA ESI,[EAX*0x4 + 0x0]             ; 0045baf0
    TEST EDI,EDI                        ; 0045baf7
    JNZ 0x0045bbde                      ; 0045baf9
        ;   XREF to: 0045bbde (CONDITIONAL_JUMP)  ; LAB_0045bbde
    MOV EDX,dword ptr [0x005b7624]      ; 0045baff | DAT_005b7624
    CMP EDX,0x10                        ; 0045bb05
    JNC 0x0045bb76                      ; 0045bb08
        ;   XREF to: 0045bb76 (CONDITIONAL_JUMP)  ; LAB_0045bb76
    CMP EDX,0x8                         ; 0045bb0a
    JNZ 0x0045bb4e                      ; 0045bb0d
        ;   XREF to: 0045bb4e (CONDITIONAL_JUMP)  ; LAB_0045bb4e
    MOV EDX,dword ptr [ECX + 0x1bd2fa0] ; 0045bb0f
    ADD EAX,EDX                         ; 0045bb15
    MOV DL,byte ptr [0x01b4d710]        ; 0045bb17 | DAT_01b4d710
    MOV byte ptr [EAX],DL               ; 0045bb1d
    POP EBP                             ; 0045bb1f
        ;   Label: LAB_0045bb1f
    POP EDI                             ; 0045bb20
    POP ESI                             ; 0045bb21
    POP EBX                             ; 0045bb22
    RET                                 ; 0045bb23
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0045bb24
        ;   Label: LAB_0045bb24
    MOV DX,word ptr [0x01b4d710]        ; 0045bb2a | DAT_01b4d710
    MOV word ptr [EBX + EAX*0x1],DX     ; 0045bb31
    POP EBP                             ; 0045bb35
    POP EDI                             ; 0045bb36
    POP ESI                             ; 0045bb37
    POP EBX                             ; 0045bb38
    RET                                 ; 0045bb39
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0045bb3a
        ;   Label: LAB_0045bb3a
    ADD ESI,EAX                         ; 0045bb40
    MOV EAX,[0x01b4d710]                ; 0045bb42 | DAT_01b4d710
    MOV dword ptr [ESI],EAX             ; 0045bb47
    POP EBP                             ; 0045bb49
    POP EDI                             ; 0045bb4a
    POP ESI                             ; 0045bb4b
    POP EBX                             ; 0045bb4c
    RET                                 ; 0045bb4d
    MOV ECX,0x57d914                    ; 0045bb4e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045bb4e
    MOV EBX,0x18d                       ; 0045bb53
    PUSH 0x57d92c                       ; 0045bb58 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01cc4800],ECX      ; 0045bb5d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0045bb63 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045bb69
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045bb6e
    POP EBP                             ; 0045bb71
    POP EDI                             ; 0045bb72
    POP ESI                             ; 0045bb73
    POP EBX                             ; 0045bb74
    RET                                 ; 0045bb75
    JBE 0x0045bb24                      ; 0045bb76
        ;   XREF to: 0045bb24 (CONDITIONAL_JUMP)  ; LAB_0045bb24
        ;   Label: LAB_0045bb76
    CMP EDX,0x20                        ; 0045bb78
    JZ 0x0045bb3a                       ; 0045bb7b
        ;   XREF to: 0045bb3a (CONDITIONAL_JUMP)  ; LAB_0045bb3a
    JMP 0x0045bb4e                      ; 0045bb7d
        ;   XREF to: 0045bb4e (UNCONDITIONAL_JUMP)  ; LAB_0045bb4e
    MOV EDX,dword ptr [ECX + 0x1bd2fa0] ; 0045bb7f
        ;   Label: LAB_0045bb7f
    ADD EAX,EDX                         ; 0045bb85
    XOR EDX,EDX                         ; 0045bb87
    MOV DL,byte ptr [EAX]               ; 0045bb89
    MOV DL,byte ptr [EDX + 0x1bf5d20]   ; 0045bb8b
    MOV byte ptr [EAX],DL               ; 0045bb91
    POP EBP                             ; 0045bb93
    POP EDI                             ; 0045bb94
    POP ESI                             ; 0045bb95
    POP EBX                             ; 0045bb96
    RET                                 ; 0045bb97
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 0045bb98
        ;   Label: LAB_0045bb98
    XOR EDX,EDX                         ; 0045bb9e
    MOV CL,byte ptr [0x01b4d720]        ; 0045bba0 | DAT_01b4d720
    MOV DX,word ptr [EBX + EAX*0x1]     ; 0045bba6
    MOV EBP,dword ptr [0x01b4d730]      ; 0045bbaa | DAT_01b4d730
    SHR EDX,CL                          ; 0045bbb0
    AND EDX,EBP                         ; 0045bbb2
    MOV word ptr [EBX + EAX*0x1],DX     ; 0045bbb4
    POP EBP                             ; 0045bbb8
    POP EDI                             ; 0045bbb9
    POP ESI                             ; 0045bbba
    POP EBX                             ; 0045bbbb
    RET                                 ; 0045bbbc
    MOV EDX,dword ptr [ECX + 0x1bd2fa0] ; 0045bbbd
        ;   Label: LAB_0045bbbd
    MOV CL,byte ptr [0x01b4d720]        ; 0045bbc3 | DAT_01b4d720
    MOV EAX,dword ptr [EDX + ESI*0x1]   ; 0045bbc9
    SHR EAX,CL                          ; 0045bbcc
    MOV ECX,dword ptr [0x01b4d730]      ; 0045bbce | DAT_01b4d730
    AND EAX,ECX                         ; 0045bbd4
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 0045bbd6
    POP EBP                             ; 0045bbd9
    POP EDI                             ; 0045bbda
    POP ESI                             ; 0045bbdb
    POP EBX                             ; 0045bbdc
    RET                                 ; 0045bbdd
    MOV EDX,dword ptr [0x005b7624]      ; 0045bbde | DAT_005b7624
        ;   Label: LAB_0045bbde
    CMP EDX,0x10                        ; 0045bbe4
    JNC 0x0045bbf0                      ; 0045bbe7
        ;   XREF to: 0045bbf0 (CONDITIONAL_JUMP)  ; LAB_0045bbf0
    CMP EDX,0x8                         ; 0045bbe9
    JZ 0x0045bb7f                       ; 0045bbec
        ;   XREF to: 0045bb7f (CONDITIONAL_JUMP)  ; LAB_0045bb7f
    JMP 0x0045bbf7                      ; 0045bbee
        ;   XREF to: 0045bbf7 (UNCONDITIONAL_JUMP)  ; LAB_0045bbf7
    JBE 0x0045bb98                      ; 0045bbf0
        ;   XREF to: 0045bb98 (CONDITIONAL_JUMP)  ; LAB_0045bb98
        ;   Label: LAB_0045bbf0
    CMP EDX,0x20                        ; 0045bbf2
    JZ 0x0045bbbd                       ; 0045bbf5
        ;   XREF to: 0045bbbd (CONDITIONAL_JUMP)  ; LAB_0045bbbd
    MOV EAX,0x57d942                    ; 0045bbf7 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045bbf7
    MOV EDX,0x19e                       ; 0045bbfc
    PUSH 0x57d95a                       ; 0045bc01 | = "Invalid bitsPerPixel!"
    MOV [0x01cc4800],EAX                ; 0045bc06 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0045bc0b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045bc11
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045bc16
    POP EBP                             ; 0045bc19
    POP EDI                             ; 0045bc1a
    POP ESI                             ; 0045bc1b
    POP EBX                             ; 0045bc1c
    RET                                 ; 0045bc1d

