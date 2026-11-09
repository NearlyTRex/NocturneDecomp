; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_0055b7f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf49d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b7f0 | DAT_02cf49d0
        ;   Label: sound_snddx.cpp_FUN_0055b7f0
    TEST EDX,EDX                        ; 0055b7f6
    JNZ 0x0055b7fb                      ; 0055b7f8
        ;   XREF to: 0055b7fb (CONDITIONAL_JUMP)  ; LAB_0055b7fb
    RET                                 ; 0055b7fa
    PUSH 0x1                            ; 0055b7fb
        ;   Label: LAB_0055b7fb
    PUSH dword ptr [ESP + 0x20]         ; 0055b7fd
    PUSH dword ptr [ESP + 0x20]         ; 0055b801
    PUSH dword ptr [ESP + 0x20]         ; 0055b805
    PUSH dword ptr [ESP + 0x38]         ; 0055b809
    MOV EAX,EDX                         ; 0055b80d
    PUSH dword ptr [ESP + 0x38]         ; 0055b80f
    MOV EDX,dword ptr [EDX]             ; 0055b813
    PUSH dword ptr [ESP + 0x38]         ; 0055b815
    PUSH EAX                            ; 0055b819
    CALL dword ptr [EDX + 0x34]         ; 0055b81a
    RET                                 ; 0055b81d

