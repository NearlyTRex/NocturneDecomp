; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00555c50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264a5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264a5d0]      ; 00555c50 | DAT_0264a5d0
        ;   Label: sound_snddx.cpp_FUN_00555c50
    TEST EDX,EDX                        ; 00555c56
    JNZ 0x00555c5b                      ; 00555c58
        ;   XREF to: 00555c5b (CONDITIONAL_JUMP)  ; LAB_00555c5b
    RET                                 ; 00555c5a
    PUSH 0x1                            ; 00555c5b
        ;   Label: LAB_00555c5b
    PUSH dword ptr [ESP + 0x20]         ; 00555c5d
    PUSH dword ptr [ESP + 0x20]         ; 00555c61
    PUSH dword ptr [ESP + 0x20]         ; 00555c65
    PUSH dword ptr [ESP + 0x38]         ; 00555c69
    MOV EAX,EDX                         ; 00555c6d
    PUSH dword ptr [ESP + 0x38]         ; 00555c6f
    MOV EDX,dword ptr [EDX]             ; 00555c73
    PUSH dword ptr [ESP + 0x38]         ; 00555c75
    PUSH EAX                            ; 00555c79
    CALL dword ptr [EDX + 0x34]         ; 00555c7a
    RET                                 ; 00555c7d

