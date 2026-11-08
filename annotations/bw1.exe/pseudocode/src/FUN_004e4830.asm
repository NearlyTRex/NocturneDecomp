; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4830(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004e6020 at 004e6048
;
; Referenced Globals:
;   undefined4 DAT_006016a8
;   undefined4 DAT_006016ac
;
; Called Functions:
;   FUN_0040cc60
;   FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4830
        ;   Label: FUN_004e4830
    PUSH ESI                            ; 004e4831
    PUSH EDI                            ; 004e4832
    PUSH EBP                            ; 004e4833
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e4834
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e4838
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e483c
    LEA EAX,[ESI + 0x4]                 ; 004e4840
    MOV dword ptr [ESI + 0x10],0x1      ; 004e4843
    CMP EAX,EBP                         ; 004e484a
    JZ 0x004e485f                       ; 004e484c
        ;   XREF to: 004e485f (CONDITIONAL_JUMP)  ; LAB_004e485f
    MOV EDX,dword ptr [EBP]             ; 004e484e
    MOV dword ptr [EAX],EDX             ; 004e4851
    MOV EDX,dword ptr [EBP + 0x4]       ; 004e4853
    MOV dword ptr [EAX + 0x4],EDX       ; 004e4856
    MOV EDX,dword ptr [EBP + 0x8]       ; 004e4859
    MOV dword ptr [EAX + 0x8],EDX       ; 004e485c
    FLD float ptr [EDI + 0x8]           ; 004e485f
        ;   Label: LAB_004e485f
    FMUL ST0                            ; 004e4862
    FLD float ptr [EDI]                 ; 004e4864
    FMUL ST0                            ; 004e4866
    FADDP                               ; 004e4868
    FSQRT                               ; 004e486a
    FLD float ptr [EDI + 0x4]           ; 004e486c
    CALL FUN_005c1d69                   ; 004e486f
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    MOV dword ptr [ESI + 0x20],0x0      ; 004e4874
    FCHS                                ; 004e487b
    FSTP float ptr [ESI + 0x18]         ; 004e487d
    FLD float ptr [EDI + 0x8]           ; 004e4880
    FLD float ptr [EDI]                 ; 004e4883
    CALL FUN_005c1d69                   ; 004e4885
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    PUSH 0x3                            ; 004e488a
    LEA EBX,[ESI + 0x2c]                ; 004e488c
    PUSH 0x0                            ; 004e488f
    FSTP float ptr [ESI + 0x1c]         ; 004e4891
    CALL FUN_0040cc60                   ; 004e4894
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 004e4899
    MOV dword ptr [ESI + 0x28],EAX      ; 004e489c
    MOV EAX,EBP                         ; 004e489f
    MOV dword ptr [ESI + 0x24],0x0      ; 004e48a1
    FLD float ptr [EAX]                 ; 004e48a8
    FMUL float ptr [0x006016a8]         ; 004e48aa | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e48b0
    FLD float ptr [EAX + 0x4]           ; 004e48b2
    FMUL float ptr [0x006016a8]         ; 004e48b5 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e48bb
    FLD float ptr [EAX + 0x8]           ; 004e48be
    FMUL float ptr [0x006016a8]         ; 004e48c1 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e48c7
    LEA EBX,[ESI + 0x38]                ; 004e48ca
    MOV EAX,EDI                         ; 004e48cd
    FLD float ptr [EAX]                 ; 004e48cf
    FMUL float ptr [0x006016ac]         ; 004e48d1 | DAT_006016ac
    FISTP dword ptr [EBX]               ; 004e48d7
    FLD float ptr [EAX + 0x4]           ; 004e48d9
    FMUL float ptr [0x006016ac]         ; 004e48dc | DAT_006016ac
    FISTP dword ptr [EBX + 0x4]         ; 004e48e2
    FLD float ptr [EAX + 0x8]           ; 004e48e5
    FMUL float ptr [0x006016ac]         ; 004e48e8 | DAT_006016ac
    FISTP dword ptr [EBX + 0x8]         ; 004e48ee
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e48f1
    MOV dword ptr [ESI],0x0             ; 004e48f5
    MOV dword ptr [ESI + 0x14],EAX      ; 004e48fb
    POP EBP                             ; 004e48fe
    POP EDI                             ; 004e48ff
    POP ESI                             ; 004e4900
    POP EBX                             ; 004e4901
    RET                                 ; 004e4902

