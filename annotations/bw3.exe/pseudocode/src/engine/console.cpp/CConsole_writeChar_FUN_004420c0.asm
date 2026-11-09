; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_writeChar_FUN_004420c0(CConsole *this_ptr,char character)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; XREF[1]:
;   engine_console.cpp_FUN_00441ff0 at 00442053
;
; Called Functions:
;   engine_console.cpp_FUN_004421d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004420c0
        ;   Label: engine_console.cpp_CConsole_writeChar_FUN_004420c0
    PUSH EDI                            ; 004420c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004420c2
    MOV BL,byte ptr [ESP + 0x10]        ; 004420c6
    CMP BL,0xa                          ; 004420ca
    JZ 0x00442133                       ; 004420cd
        ;   XREF to: 00442133 (CONDITIONAL_JUMP)  ; LAB_00442133
    TEST BL,BL                          ; 004420cf
    JZ 0x00442167                       ; 004420d1
        ;   XREF to: 00442167 (CONDITIONAL_JUMP)  ; LAB_00442167
    MOV ECX,dword ptr [EAX + 0xfac]     ; 004420d7
    LEA EDX,[ECX*0x4 + 0x0]             ; 004420dd
    ADD EDX,ECX                         ; 004420e4
    SHL EDX,0x4                         ; 004420e6
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 004420e9
    ADD EDX,EAX                         ; 004420ef
    ADD EDX,ECX                         ; 004420f1
    MOV byte ptr [EDX + 0x8],BL         ; 004420f3
    MOV EBX,dword ptr [EAX + 0xfa8]     ; 004420f6
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 004420fc
    INC EBX                             ; 00442102
    DEC EDX                             ; 00442103
    MOV dword ptr [EAX + 0xfa8],EBX     ; 00442104
    CMP EDX,EBX                         ; 0044210a
    JGE 0x00442130                      ; 0044210c
        ;   XREF to: 00442130 (CONDITIONAL_JUMP)  ; LAB_00442130
    MOV EDI,dword ptr [EAX + 0xfac]     ; 0044210e
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00442114
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0044211a
    INC EDI                             ; 00442124
    DEC EDX                             ; 00442125
    MOV dword ptr [EAX + 0xfac],EDI     ; 00442126
    CMP EDX,EDI                         ; 0044212c
    JL 0x00442155                       ; 0044212e
        ;   XREF to: 00442155 (CONDITIONAL_JUMP)  ; LAB_00442155
    POP EDI                             ; 00442130
        ;   Label: LAB_00442130
    POP EBX                             ; 00442131
    RET                                 ; 00442132
    MOV EBX,dword ptr [EAX + 0xfac]     ; 00442133
        ;   Label: LAB_00442133
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00442139
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0044213f
    INC EBX                             ; 00442149
    DEC EDX                             ; 0044214a
    MOV dword ptr [EAX + 0xfac],EBX     ; 0044214b
    CMP EDX,EBX                         ; 00442151
    JGE 0x00442130                      ; 00442153
        ;   XREF to: 00442130 (CONDITIONAL_JUMP)  ; LAB_00442130
    PUSH EAX                            ; 00442155
        ;   Label: LAB_00442155
    MOV dword ptr [EAX + 0xfac],EDX     ; 00442156
    CALL engine_console.cpp_FUN_004421d0 ; 0044215c
        ;   XREF to: 004421d0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_FUN_004421d0(CConsole * this_ptr)
    ADD ESP,0x4                         ; 00442161
    POP EDI                             ; 00442164
    POP EBX                             ; 00442165
    RET                                 ; 00442166
    MOV ECX,dword ptr [EAX + 0xfac]     ; 00442167
        ;   Label: LAB_00442167
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044216d
    ADD EDX,ECX                         ; 00442174
    SHL EDX,0x4                         ; 00442176
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00442179
    ADD EDX,EAX                         ; 0044217f
    ADD EDX,ECX                         ; 00442181
    MOV byte ptr [EDX + 0x8],BL         ; 00442183
    POP EDI                             ; 00442186
    POP EBX                             ; 00442187
    RET                                 ; 00442188

