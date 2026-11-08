; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7b70(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004e7c80 at 004e7d87
;
; Referenced Globals:
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;
; Called Functions:
;   FUN_00596530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7b70
        ;   Label: FUN_004e7b70
    PUSH ESI                            ; 004e7b71
    PUSH EDI                            ; 004e7b72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e7b73
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e7b77
    IMUL EAX,dword ptr [EBX]            ; 004e7b7b
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e7b7e
    MOV EDX,dword ptr [EBX + 0x24]      ; 004e7b82
    ADD EAX,ECX                         ; 004e7b85
    MOV AX,word ptr [EDX + EAX*0x4 + 0x2] ; 004e7b87
    AND EAX,0xffff                      ; 004e7b8c
    PUSH EAX                            ; 004e7b91
    MOV ESI,dword ptr [EBX + 0x28]      ; 004e7b92
    PUSH ESI                            ; 004e7b95
    CALL FUN_00596530                   ; 004e7b96
        ;   XREF to: 00596530 (UNCONDITIONAL_CALL)  ; undefined FUN_00596530()
    MOV EDX,dword ptr [EBX + 0x50]      ; 004e7b9b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7b9e
    SUB EAX,EDX                         ; 004e7ba5
    SHL EAX,0x4                         ; 004e7ba7
    MOV EDI,0xf80000                    ; 004e7baa
    MOV dword ptr [EAX + 0x62902c],EDI  ; 004e7baf | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x50]      ; 004e7bb5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7bb8
    SUB EAX,EDX                         ; 004e7bbf
    SHL EAX,0x4                         ; 004e7bc1
    MOV dword ptr [EAX + 0x629030],EDI  ; 004e7bc4 | DAT_00629030
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004e7bca
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7bcd
    SUB EAX,EDX                         ; 004e7bd4
    SHL EAX,0x4                         ; 004e7bd6
    MOV dword ptr [EAX + 0x62902c],0x80000 ; 004e7bd9 | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004e7be3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7be6
    SUB EAX,EDX                         ; 004e7bed
    SHL EAX,0x4                         ; 004e7bef
    MOV dword ptr [EAX + 0x629030],EDI  ; 004e7bf2 | DAT_00629030
    MOV EDX,dword ptr [EBX + 0x58]      ; 004e7bf8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7bfb
    SUB EAX,EDX                         ; 004e7c02
    SHL EAX,0x4                         ; 004e7c04
    MOV ESI,0x80000                     ; 004e7c07
    MOV dword ptr [EAX + 0x62902c],ESI  ; 004e7c0c | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x58]      ; 004e7c12
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7c15
    SUB EAX,EDX                         ; 004e7c1c
    SHL EAX,0x4                         ; 004e7c1e
    MOV dword ptr [EAX + 0x629030],ESI  ; 004e7c21 | DAT_00629030
    MOV EDX,dword ptr [EBX + 0x54]      ; 004e7c27
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7c2a
    SUB EAX,EDX                         ; 004e7c31
    SHL EAX,0x4                         ; 004e7c33
    MOV dword ptr [EAX + 0x62902c],EDI  ; 004e7c36 | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x54]      ; 004e7c3c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7c3f
    SUB EAX,EDX                         ; 004e7c46
    SHL EAX,0x4                         ; 004e7c48
    ADD ESP,0x8                         ; 004e7c4b
    MOV dword ptr [EAX + 0x629030],ESI  ; 004e7c4e | DAT_00629030
    POP EDI                             ; 004e7c54
    POP ESI                             ; 004e7c55
    POP EBX                             ; 004e7c56
    RET                                 ; 004e7c57

