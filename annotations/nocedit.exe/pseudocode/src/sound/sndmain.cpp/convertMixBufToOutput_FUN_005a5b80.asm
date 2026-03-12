; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; ushort *         Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   bits_per_sample
; int              Stack[0x10]:4   num_samples
; int              Stack[0x14]:4   output_stride
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; ushort *         Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; ushort           Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 at 005acd01
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fc18
;   TerminatedCString s_convertMixBufToOutput_in_0064fc2d
;   float FLOAT_0064fc57 = 32766
;   float FLOAT_0064fc5b = 127
;   double DOUBLE_0064fc5f = -1
;   float FLOAT_0064fc67 = 128
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b80
        ;   Label: sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
    PUSH ESI                            ; 005a5b81
    PUSH EDI                            ; 005a5b82
    PUSH EBP                            ; 005a5b83
    MOV EBP,ESP                         ; 005a5b84
    SUB ESP,0x34                        ; 005a5b86
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a5b89
    MOV EDX,dword ptr [EBP + 0x18]      ; 005a5b8c
    MOV dword ptr [EBP + -0x20],EDX     ; 005a5b8f
    CMP EAX,0x8                         ; 005a5b92
    JC 0x005a5ccd                       ; 005a5b95
        ;   XREF to: 005a5ccd (CONDITIONAL_JUMP)  ; LAB_005a5ccd
    JBE 0x005a5c09                      ; 005a5b9b
        ;   XREF to: 005a5c09 (CONDITIONAL_JUMP)  ; LAB_005a5c09
    CMP EAX,0x10                        ; 005a5b9d
    JNZ 0x005a5ccd                      ; 005a5ba0
        ;   XREF to: 005a5ccd (CONDITIONAL_JUMP)  ; LAB_005a5ccd
    XOR EDX,EDX                         ; 005a5ba6
    MOV ECX,dword ptr [EBP + 0x20]      ; 005a5ba8
    MOV dword ptr [EBP + -0x4],EDX      ; 005a5bab
    TEST ECX,ECX                        ; 005a5bae
    JLE 0x005a5c02                      ; 005a5bb0
        ;   XREF to: 005a5c02 (CONDITIONAL_JUMP)  ; LAB_005a5c02
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a5bb2
        ;   Label: LAB_005a5bb2
    MOV EAX,dword ptr [EAX]             ; 005a5bb5
    MOV dword ptr [EBP + -0xc],EAX      ; 005a5bb7
    FLD float ptr [EBP + -0xc]          ; 005a5bba
    FST double ptr [EBP + -0x34]        ; 005a5bbd
    FCOMP double ptr [0x0064fc5f]       ; 005a5bc0 | DOUBLE_0064fc5f
    FNSTSW AX                           ; 005a5bc6
    SAHF                                ; 005a5bc8
    JBE 0x005a5c93                      ; 005a5bc9
        ;   XREF to: 005a5c93 (CONDITIONAL_JUMP)  ; LAB_005a5c93
    FLD1                                ; 005a5bcf
    FCOMP double ptr [EBP + -0x34]      ; 005a5bd1
    FNSTSW AX                           ; 005a5bd4
    SAHF                                ; 005a5bd6
    JA 0x005a5ca0                       ; 005a5bd7
        ;   XREF to: 005a5ca0 (CONDITIONAL_JUMP)  ; LAB_005a5ca0
    MOV EAX,dword ptr [EBP + -0x20]     ; 005a5bdd
    MOV word ptr [EAX],0x7fff           ; 005a5be0
    MOV EAX,dword ptr [EBP + 0x24]      ; 005a5be5
        ;   Label: LAB_005a5be5
    ADD dword ptr [EBP + -0x20],EAX     ; 005a5be8
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a5beb
    MOV ESI,dword ptr [EBP + -0x4]      ; 005a5bee
    MOV EDI,dword ptr [EBP + 0x20]      ; 005a5bf1
    ADD EBX,0x4                         ; 005a5bf4
    INC ESI                             ; 005a5bf7
    MOV dword ptr [EBP + 0x14],EBX      ; 005a5bf8
    MOV dword ptr [EBP + -0x4],ESI      ; 005a5bfb
    CMP ESI,EDI                         ; 005a5bfe
    JL 0x005a5bb2                       ; 005a5c00
        ;   XREF to: 005a5bb2 (CONDITIONAL_JUMP)  ; LAB_005a5bb2
    MOV ESP,EBP                         ; 005a5c02
        ;   Label: LAB_005a5c02
    POP EBP                             ; 005a5c04
    POP EDI                             ; 005a5c05
    POP ESI                             ; 005a5c06
    POP EBX                             ; 005a5c07
    RET                                 ; 005a5c08
    XOR EBX,EBX                         ; 005a5c09
        ;   Label: LAB_005a5c09
    MOV ESI,dword ptr [EBP + 0x20]      ; 005a5c0b
    MOV dword ptr [EBP + -0x8],EBX      ; 005a5c0e
    TEST ESI,ESI                        ; 005a5c11
    JLE 0x005a5c02                      ; 005a5c13
        ;   XREF to: 005a5c02 (CONDITIONAL_JUMP)  ; LAB_005a5c02
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a5c15
        ;   Label: LAB_005a5c15
    MOV EAX,dword ptr [EAX]             ; 005a5c18
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5c1a
    FLD float ptr [EBP + -0x24]         ; 005a5c1d
    FST double ptr [EBP + -0x2c]        ; 005a5c20
    FCOMP double ptr [0x0064fc5f]       ; 005a5c23 | DOUBLE_0064fc5f
    FNSTSW AX                           ; 005a5c29
    SAHF                                ; 005a5c2b
    JBE 0x005a5c5d                      ; 005a5c2c
        ;   XREF to: 005a5c5d (CONDITIONAL_JUMP)  ; LAB_005a5c5d
    FLD1                                ; 005a5c2e
    FCOMP double ptr [EBP + -0x2c]      ; 005a5c30
    FNSTSW AX                           ; 005a5c33
    SAHF                                ; 005a5c35
    JA 0x005a5c65                       ; 005a5c36
        ;   XREF to: 005a5c65 (CONDITIONAL_JUMP)  ; LAB_005a5c65
    MOV EAX,dword ptr [EBP + -0x20]     ; 005a5c38
    MOV byte ptr [EAX],0xff             ; 005a5c3b
    MOV EAX,dword ptr [EBP + 0x24]      ; 005a5c3e
        ;   Label: LAB_005a5c3e
    ADD dword ptr [EBP + -0x20],EAX     ; 005a5c41
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a5c44
    MOV EBX,dword ptr [EBP + -0x8]      ; 005a5c47
    MOV ESI,dword ptr [EBP + 0x20]      ; 005a5c4a
    ADD ECX,0x4                         ; 005a5c4d
    INC EBX                             ; 005a5c50
    MOV dword ptr [EBP + 0x14],ECX      ; 005a5c51
    MOV dword ptr [EBP + -0x8],EBX      ; 005a5c54
    CMP EBX,ESI                         ; 005a5c57
    JGE 0x005a5c02                      ; 005a5c59
        ;   XREF to: 005a5c02 (CONDITIONAL_JUMP)  ; LAB_005a5c02
    JMP 0x005a5c15                      ; 005a5c5b
        ;   XREF to: 005a5c15 (UNCONDITIONAL_JUMP)  ; LAB_005a5c15
    MOV EAX,dword ptr [EBP + -0x20]     ; 005a5c5d
        ;   Label: LAB_005a5c5d
    MOV byte ptr [EAX],0x0              ; 005a5c60
    JMP 0x005a5c3e                      ; 005a5c63
        ;   XREF to: 005a5c3e (UNCONDITIONAL_JUMP)  ; LAB_005a5c3e
    FLD float ptr [EBP + -0x24]         ; 005a5c65
        ;   Label: LAB_005a5c65
    FMUL float ptr [0x0064fc5b]         ; 005a5c68 | FLOAT_0064fc5b
    FADD float ptr [0x0064fc67]         ; 005a5c6e | FLOAT_0064fc67
    FSTP float ptr [EBP + -0x1c]        ; 005a5c74
    FLD float ptr [EBP + 0xffffffe4]    ; 005a5c77
    FISTP dword ptr [EBP + 0xffffffe8]  ; 005a5c7d
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 005a5c83
    MOV AL,byte ptr [EBP + 0xffffffe8]  ; 005a5c89
    MOV byte ptr [ECX],AL               ; 005a5c8f
    JMP 0x005a5c3e                      ; 005a5c91
        ;   XREF to: 005a5c3e (UNCONDITIONAL_JUMP)  ; LAB_005a5c3e
    MOV EAX,dword ptr [EBP + -0x20]     ; 005a5c93
        ;   Label: LAB_005a5c93
    MOV word ptr [EAX],0x8001           ; 005a5c96
    JMP 0x005a5be5                      ; 005a5c9b
        ;   XREF to: 005a5be5 (UNCONDITIONAL_JUMP)  ; LAB_005a5be5
    FLD float ptr [EBP + -0xc]          ; 005a5ca0
        ;   Label: LAB_005a5ca0
    FMUL float ptr [0x0064fc57]         ; 005a5ca3 | FLOAT_0064fc57
    FSTP float ptr [EBP + -0x14]        ; 005a5ca9
    FLD float ptr [EBP + 0xffffffec]    ; 005a5cac
    FISTP dword ptr [EBP + 0xfffffff0]  ; 005a5cb2
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 005a5cb8
    MOV AX,word ptr [EBP + 0xfffffff0]  ; 005a5cbe
    MOV word ptr [ECX],AX               ; 005a5cc5
    JMP 0x005a5be5                      ; 005a5cc8
        ;   XREF to: 005a5be5 (UNCONDITIONAL_JUMP)  ; LAB_005a5be5
    PUSH EAX                            ; 005a5ccd
        ;   Label: LAB_005a5ccd
    MOV EDI,0x64fc18                    ; 005a5cce | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x55a                       ; 005a5cd3
    PUSH 0x64fc2d                       ; 005a5cd8 | = "convertMixBufToOutput - invalid bits: %d"
    MOV dword ptr [0x02f0ca48],EDI      ; 005a5cdd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a5ce3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a5ce9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a5cee
    MOV ESP,EBP                         ; 005a5cf1
    POP EBP                             ; 005a5cf3
    POP EDI                             ; 005a5cf4
    POP ESI                             ; 005a5cf5
    POP EBX                             ; 005a5cf6
    RET                                 ; 005a5cf7

