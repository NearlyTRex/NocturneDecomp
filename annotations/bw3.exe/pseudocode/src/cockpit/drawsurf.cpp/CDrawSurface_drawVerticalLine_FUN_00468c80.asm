; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00468c80(CDrawSurface *this_ptr,int x,int start_y,int end_y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   start_y
; int              Stack[0x10]:4   end_y
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20 at 00468f5c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005bc2e3
;   TerminatedCString s_Invalid_bitsPerPixel_005bc2fb
;   TerminatedCString s_cockpit_drawsurf_cpp_005bc311
;   TerminatedCString s_Invalid_bitsPerPixel_005bc329
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01bdd7cc
;   undefined4 DAT_01bdd7dc
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468c80
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00468c80
    PUSH ESI                            ; 00468c81
    PUSH EDI                            ; 00468c82
    PUSH EBP                            ; 00468c83
    SUB ESP,0x8                         ; 00468c84
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00468c87
    MOV ESI,dword ptr [ESP + 0x20]      ; 00468c8b
    MOV EAX,dword ptr [ESP + 0x24]      ; 00468c8f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00468c93
    MOV ECX,dword ptr [EDX + 0x8]       ; 00468c97
    MOV EDI,dword ptr [EDX + 0xc]       ; 00468c9a
    ADD ESI,ECX                         ; 00468c9d
    ADD EAX,EDI                         ; 00468c9f
    MOV ECX,dword ptr [EDX + 0x10]      ; 00468ca1
    ADD EBX,EDI                         ; 00468ca4
    CMP ESI,ECX                         ; 00468ca6
    JL 0x00468d20                       ; 00468ca8
        ;   XREF to: 00468d20 (CONDITIONAL_JUMP)  ; LAB_00468d20
    CMP ESI,dword ptr [EDX + 0x18]      ; 00468cae
    JG 0x00468d20                       ; 00468cb1
        ;   XREF to: 00468d20 (CONDITIONAL_JUMP)  ; LAB_00468d20
    MOV EBP,dword ptr [EDX + 0x14]      ; 00468cb7
    CMP EAX,EBP                         ; 00468cba
    JGE 0x00468cc0                      ; 00468cbc
        ;   XREF to: 00468cc0 (CONDITIONAL_JUMP)  ; LAB_00468cc0
    MOV EAX,EBP                         ; 00468cbe
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00468cc0
        ;   Label: LAB_00468cc0
    CMP EBX,ECX                         ; 00468cc3
    JLE 0x00468cc9                      ; 00468cc5
        ;   XREF to: 00468cc9 (CONDITIONAL_JUMP)  ; LAB_00468cc9
    MOV EBX,ECX                         ; 00468cc7
    CMP EAX,EBX                         ; 00468cc9
        ;   Label: LAB_00468cc9
    JG 0x00468d20                       ; 00468ccb
        ;   XREF to: 00468d20 (CONDITIONAL_JUMP)  ; LAB_00468d20
    LEA EDI,[ESI + ESI*0x1]             ; 00468ccd
    MOV EBP,dword ptr [0x01bdd7c8]      ; 00468cd0 | DAT_01bdd7c8
    LEA EDX,[ESI*0x4 + 0x0]             ; 00468cd6
    SHL EBX,0x2                         ; 00468cdd
    MOV dword ptr [ESP],EDX             ; 00468ce0
    LEA EDX,[EAX*0x4 + 0x0]             ; 00468ce3
    TEST EBP,EBP                        ; 00468cea
    JNZ 0x00468e06                      ; 00468cec
        ;   XREF to: 00468e06 (CONDITIONAL_JUMP)  ; LAB_00468e06
    MOV ECX,dword ptr [0x005fba20]      ; 00468cf2 | DAT_005fba20
    CMP ECX,0x10                        ; 00468cf8
    JNC 0x00468d8e                      ; 00468cfb
        ;   XREF to: 00468d8e (CONDITIONAL_JUMP)  ; LAB_00468d8e
    CMP ECX,0x8                         ; 00468d01
    JNZ 0x00468d63                      ; 00468d04
        ;   XREF to: 00468d63 (CONDITIONAL_JUMP)  ; LAB_00468d63
    MOV EDI,EBX                         ; 00468d06
    MOV CL,byte ptr [0x01bdd7bc]        ; 00468d08 | DAT_01bdd7bc
        ;   Label: LAB_00468d08
    MOV EBX,dword ptr [EDX + 0x1c5faec] ; 00468d0e | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,0x4                         ; 00468d14
    INC EAX                             ; 00468d17
    MOV byte ptr [ESI + EBX*0x1],CL     ; 00468d18
    CMP EDX,EDI                         ; 00468d1b
    JLE 0x00468d08                      ; 00468d1d
        ;   XREF to: 00468d08 (CONDITIONAL_JUMP)  ; LAB_00468d08
    NOP                                 ; 00468d1f
    ADD ESP,0x8                         ; 00468d20
        ;   Label: LAB_00468d20
    POP EBP                             ; 00468d23
    POP EDI                             ; 00468d24
    POP ESI                             ; 00468d25
    POP EBX                             ; 00468d26
    RET                                 ; 00468d27
    MOV ESI,EBX                         ; 00468d28
        ;   Label: LAB_00468d28
    MOV BX,word ptr [0x01bdd7bc]        ; 00468d2a | DAT_01bdd7bc
        ;   Label: LAB_00468d2a
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 00468d31 | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,0x4                         ; 00468d37
    INC EAX                             ; 00468d3a
    MOV word ptr [ECX + EDI*0x1],BX     ; 00468d3b
    CMP EDX,ESI                         ; 00468d3f
    JLE 0x00468d2a                      ; 00468d41
        ;   XREF to: 00468d2a (CONDITIONAL_JUMP)  ; LAB_00468d2a
    JMP 0x00468d20                      ; 00468d43
        ;   XREF to: 00468d20 (UNCONDITIONAL_JUMP)  ; LAB_00468d20
    MOV EDI,dword ptr [ESP]             ; 00468d45
        ;   Label: LAB_00468d45
    MOV ESI,EBX                         ; 00468d48
    MOV EBX,dword ptr [0x01bdd7bc]      ; 00468d4a | DAT_01bdd7bc
        ;   Label: LAB_00468d4a
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 00468d50 | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,0x4                         ; 00468d56
    INC EAX                             ; 00468d59
    MOV dword ptr [ECX + EDI*0x1],EBX   ; 00468d5a
    CMP EDX,ESI                         ; 00468d5d
    JLE 0x00468d4a                      ; 00468d5f
        ;   XREF to: 00468d4a (CONDITIONAL_JUMP)  ; LAB_00468d4a
    JMP 0x00468d20                      ; 00468d61
        ;   XREF to: 00468d20 (UNCONDITIONAL_JUMP)  ; LAB_00468d20
    MOV ECX,0x5bc2e3                    ; 00468d63 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00468d63
    MOV EBX,0x3dc                       ; 00468d68
    PUSH 0x5bc2fb                       ; 00468d6d | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d71de0],ECX      ; 00468d72 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00468d78 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00468d7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00468d83
    ADD ESP,0x8                         ; 00468d86
    POP EBP                             ; 00468d89
    POP EDI                             ; 00468d8a
    POP ESI                             ; 00468d8b
    POP EBX                             ; 00468d8c
    RET                                 ; 00468d8d
    JBE 0x00468d28                      ; 00468d8e
        ;   XREF to: 00468d28 (CONDITIONAL_JUMP)  ; LAB_00468d28
        ;   Label: LAB_00468d8e
    CMP ECX,0x20                        ; 00468d90
    JZ 0x00468d45                       ; 00468d93
        ;   XREF to: 00468d45 (CONDITIONAL_JUMP)  ; LAB_00468d45
    JMP 0x00468d63                      ; 00468d95
        ;   XREF to: 00468d63 (UNCONDITIONAL_JUMP)  ; LAB_00468d63
    MOV EBP,EDI                         ; 00468d97
        ;   Label: LAB_00468d97
    MOV EDI,EBX                         ; 00468d99
    MOV EBX,dword ptr [EDX + 0x1c5faec] ; 00468d9b | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_00468d9b
    XOR ESI,ESI                         ; 00468da1
    MOV CL,byte ptr [0x01bdd7cc]        ; 00468da3 | DAT_01bdd7cc
    MOV SI,word ptr [EBX + EBP*0x1]     ; 00468da9
    SHR ESI,CL                          ; 00468dad
    MOV ECX,dword ptr [0x01bdd7dc]      ; 00468daf | DAT_01bdd7dc
    ADD EDX,0x4                         ; 00468db5
    AND ESI,ECX                         ; 00468db8
    INC EAX                             ; 00468dba
    MOV word ptr [EBX + EBP*0x1],SI     ; 00468dbb
    CMP EDX,EDI                         ; 00468dbf
    JLE 0x00468d9b                      ; 00468dc1
        ;   XREF to: 00468d9b (CONDITIONAL_JUMP)  ; LAB_00468d9b
    ADD ESP,0x8                         ; 00468dc3
    POP EBP                             ; 00468dc6
    POP EDI                             ; 00468dc7
    POP ESI                             ; 00468dc8
    POP EBX                             ; 00468dc9
    RET                                 ; 00468dca
    MOV ECX,dword ptr [ESP]             ; 00468dcb
        ;   Label: LAB_00468dcb
    MOV dword ptr [ESP + 0x4],ECX       ; 00468dce
    MOV EDI,EBX                         ; 00468dd2
    MOV EBP,dword ptr [ESP + 0x4]       ; 00468dd4
    MOV ESI,dword ptr [EDX + 0x1c5faec] ; 00468dd8 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_00468dd8
    ADD ESI,EBP                         ; 00468dde
    MOV CL,byte ptr [0x01bdd7cc]        ; 00468de0 | DAT_01bdd7cc
    MOV EBX,dword ptr [ESI]             ; 00468de6
    SHR EBX,CL                          ; 00468de8
    MOV ECX,EBX                         ; 00468dea
    MOV EBX,dword ptr [0x01bdd7dc]      ; 00468dec | DAT_01bdd7dc
    ADD EDX,0x4                         ; 00468df2
    AND ECX,EBX                         ; 00468df5
    INC EAX                             ; 00468df7
    MOV dword ptr [ESI],ECX             ; 00468df8
    CMP EDX,EDI                         ; 00468dfa
    JLE 0x00468dd8                      ; 00468dfc
        ;   XREF to: 00468dd8 (CONDITIONAL_JUMP)  ; LAB_00468dd8
    ADD ESP,0x8                         ; 00468dfe
    POP EBP                             ; 00468e01
    POP EDI                             ; 00468e02
    POP ESI                             ; 00468e03
    POP EBX                             ; 00468e04
    RET                                 ; 00468e05
    MOV ECX,dword ptr [0x005fba20]      ; 00468e06 | DAT_005fba20
        ;   Label: LAB_00468e06
    CMP ECX,0x10                        ; 00468e0c
    JNC 0x00468e1c                      ; 00468e0f
        ;   XREF to: 00468e1c (CONDITIONAL_JUMP)  ; LAB_00468e1c
    CMP ECX,0x8                         ; 00468e11
    JZ 0x00468d20                       ; 00468e14
        ;   XREF to: 00468d20 (CONDITIONAL_JUMP)  ; LAB_00468d20
    JMP 0x00468e27                      ; 00468e1a
        ;   XREF to: 00468e27 (UNCONDITIONAL_JUMP)  ; LAB_00468e27
    JBE 0x00468d97                      ; 00468e1c
        ;   XREF to: 00468d97 (CONDITIONAL_JUMP)  ; LAB_00468d97
        ;   Label: LAB_00468e1c
    CMP ECX,0x20                        ; 00468e22
    JZ 0x00468dcb                       ; 00468e25
        ;   XREF to: 00468dcb (CONDITIONAL_JUMP)  ; LAB_00468dcb
    MOV EAX,0x5bc311                    ; 00468e27 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00468e27
    MOV EDX,0x3fc                       ; 00468e2c
    PUSH 0x5bc329                       ; 00468e31 | = "Invalid bitsPerPixel!"
    MOV [0x01d71de0],EAX                ; 00468e36 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00468e3b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00468e41
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00468e46
    ADD ESP,0x8                         ; 00468e49
    POP EBP                             ; 00468e4c
    POP EDI                             ; 00468e4d
    POP ESI                             ; 00468e4e
    POP EBX                             ; 00468e4f
    RET                                 ; 00468e50

