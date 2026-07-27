; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00522e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_005927ce
;   undefined4 DAT_02dc1ed8
;   undefined4 DAT_02dc216c
;   undefined4 DAT_02dc2170
;   undefined4 DAT_02dc2174
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522e00
        ;   Label: sound_sndmain.cpp_FUN_00522e00
    PUSH ESI                            ; 00522e01
    PUSH EDI                            ; 00522e02
    PUSH EBP                            ; 00522e03
    MOV EBP,dword ptr [ESP + 0x14]      ; 00522e04
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00522e08
    MOV EDI,dword ptr [ESP + 0x20]      ; 00522e0c
    CMP dword ptr [0x02dc8318],0x0      ; 00522e10 | DAT_02dc8318
    JZ 0x00522e69                       ; 00522e17
        ;   XREF to: 00522e69 (CONDITIONAL_JUMP)  ; LAB_00522e69
    PUSH EDI                            ; 00522e19
        ;   Label: LAB_00522e19
    PUSH ESI                            ; 00522e1a
    MOV ECX,dword ptr [ESP + 0x20]      ; 00522e1b
    PUSH ECX                            ; 00522e1f
    MOV EAX,[0x02dc8318]                ; 00522e20 | DAT_02dc8318
    PUSH EBP                            ; 00522e25
    MOV EDX,dword ptr [EAX]             ; 00522e26
    PUSH EAX                            ; 00522e28
    CALL dword ptr [EDX + 0x2c]         ; 00522e29
    ADD ESP,0x14                        ; 00522e2c
    TEST EAX,EAX                        ; 00522e2f
    JNZ 0x00522e6b                      ; 00522e31
        ;   XREF to: 00522e6b (CONDITIONAL_JUMP)  ; LAB_00522e6b
    MOV EAX,[0x02dc1ed8]                ; 00522e33 | DAT_02dc1ed8
    XOR EBX,EBX                         ; 00522e38
    INC EAX                             ; 00522e3a
        ;   Label: LAB_00522e3a
    CMP EAX,0x40                        ; 00522e3b
    JL 0x00522e42                       ; 00522e3e
        ;   XREF to: 00522e42 (CONDITIONAL_JUMP)  ; LAB_00522e42
    XOR EAX,EAX                         ; 00522e40
    IMUL EDX,EAX,0x168                  ; 00522e42
        ;   Label: LAB_00522e42
    CMP dword ptr [EDX + 0x2dc2008],0x0 ; 00522e48 | DAT_02dc2170
    JZ 0x00522e70                       ; 00522e4f
        ;   XREF to: 00522e70 (CONDITIONAL_JUMP)  ; LAB_00522e70
    INC EBX                             ; 00522e51
        ;   Label: LAB_00522e51
    CMP EBX,0x40                        ; 00522e52
    JL 0x00522e3a                       ; 00522e55
        ;   XREF to: 00522e3a (CONDITIONAL_JUMP)  ; LAB_00522e3a
    CMP EBX,0x40                        ; 00522e57
        ;   Label: LAB_00522e57
    JL 0x00522e19                       ; 00522e5a
        ;   XREF to: 00522e19 (CONDITIONAL_JUMP)  ; LAB_00522e19
    PUSH 0x5927ce                       ; 00522e5c | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_FUN_00529980 ; 00522e61
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 00522e66
    XOR EAX,EAX                         ; 00522e69
        ;   Label: LAB_00522e69
    POP EBP                             ; 00522e6b
        ;   Label: LAB_00522e6b
    POP EDI                             ; 00522e6c
    POP ESI                             ; 00522e6d
    POP EBX                             ; 00522e6e
    RET                                 ; 00522e6f
    CMP dword ptr [EDX + 0x2dc200c],0x0 ; 00522e70 | DAT_02dc2174
        ;   Label: LAB_00522e70
    JZ 0x00522e51                       ; 00522e77
        ;   XREF to: 00522e51 (CONDITIONAL_JUMP)  ; LAB_00522e51
    CMP dword ptr [EDX + 0x2dc2004],0x0 ; 00522e79 | DAT_02dc216c
    JNZ 0x00522e51                      ; 00522e80
        ;   XREF to: 00522e51 (CONDITIONAL_JUMP)  ; LAB_00522e51
    ADD EDX,0x2dc1edc                   ; 00522e82
    PUSH EDX                            ; 00522e88
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00522e89
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    ADD ESP,0x4                         ; 00522e8e
    JMP 0x00522e57                      ; 00522e91
        ;   XREF to: 00522e57 (UNCONDITIONAL_JUMP)  ; LAB_00522e57

