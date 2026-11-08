; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044a900(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a900
        ;   Label: FUN_0044a900
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044a901
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a905
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044a909
    SHL EDX,0x2                         ; 0044a90d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0044a910
    LEA ECX,[EAX + EDX*0x1]             ; 0044a917
    MOV EAX,EBX                         ; 0044a91a
    SHL EAX,0x8                         ; 0044a91c
    LEA EDX,[EBX + EAX*0x1]             ; 0044a91f
    MOV EAX,EBX                         ; 0044a922
    SHL EAX,0x10                        ; 0044a924
    ADD EDX,EAX                         ; 0044a927
    MOV dword ptr [ECX],EDX             ; 0044a929
    POP EBX                             ; 0044a92b
    RET                                 ; 0044a92c

