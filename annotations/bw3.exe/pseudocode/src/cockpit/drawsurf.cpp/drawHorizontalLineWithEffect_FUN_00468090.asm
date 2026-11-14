; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_00468090(int start_x,int end_x,int y)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   end_x
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60 at 00468bf8
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_004694f0 at 00469556
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7cc
;   undefined4 DAT_01bdd7dc
;   undefined4 DAT_01bdd7e0
;   undefined4 DAT_01c5faec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468090
        ;   Label: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090
    PUSH ESI                            ; 00468091
    PUSH EDI                            ; 00468092
    MOV EDI,dword ptr [0x01bdd7dc]      ; 00468093 | DAT_01bdd7dc
    MOV EDX,dword ptr [ESP + 0x10]      ; 00468099
    MOV ESI,dword ptr [ESP + 0x14]      ; 0046809d
    MOV ECX,dword ptr [0x005fba20]      ; 004680a1 | DAT_005fba20
    CMP ECX,0x8                         ; 004680a7
    JZ 0x00468120                       ; 004680aa
        ;   XREF to: 00468120 (CONDITIONAL_JUMP)  ; LAB_00468120
    MOV EBX,dword ptr [ESP + 0x18]      ; 004680b0
    SHL EBX,0x2                         ; 004680b4
    CMP ECX,0x10                        ; 004680b7
    JNZ 0x00468146                      ; 004680ba
        ;   XREF to: 00468146 (CONDITIONAL_JUMP)  ; LAB_00468146
    LEA ECX,[EDX + EDX*0x1]             ; 004680c0
    MOV EAX,dword ptr [EBX + 0x1c5faec] ; 004680c3 | DAT_01c5faec
    MOV EBX,EDX                         ; 004680c9
    ADD EAX,ECX                         ; 004680cb
    TEST DL,0x1                         ; 004680cd
    JZ 0x004680ed                       ; 004680d0
        ;   XREF to: 004680ed (CONDITIONAL_JUMP)  ; LAB_004680ed
    XOR EBX,EDX                         ; 004680d2
    MOV CL,byte ptr [0x01bdd7cc]        ; 004680d4 | DAT_01bdd7cc
    MOV BX,word ptr [EAX]               ; 004680da
    SHR EBX,CL                          ; 004680dd
    MOV ECX,EBX                         ; 004680df
    ADD EAX,0x2                         ; 004680e1
    AND ECX,EDI                         ; 004680e4
    LEA EBX,[EDX + 0x1]                 ; 004680e6
    MOV word ptr [EAX + -0x2],CX        ; 004680e9
    CMP EBX,ESI                         ; 004680ed
        ;   Label: LAB_004680ed
    JGE 0x00468110                      ; 004680ef
        ;   XREF to: 00468110 (CONDITIONAL_JUMP)  ; LAB_00468110
    MOV CL,byte ptr [0x01bdd7cc]        ; 004680f1 | DAT_01bdd7cc
        ;   Label: LAB_004680f1
    MOV EDX,dword ptr [EAX]             ; 004680f7
    SHR EDX,CL                          ; 004680f9
    MOV ECX,dword ptr [0x01bdd7e0]      ; 004680fb | DAT_01bdd7e0
    ADD EAX,0x4                         ; 00468101
    AND EDX,ECX                         ; 00468104
    ADD EBX,0x2                         ; 00468106
    MOV dword ptr [EAX + -0x4],EDX      ; 00468109
    CMP EBX,ESI                         ; 0046810c
    JL 0x004680f1                       ; 0046810e
        ;   XREF to: 004680f1 (CONDITIONAL_JUMP)  ; LAB_004680f1
    JZ 0x0046812a                       ; 00468110
        ;   XREF to: 0046812a (CONDITIONAL_JUMP)  ; LAB_0046812a
        ;   Label: LAB_00468110
    LEA EAX,[EAX]                       ; 00468112
    LEA EDX,[EDX]                       ; 00468118
    MOV EAX,EAX                         ; 0046811e
    MOV dword ptr [0x01bdd7dc],EDI      ; 00468120 | DAT_01bdd7dc
        ;   Label: LAB_00468120
    POP EDI                             ; 00468126
    POP ESI                             ; 00468127
    POP EBX                             ; 00468128
    RET                                 ; 00468129
    XOR EDX,EDX                         ; 0046812a
        ;   Label: LAB_0046812a
    MOV CL,byte ptr [0x01bdd7cc]        ; 0046812c | DAT_01bdd7cc
    MOV DX,word ptr [EAX]               ; 00468132
    SHR EDX,CL                          ; 00468135
    AND EDX,EDI                         ; 00468137
    MOV word ptr [EAX],DX               ; 00468139
    MOV dword ptr [0x01bdd7dc],EDI      ; 0046813c | DAT_01bdd7dc
    POP EDI                             ; 00468142
    POP ESI                             ; 00468143
    POP EBX                             ; 00468144
    RET                                 ; 00468145
    CMP ECX,0x20                        ; 00468146
        ;   Label: LAB_00468146
    JNZ 0x00468120                      ; 00468149
        ;   XREF to: 00468120 (CONDITIONAL_JUMP)  ; LAB_00468120
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046814b
    MOV ECX,dword ptr [EBX + 0x1c5faec] ; 00468152 | DAT_01c5faec
    MOV EBX,EDX                         ; 00468158
    ADD EAX,ECX                         ; 0046815a
    CMP EDX,ESI                         ; 0046815c
    JG 0x00468120                       ; 0046815e
        ;   XREF to: 00468120 (CONDITIONAL_JUMP)  ; LAB_00468120
    MOV CL,byte ptr [0x01bdd7cc]        ; 00468160 | DAT_01bdd7cc
        ;   Label: LAB_00468160
    MOV EDX,dword ptr [EAX]             ; 00468166
    SHR EDX,CL                          ; 00468168
    ADD EAX,0x4                         ; 0046816a
    AND EDX,EDI                         ; 0046816d
    INC EBX                             ; 0046816f
    MOV dword ptr [EAX + -0x4],EDX      ; 00468170
    CMP EBX,ESI                         ; 00468173
    JLE 0x00468160                      ; 00468175
        ;   XREF to: 00468160 (CONDITIONAL_JUMP)  ; LAB_00468160
    MOV dword ptr [0x01bdd7dc],EDI      ; 00468177 | DAT_01bdd7dc
    POP EDI                             ; 0046817d
    POP ESI                             ; 0046817e
    POP EBX                             ; 0046817f
    RET                                 ; 00468180

