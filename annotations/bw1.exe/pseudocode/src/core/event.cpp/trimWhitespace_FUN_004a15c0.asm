; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_trimWhitespace_FUN_004a15c0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a15c0
        ;   Label: core_event.cpp_trimWhitespace_FUN_004a15c0
    PUSH ESI                            ; 004a15c1
    PUSH EDI                            ; 004a15c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a15c3
    MOV EDI,ESI                         ; 004a15c7
    SUB ECX,ECX                         ; 004a15c9
    DEC ECX                             ; 004a15cb
    XOR EAX,EAX                         ; 004a15cc
    SCASB.REPNE ES:EDI                  ; 004a15ce
    NOT ECX                             ; 004a15d0
    DEC ECX                             ; 004a15d2
    MOV EBX,ECX                         ; 004a15d3
    TEST ECX,ECX                        ; 004a15d5
    JLE 0x004a15f0                      ; 004a15d7
        ;   XREF to: 004a15f0 (CONDITIONAL_JUMP)  ; LAB_004a15f0
    LEA EAX,[ECX + ESI*0x1]             ; 004a15d9
    MOV DL,byte ptr [EAX + -0x1]        ; 004a15dc
        ;   Label: LAB_004a15dc
    INC DL                              ; 004a15df
    AND EDX,0xff                        ; 004a15e1
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a15e7
    JNZ 0x004a160f                      ; 004a15ee
        ;   XREF to: 004a160f (CONDITIONAL_JUMP)  ; LAB_004a160f
    LEA EAX,[ESI + EBX*0x1]             ; 004a15f0
        ;   Label: LAB_004a15f0
    LEA EDI,[ESI + 0x1]                 ; 004a15f3
    MOV byte ptr [EAX],0x0              ; 004a15f6
    MOV AL,byte ptr [ESI]               ; 004a15f9
        ;   Label: LAB_004a15f9
    INC AL                              ; 004a15fb
    AND EAX,0xff                        ; 004a15fd
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a1602
    JNZ 0x004a1617                      ; 004a1609
        ;   XREF to: 004a1617 (CONDITIONAL_JUMP)  ; LAB_004a1617
    POP EDI                             ; 004a160b
    POP ESI                             ; 004a160c
    POP EBX                             ; 004a160d
    RET                                 ; 004a160e
    DEC EBX                             ; 004a160f
        ;   Label: LAB_004a160f
    DEC EAX                             ; 004a1610
    TEST EBX,EBX                        ; 004a1611
    JG 0x004a15dc                       ; 004a1613
        ;   XREF to: 004a15dc (CONDITIONAL_JUMP)  ; LAB_004a15dc
    JMP 0x004a15f0                      ; 004a1615
        ;   XREF to: 004a15f0 (UNCONDITIONAL_JUMP)  ; LAB_004a15f0
    PUSH EBX                            ; 004a1617
        ;   Label: LAB_004a1617
    PUSH EDI                            ; 004a1618
    PUSH ESI                            ; 004a1619
    DEC EBX                             ; 004a161a
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a161b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a1620
    JMP 0x004a15f9                      ; 004a1623
        ;   XREF to: 004a15f9 (UNCONDITIONAL_JUMP)  ; LAB_004a15f9

