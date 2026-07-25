; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[2]:
;   FUN_0045d310 at 0045d522
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 at 0045cb2c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d9bf
;   TerminatedCString s_Invalid_bitsPerPixel_0057d9d7
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d71c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
;   crt_memory.c_memset_FUN_00563cc0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c730
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
    PUSH ESI                            ; 0045c731
    PUSH EDI                            ; 0045c732
    PUSH EBP                            ; 0045c733
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045c734
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045c738
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045c73c
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045c740
    MOV ESI,dword ptr [EDX + 0x8]       ; 0045c744
    MOV EDI,dword ptr [EDX + 0xc]       ; 0045c747
    ADD ECX,ESI                         ; 0045c74a
    ADD EAX,ESI                         ; 0045c74c
    ADD EBX,EDI                         ; 0045c74e
    CMP EBX,dword ptr [EDX + 0x14]      ; 0045c750
    JL 0x0045c7c0                       ; 0045c753
        ;   XREF to: 0045c7c0 (CONDITIONAL_JUMP)  ; LAB_0045c7c0
    CMP EBX,dword ptr [EDX + 0x1c]      ; 0045c759
    JG 0x0045c7c0                       ; 0045c75c
        ;   XREF to: 0045c7c0 (CONDITIONAL_JUMP)  ; LAB_0045c7c0
    MOV EBP,dword ptr [EDX + 0x10]      ; 0045c75e
    CMP EAX,EBP                         ; 0045c761
    JGE 0x0045c767                      ; 0045c763
        ;   XREF to: 0045c767 (CONDITIONAL_JUMP)  ; LAB_0045c767
    MOV EAX,EBP                         ; 0045c765
    MOV ESI,dword ptr [EDX + 0x18]      ; 0045c767
        ;   Label: LAB_0045c767
    CMP ECX,ESI                         ; 0045c76a
    JLE 0x0045c770                      ; 0045c76c
        ;   XREF to: 0045c770 (CONDITIONAL_JUMP)  ; LAB_0045c770
    MOV ECX,ESI                         ; 0045c76e
    CMP EAX,ECX                         ; 0045c770
        ;   Label: LAB_0045c770
    JG 0x0045c7c0                       ; 0045c772
        ;   XREF to: 0045c7c0 (CONDITIONAL_JUMP)  ; LAB_0045c7c0
    CMP dword ptr [0x01b4d71c],0x0      ; 0045c774 | DAT_01b4d71c
    JNZ 0x0045c7c5                      ; 0045c77b
        ;   XREF to: 0045c7c5 (CONDITIONAL_JUMP)  ; LAB_0045c7c5
    MOV EDX,dword ptr [0x005b7624]      ; 0045c77d | DAT_005b7624
    SHL EBX,0x2                         ; 0045c783
    CMP EDX,0x10                        ; 0045c786
    JNC 0x0045c81d                      ; 0045c789
        ;   XREF to: 0045c81d (CONDITIONAL_JUMP)  ; LAB_0045c81d
    CMP EDX,0x8                         ; 0045c78f
    JNZ 0x0045c824                      ; 0045c792
        ;   XREF to: 0045c824 (CONDITIONAL_JUMP)  ; LAB_0045c824
    SUB ECX,EAX                         ; 0045c798
    INC ECX                             ; 0045c79a
    PUSH ECX                            ; 0045c79b
    MOV ECX,dword ptr [0x01b4d710]      ; 0045c79c | DAT_01b4d710
    MOV EDX,dword ptr [EBX + 0x1bd2fa0] ; 0045c7a2 | DAT_01bd2fa0
    PUSH ECX                            ; 0045c7a8
    ADD EDX,EAX                         ; 0045c7a9
    PUSH EDX                            ; 0045c7ab
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0045c7ac
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 0045c7b1
    LEA EAX,[EAX]                       ; 0045c7b4
    LEA EDX,[EDX]                       ; 0045c7ba
    POP EBP                             ; 0045c7c0
        ;   Label: LAB_0045c7c0
    POP EDI                             ; 0045c7c1
    POP ESI                             ; 0045c7c2
    POP EBX                             ; 0045c7c3
    RET                                 ; 0045c7c4
    PUSH EBX                            ; 0045c7c5
        ;   Label: LAB_0045c7c5
    PUSH ECX                            ; 0045c7c6
    PUSH EAX                            ; 0045c7c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20 ; 0045c7c8
        ;   XREF to: 0045bc20 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20()
    ADD ESP,0xc                         ; 0045c7cd
    POP EBP                             ; 0045c7d0
    POP EDI                             ; 0045c7d1
    POP ESI                             ; 0045c7d2
    POP EBX                             ; 0045c7d3
    RET                                 ; 0045c7d4
    LEA EDX,[EAX + EAX*0x1]             ; 0045c7d5
        ;   Label: LAB_0045c7d5
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 0045c7d8 | DAT_01bd2fa0
    ADD EDX,EBX                         ; 0045c7de
    ADD EDX,0x2                         ; 0045c7e0
        ;   Label: LAB_0045c7e0
    MOV BX,word ptr [0x01b4d710]        ; 0045c7e3 | DAT_01b4d710
    INC EAX                             ; 0045c7ea
    MOV word ptr [EDX + -0x2],BX        ; 0045c7eb
    CMP EAX,ECX                         ; 0045c7ef
    JLE 0x0045c7e0                      ; 0045c7f1
        ;   XREF to: 0045c7e0 (CONDITIONAL_JUMP)  ; LAB_0045c7e0
    POP EBP                             ; 0045c7f3
    POP EDI                             ; 0045c7f4
    POP ESI                             ; 0045c7f5
    POP EBX                             ; 0045c7f6
    RET                                 ; 0045c7f7
    LEA EDX,[EAX*0x4 + 0x0]             ; 0045c7f8
        ;   Label: LAB_0045c7f8
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 0045c7ff | DAT_01bd2fa0
    ADD EDX,EBX                         ; 0045c805
    ADD EDX,0x4                         ; 0045c807
        ;   Label: LAB_0045c807
    MOV EBX,dword ptr [0x01b4d710]      ; 0045c80a | DAT_01b4d710
    INC EAX                             ; 0045c810
    MOV dword ptr [EDX + -0x4],EBX      ; 0045c811
    CMP EAX,ECX                         ; 0045c814
    JLE 0x0045c807                      ; 0045c816
        ;   XREF to: 0045c807 (CONDITIONAL_JUMP)  ; LAB_0045c807
    POP EBP                             ; 0045c818
    POP EDI                             ; 0045c819
    POP ESI                             ; 0045c81a
    POP EBX                             ; 0045c81b
    RET                                 ; 0045c81c
    JBE 0x0045c7d5                      ; 0045c81d
        ;   XREF to: 0045c7d5 (CONDITIONAL_JUMP)  ; LAB_0045c7d5
        ;   Label: LAB_0045c81d
    CMP EDX,0x20                        ; 0045c81f
    JZ 0x0045c7f8                       ; 0045c822
        ;   XREF to: 0045c7f8 (CONDITIONAL_JUMP)  ; LAB_0045c7f8
    MOV EBP,0x57d9bf                    ; 0045c824 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045c824
    MOV EAX,0x3a5                       ; 0045c829
    PUSH 0x57d9d7                       ; 0045c82e | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01cc4800],EBP      ; 0045c833 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0045c839 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045c83e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0045c843
    POP EBP                             ; 0045c846
    POP EDI                             ; 0045c847
    POP ESI                             ; 0045c848
    POP EBX                             ; 0045c849
    RET                                 ; 0045c84a

