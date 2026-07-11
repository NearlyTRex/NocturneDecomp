; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aea00(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004b01c0 at 004b01e8
;
; Referenced Globals:
;   undefined4 DAT_0059e4d4
;   undefined4 DAT_0059e4d8
;
; Called Functions:
;   FUN_0040de00
;   FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aea00
        ;   Label: FUN_004aea00
    PUSH ESI                            ; 004aea01
    PUSH EDI                            ; 004aea02
    PUSH EBP                            ; 004aea03
    MOV ESI,dword ptr [ESP + 0x14]      ; 004aea04
    MOV EBP,dword ptr [ESP + 0x18]      ; 004aea08
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004aea0c
    LEA EAX,[ESI + 0x4]                 ; 004aea10
    MOV dword ptr [ESI + 0x10],0x1      ; 004aea13
    CMP EAX,EBP                         ; 004aea1a
    JZ 0x004aea2f                       ; 004aea1c
        ;   XREF to: 004aea2f (CONDITIONAL_JUMP)  ; LAB_004aea2f
    MOV EDX,dword ptr [EBP]             ; 004aea1e
    MOV dword ptr [EAX],EDX             ; 004aea21
    MOV EDX,dword ptr [EBP + 0x4]       ; 004aea23
    MOV dword ptr [EAX + 0x4],EDX       ; 004aea26
    MOV EDX,dword ptr [EBP + 0x8]       ; 004aea29
    MOV dword ptr [EAX + 0x8],EDX       ; 004aea2c
    FLD float ptr [EDI + 0x8]           ; 004aea2f
        ;   Label: LAB_004aea2f
    FMUL ST0                            ; 004aea32
    FLD float ptr [EDI]                 ; 004aea34
    FMUL ST0                            ; 004aea36
    FADDP                               ; 004aea38
    FSQRT                               ; 004aea3a
    FLD float ptr [EDI + 0x4]           ; 004aea3c
    CALL FUN_00566c81                   ; 004aea3f
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined FUN_00566c81()
    MOV dword ptr [ESI + 0x20],0x0      ; 004aea44
    FCHS                                ; 004aea4b
    FSTP float ptr [ESI + 0x18]         ; 004aea4d
    FLD float ptr [EDI + 0x8]           ; 004aea50
    FLD float ptr [EDI]                 ; 004aea53
    CALL FUN_00566c81                   ; 004aea55
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined FUN_00566c81()
    PUSH 0x3                            ; 004aea5a
    LEA EBX,[ESI + 0x2c]                ; 004aea5c
    PUSH 0x0                            ; 004aea5f
    FSTP float ptr [ESI + 0x1c]         ; 004aea61
    CALL FUN_0040de00                   ; 004aea64
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    ADD ESP,0x8                         ; 004aea69
    MOV dword ptr [ESI + 0x28],EAX      ; 004aea6c
    MOV EAX,EBP                         ; 004aea6f
    MOV dword ptr [ESI + 0x24],0x0      ; 004aea71
    FLD float ptr [EAX]                 ; 004aea78
    FMUL float ptr [0x0059e4d4]         ; 004aea7a | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004aea80
    FLD float ptr [EAX + 0x4]           ; 004aea82
    FMUL float ptr [0x0059e4d4]         ; 004aea85 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004aea8b
    FLD float ptr [EAX + 0x8]           ; 004aea8e
    FMUL float ptr [0x0059e4d4]         ; 004aea91 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004aea97
    LEA EBX,[ESI + 0x38]                ; 004aea9a
    MOV EAX,EDI                         ; 004aea9d
    FLD float ptr [EAX]                 ; 004aea9f
    FMUL float ptr [0x0059e4d8]         ; 004aeaa1 | DAT_0059e4d8
    FISTP dword ptr [EBX]               ; 004aeaa7
    FLD float ptr [EAX + 0x4]           ; 004aeaa9
    FMUL float ptr [0x0059e4d8]         ; 004aeaac | DAT_0059e4d8
    FISTP dword ptr [EBX + 0x4]         ; 004aeab2
    FLD float ptr [EAX + 0x8]           ; 004aeab5
    FMUL float ptr [0x0059e4d8]         ; 004aeab8 | DAT_0059e4d8
    FISTP dword ptr [EBX + 0x8]         ; 004aeabe
    MOV EAX,dword ptr [ESP + 0x20]      ; 004aeac1
    MOV dword ptr [ESI],0x0             ; 004aeac5
    MOV dword ptr [ESI + 0x14],EAX      ; 004aeacb
    POP EBP                             ; 004aeace
    POP EDI                             ; 004aeacf
    POP ESI                             ; 004aead0
    POP EBX                             ; 004aead1
    RET                                 ; 004aead2

