; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554600(int param_1)
;
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00554250
        ;   Label: LAB_00554250
    RET                                 ; 00554252
    MOV EDX,dword ptr [ESP + 0x4]       ; 00554600
        ;   Label: FUN_00554600
    MOV ECX,dword ptr [EDX + 0x560]     ; 00554604
    TEST ECX,ECX                        ; 0055460a
    JLE 0x00554250                      ; 0055460c
        ;   XREF to: 00554250 (CONDITIONAL_JUMP)  ; LAB_00554250
    PUSH EBX                            ; 00554612
    MOV EAX,0x1                         ; 00554613
    MOV EBX,ECX                         ; 00554618
    SUB EBX,EAX                         ; 0055461a
    MOV dword ptr [EDX + 0x560],EBX     ; 0055461c
    POP EBX                             ; 00554622
    RET                                 ; 00554623

