; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_console.cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; XREF[1]:
;   engine_console.cpp_CConsole_printf_FUN_00441890 at 00441903
;
; Called Functions:
;   engine_console.cpp_CConsole_scrollUp_FUN_00441a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441970
        ;   Label: engine_console.cpp_CConsole_writeChar_FUN_00441970
    PUSH EDI                            ; 00441971
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441972
    MOV BL,byte ptr [ESP + 0x10]        ; 00441976
    CMP BL,0xa                          ; 0044197a
    JZ 0x004419e3                       ; 0044197d | LAB_004419e3
        ;   XREF to: 004419e3 (CONDITIONAL_JUMP)
    TEST BL,BL                          ; 0044197f
    JZ 0x00441a17                       ; 00441981 | LAB_00441a17
        ;   XREF to: 00441a17 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00441987
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044198d
    ADD EDX,ECX                         ; 00441994
    SHL EDX,0x4                         ; 00441996
    MOV ECX,dword ptr [EAX + 0xfa4]     ; 00441999
    ADD EDX,EAX                         ; 0044199f
    ADD EDX,ECX                         ; 004419a1
    MOV byte ptr [EDX + 0x4],BL         ; 004419a3
    MOV EBX,dword ptr [EAX + 0xfa4]     ; 004419a6
    MOV EDX,dword ptr [EAX + 0xfac]     ; 004419ac
    INC EBX                             ; 004419b2
    DEC EDX                             ; 004419b3
    MOV dword ptr [EAX + 0xfa4],EBX     ; 004419b4
    CMP EDX,EBX                         ; 004419ba
    JGE 0x004419e0                      ; 004419bc | LAB_004419e0
        ;   XREF to: 004419e0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0xfa8]     ; 004419be
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 004419c4
    MOV dword ptr [EAX + 0xfa4],0x0     ; 004419ca
    INC EDI                             ; 004419d4
    DEC EDX                             ; 004419d5
    MOV dword ptr [EAX + 0xfa8],EDI     ; 004419d6
    CMP EDX,EDI                         ; 004419dc
    JL 0x00441a05                       ; 004419de | LAB_00441a05
        ;   XREF to: 00441a05 (CONDITIONAL_JUMP)
    POP EDI                             ; 004419e0
        ;   Label: LAB_004419e0
    POP EBX                             ; 004419e1
    RET                                 ; 004419e2
    MOV EBX,dword ptr [EAX + 0xfa8]     ; 004419e3
        ;   Label: LAB_004419e3
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 004419e9
    MOV dword ptr [EAX + 0xfa4],0x0     ; 004419ef
    INC EBX                             ; 004419f9
    DEC EDX                             ; 004419fa
    MOV dword ptr [EAX + 0xfa8],EBX     ; 004419fb
    CMP EDX,EBX                         ; 00441a01
    JGE 0x004419e0                      ; 00441a03 | LAB_004419e0
        ;   XREF to: 004419e0 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00441a05
        ;   Label: LAB_00441a05
    MOV dword ptr [EAX + 0xfa8],EDX     ; 00441a06
    CALL engine_console.cpp_CConsole_scrollUp_FUN_00441a80 ; 00441a0c | void engine_console.cpp_CConsole_scrollUp_FUN_00441a80(CConsole * this_ptr)
        ;   XREF to: 00441a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00441a11
    POP EDI                             ; 00441a14
    POP EBX                             ; 00441a15
    RET                                 ; 00441a16
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00441a17
        ;   Label: LAB_00441a17
    LEA EDX,[ECX*0x4 + 0x0]             ; 00441a1d
    ADD EDX,ECX                         ; 00441a24
    SHL EDX,0x4                         ; 00441a26
    MOV ECX,dword ptr [EAX + 0xfa4]     ; 00441a29
    ADD EDX,EAX                         ; 00441a2f
    ADD EDX,ECX                         ; 00441a31
    MOV byte ptr [EDX + 0x4],BL         ; 00441a33
    POP EDI                             ; 00441a36
    POP EBX                             ; 00441a37
    RET                                 ; 00441a38

