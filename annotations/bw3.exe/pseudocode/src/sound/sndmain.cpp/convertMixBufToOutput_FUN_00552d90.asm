; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_00552d90(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5)
;
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90 at 0055a001
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2ae9
;   TerminatedCString s_convertMixBufToOutput_in_005d2afe
;   undefined4 DAT_005d2b2a
;   undefined4 DAT_005d2b2e
;   undefined4 DAT_005d2b32
;   undefined4 DAT_005d2b3a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552d90
        ;   Label: sound_sndmain.cpp_convertMixBufToOutput_FUN_00552d90
    PUSH ESI                            ; 00552d91
    PUSH EDI                            ; 00552d92
    PUSH EBP                            ; 00552d93
    MOV EBP,ESP                         ; 00552d94
    SUB ESP,0x34                        ; 00552d96
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00552d99
    MOV EDX,dword ptr [EBP + 0x18]      ; 00552d9c
    MOV dword ptr [EBP + -0x20],EDX     ; 00552d9f
    CMP EAX,0x8                         ; 00552da2
    JC 0x00552edd                       ; 00552da5
        ;   XREF to: 00552edd (CONDITIONAL_JUMP)  ; LAB_00552edd
    JBE 0x00552e19                      ; 00552dab
        ;   XREF to: 00552e19 (CONDITIONAL_JUMP)  ; LAB_00552e19
    CMP EAX,0x10                        ; 00552dad
    JNZ 0x00552edd                      ; 00552db0
        ;   XREF to: 00552edd (CONDITIONAL_JUMP)  ; LAB_00552edd
    XOR EDX,EDX                         ; 00552db6
    MOV ECX,dword ptr [EBP + 0x20]      ; 00552db8
    MOV dword ptr [EBP + -0x4],EDX      ; 00552dbb
    TEST ECX,ECX                        ; 00552dbe
    JLE 0x00552e12                      ; 00552dc0
        ;   XREF to: 00552e12 (CONDITIONAL_JUMP)  ; LAB_00552e12
    MOV EAX,dword ptr [EBP + 0x14]      ; 00552dc2
        ;   Label: LAB_00552dc2
    MOV EAX,dword ptr [EAX]             ; 00552dc5
    MOV dword ptr [EBP + -0xc],EAX      ; 00552dc7
    FLD float ptr [EBP + -0xc]          ; 00552dca
    FST double ptr [EBP + -0x34]        ; 00552dcd
    FCOMP double ptr [0x005d2b32]       ; 00552dd0 | DAT_005d2b32
    FNSTSW AX                           ; 00552dd6
    SAHF                                ; 00552dd8
    JBE 0x00552ea3                      ; 00552dd9
        ;   XREF to: 00552ea3 (CONDITIONAL_JUMP)  ; LAB_00552ea3
    FLD1                                ; 00552ddf
    FCOMP double ptr [EBP + -0x34]      ; 00552de1
    FNSTSW AX                           ; 00552de4
    SAHF                                ; 00552de6
    JA 0x00552eb0                       ; 00552de7
        ;   XREF to: 00552eb0 (CONDITIONAL_JUMP)  ; LAB_00552eb0
    MOV EAX,dword ptr [EBP + -0x20]     ; 00552ded
    MOV word ptr [EAX],0x7fff           ; 00552df0
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552df5
        ;   Label: LAB_00552df5
    ADD dword ptr [EBP + -0x20],EAX     ; 00552df8
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552dfb
    MOV ESI,dword ptr [EBP + -0x4]      ; 00552dfe
    MOV EDI,dword ptr [EBP + 0x20]      ; 00552e01
    ADD EBX,0x4                         ; 00552e04
    INC ESI                             ; 00552e07
    MOV dword ptr [EBP + 0x14],EBX      ; 00552e08
    MOV dword ptr [EBP + -0x4],ESI      ; 00552e0b
    CMP ESI,EDI                         ; 00552e0e
    JL 0x00552dc2                       ; 00552e10
        ;   XREF to: 00552dc2 (CONDITIONAL_JUMP)  ; LAB_00552dc2
    MOV ESP,EBP                         ; 00552e12
        ;   Label: LAB_00552e12
    POP EBP                             ; 00552e14
    POP EDI                             ; 00552e15
    POP ESI                             ; 00552e16
    POP EBX                             ; 00552e17
    RET                                 ; 00552e18
    XOR EBX,EBX                         ; 00552e19
        ;   Label: LAB_00552e19
    MOV ESI,dword ptr [EBP + 0x20]      ; 00552e1b
    MOV dword ptr [EBP + -0x8],EBX      ; 00552e1e
    TEST ESI,ESI                        ; 00552e21
    JLE 0x00552e12                      ; 00552e23
        ;   XREF to: 00552e12 (CONDITIONAL_JUMP)  ; LAB_00552e12
    MOV EAX,dword ptr [EBP + 0x14]      ; 00552e25
        ;   Label: LAB_00552e25
    MOV EAX,dword ptr [EAX]             ; 00552e28
    MOV dword ptr [EBP + -0x24],EAX     ; 00552e2a
    FLD float ptr [EBP + -0x24]         ; 00552e2d
    FST double ptr [EBP + -0x2c]        ; 00552e30
    FCOMP double ptr [0x005d2b32]       ; 00552e33 | DAT_005d2b32
    FNSTSW AX                           ; 00552e39
    SAHF                                ; 00552e3b
    JBE 0x00552e6d                      ; 00552e3c
        ;   XREF to: 00552e6d (CONDITIONAL_JUMP)  ; LAB_00552e6d
    FLD1                                ; 00552e3e
    FCOMP double ptr [EBP + -0x2c]      ; 00552e40
    FNSTSW AX                           ; 00552e43
    SAHF                                ; 00552e45
    JA 0x00552e75                       ; 00552e46
        ;   XREF to: 00552e75 (CONDITIONAL_JUMP)  ; LAB_00552e75
    MOV EAX,dword ptr [EBP + -0x20]     ; 00552e48
    MOV byte ptr [EAX],0xff             ; 00552e4b
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552e4e
        ;   Label: LAB_00552e4e
    ADD dword ptr [EBP + -0x20],EAX     ; 00552e51
    MOV ECX,dword ptr [EBP + 0x14]      ; 00552e54
    MOV EBX,dword ptr [EBP + -0x8]      ; 00552e57
    MOV ESI,dword ptr [EBP + 0x20]      ; 00552e5a
    ADD ECX,0x4                         ; 00552e5d
    INC EBX                             ; 00552e60
    MOV dword ptr [EBP + 0x14],ECX      ; 00552e61
    MOV dword ptr [EBP + -0x8],EBX      ; 00552e64
    CMP EBX,ESI                         ; 00552e67
    JGE 0x00552e12                      ; 00552e69
        ;   XREF to: 00552e12 (CONDITIONAL_JUMP)  ; LAB_00552e12
    JMP 0x00552e25                      ; 00552e6b
        ;   XREF to: 00552e25 (UNCONDITIONAL_JUMP)  ; LAB_00552e25
    MOV EAX,dword ptr [EBP + -0x20]     ; 00552e6d
        ;   Label: LAB_00552e6d
    MOV byte ptr [EAX],0x0              ; 00552e70
    JMP 0x00552e4e                      ; 00552e73
        ;   XREF to: 00552e4e (UNCONDITIONAL_JUMP)  ; LAB_00552e4e
    FLD float ptr [EBP + -0x24]         ; 00552e75
        ;   Label: LAB_00552e75
    FMUL float ptr [0x005d2b2e]         ; 00552e78 | DAT_005d2b2e
    FADD float ptr [0x005d2b3a]         ; 00552e7e | DAT_005d2b3a
    FSTP float ptr [EBP + -0x1c]        ; 00552e84
    FLD float ptr [EBP + 0xffffffe4]    ; 00552e87
    FISTP dword ptr [EBP + 0xffffffe8]  ; 00552e8d
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 00552e93
    MOV AL,byte ptr [EBP + 0xffffffe8]  ; 00552e99
    MOV byte ptr [ECX],AL               ; 00552e9f
    JMP 0x00552e4e                      ; 00552ea1
        ;   XREF to: 00552e4e (UNCONDITIONAL_JUMP)  ; LAB_00552e4e
    MOV EAX,dword ptr [EBP + -0x20]     ; 00552ea3
        ;   Label: LAB_00552ea3
    MOV word ptr [EAX],0x8001           ; 00552ea6
    JMP 0x00552df5                      ; 00552eab
        ;   XREF to: 00552df5 (UNCONDITIONAL_JUMP)  ; LAB_00552df5
    FLD float ptr [EBP + -0xc]          ; 00552eb0
        ;   Label: LAB_00552eb0
    FMUL float ptr [0x005d2b2a]         ; 00552eb3 | DAT_005d2b2a
    FSTP float ptr [EBP + -0x14]        ; 00552eb9
    FLD float ptr [EBP + 0xffffffec]    ; 00552ebc
    FISTP dword ptr [EBP + 0xfffffff0]  ; 00552ec2
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 00552ec8
    MOV AX,word ptr [EBP + 0xfffffff0]  ; 00552ece
    MOV word ptr [ECX],AX               ; 00552ed5
    JMP 0x00552df5                      ; 00552ed8
        ;   XREF to: 00552df5 (UNCONDITIONAL_JUMP)  ; LAB_00552df5
    PUSH EAX                            ; 00552edd
        ;   Label: LAB_00552edd
    MOV EDI,0x5d2ae9                    ; 00552ede | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x619                       ; 00552ee3
    PUSH 0x5d2afe                       ; 00552ee8 | = "convertMixBufToOutput - invalid bits: %d"
    MOV dword ptr [0x01d71de0],EDI      ; 00552eed | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00552ef3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00552ef9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00552efe
    MOV ESP,EBP                         ; 00552f01
    POP EBP                             ; 00552f03
    POP EDI                             ; 00552f04
    POP ESI                             ; 00552f05
    POP EBX                             ; 00552f06
    RET                                 ; 00552f07

