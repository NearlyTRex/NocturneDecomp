; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae960(undefined4 *param_1,float *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004b0190 at 004b01b2
;
; Referenced Globals:
;   undefined4 DAT_0059e4d4
;
; Called Functions:
;   FUN_0040de00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae960
        ;   Label: FUN_004ae960
    PUSH ESI                            ; 004ae961
    PUSH EDI                            ; 004ae962
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ae963
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ae967
    LEA EAX,[ESI + 0x4]                 ; 004ae96b
    MOV dword ptr [ESI + 0x10],0x0      ; 004ae96e
    CMP EAX,EDI                         ; 004ae975
    JZ 0x004ae989                       ; 004ae977
        ;   XREF to: 004ae989 (CONDITIONAL_JUMP)  ; LAB_004ae989
    MOV EDX,dword ptr [EDI]             ; 004ae979
    MOV dword ptr [EAX],EDX             ; 004ae97b
    MOV EDX,dword ptr [EDI + 0x4]       ; 004ae97d
    MOV dword ptr [EAX + 0x4],EDX       ; 004ae980
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ae983
    MOV dword ptr [EAX + 0x8],EDX       ; 004ae986
    PUSH 0x3                            ; 004ae989
        ;   Label: LAB_004ae989
    PUSH 0x0                            ; 004ae98b
    LEA EBX,[ESI + 0x2c]                ; 004ae98d
    CALL FUN_0040de00                   ; 004ae990
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    ADD ESP,0x8                         ; 004ae995
    MOV dword ptr [ESI + 0x28],EAX      ; 004ae998
    MOV EAX,EDI                         ; 004ae99b
    MOV dword ptr [ESI + 0x24],0x0      ; 004ae99d
    FLD float ptr [EAX]                 ; 004ae9a4
    FMUL float ptr [0x0059e4d4]         ; 004ae9a6 | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004ae9ac
    FLD float ptr [EAX + 0x4]           ; 004ae9ae
    FMUL float ptr [0x0059e4d4]         ; 004ae9b1 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004ae9b7
    FLD float ptr [EAX + 0x8]           ; 004ae9ba
    FMUL float ptr [0x0059e4d4]         ; 004ae9bd | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004ae9c3
    MOV dword ptr [ESI + 0x38],0x0      ; 004ae9c6
    MOV dword ptr [ESI + 0x3c],0xffff   ; 004ae9cd
    MOV dword ptr [ESI + 0x40],0x0      ; 004ae9d4
    MOV dword ptr [ESI],0x0             ; 004ae9db
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ae9e1
    MOV dword ptr [ESI + 0x20],0x0      ; 004ae9e5
    MOV dword ptr [ESI + 0x14],EAX      ; 004ae9ec
    MOV EAX,dword ptr [ESI + 0x20]      ; 004ae9ef
    MOV dword ptr [ESI + 0x1c],EAX      ; 004ae9f2
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004ae9f5
    MOV dword ptr [ESI + 0x18],EAX      ; 004ae9f8
    POP EDI                             ; 004ae9fb
    POP ESI                             ; 004ae9fc
    POP EBX                             ; 004ae9fd
    RET                                 ; 004ae9fe

