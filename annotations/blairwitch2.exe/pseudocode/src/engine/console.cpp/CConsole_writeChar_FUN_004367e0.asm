; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_writeChar_FUN_004367e0(CConsole *this_ptr,char character)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; XREF[1]:
;   engine_console.cpp_CConsole_printf_FUN_00436710 at 00436773
;
; Called Functions:
;   engine_console.cpp_CConsole_scrollUp_FUN_004368f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004367e0
        ;   Label: engine_console.cpp_CConsole_writeChar_FUN_004367e0
    PUSH EDI                            ; 004367e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004367e2
    MOV BL,byte ptr [ESP + 0x10]        ; 004367e6
    CMP BL,0xa                          ; 004367ea
    JZ 0x00436853                       ; 004367ed
        ;   XREF to: 00436853 (CONDITIONAL_JUMP)  ; LAB_00436853
    TEST BL,BL                          ; 004367ef
    JZ 0x00436887                       ; 004367f1
        ;   XREF to: 00436887 (CONDITIONAL_JUMP)  ; LAB_00436887
    MOV ECX,dword ptr [EAX + 0xfac]     ; 004367f7
    LEA EDX,[ECX*0x4 + 0x0]             ; 004367fd
    ADD EDX,ECX                         ; 00436804
    SHL EDX,0x4                         ; 00436806
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00436809
    ADD EDX,EAX                         ; 0043680f
    ADD EDX,ECX                         ; 00436811
    MOV byte ptr [EDX + 0x8],BL         ; 00436813
    MOV EBX,dword ptr [EAX + 0xfa8]     ; 00436816
    MOV EDX,dword ptr [EAX + 0xfb0]     ; 0043681c
    INC EBX                             ; 00436822
    DEC EDX                             ; 00436823
    MOV dword ptr [EAX + 0xfa8],EBX     ; 00436824
    CMP EDX,EBX                         ; 0043682a
    JGE 0x00436850                      ; 0043682c
        ;   XREF to: 00436850 (CONDITIONAL_JUMP)  ; LAB_00436850
    MOV EDI,dword ptr [EAX + 0xfac]     ; 0043682e
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00436834
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0043683a
    INC EDI                             ; 00436844
    DEC EDX                             ; 00436845
    MOV dword ptr [EAX + 0xfac],EDI     ; 00436846
    CMP EDX,EDI                         ; 0043684c
    JL 0x00436875                       ; 0043684e
        ;   XREF to: 00436875 (CONDITIONAL_JUMP)  ; LAB_00436875
    POP EDI                             ; 00436850
        ;   Label: LAB_00436850
    POP EBX                             ; 00436851
    RET                                 ; 00436852
    MOV EBX,dword ptr [EAX + 0xfac]     ; 00436853
        ;   Label: LAB_00436853
    MOV EDX,dword ptr [EAX + 0xfb4]     ; 00436859
    MOV dword ptr [EAX + 0xfa8],0x0     ; 0043685f
    INC EBX                             ; 00436869
    DEC EDX                             ; 0043686a
    MOV dword ptr [EAX + 0xfac],EBX     ; 0043686b
    CMP EDX,EBX                         ; 00436871
    JGE 0x00436850                      ; 00436873
        ;   XREF to: 00436850 (CONDITIONAL_JUMP)  ; LAB_00436850
    PUSH EAX                            ; 00436875
        ;   Label: LAB_00436875
    MOV dword ptr [EAX + 0xfac],EDX     ; 00436876
    CALL engine_console.cpp_CConsole_scrollUp_FUN_004368f0 ; 0043687c
        ;   XREF to: 004368f0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_scrollUp_FUN_004368f0(CConsole * this_ptr)
    ADD ESP,0x4                         ; 00436881
    POP EDI                             ; 00436884
    POP EBX                             ; 00436885
    RET                                 ; 00436886
    MOV ECX,dword ptr [EAX + 0xfac]     ; 00436887
        ;   Label: LAB_00436887
    LEA EDX,[ECX*0x4 + 0x0]             ; 0043688d
    ADD EDX,ECX                         ; 00436894
    SHL EDX,0x4                         ; 00436896
    MOV ECX,dword ptr [EAX + 0xfa8]     ; 00436899
    ADD EDX,EAX                         ; 0043689f
    ADD EDX,ECX                         ; 004368a1
    MOV byte ptr [EDX + 0x8],BL         ; 004368a3
    POP EDI                             ; 004368a6
    POP EBX                             ; 004368a7
    RET                                 ; 004368a8

