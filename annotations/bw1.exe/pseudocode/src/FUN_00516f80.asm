; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516f80(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516f80
        ;   Label: FUN_00516f80
    MOV EAX,dword ptr [ESP + 0xc]       ; 00516f81
    MOV ECX,dword ptr [ESP + 0x10]      ; 00516f85
    CMP EAX,ECX                         ; 00516f89
    JLE 0x00516f93                      ; 00516f8b
        ;   XREF to: 00516f93 (CONDITIONAL_JUMP)  ; LAB_00516f93
    MOV EDX,EAX                         ; 00516f8d
    MOV EAX,ECX                         ; 00516f8f
    MOV ECX,EDX                         ; 00516f91
    SAR EAX,0x10                        ; 00516f93
        ;   Label: LAB_00516f93
    MOV EDX,dword ptr [ESP + 0x8]       ; 00516f96
    LEA EBX,[EAX*0x4 + 0x0]             ; 00516f9a
    MOV EDX,dword ptr [EDX*0x4 + 0x1c4354c] ; 00516fa1
    SAR ECX,0x10                        ; 00516fa8
    ADD EDX,EBX                         ; 00516fab
    CMP EAX,ECX                         ; 00516fad
    JGE 0x00516fc0                      ; 00516faf
        ;   XREF to: 00516fc0 (CONDITIONAL_JUMP)  ; LAB_00516fc0
    INC EAX                             ; 00516fb1
        ;   Label: LAB_00516fb1
    MOV dword ptr [EDX],0x80000000      ; 00516fb2
    ADD EDX,0x4                         ; 00516fb8
    CMP EAX,ECX                         ; 00516fbb
    JL 0x00516fb1                       ; 00516fbd
        ;   XREF to: 00516fb1 (CONDITIONAL_JUMP)  ; LAB_00516fb1
    NOP                                 ; 00516fbf
    POP EBX                             ; 00516fc0
        ;   Label: LAB_00516fc0
    RET                                 ; 00516fc1

