; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cae20(int param_1,int param_2,float *param_3,float *param_4,float *param_5)
;
;
; XREF[2]:
;   FUN_004ca410 at 004ca5d6
;   FUN_004cb010 at 004cb0f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cae20
        ;   Label: FUN_004cae20
    PUSH ESI                            ; 004cae21
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cae22
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004cae26
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cae2a
    MOV dword ptr [EBX],0x0             ; 004cae2e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cae34
    MOV ESI,dword ptr [EBX]             ; 004cae38
    MOV dword ptr [ECX],ESI             ; 004cae3a
    MOV ESI,dword ptr [ECX]             ; 004cae3c
    MOV dword ptr [EAX],ESI             ; 004cae3e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cae40
    SUB EAX,EDX                         ; 004cae47
    SHL EAX,0x3                         ; 004cae49
    ADD EAX,EDX                         ; 004cae4c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cae4e
    SHL EAX,0x2                         ; 004cae52
    ADD EAX,EDX                         ; 004cae55
    CMP dword ptr [EAX + 0x5e8],0x0     ; 004cae57
    JZ 0x004cae6c                       ; 004cae5e
        ;   XREF to: 004cae6c (CONDITIONAL_JUMP)  ; LAB_004cae6c
    TEST dword ptr [EAX + 0x5f0],0x7fffffff ; 004cae60
    JZ 0x004cae6f                       ; 004cae6a
        ;   XREF to: 004cae6f (CONDITIONAL_JUMP)  ; LAB_004cae6f
    POP ESI                             ; 004cae6c
        ;   Label: LAB_004cae6c
    POP EBX                             ; 004cae6d
    RET                                 ; 004cae6e
    MOV EDX,dword ptr [ESP + 0x14]      ; 004cae6f
        ;   Label: LAB_004cae6f
    FILD dword ptr [EAX + 0x634]        ; 004cae73
    FSTP float ptr [EDX]                ; 004cae79
    FILD dword ptr [EAX + 0x638]        ; 004cae7b
    FSTP float ptr [ECX]                ; 004cae81
    FILD dword ptr [EAX + 0x63c]        ; 004cae83
    FSTP float ptr [EBX]                ; 004cae89
    POP ESI                             ; 004cae8b
    POP EBX                             ; 004cae8c
    RET                                 ; 004cae8d

