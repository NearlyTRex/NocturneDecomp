; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_00576b20(int param_1,float *param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_02c80668
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576b20
        ;   Label: sound_sndmain.cpp_getChannelLevels_FUN_00576b20
    PUSH ESI                            ; 00576b21
    PUSH EDI                            ; 00576b22
    PUSH EBP                            ; 00576b23
    MOV EBP,ESP                         ; 00576b24
    SUB ESP,0xc                         ; 00576b26
    AND ESP,0xfffffff8                  ; 00576b29
    MOV EBX,dword ptr [EBP + 0x14]      ; 00576b2c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00576b2f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00576b32
    CMP dword ptr [EBX*0x4 + 0x2c80698],0x0 ; 00576b35
    JNZ 0x00576c02                      ; 00576b3d
        ;   XREF to: 00576c02 (CONDITIONAL_JUMP)  ; LAB_00576c02
    TEST EDI,EDI                        ; 00576b43
        ;   Label: LAB_00576b43
    JZ 0x00576b4d                       ; 00576b45
        ;   XREF to: 00576b4d (CONDITIONAL_JUMP)  ; LAB_00576b4d
    MOV dword ptr [EDI],0x0             ; 00576b47
    TEST ESI,ESI                        ; 00576b4d
        ;   Label: LAB_00576b4d
    JZ 0x00576b57                       ; 00576b4f
        ;   XREF to: 00576b57 (CONDITIONAL_JUMP)  ; LAB_00576b57
    MOV dword ptr [ESI],0x0             ; 00576b51
    XOR EAX,EAX                         ; 00576b57
        ;   Label: LAB_00576b57
    MOV EBX,dword ptr [EBX*0x4 + 0x2c80698] ; 00576b59
    MOV dword ptr [ESP],EAX             ; 00576b60
    MOV dword ptr [ESP + 0x4],EAX       ; 00576b63
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00576b67
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV ECX,dword ptr [0x02c80668]      ; 00576b6c | DAT_02c80668
    XOR EDX,EDX                         ; 00576b72
    TEST ECX,ECX                        ; 00576b74
    JLE 0x00576bb0                      ; 00576b76
        ;   XREF to: 00576bb0 (CONDITIONAL_JUMP)  ; LAB_00576bb0
    FLD float ptr [EBX]                 ; 00576b78
        ;   Label: LAB_00576b78
    FABS                                ; 00576b7a
    FLD float ptr [ESP]                 ; 00576b7c
    ADD EBX,0x4                         ; 00576b7f
    FXCH                                ; 00576b82
    FSTP float ptr [ESP + 0x8]          ; 00576b84
    FADD float ptr [ESP + 0x8]          ; 00576b88
    FLD float ptr [ESP + 0x8]           ; 00576b8c
    FXCH                                ; 00576b90
    FSTP float ptr [ESP]                ; 00576b92
    FCOMP float ptr [ESP + 0x4]         ; 00576b95
    FNSTSW AX                           ; 00576b99
    SAHF                                ; 00576b9b
    JBE 0x00576ba6                      ; 00576b9c
        ;   XREF to: 00576ba6 (CONDITIONAL_JUMP)  ; LAB_00576ba6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576b9e
    MOV dword ptr [ESP + 0x4],EAX       ; 00576ba2
    MOV EAX,[0x02c80668]                ; 00576ba6 | DAT_02c80668
        ;   Label: LAB_00576ba6
    INC EDX                             ; 00576bab
    CMP EDX,EAX                         ; 00576bac
    JL 0x00576b78                       ; 00576bae
        ;   XREF to: 00576b78 (CONDITIONAL_JUMP)  ; LAB_00576b78
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00576bb0
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_00576bb0
    FILD dword ptr [0x02c80668]         ; 00576bb5 | DAT_02c80668
    FDIVR float ptr [ESP]               ; 00576bbb
    FLD float ptr [ESP + 0x4]           ; 00576bbe
    FLD1                                ; 00576bc2
    FXCH ST2                            ; 00576bc4
    FSTP float ptr [ESP]                ; 00576bc6
    FXCH                                ; 00576bc9
    FCOMPP                              ; 00576bcb
    FNSTSW AX                           ; 00576bcd
    SAHF                                ; 00576bcf
    JNC 0x00576bda                      ; 00576bd0
        ;   XREF to: 00576bda (CONDITIONAL_JUMP)  ; LAB_00576bda
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 00576bd2
    FLD float ptr [ESP]                 ; 00576bda
        ;   Label: LAB_00576bda
    FLD1                                ; 00576bdd
    FCOMPP                              ; 00576bdf
    FNSTSW AX                           ; 00576be1
    SAHF                                ; 00576be3
    JNC 0x00576bed                      ; 00576be4
        ;   XREF to: 00576bed (CONDITIONAL_JUMP)  ; LAB_00576bed
    MOV dword ptr [ESP],0x3f800000      ; 00576be6
    TEST EDI,EDI                        ; 00576bed
        ;   Label: LAB_00576bed
    JZ 0x00576bf7                       ; 00576bef
        ;   XREF to: 00576bf7 (CONDITIONAL_JUMP)  ; LAB_00576bf7
    MOV EDX,dword ptr [ESP + 0x4]       ; 00576bf1
    MOV dword ptr [EDI],EDX             ; 00576bf5
    TEST ESI,ESI                        ; 00576bf7
        ;   Label: LAB_00576bf7
    JNZ 0x00576c14                      ; 00576bf9
        ;   XREF to: 00576c14 (CONDITIONAL_JUMP)  ; LAB_00576c14
    MOV ESP,EBP                         ; 00576bfb
    POP EBP                             ; 00576bfd
    POP EDI                             ; 00576bfe
    POP ESI                             ; 00576bff
    POP EBX                             ; 00576c00
    RET                                 ; 00576c01
    CMP dword ptr [0x02c80668],0x1      ; 00576c02 | DAT_02c80668
        ;   Label: LAB_00576c02
    JL 0x00576b43                       ; 00576c09
        ;   XREF to: 00576b43 (CONDITIONAL_JUMP)  ; LAB_00576b43
    JMP 0x00576b57                      ; 00576c0f
        ;   XREF to: 00576b57 (UNCONDITIONAL_JUMP)  ; LAB_00576b57
    MOV EDX,dword ptr [ESP]             ; 00576c14
        ;   Label: LAB_00576c14
    MOV dword ptr [ESI],EDX             ; 00576c17
    MOV ESP,EBP                         ; 00576c19
    POP EBP                             ; 00576c1b
    POP EDI                             ; 00576c1c
    POP ESI                             ; 00576c1d
    POP EBX                             ; 00576c1e
    RET                                 ; 00576c1f

