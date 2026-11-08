; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e6000(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6000
        ;   Label: FUN_004e6000
    SUB ESP,0x14                        ; 004e6001
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e6004
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e6008
    SUB EAX,EDX                         ; 004e600c
    MOV dword ptr [ESP + 0x10],EAX      ; 004e600e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e6012
    FILD dword ptr [ESP + 0x10]         ; 004e6016
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e601a
    FLD ST0                             ; 004e601e
    SUB EAX,ECX                         ; 004e6020
    FMULP                               ; 004e6022
    MOV dword ptr [ESP + 0x10],EAX      ; 004e6024
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e6028
    FILD dword ptr [ESP + 0x10]         ; 004e602c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e6030
    FLD ST0                             ; 004e6034
    SUB EAX,EBX                         ; 004e6036
    FMULP                               ; 004e6038
    MOV dword ptr [ESP + 0x10],EAX      ; 004e603a
    FADDP                               ; 004e603e
    FILD dword ptr [ESP + 0x10]         ; 004e6040
    FMUL ST0                            ; 004e6044
    FADDP                               ; 004e6046
    FSQRT                               ; 004e6048
    CALL FUN_005a3120                   ; 004e604a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004e604f
    MOV EAX,dword ptr [ESP]             ; 004e6052
    ADD ESP,0x14                        ; 004e6055
    POP EBX                             ; 004e6058
    RET                                 ; 004e6059

