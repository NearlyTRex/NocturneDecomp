; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468c2a
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c2c
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004660b0
        ;   Label: cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0
    PUSH ESI                            ; 004660b1
    PUSH EDI                            ; 004660b2
    PUSH EBP                            ; 004660b3
    SUB ESP,0x8                         ; 004660b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004660b7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004660bb
    MOV EBX,dword ptr [ESP + 0x24]      ; 004660bf
    AND EAX,0xff                        ; 004660c3
    AND ESI,0xff                        ; 004660c8
    MOV EDI,EAX                         ; 004660ce
    MOV ECX,ESI                         ; 004660d0
    SAR EDI,0x3                         ; 004660d2
    SAR ECX,0x3                         ; 004660d5
    SHL EDI,0xa                         ; 004660d8
    SHL ECX,0x5                         ; 004660db
    AND EBX,0xff                        ; 004660de
    ADD ECX,EDI                         ; 004660e4
    MOV EDI,EBX                         ; 004660e6
    SAR EDI,0x3                         ; 004660e8
    ADD EDI,ECX                         ; 004660eb
    XOR ECX,ECX                         ; 004660ed
    MOV CL,byte ptr [EDI + 0x1c2c910]   ; 004660ef
    XOR EDX,EDX                         ; 004660f5
    MOV dword ptr [0x01ba5c2c],ECX      ; 004660f7 | DAT_01ba5c2c
    MOV ECX,dword ptr [0x006141c0]      ; 004660fd | DAT_006141c0
    MOV dword ptr [0x01ba5c34],EDX      ; 00466103 | DAT_01ba5c34
    CMP ECX,0x10                        ; 00466109
    JNC 0x004661db                      ; 0046610c
        ;   XREF to: 004661db (CONDITIONAL_JUMP)  ; LAB_004661db
    CMP ECX,0x8                         ; 00466112
    JNZ 0x004661e6                      ; 00466115
        ;   XREF to: 004661e6 (CONDITIONAL_JUMP)  ; LAB_004661e6
    XOR EAX,EAX                         ; 0046611b
    MOV AL,byte ptr [EDI + 0x1c2c910]   ; 0046611d
    MOV [0x01ba5c28],EAX                ; 00466123 | DAT_01ba5c28
    ADD ESP,0x8                         ; 00466128
    POP EBP                             ; 0046612b
    POP EDI                             ; 0046612c
    POP ESI                             ; 0046612d
    POP EBX                             ; 0046612e
    RET                                 ; 0046612f
    DIV dword ptr [0x01c35818]          ; 00466130 | DAT_01c35818
        ;   Label: LAB_00466130
    MOV dword ptr [ESP],ESI             ; 00466136
    MOV EDI,EAX                         ; 00466139
    XOR EDX,EDX                         ; 0046613b
    MOV EAX,ESI                         ; 0046613d
    DIV dword ptr [0x01c35824]          ; 0046613f | DAT_01c35824
    MOV EBP,dword ptr [0x01c35830]      ; 00466145 | DAT_01c35830
    MOV dword ptr [ESP],EAX             ; 0046614b
    XOR EDX,EDX                         ; 0046614e
    MOV EAX,EBX                         ; 00466150
    DIV EBP                             ; 00466152
    MOV CL,byte ptr [0x01c35814]        ; 00466154 | DAT_01c35814
    MOV dword ptr [ESP + 0x4],EBX       ; 0046615a
    SHL EDI,CL                          ; 0046615e
    MOV CL,byte ptr [0x01c35820]        ; 00466160 | DAT_01c35820
    MOV dword ptr [ESP + 0x4],EAX       ; 00466166
    MOV EAX,dword ptr [ESP]             ; 0046616a
    SHL EAX,CL                          ; 0046616d
    MOV CL,byte ptr [0x01c3582c]        ; 0046616f | DAT_01c3582c
    OR EDI,EAX                          ; 00466175
    MOV EAX,dword ptr [ESP + 0x4]       ; 00466177
    SHL EAX,CL                          ; 0046617b
    OR EAX,EDI                          ; 0046617d
    AND EAX,0xffff                      ; 0046617f
    MOV [0x01ba5c28],EAX                ; 00466184 | DAT_01ba5c28
    ADD ESP,0x8                         ; 00466189
    POP EBP                             ; 0046618c
    POP EDI                             ; 0046618d
    POP ESI                             ; 0046618e
    POP EBX                             ; 0046618f
    RET                                 ; 00466190
    CMP ECX,ECX                         ; 00466191
        ;   Label: LAB_00466191
    JNZ 0x004661c1                      ; 00466193
        ;   XREF to: 004661c1 (CONDITIONAL_JUMP)  ; LAB_004661c1
    MOV CL,byte ptr [0x01c35814]        ; 00466195 | DAT_01c35814
    SHL EAX,CL                          ; 0046619b
    MOV CL,byte ptr [0x01c35820]        ; 0046619d | DAT_01c35820
    SHL ESI,CL                          ; 004661a3
    MOV CL,byte ptr [0x01c3582c]        ; 004661a5 | DAT_01c3582c
    SHL EBX,CL                          ; 004661ab
    OR EAX,ESI                          ; 004661ad
    MOV ECX,EBX                         ; 004661af
    OR ECX,EAX                          ; 004661b1
    MOV dword ptr [0x01ba5c28],ECX      ; 004661b3 | DAT_01ba5c28
    ADD ESP,0x8                         ; 004661b9
    POP EBP                             ; 004661bc
    POP EDI                             ; 004661bd
    POP ESI                             ; 004661be
    POP EBX                             ; 004661bf
    RET                                 ; 004661c0
    MOV ECX,EAX                         ; 004661c1
        ;   Label: LAB_004661c1
    SHL ESI,0x8                         ; 004661c3
    SHL ECX,0x10                        ; 004661c6
    OR ECX,ESI                          ; 004661c9
    OR ECX,EBX                          ; 004661cb
    MOV dword ptr [0x01ba5c28],ECX      ; 004661cd | DAT_01ba5c28
    ADD ESP,0x8                         ; 004661d3
    POP EBP                             ; 004661d6
    POP EDI                             ; 004661d7
    POP ESI                             ; 004661d8
    POP EBX                             ; 004661d9
    RET                                 ; 004661da
    JBE 0x00466130                      ; 004661db
        ;   XREF to: 00466130 (CONDITIONAL_JUMP)  ; LAB_00466130
        ;   Label: LAB_004661db
    CMP ECX,0x20                        ; 004661e1
    JZ 0x00466191                       ; 004661e4
        ;   XREF to: 00466191 (CONDITIONAL_JUMP)  ; LAB_00466191
    MOV EAX,0x5d123b                    ; 004661e6
        ;   Label: LAB_004661e6
    MOV EDX,0x11d                       ; 004661eb
    PUSH 0x5d1253                       ; 004661f0
    MOV [0x01d046a0],EAX                ; 004661f5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004661fa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00466200
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00466205
    ADD ESP,0x8                         ; 00466208
    POP EBP                             ; 0046620b
    POP EDI                             ; 0046620c
    POP ESI                             ; 0046620d
    POP EBX                             ; 0046620e
    RET                                 ; 0046620f

