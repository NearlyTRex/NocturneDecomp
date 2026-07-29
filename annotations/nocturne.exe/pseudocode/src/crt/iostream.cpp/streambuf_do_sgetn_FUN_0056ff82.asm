; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82(streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read)
;
; Parameters:
; streambuf *      Stack[0x4]:4   buffer
; void *           Stack[0x8]:4   output_buffer
; SIZE_T           Stack[0xc]:4   bytes_to_read
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ff82
        ;   Label: crt_iostream.cpp_streambuf_do_sgetn_FUN_0056ff82
    PUSH ESI                            ; 0056ff83
    PUSH EDI                            ; 0056ff84
    PUSH EBP                            ; 0056ff85
    SUB ESP,0x4                         ; 0056ff86
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056ff89
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056ff8d
    XOR EDX,EDX                         ; 0056ff91
    MOV dword ptr [ESP],EDX             ; 0056ff93
    TEST EBP,EBP                        ; 0056ff96
        ;   Label: LAB_0056ff96
    JLE 0x0056fffc                      ; 0056ff98
        ;   XREF to: 0056fffc (CONDITIONAL_JUMP)  ; LAB_0056fffc
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056ff9a
    MOV EDX,dword ptr [EBX + 0x14]      ; 0056ff9d
    SUB EAX,EDX                         ; 0056ffa0
    MOV EDX,EAX                         ; 0056ffa2
    TEST EAX,EAX                        ; 0056ffa4
    JLE 0x0056ffe1                      ; 0056ffa6
        ;   XREF to: 0056ffe1 (CONDITIONAL_JUMP)  ; LAB_0056ffe1
    CMP EDX,EBP                         ; 0056ffa8
        ;   Label: LAB_0056ffa8
    JLE 0x0056ffae                      ; 0056ffaa
        ;   XREF to: 0056ffae (CONDITIONAL_JUMP)  ; LAB_0056ffae
    MOV EDX,EBP                         ; 0056ffac
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056ffae
        ;   Label: LAB_0056ffae
    MOV ECX,EDX                         ; 0056ffb2
    MOV ESI,dword ptr [EBX + 0x14]      ; 0056ffb4
    PUSH EDI                            ; 0056ffb7
    MOV EAX,ECX                         ; 0056ffb8
    SHR ECX,0x2                         ; 0056ffba
    MOVSD.REP ES:EDI,ESI                ; 0056ffbd
    MOV CL,AL                           ; 0056ffbf
    AND CL,0x3                          ; 0056ffc1
    MOVSB.REP ES:EDI,ESI                ; 0056ffc4
    POP EDI                             ; 0056ffc6
    SUB EBP,EDX                         ; 0056ffc7
    MOV ESI,dword ptr [ESP]             ; 0056ffc9
    ADD EDI,EDX                         ; 0056ffcc
    MOV ECX,dword ptr [EBX + 0x14]      ; 0056ffce
    MOV dword ptr [ESP + 0x1c],EDI      ; 0056ffd1
    ADD ESI,EDX                         ; 0056ffd5
    ADD ECX,EDX                         ; 0056ffd7
    MOV dword ptr [ESP],ESI             ; 0056ffd9
    MOV dword ptr [EBX + 0x14],ECX      ; 0056ffdc
    JMP 0x0056ff96                      ; 0056ffdf
        ;   XREF to: 0056ff96 (UNCONDITIONAL_JUMP)  ; LAB_0056ff96
    PUSH EBX                            ; 0056ffe1
        ;   Label: LAB_0056ffe1
    MOV EAX,dword ptr [EBX + 0x28]      ; 0056ffe2
    CALL dword ptr [EAX + 0x10]         ; 0056ffe5
    ADD ESP,0x4                         ; 0056ffe8
    CMP EAX,-0x1                        ; 0056ffeb
    JZ 0x0056fffc                       ; 0056ffee
        ;   XREF to: 0056fffc (CONDITIONAL_JUMP)  ; LAB_0056fffc
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056fff0
    MOV EDX,dword ptr [EBX + 0x14]      ; 0056fff3
    SUB EAX,EDX                         ; 0056fff6
    MOV EDX,EAX                         ; 0056fff8
    JMP 0x0056ffa8                      ; 0056fffa
        ;   XREF to: 0056ffa8 (UNCONDITIONAL_JUMP)  ; LAB_0056ffa8
    MOV EAX,dword ptr [ESP]             ; 0056fffc
        ;   Label: LAB_0056fffc
    ADD ESP,0x4                         ; 0056ffff
    POP EBP                             ; 00570002
    POP EDI                             ; 00570003
    POP ESI                             ; 00570004
    POP EBX                             ; 00570005
    RET                                 ; 00570006

