; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_00504510(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504510
        ;   Label: core_manpuz.cpp_FUN_00504510
    PUSH EDI                            ; 00504511
    SUB ESP,0x18                        ; 00504512
    MOV ECX,dword ptr [ESP + 0x24]      ; 00504515
    MOV EDX,ESI                         ; 00504519
    FLD float ptr [ECX + 0x1508]        ; 0050451b
    FCHS                                ; 00504521
    MOV EDI,ESI                         ; 00504523
    FSTP float ptr [ESP]                ; 00504525
    MOV EAX,dword ptr [ESP]             ; 00504528
    XOR EBX,EBX                         ; 0050452b
    MOV dword ptr [ESP + 0x8],EAX       ; 0050452d
    MOV EAX,dword ptr [ECX + 0x1508]    ; 00504531
    MOV ESI,ESP                         ; 00504537
    MOV dword ptr [ESP + 0xc],EAX       ; 00504539
    MOV EAX,dword ptr [ECX + 0x1510]    ; 0050453d
    MOV ECX,0x6                         ; 00504543
    MOV dword ptr [ESP + 0x10],EAX      ; 00504548
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050454c
    MOV dword ptr [ESP + 0x4],EBX       ; 00504550
    MOV dword ptr [ESP + 0x14],EAX      ; 00504554
    MOVSD.REP ES:EDI,ESI                ; 00504558
    MOV EAX,EDX                         ; 0050455a
    ADD ESP,0x18                        ; 0050455c
    POP EDI                             ; 0050455f
    POP EBX                             ; 00504560
    RET                                 ; 00504561

