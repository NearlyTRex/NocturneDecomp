; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e9920(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9920
        ;   Label: FUN_004e9920
    SUB ESP,0x14                        ; 004e9921
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e9924
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e9928
    SUB EAX,EDX                         ; 004e992c
    MOV dword ptr [ESP + 0x10],EAX      ; 004e992e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e9932
    FILD dword ptr [ESP + 0x10]         ; 004e9936
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e993a
    FLD ST0                             ; 004e993e
    SUB EAX,ECX                         ; 004e9940
    FMULP                               ; 004e9942
    MOV dword ptr [ESP + 0x10],EAX      ; 004e9944
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e9948
    FILD dword ptr [ESP + 0x10]         ; 004e994c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e9950
    FLD ST0                             ; 004e9954
    SUB EAX,EBX                         ; 004e9956
    FMULP                               ; 004e9958
    MOV dword ptr [ESP + 0x10],EAX      ; 004e995a
    FADDP                               ; 004e995e
    FILD dword ptr [ESP + 0x10]         ; 004e9960
    FMUL ST0                            ; 004e9964
    FADDP                               ; 004e9966
    FSQRT                               ; 004e9968
    CALL FUN_005b7ff0                   ; 004e996a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004e996f
    MOV EAX,dword ptr [ESP]             ; 004e9972
    ADD ESP,0x14                        ; 004e9975
    POP EBX                             ; 004e9978
    RET                                 ; 004e9979

