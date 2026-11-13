; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * sound_sndwav_cpp_getWavInDevice_FUN_00558ad0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061bf88
;
; Called Functions:
;   sound_sndwav.cpp_CWavInDevice_close_FUN_00558240
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 00558ad0
        ;   Label: sound_sndwav.cpp_getWavInDevice_FUN_00558ad0
    PUSH 0x264b280                      ; 00558ad3
    CALL sound_sndwav.cpp_CWavInDevice_close_FUN_00558240 ; 00558ad8
        ;   XREF to: 00558240 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_CWavInDevice_close_FUN_00558240(CWavInDevice * this_ptr)
    ADD ESP,0x4                         ; 00558add
    TEST EAX,EAX                        ; 00558ae0
    JNZ 0x00558ae8                      ; 00558ae2
        ;   XREF to: 00558ae8 (CONDITIONAL_JUMP)  ; LAB_00558ae8
    ADD ESP,0x30                        ; 00558ae4
    RET                                 ; 00558ae7
    PUSH 0x30                           ; 00558ae8
        ;   Label: LAB_00558ae8
    LEA EAX,[ESP + 0x4]                 ; 00558aea
    PUSH EAX                            ; 00558aee
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00558aef
    PUSH EDX                            ; 00558af3
    CALL dword ptr CS:[0x5c8458]        ; 00558af4
    TEST EAX,EAX                        ; 00558afb
    JZ 0x00558b05                       ; 00558afd
        ;   XREF to: 00558b05 (CONDITIONAL_JUMP)  ; LAB_00558b05
    XOR EAX,EAX                         ; 00558aff
    ADD ESP,0x30                        ; 00558b01
    RET                                 ; 00558b04
    MOV EAX,dword ptr [ESP + 0x34]      ; 00558b05
        ;   Label: LAB_00558b05
    MOV [0x0061bf88],EAX                ; 00558b09 | DAT_0061bf88
    MOV EAX,0x264b280                   ; 00558b0e
    ADD ESP,0x30                        ; 00558b13
    RET                                 ; 00558b16

