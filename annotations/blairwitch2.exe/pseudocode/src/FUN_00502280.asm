; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502280(int param_1)
;
;
; XREF[1]:
;   FUN_00501530 at 0050196b
;
; Referenced Globals:
;   TerminatedCString s_moloch_morph_todemon_wav_005df2ab
;   TerminatedCString s_moloch_morph_tohuman_wav_005df2c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502280
        ;   Label: FUN_00502280
    MOV dword ptr [EAX + 0x278fc],0x0   ; 00502284
    MOV EDX,dword ptr [EAX + 0x278f4]   ; 0050228e
    MOV dword ptr [EAX + 0x278f8],0x1   ; 00502294
    TEST EDX,EDX                        ; 0050229e
    JZ 0x005022b5                       ; 005022a0
        ;   XREF to: 005022b5 (CONDITIONAL_JUMP)  ; LAB_005022b5
    PUSH 0x5df2ab                       ; 005022a2 | = "moloch-morph-todemon.wav"
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005022a7
    PUSH EAX                            ; 005022ad
    CALL dword ptr [EDX + 0x34]         ; 005022ae
    ADD ESP,0x8                         ; 005022b1
    RET                                 ; 005022b4
    PUSH 0x5df2c4                       ; 005022b5 | = "moloch-morph-tohuman.wav"
        ;   Label: LAB_005022b5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005022ba
    PUSH EAX                            ; 005022c0
    CALL dword ptr [EDX + 0x34]         ; 005022c1
    ADD ESP,0x8                         ; 005022c4
    RET                                 ; 005022c7

