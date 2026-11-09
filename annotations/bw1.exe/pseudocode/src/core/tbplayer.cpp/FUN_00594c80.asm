; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_00594c80(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594c80
        ;   Label: core_tbplayer.cpp_FUN_00594c80
    MOV ECX,dword ptr [EDX + 0x27b0]    ; 00594c84
    TEST ECX,ECX                        ; 00594c8a
    JNZ 0x00594cae                      ; 00594c8c
        ;   XREF to: 00594cae (CONDITIONAL_JUMP)  ; LAB_00594cae
    MOV EAX,dword ptr [ESP + 0x8]       ; 00594c8e
    FLD float ptr [EAX + 0x4]           ; 00594c92
    FSUBR float ptr [EDX + 0x2538]      ; 00594c95
    FST float ptr [EDX + 0x2538]        ; 00594c9b
    FLDZ                                ; 00594ca1
    FCOMPP                              ; 00594ca3
    FNSTSW AX                           ; 00594ca5
    SAHF                                ; 00594ca7
    JNC 0x005949ab                      ; 00594ca8
        ;   XREF to: 005949ab (CONDITIONAL_JUMP)  ; LAB_005949ab
    RET                                 ; 00594cae
        ;   Label: LAB_00594cae

