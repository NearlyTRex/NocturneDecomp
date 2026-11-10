; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_flushParticleList_FUN_0055fcce(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc0c
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0055fcce
        ;   Label: engine_special.cpp_flushParticleList_FUN_0055fcce
    CMP dword ptr [0x01c37788],0x0      ; 0055fcd0 | DAT_01c37788
    JNZ 0x0055fcdc                      ; 0055fcd7
        ;   XREF to: 0055fcdc (CONDITIONAL_JUMP)  ; LAB_0055fcdc
    XOR EAX,EAX                         ; 0055fcd9
    RET                                 ; 0055fcdb
    CALL dword ptr [0x0264bc0c]         ; 0055fcdc | DAT_0264bc0c
        ;   Label: LAB_0055fcdc
    RET                                 ; 0055fce2

