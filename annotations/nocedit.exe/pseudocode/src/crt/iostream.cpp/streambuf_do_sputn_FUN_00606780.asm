; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_iostream_cpp_streambuf_do_sputn_FUN_00606780(streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write)
;
; Parameters:
; streambuf *      Stack[0x4]:4   buffer
; void *           Stack[0x8]:4   input_buffer
; SIZE_T           Stack[0xc]:4   bytes_to_write
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606780
        ;   Label: crt_iostream.cpp_streambuf_do_sputn_FUN_00606780
    PUSH ESI                            ; 00606781
    PUSH EDI                            ; 00606782
    PUSH EBP                            ; 00606783
    SUB ESP,0x4                         ; 00606784
    MOV EBX,dword ptr [ESP + 0x18]      ; 00606787
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0060678b
    XOR EDX,EDX                         ; 0060678f
    MOV dword ptr [ESP],EDX             ; 00606791
    CMP dword ptr [ESP + 0x20],0x0      ; 00606794
        ;   Label: LAB_00606794
    JLE 0x00606827                      ; 00606799
        ;   XREF to: 00606827 (CONDITIONAL_JUMP)  ; LAB_00606827
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060679f
    TEST EAX,EAX                        ; 006067a2
    JZ 0x0060680b                       ; 006067a4
        ;   XREF to: 0060680b (CONDITIONAL_JUMP)  ; LAB_0060680b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 006067a6
    MOV EDX,dword ptr [EBX + 0x20]      ; 006067a9
    SUB EAX,EDX                         ; 006067ac
    MOV EDX,EAX                         ; 006067ae
    TEST EAX,EAX                        ; 006067b0
    JLE 0x006067ee                      ; 006067b2
        ;   XREF to: 006067ee (CONDITIONAL_JUMP)  ; LAB_006067ee
    MOV ESI,dword ptr [ESP + 0x20]      ; 006067b4
        ;   Label: LAB_006067b4
    CMP EDX,ESI                         ; 006067b8
    JLE 0x006067be                      ; 006067ba
        ;   XREF to: 006067be (CONDITIONAL_JUMP)  ; LAB_006067be
    MOV EDX,ESI                         ; 006067bc
    MOV ECX,EDX                         ; 006067be
        ;   Label: LAB_006067be
    MOV ESI,EBP                         ; 006067c0
    MOV EDI,dword ptr [EBX + 0x20]      ; 006067c2
    PUSH EDI                            ; 006067c5
    MOV EAX,ECX                         ; 006067c6
    SHR ECX,0x2                         ; 006067c8
    MOVSD.REP ES:EDI,ESI                ; 006067cb
    MOV CL,AL                           ; 006067cd
    AND CL,0x3                          ; 006067cf
    MOVSB.REP ES:EDI,ESI                ; 006067d2
    POP EDI                             ; 006067d4
    ADD dword ptr [EBX + 0x20],EDX      ; 006067d5
    MOV EAX,dword ptr [ESP]             ; 006067d8
        ;   Label: LAB_006067d8
    MOV ECX,dword ptr [ESP + 0x20]      ; 006067db
    ADD EBP,EDX                         ; 006067df
    ADD EAX,EDX                         ; 006067e1
    SUB ECX,EDX                         ; 006067e3
    MOV dword ptr [ESP],EAX             ; 006067e5
    MOV dword ptr [ESP + 0x20],ECX      ; 006067e8
    JMP 0x00606794                      ; 006067ec
        ;   XREF to: 00606794 (UNCONDITIONAL_JUMP)  ; LAB_00606794
    PUSH -0x1                           ; 006067ee
        ;   Label: LAB_006067ee
    MOV EAX,dword ptr [EBX + 0x28]      ; 006067f0
    PUSH EBX                            ; 006067f3
    CALL dword ptr [EAX + 0xc]          ; 006067f4
    ADD ESP,0x8                         ; 006067f7
    CMP EAX,-0x1                        ; 006067fa
    JZ 0x00606827                       ; 006067fd
        ;   XREF to: 00606827 (CONDITIONAL_JUMP)  ; LAB_00606827
    MOV EAX,dword ptr [EBX + 0x1c]      ; 006067ff
    MOV EDX,dword ptr [EBX + 0x20]      ; 00606802
    SUB EAX,EDX                         ; 00606805
    MOV EDX,EAX                         ; 00606807
    JMP 0x006067b4                      ; 00606809
        ;   XREF to: 006067b4 (UNCONDITIONAL_JUMP)  ; LAB_006067b4
    XOR EDX,EDX                         ; 0060680b
        ;   Label: LAB_0060680b
    MOV DL,byte ptr [EBP]               ; 0060680d
    PUSH EDX                            ; 00606810
    MOV EAX,dword ptr [EBX + 0x28]      ; 00606811
    PUSH EBX                            ; 00606814
    CALL dword ptr [EAX + 0xc]          ; 00606815
    ADD ESP,0x8                         ; 00606818
    CMP EAX,-0x1                        ; 0060681b
    JZ 0x00606827                       ; 0060681e
        ;   XREF to: 00606827 (CONDITIONAL_JUMP)  ; LAB_00606827
    MOV EDX,0x1                         ; 00606820
    JMP 0x006067d8                      ; 00606825
        ;   XREF to: 006067d8 (UNCONDITIONAL_JUMP)  ; LAB_006067d8
    MOV EAX,dword ptr [ESP]             ; 00606827
        ;   Label: LAB_00606827
    ADD ESP,0x4                         ; 0060682a
    POP EBP                             ; 0060682d
    POP EDI                             ; 0060682e
    POP ESI                             ; 0060682f
    POP EBX                             ; 00606830
    RET                                 ; 00606831

