; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_005057c0(float *param_1,float param_2,float param_3,uint *param_4,char *param_5,float *param_6)
;
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0 at 00505958
;
; Referenced Globals:
;   undefined4 DAT_005e74d5
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00572780
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_FUN_00573760
;   sound_sndmain.cpp_FUN_00573950
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005057c0
        ;   Label: core_manpuz.cpp_updateGemHumChannel_FUN_005057c0
    PUSH ESI                            ; 005057c1
    PUSH EDI                            ; 005057c2
    PUSH EBP                            ; 005057c3
    MOV EBP,ESP                         ; 005057c4
    SUB ESP,0x8                         ; 005057c6
    AND ESP,0xfffffff8                  ; 005057c9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005057cc
    MOV ESI,dword ptr [EBP + 0x20]      ; 005057cf
    MOV EBX,dword ptr [EBP + 0x28]      ; 005057d2
    FLD float ptr [EBP + 0x18]          ; 005057d5
    FLD float ptr [EBP + 0x1c]          ; 005057d8
    FCHS                                ; 005057db
    FXCH                                ; 005057dd
    FSUB float ptr [EDX]                ; 005057df
    XOR EDI,EDI                         ; 005057e1
    FSTP float ptr [ESP + 0x4]          ; 005057e3
    FCOMP float ptr [ESP + 0x4]         ; 005057e7
    FNSTSW AX                           ; 005057eb
    SAHF                                ; 005057ed
    JA 0x0050586a                       ; 005057ee
        ;   XREF to: 0050586a (CONDITIONAL_JUMP)  ; LAB_0050586a
    FLD float ptr [ESP + 0x4]           ; 005057f4
    FCOMP float ptr [EBP + 0x1c]        ; 005057f8
    FNSTSW AX                           ; 005057fb
    SAHF                                ; 005057fd
    JBE 0x00505871                      ; 005057fe
        ;   XREF to: 00505871 (CONDITIONAL_JUMP)  ; LAB_00505871
    FLD float ptr [EDX]                 ; 00505800
    FADD float ptr [EBP + 0x1c]         ; 00505802
    FSTP float ptr [EDX]                ; 00505805
        ;   Label: LAB_00505805
    FLD float ptr [EDX]                 ; 00505807
        ;   Label: LAB_00505807
    FMUL double ptr [0x005e74d5]        ; 00505809 | DAT_005e74d5
    FST float ptr [ESP]                 ; 0050580f
    FLDZ                                ; 00505812
    FCOMPP                              ; 00505814
    FNSTSW AX                           ; 00505816
    SAHF                                ; 00505818
    JNC 0x005058cb                      ; 00505819
        ;   XREF to: 005058cb (CONDITIONAL_JUMP)  ; LAB_005058cb
    MOV ECX,dword ptr [ESI]             ; 0050581f
    PUSH ECX                            ; 00505821
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00505822
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00505827
    TEST EAX,EAX                        ; 0050582a
    JZ 0x0050587d                       ; 0050582c
        ;   XREF to: 0050587d (CONDITIONAL_JUMP)  ; LAB_0050587d
    SUB ESP,0x8                         ; 0050582e
    FLD float ptr [EBX + 0x8]           ; 00505831
    FSTP double ptr [ESP]               ; 00505834
    SUB ESP,0x8                         ; 00505837
    FLD float ptr [EBX + 0x4]           ; 0050583a
    FSTP double ptr [ESP]               ; 0050583d
    SUB ESP,0x8                         ; 00505840
    FLD float ptr [EBX]                 ; 00505843
    FSTP double ptr [ESP]               ; 00505845
    MOV EAX,dword ptr [ESI]             ; 00505848
    PUSH EAX                            ; 0050584a
    CALL sound_sndmain.cpp_FUN_00573760 ; 0050584b
        ;   XREF to: 00573760 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573760()
    ADD ESP,0x1c                        ; 00505850
    MOV EDX,dword ptr [ESI]             ; 00505853
    PUSH dword ptr [ESP]                ; 00505855
    PUSH EDX                            ; 00505858
    CALL sound_sndmain.cpp_FUN_00573950 ; 00505859
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0050585e
    MOV EAX,EDI                         ; 00505861
    MOV ESP,EBP                         ; 00505863
    POP EBP                             ; 00505865
    POP EDI                             ; 00505866
    POP ESI                             ; 00505867
    POP EBX                             ; 00505868
    RET                                 ; 00505869
    FLD float ptr [EDX]                 ; 0050586a
        ;   Label: LAB_0050586a
    FSUB float ptr [EBP + 0x1c]         ; 0050586c
    JMP 0x00505805                      ; 0050586f
        ;   XREF to: 00505805 (UNCONDITIONAL_JUMP)  ; LAB_00505805
    MOV EAX,dword ptr [EBP + 0x18]      ; 00505871
        ;   Label: LAB_00505871
    MOV EDI,0x1                         ; 00505874
    MOV dword ptr [EDX],EAX             ; 00505879
    JMP 0x00505807                      ; 0050587b
        ;   XREF to: 00505807 (UNCONDITIONAL_JUMP)  ; LAB_00505807
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0050587d
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
        ;   Label: LAB_0050587d
    PUSH dword ptr [ESP]                ; 00505882
    CALL sound_sndmain.cpp_FUN_005728e0 ; 00505885
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0050588a
    SUB ESP,0x8                         ; 0050588d
    FLD float ptr [EBX + 0x8]           ; 00505890
    FSTP double ptr [ESP]               ; 00505893
    SUB ESP,0x8                         ; 00505896
    FLD float ptr [EBX + 0x4]           ; 00505899
    FSTP double ptr [ESP]               ; 0050589c
    SUB ESP,0x8                         ; 0050589f
    FLD float ptr [EBX]                 ; 005058a2
    FSTP double ptr [ESP]               ; 005058a4
    CALL sound_sndmain.cpp_FUN_00572780 ; 005058a7
        ;   XREF to: 00572780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572780(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 005058ac
    MOV EBX,dword ptr [EBP + 0x24]      ; 005058af
    PUSH EBX                            ; 005058b2
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 005058b3
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 005058b8
    MOV dword ptr [ESI],EAX             ; 005058bb
    CALL sound_sndmain.cpp_FUN_00572b40 ; 005058bd
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    MOV EAX,EDI                         ; 005058c2
    MOV ESP,EBP                         ; 005058c4
    POP EBP                             ; 005058c6
    POP EDI                             ; 005058c7
    POP ESI                             ; 005058c8
    POP EBX                             ; 005058c9
    RET                                 ; 005058ca
    MOV EDX,dword ptr [ESI]             ; 005058cb
        ;   Label: LAB_005058cb
    PUSH EDX                            ; 005058cd
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005058ce
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005058d3
    MOV EAX,EDI                         ; 005058d6
    MOV ESP,EBP                         ; 005058d8
    POP EBP                             ; 005058da
    POP EDI                             ; 005058db
    POP ESI                             ; 005058dc
    POP EBX                             ; 005058dd
    RET                                 ; 005058de

