; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00555a80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Get_position_of_secondar_005e9bb6
;   undefined4 DAT_0264a5cc
;   undefined4 DAT_0264a5e8
;   undefined4 DAT_0264a5ec
;   undefined4 DAT_0264a5f0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_fillStreamBuffer_FUN_00554c80
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555a80
        ;   Label: sound_snddx.cpp_FUN_00555a80
    SUB ESP,0x198                       ; 00555a81
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30 ; 00555a87
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00552b30()
    CMP EAX,0x1                         ; 00555a8c
    JGE 0x00555aa5                      ; 00555a8f
        ;   XREF to: 00555aa5 (CONDITIONAL_JUMP)  ; LAB_00555aa5
    MOV EDX,dword ptr [0x0264a5cc]      ; 00555a91 | DAT_0264a5cc
    TEST EDX,EDX                        ; 00555a97
    JNZ 0x00555ab1                      ; 00555a99
        ;   XREF to: 00555ab1 (CONDITIONAL_JUMP)  ; LAB_00555ab1
    XOR EAX,EAX                         ; 00555a9b
    ADD ESP,0x198                       ; 00555a9d
        ;   Label: LAB_00555a9d
    POP EBX                             ; 00555aa3
    RET                                 ; 00555aa4
    CALL sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510 ; 00555aa5
        ;   XREF to: 00554510 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510()
        ;   Label: LAB_00555aa5
    MOV EAX,0x1                         ; 00555aaa
    JMP 0x00555a9d                      ; 00555aaf
        ;   XREF to: 00555a9d (UNCONDITIONAL_JUMP)  ; LAB_00555a9d
    LEA EBX,[ESP + 0x190]               ; 00555ab1
        ;   Label: LAB_00555ab1
    PUSH EBX                            ; 00555ab8
    LEA EBX,[ESP + 0x198]               ; 00555ab9
    PUSH EBX                            ; 00555ac0
    MOV EAX,EDX                         ; 00555ac1
    MOV EDX,dword ptr [EDX]             ; 00555ac3
    PUSH EAX                            ; 00555ac5
    CALL dword ptr [EDX + 0x10]         ; 00555ac6
    TEST EAX,EAX                        ; 00555ac9
    JNZ 0x00555b08                      ; 00555acb
        ;   XREF to: 00555b08 (CONDITIONAL_JUMP)  ; LAB_00555b08
    PUSH ESI                            ; 00555acd
    MOV EAX,dword ptr [ESP + 0x198]     ; 00555ace
    MOV ECX,dword ptr [0x0264a5e8]      ; 00555ad5 | DAT_0264a5e8
    XOR EDX,EDX                         ; 00555adb
    DIV ECX                             ; 00555add
    MOV ESI,dword ptr [0x0264a5ec]      ; 00555adf | DAT_0264a5ec
    MOV EBX,EAX                         ; 00555ae5
    CMP EAX,ESI                         ; 00555ae7
    JL 0x00555aee                       ; 00555ae9
        ;   XREF to: 00555aee (CONDITIONAL_JUMP)  ; LAB_00555aee
    LEA EBX,[ESI + -0x1]                ; 00555aeb
    TEST EBX,EBX                        ; 00555aee
        ;   Label: LAB_00555aee
    JL 0x00555b3e                       ; 00555af0
        ;   XREF to: 00555b3e (CONDITIONAL_JUMP)  ; LAB_00555b3e
    POP ESI                             ; 00555af2
        ;   Label: LAB_00555af2
    CMP EBX,dword ptr [0x0264a5f0]      ; 00555af3 | DAT_0264a5f0
        ;   Label: LAB_00555af3
    JNZ 0x00555b42                      ; 00555af9
        ;   XREF to: 00555b42 (CONDITIONAL_JUMP)  ; LAB_00555b42
    MOV EAX,0x1                         ; 00555afb
    ADD ESP,0x198                       ; 00555b00
    POP EBX                             ; 00555b06
    RET                                 ; 00555b07
    PUSH EAX                            ; 00555b08
        ;   Label: LAB_00555b08
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555b09
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555b0e
    PUSH EAX                            ; 00555b11
    PUSH 0x5e9bb6                       ; 00555b12 | = "Get position of secondary buffer"
    PUSH 0x5e9a3b                       ; 00555b17 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555b1c
    PUSH EAX                            ; 00555b20
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00555b21
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00555b26
    MOV EAX,ESP                         ; 00555b29
    PUSH EAX                            ; 00555b2b
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00555b2c
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00555b31
    XOR EAX,EAX                         ; 00555b34
    ADD ESP,0x198                       ; 00555b36
    POP EBX                             ; 00555b3c
    RET                                 ; 00555b3d
    XOR EBX,EBX                         ; 00555b3e
        ;   Label: LAB_00555b3e
    JMP 0x00555af2                      ; 00555b40
        ;   XREF to: 00555af2 (UNCONDITIONAL_JUMP)  ; LAB_00555af2
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_00554c80 ; 00555b42
        ;   XREF to: 00554c80 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_00554c80()
        ;   Label: LAB_00555b42
    TEST EAX,EAX                        ; 00555b47
    JNZ 0x00555af3                      ; 00555b49
        ;   XREF to: 00555af3 (CONDITIONAL_JUMP)  ; LAB_00555af3
    ADD ESP,0x198                       ; 00555b4b
    POP EBX                             ; 00555b51
    RET                                 ; 00555b52

