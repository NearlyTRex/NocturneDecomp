; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004988b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0530
;   undefined4 DAT_005c0538
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21620
;
; Called Functions:
;   FUN_0040ce40
;   FUN_004bf3a0
;   FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004988b0
        ;   Label: FUN_004988b0
    PUSH EDI                            ; 004988b1
    PUSH EBP                            ; 004988b2
    SUB ESP,0x14                        ; 004988b3
    MOV EBX,dword ptr [ESP + 0x24]      ; 004988b6
    CMP dword ptr [EBX + 0x4c],0x0      ; 004988ba
    JNZ 0x004989c5                      ; 004988be
        ;   XREF to: 004989c5 (CONDITIONAL_JUMP)  ; LAB_004989c5
    MOV dword ptr [EBX + 0x4c],0x1      ; 004988c4
    MOV EAX,[0x005fe9dc]                ; 004988cb | DAT_005fe9dc
        ;   Label: LAB_004988cb
    MOV EAX,dword ptr [EAX + 0x314]     ; 004988d0 | DAT_01d21620
    MOV EDX,dword ptr [0x01c5fad0]      ; 004988d6 | DAT_01c5fad0
    MOV dword ptr [ESP + 0xc],EAX       ; 004988dc
    MOV EAX,dword ptr [EBX + 0x58]      ; 004988e0
    IMUL EDX                            ; 004988e3
    SHRD EAX,EDX,0x10                   ; 004988e5
    MOV dword ptr [ESP + 0x10],EAX      ; 004988e9
    FILD dword ptr [ESP + 0x10]         ; 004988ed
    FMUL double ptr [0x005c0530]        ; 004988f1 | DAT_005c0530
    SUB ESP,0x4                         ; 004988f7
    MOV EDI,dword ptr [0x005fe9dc]      ; 004988fa | DAT_005fe9dc
    FSTP float ptr [ESP]                ; 00498900
    PUSH EDI                            ; 00498903 | DAT_01d2130c
    CALL FUN_004bf3a0                   ; 00498904
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bf3a0()
    ADD ESP,0x8                         ; 00498909
    PUSH EBX                            ; 0049890c
    CALL FUN_00509f30                   ; 0049890d
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509f30()
    FLD float ptr [EBX + 0x48]          ; 00498912
    ADD ESP,0x4                         ; 00498915
    FMUL float ptr [0x005c0538]         ; 00498918 | DAT_005c0538
    SUB ESP,0x4                         ; 0049891e
    FSTP float ptr [ESP]                ; 00498921
    PUSH 0x0                            ; 00498924
    CALL FUN_0040ce40                   ; 00498926
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    FLD float ptr [EBX + 0x48]          ; 0049892b
    MOV dword ptr [ESP + 0x18],EAX      ; 0049892e
    FMUL float ptr [0x005c0538]         ; 00498932 | DAT_005c0538
    FLD float ptr [ESP + 0x18]          ; 00498938
    FSUB float ptr [EBX + 0x48]         ; 0049893c
    ADD ESP,0x8                         ; 0049893f
    FSTP float ptr [ESP + 0x4]          ; 00498942
    SUB ESP,0x4                         ; 00498946
    FSTP float ptr [ESP]                ; 00498949
    PUSH 0x0                            ; 0049894c
    CALL FUN_0040ce40                   ; 0049894e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    FLD float ptr [EBX + 0x48]          ; 00498953
    MOV dword ptr [ESP + 0x18],EAX      ; 00498956
    FMUL float ptr [0x005c0538]         ; 0049895a | DAT_005c0538
    FLD float ptr [ESP + 0x18]          ; 00498960
    FSUB float ptr [EBX + 0x48]         ; 00498964
    ADD ESP,0x8                         ; 00498967
    FSTP float ptr [ESP + 0x8]          ; 0049896a
    SUB ESP,0x4                         ; 0049896e
    FSTP float ptr [ESP]                ; 00498971
    PUSH 0x0                            ; 00498974
    CALL FUN_0040ce40                   ; 00498976
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    FLD float ptr [EBX + 0xc]           ; 0049897b
    FLD float ptr [EBX + 0x10]          ; 0049897e
    MOV dword ptr [ESP + 0x18],EAX      ; 00498981
    FLD float ptr [EBX + 0x14]          ; 00498985
    FLD float ptr [ESP + 0x18]          ; 00498988
    ADD ESP,0x8                         ; 0049898c
    MOV EBP,dword ptr [0x005fe9dc]      ; 0049898f | DAT_005fe9dc
    PUSH dword ptr [ESP + 0xc]          ; 00498995
    FSUB float ptr [EBX + 0x48]         ; 00498999
    FXCH ST3                            ; 0049899c
    FADD float ptr [ESP + 0x8]          ; 0049899e
    FXCH ST2                            ; 004989a2
    FADD float ptr [ESP + 0xc]          ; 004989a4
    PUSH EBP                            ; 004989a8 | DAT_01d2130c
    FXCH ST2                            ; 004989a9
    FSTP float ptr [EBX + 0xc]          ; 004989ab
    FADDP ST2,ST0                       ; 004989ae
    FSTP float ptr [EBX + 0x10]         ; 004989b0
    FSTP float ptr [EBX + 0x14]         ; 004989b3
    CALL FUN_004bf3a0                   ; 004989b6
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bf3a0()
    ADD ESP,0x8                         ; 004989bb
    ADD ESP,0x14                        ; 004989be
    POP EBP                             ; 004989c1
    POP EDI                             ; 004989c2
    POP EBX                             ; 004989c3
    RET                                 ; 004989c4
    MOV EAX,[0x01c5fad0]                ; 004989c5 | DAT_01c5fad0
        ;   Label: LAB_004989c5
    MOV EDX,dword ptr [EBX + 0x58]      ; 004989ca
    MOV ECX,dword ptr [EBX + 0x44]      ; 004989cd
    IMUL EDX                            ; 004989d0
    SHRD EAX,EDX,0x10                   ; 004989d2
    MOV EDX,EAX                         ; 004989d6
    MOV EAX,ECX                         ; 004989d8
    IMUL EDX                            ; 004989da
    SHRD EAX,EDX,0x10                   ; 004989dc
    MOV ECX,dword ptr [EBX + 0x40]      ; 004989e0
    SUB ECX,EAX                         ; 004989e3
    MOV dword ptr [EBX + 0x40],ECX      ; 004989e5
    TEST ECX,ECX                        ; 004989e8
    JGE 0x004988cb                      ; 004989ea
        ;   XREF to: 004988cb (CONDITIONAL_JUMP)  ; LAB_004988cb
    MOV dword ptr [EBX + 0x24],0x0      ; 004989f0
    MOV dword ptr [EBX + 0x40],0x0      ; 004989f7
    JMP 0x004988cb                      ; 004989fe
        ;   XREF to: 004988cb (UNCONDITIONAL_JUMP)  ; LAB_004988cb

