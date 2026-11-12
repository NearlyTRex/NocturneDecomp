; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position)
;
; Parameters:
; float *          Stack[0x4]:4   hum_value
; float            Stack[0x8]:4   target
; float            Stack[0xc]:4   max_step
; uint *           Stack[0x10]:4   sfx_handle
; char *           Stack[0x14]:4   wav_filename
; CVector3f *      Stack[0x18]:4   world_position
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6cb8
;
; Referenced Globals:
;   undefined4 DAT_005dc585
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550110
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_FUN_00550d30
;   sound_sndmain.cpp_FUN_00550f20
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6b20
        ;   Label: core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20
    PUSH ESI                            ; 004e6b21
    PUSH EDI                            ; 004e6b22
    PUSH EBP                            ; 004e6b23
    MOV EBP,ESP                         ; 004e6b24
    SUB ESP,0x8                         ; 004e6b26
    AND ESP,0xfffffff8                  ; 004e6b29
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e6b2c
    MOV ESI,dword ptr [EBP + 0x20]      ; 004e6b2f
    MOV EBX,dword ptr [EBP + 0x28]      ; 004e6b32
    FLD float ptr [EBP + 0x18]          ; 004e6b35
    FLD float ptr [EBP + 0x1c]          ; 004e6b38
    FCHS                                ; 004e6b3b
    FXCH                                ; 004e6b3d
    FSUB float ptr [EDX]                ; 004e6b3f
    XOR EDI,EDI                         ; 004e6b41
    FSTP float ptr [ESP + 0x4]          ; 004e6b43
    FCOMP float ptr [ESP + 0x4]         ; 004e6b47
    FNSTSW AX                           ; 004e6b4b
    SAHF                                ; 004e6b4d
    JA 0x004e6bca                       ; 004e6b4e
        ;   XREF to: 004e6bca (CONDITIONAL_JUMP)  ; LAB_004e6bca
    FLD float ptr [ESP + 0x4]           ; 004e6b54
    FCOMP float ptr [EBP + 0x1c]        ; 004e6b58
    FNSTSW AX                           ; 004e6b5b
    SAHF                                ; 004e6b5d
    JBE 0x004e6bd1                      ; 004e6b5e
        ;   XREF to: 004e6bd1 (CONDITIONAL_JUMP)  ; LAB_004e6bd1
    FLD float ptr [EDX]                 ; 004e6b60
    FADD float ptr [EBP + 0x1c]         ; 004e6b62
    FSTP float ptr [EDX]                ; 004e6b65
        ;   Label: LAB_004e6b65
    FLD float ptr [EDX]                 ; 004e6b67
        ;   Label: LAB_004e6b67
    FMUL double ptr [0x005dc585]        ; 004e6b69 | DAT_005dc585
    FST float ptr [ESP]                 ; 004e6b6f
    FLDZ                                ; 004e6b72
    FCOMPP                              ; 004e6b74
    FNSTSW AX                           ; 004e6b76
    SAHF                                ; 004e6b78
    JNC 0x004e6c2b                      ; 004e6b79
        ;   XREF to: 004e6c2b (CONDITIONAL_JUMP)  ; LAB_004e6c2b
    MOV ECX,dword ptr [ESI]             ; 004e6b7f
    PUSH ECX                            ; 004e6b81
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004e6b82
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004e6b87
    TEST EAX,EAX                        ; 004e6b8a
    JZ 0x004e6bdd                       ; 004e6b8c
        ;   XREF to: 004e6bdd (CONDITIONAL_JUMP)  ; LAB_004e6bdd
    SUB ESP,0x8                         ; 004e6b8e
    FLD float ptr [EBX + 0x8]           ; 004e6b91
    FSTP double ptr [ESP]               ; 004e6b94
    SUB ESP,0x8                         ; 004e6b97
    FLD float ptr [EBX + 0x4]           ; 004e6b9a
    FSTP double ptr [ESP]               ; 004e6b9d
    SUB ESP,0x8                         ; 004e6ba0
    FLD float ptr [EBX]                 ; 004e6ba3
    FSTP double ptr [ESP]               ; 004e6ba5
    MOV EAX,dword ptr [ESI]             ; 004e6ba8
    PUSH EAX                            ; 004e6baa
    CALL sound_sndmain.cpp_FUN_00550d30 ; 004e6bab
        ;   XREF to: 00550d30 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00550d30()
    ADD ESP,0x1c                        ; 004e6bb0
    MOV EDX,dword ptr [ESI]             ; 004e6bb3
    PUSH dword ptr [ESP]                ; 004e6bb5
    PUSH EDX                            ; 004e6bb8
    CALL sound_sndmain.cpp_FUN_00550f20 ; 004e6bb9
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00550f20()
    ADD ESP,0x8                         ; 004e6bbe
    MOV EAX,EDI                         ; 004e6bc1
    MOV ESP,EBP                         ; 004e6bc3
    POP EBP                             ; 004e6bc5
    POP EDI                             ; 004e6bc6
    POP ESI                             ; 004e6bc7
    POP EBX                             ; 004e6bc8
    RET                                 ; 004e6bc9
    FLD float ptr [EDX]                 ; 004e6bca
        ;   Label: LAB_004e6bca
    FSUB float ptr [EBP + 0x1c]         ; 004e6bcc
    JMP 0x004e6b65                      ; 004e6bcf
        ;   XREF to: 004e6b65 (UNCONDITIONAL_JUMP)  ; LAB_004e6b65
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e6bd1
        ;   Label: LAB_004e6bd1
    MOV EDI,0x1                         ; 004e6bd4
    MOV dword ptr [EDX],EAX             ; 004e6bd9
    JMP 0x004e6b67                      ; 004e6bdb
        ;   XREF to: 004e6b67 (UNCONDITIONAL_JUMP)  ; LAB_004e6b67
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 004e6bdd
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_004e6bdd
    PUSH dword ptr [ESP]                ; 004e6be2
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 004e6be5
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 004e6bea
    SUB ESP,0x8                         ; 004e6bed
    FLD float ptr [EBX + 0x8]           ; 004e6bf0
    FSTP double ptr [ESP]               ; 004e6bf3
    SUB ESP,0x8                         ; 004e6bf6
    FLD float ptr [EBX + 0x4]           ; 004e6bf9
    FSTP double ptr [ESP]               ; 004e6bfc
    SUB ESP,0x8                         ; 004e6bff
    FLD float ptr [EBX]                 ; 004e6c02
    FSTP double ptr [ESP]               ; 004e6c04
    CALL sound_sndmain.cpp_FUN_00550110 ; 004e6c07
        ;   XREF to: 00550110 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550110(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004e6c0c
    MOV EBX,dword ptr [EBP + 0x24]      ; 004e6c0f
    PUSH EBX                            ; 004e6c12
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004e6c13
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004e6c18
    MOV dword ptr [ESI],EAX             ; 004e6c1b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004e6c1d
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,EDI                         ; 004e6c22
    MOV ESP,EBP                         ; 004e6c24
    POP EBP                             ; 004e6c26
    POP EDI                             ; 004e6c27
    POP ESI                             ; 004e6c28
    POP EBX                             ; 004e6c29
    RET                                 ; 004e6c2a
    MOV EDX,dword ptr [ESI]             ; 004e6c2b
        ;   Label: LAB_004e6c2b
    PUSH EDX                            ; 004e6c2d
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004e6c2e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004e6c33
    MOV EAX,EDI                         ; 004e6c36
    MOV ESP,EBP                         ; 004e6c38
    POP EBP                             ; 004e6c3a
    POP EDI                             ; 004e6c3b
    POP ESI                             ; 004e6c3c
    POP EBX                             ; 004e6c3d
    RET                                 ; 004e6c3e

