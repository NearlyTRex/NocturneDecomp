; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad860(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df1f4
;   undefined4 DAT_005df1fc
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01c43530
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004d7f50
;   FUN_00532250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad860
        ;   Label: FUN_004ad860
    PUSH EDI                            ; 004ad861
    PUSH EBP                            ; 004ad862
    SUB ESP,0x14                        ; 004ad863
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ad866
    CMP dword ptr [EBX + 0x4c],0x0      ; 004ad86a
    JNZ 0x004ad975                      ; 004ad86e
        ;   XREF to: 004ad975 (CONDITIONAL_JUMP)  ; LAB_004ad975
    MOV dword ptr [EBX + 0x4c],0x1      ; 004ad874
    MOV EAX,[0x0061d95c]                ; 004ad87b | DAT_0061d95c
        ;   Label: LAB_004ad87b
    MOV EAX,dword ptr [EAX + 0x294]     ; 004ad880 | DAT_01ccf624
    MOV EDX,dword ptr [0x01c43530]      ; 004ad886 | DAT_01c43530
    MOV dword ptr [ESP + 0xc],EAX       ; 004ad88c
    MOV EAX,dword ptr [EBX + 0x58]      ; 004ad890
    IMUL EDX                            ; 004ad893
    SHRD EAX,EDX,0x10                   ; 004ad895
    MOV dword ptr [ESP + 0x10],EAX      ; 004ad899
    FILD dword ptr [ESP + 0x10]         ; 004ad89d
    FMUL double ptr [0x005df1f4]        ; 004ad8a1 | DAT_005df1f4
    SUB ESP,0x4                         ; 004ad8a7
    MOV EDI,dword ptr [0x0061d95c]      ; 004ad8aa | DAT_0061d95c
    FSTP float ptr [ESP]                ; 004ad8b0
    PUSH EDI                            ; 004ad8b3 | DAT_01ccf390
    CALL FUN_004d7f50                   ; 004ad8b4
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 004ad8b9
    PUSH EBX                            ; 004ad8bc
    CALL FUN_00532250                   ; 004ad8bd
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined FUN_00532250()
    FLD float ptr [EBX + 0x48]          ; 004ad8c2
    ADD ESP,0x4                         ; 004ad8c5
    FMUL float ptr [0x005df1fc]         ; 004ad8c8 | DAT_005df1fc
    SUB ESP,0x4                         ; 004ad8ce
    FSTP float ptr [ESP]                ; 004ad8d1
    PUSH 0x0                            ; 004ad8d4
    CALL FUN_0040cc00                   ; 004ad8d6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    FLD float ptr [EBX + 0x48]          ; 004ad8db
    MOV dword ptr [ESP + 0x18],EAX      ; 004ad8de
    FMUL float ptr [0x005df1fc]         ; 004ad8e2 | DAT_005df1fc
    FLD float ptr [ESP + 0x18]          ; 004ad8e8
    FSUB float ptr [EBX + 0x48]         ; 004ad8ec
    ADD ESP,0x8                         ; 004ad8ef
    FSTP float ptr [ESP + 0x4]          ; 004ad8f2
    SUB ESP,0x4                         ; 004ad8f6
    FSTP float ptr [ESP]                ; 004ad8f9
    PUSH 0x0                            ; 004ad8fc
    CALL FUN_0040cc00                   ; 004ad8fe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    FLD float ptr [EBX + 0x48]          ; 004ad903
    MOV dword ptr [ESP + 0x18],EAX      ; 004ad906
    FMUL float ptr [0x005df1fc]         ; 004ad90a | DAT_005df1fc
    FLD float ptr [ESP + 0x18]          ; 004ad910
    FSUB float ptr [EBX + 0x48]         ; 004ad914
    ADD ESP,0x8                         ; 004ad917
    FSTP float ptr [ESP + 0x8]          ; 004ad91a
    SUB ESP,0x4                         ; 004ad91e
    FSTP float ptr [ESP]                ; 004ad921
    PUSH 0x0                            ; 004ad924
    CALL FUN_0040cc00                   ; 004ad926
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    FLD float ptr [EBX + 0xc]           ; 004ad92b
    FLD float ptr [EBX + 0x10]          ; 004ad92e
    MOV dword ptr [ESP + 0x18],EAX      ; 004ad931
    FLD float ptr [EBX + 0x14]          ; 004ad935
    FLD float ptr [ESP + 0x18]          ; 004ad938
    ADD ESP,0x8                         ; 004ad93c
    MOV EBP,dword ptr [0x0061d95c]      ; 004ad93f | DAT_0061d95c
    PUSH dword ptr [ESP + 0xc]          ; 004ad945
    FSUB float ptr [EBX + 0x48]         ; 004ad949
    FXCH ST3                            ; 004ad94c
    FADD float ptr [ESP + 0x8]          ; 004ad94e
    FXCH ST2                            ; 004ad952
    FADD float ptr [ESP + 0xc]          ; 004ad954
    PUSH EBP                            ; 004ad958 | DAT_01ccf390
    FXCH ST2                            ; 004ad959
    FSTP float ptr [EBX + 0xc]          ; 004ad95b
    FADDP ST2,ST0                       ; 004ad95e
    FSTP float ptr [EBX + 0x10]         ; 004ad960
    FSTP float ptr [EBX + 0x14]         ; 004ad963
    CALL FUN_004d7f50                   ; 004ad966
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 004ad96b
    ADD ESP,0x14                        ; 004ad96e
    POP EBP                             ; 004ad971
    POP EDI                             ; 004ad972
    POP EBX                             ; 004ad973
    RET                                 ; 004ad974
    MOV EAX,[0x01c43530]                ; 004ad975 | DAT_01c43530
        ;   Label: LAB_004ad975
    MOV EDX,dword ptr [EBX + 0x58]      ; 004ad97a
    MOV ECX,dword ptr [EBX + 0x44]      ; 004ad97d
    IMUL EDX                            ; 004ad980
    SHRD EAX,EDX,0x10                   ; 004ad982
    MOV EDX,EAX                         ; 004ad986
    MOV EAX,ECX                         ; 004ad988
    IMUL EDX                            ; 004ad98a
    SHRD EAX,EDX,0x10                   ; 004ad98c
    MOV ECX,dword ptr [EBX + 0x40]      ; 004ad990
    SUB ECX,EAX                         ; 004ad993
    MOV dword ptr [EBX + 0x40],ECX      ; 004ad995
    TEST ECX,ECX                        ; 004ad998
    JGE 0x004ad87b                      ; 004ad99a
        ;   XREF to: 004ad87b (CONDITIONAL_JUMP)  ; LAB_004ad87b
    MOV dword ptr [EBX + 0x24],0x0      ; 004ad9a0
    MOV dword ptr [EBX + 0x40],0x0      ; 004ad9a7
    JMP 0x004ad87b                      ; 004ad9ae
        ;   XREF to: 004ad87b (UNCONDITIONAL_JUMP)  ; LAB_004ad87b

