; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581b70(LPCSTR param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00581b70
        ;   Label: FUN_00581b70
    SUB ESP,0xc                         ; 00581b71
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00581b74
    MOV byte ptr [EAX],0x0              ; 00581b78
    MOV EAX,ESP                         ; 00581b7b
    PUSH EAX                            ; 00581b7d
    PUSH 0x1                            ; 00581b7e
    PUSH 0x0                            ; 00581b80
    MOV EDX,dword ptr [ESP + 0x20]      ; 00581b82
    PUSH EDX                            ; 00581b86
    PUSH 0x80000002                     ; 00581b87
    CALL dword ptr CS:[0x5b33f0]        ; 00581b8c
    TEST EAX,EAX                        ; 00581b93
    JZ 0x00581b9c                       ; 00581b95
        ;   XREF to: 00581b9c (CONDITIONAL_JUMP)  ; LAB_00581b9c
    ADD ESP,0xc                         ; 00581b97
    POP EBP                             ; 00581b9a
    RET                                 ; 00581b9b
    PUSH EDI                            ; 00581b9c
        ;   Label: LAB_00581b9c
    PUSH ESI                            ; 00581b9d
    PUSH EBX                            ; 00581b9e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00581b9f
    MOV dword ptr [ESP + 0x10],EAX      ; 00581ba3
    LEA EAX,[ESP + 0x10]                ; 00581ba7
    PUSH EAX                            ; 00581bab
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00581bac
    PUSH EBX                            ; 00581bb0
    LEA EAX,[ESP + 0x1c]                ; 00581bb1
    PUSH EAX                            ; 00581bb5
    PUSH 0x0                            ; 00581bb6
    MOV ESI,dword ptr [ESP + 0x34]      ; 00581bb8
    PUSH ESI                            ; 00581bbc
    MOV EDI,dword ptr [ESP + 0x20]      ; 00581bbd
    MOV ECX,0x1                         ; 00581bc1
    PUSH EDI                            ; 00581bc6
    MOV dword ptr [ESP + 0x2c],ECX      ; 00581bc7
    CALL dword ptr CS:[0x5b33f4]        ; 00581bcb
    MOV EBP,dword ptr [ESP + 0xc]       ; 00581bd2
    PUSH EBP                            ; 00581bd6
    CALL dword ptr CS:[0x5b33e8]        ; 00581bd7
    POP EBX                             ; 00581bde
    POP ESI                             ; 00581bdf
    POP EDI                             ; 00581be0
    ADD ESP,0xc                         ; 00581be1
    POP EBP                             ; 00581be4
    RET                                 ; 00581be5

