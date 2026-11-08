; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5900(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5900
        ;   Label: FUN_004e5900
    PUSH EDI                            ; 004e5901
    SUB ESP,0x18                        ; 004e5902
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e5905
    MOV EDX,ESI                         ; 004e5909
    FLD float ptr [ECX + 0x1664]        ; 004e590b
    FCHS                                ; 004e5911
    MOV EDI,ESI                         ; 004e5913
    FSTP float ptr [ESP]                ; 004e5915
    MOV EAX,dword ptr [ESP]             ; 004e5918
    XOR EBX,EBX                         ; 004e591b
    MOV dword ptr [ESP + 0x8],EAX       ; 004e591d
    MOV EAX,dword ptr [ECX + 0x1664]    ; 004e5921
    MOV ESI,ESP                         ; 004e5927
    MOV dword ptr [ESP + 0xc],EAX       ; 004e5929
    MOV EAX,dword ptr [ECX + 0x166c]    ; 004e592d
    MOV ECX,0x6                         ; 004e5933
    MOV dword ptr [ESP + 0x10],EAX      ; 004e5938
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e593c
    MOV dword ptr [ESP + 0x4],EBX       ; 004e5940
    MOV dword ptr [ESP + 0x14],EAX      ; 004e5944
    MOVSD.REP ES:EDI,ESI                ; 004e5948
    MOV EAX,EDX                         ; 004e594a
    ADD ESP,0x18                        ; 004e594c
    POP EDI                             ; 004e594f
    POP EBX                             ; 004e5950
    RET                                 ; 004e5951

