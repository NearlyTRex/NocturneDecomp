; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e69e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_00468900
;   FUN_004a6c30
;   FUN_004e6bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e69e0
        ;   Label: FUN_004e69e0
    PUSH ESI                            ; 004e69e1
    PUSH EDI                            ; 004e69e2
    SUB ESP,0x8                         ; 004e69e3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e69e6
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004e69ea
    JNZ 0x004e6a0e                      ; 004e69f1
        ;   XREF to: 004e6a0e (CONDITIONAL_JUMP)  ; LAB_004e6a0e
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004e69f3
    JZ 0x004e6a1a                       ; 004e69fa
        ;   XREF to: 004e6a1a (CONDITIONAL_JUMP)  ; LAB_004e6a1a
    MOV EDI,dword ptr [EBX + 0x2e0]     ; 004e69fc
        ;   Label: LAB_004e69fc
    CMP EDI,0x1                         ; 004e6a02
    JZ 0x004e6a3f                       ; 004e6a05
        ;   XREF to: 004e6a3f (CONDITIONAL_JUMP)  ; LAB_004e6a3f
    ADD ESP,0x8                         ; 004e6a07
        ;   Label: LAB_004e6a07
    POP EDI                             ; 004e6a0a
    POP ESI                             ; 004e6a0b
    POP EBX                             ; 004e6a0c
    RET                                 ; 004e6a0d
    MOV dword ptr [EBX + 0x104],0x1     ; 004e6a0e
        ;   Label: LAB_004e6a0e
    JMP 0x004e6a07                      ; 004e6a18
        ;   XREF to: 004e6a07 (UNCONDITIONAL_JUMP)  ; LAB_004e6a07
    LEA EAX,[EBX + 0x2e8]               ; 004e6a1a
        ;   Label: LAB_004e6a1a
    PUSH EAX                            ; 004e6a20
    MOV ESI,dword ptr [0x0061b4d0]      ; 004e6a21 | DAT_0061b4d0
    PUSH ESI                            ; 004e6a27
    CALL FUN_004a6c30                   ; 004e6a28
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004e6a2d
    TEST EAX,EAX                        ; 004e6a30
    JZ 0x004e69fc                       ; 004e6a32
        ;   XREF to: 004e69fc (CONDITIONAL_JUMP)  ; LAB_004e69fc
    PUSH EBX                            ; 004e6a34
    CALL FUN_004e6bf0                   ; 004e6a35
        ;   XREF to: 004e6bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6bf0()
    ADD ESP,0x4                         ; 004e6a3a
    JMP 0x004e69fc                      ; 004e6a3d
        ;   XREF to: 004e69fc (UNCONDITIONAL_JUMP)  ; LAB_004e69fc
    LEA EAX,[EBX + 0x158]               ; 004e6a3f
        ;   Label: LAB_004e6a3f
    PUSH EAX                            ; 004e6a45
    CALL FUN_00468900                   ; 004e6a46
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    FLD float ptr [EBX + 0x2d8]         ; 004e6a4b
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e6a51
    ADD ESP,0x4                         ; 004e6a57
    SUB EAX,EDI                         ; 004e6a5a
    FMUL float ptr [ESP + 0x1c]         ; 004e6a5c
    MOV dword ptr [ESP + 0x4],EAX       ; 004e6a60
    FILD dword ptr [ESP + 0x4]          ; 004e6a64
    FXCH                                ; 004e6a68
    FADD float ptr [EBX + 0x2d4]        ; 004e6a6a
    FXCH                                ; 004e6a70
    FSTP float ptr [ESP]                ; 004e6a72
    FST float ptr [EBX + 0x2d4]         ; 004e6a75
    FCOMP float ptr [ESP]               ; 004e6a7b
    FNSTSW AX                           ; 004e6a7e
    SAHF                                ; 004e6a80
    JC 0x004e6a07                       ; 004e6a81
        ;   XREF to: 004e6a07 (CONDITIONAL_JUMP)  ; LAB_004e6a07
    MOV EAX,dword ptr [ESP]             ; 004e6a83
    MOV dword ptr [EBX + 0x2e0],0x2     ; 004e6a86
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004e6a90
    ADD ESP,0x8                         ; 004e6a96
    POP EDI                             ; 004e6a99
    POP ESI                             ; 004e6a9a
    POP EBX                             ; 004e6a9b
    RET                                 ; 004e6a9c

