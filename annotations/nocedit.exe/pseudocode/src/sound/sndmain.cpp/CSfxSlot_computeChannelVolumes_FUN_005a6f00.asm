; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
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
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a7293
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006501a3
;   TerminatedCString s_SfxSlot_kill_must_be_loc_006501b8
;   double DOUBLE_006501df = 0.0500000000000000
;   int g_AudioChannelCount = 0x2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6f00
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
    PUSH ESI                            ; 005a6f01
    PUSH EDI                            ; 005a6f02
    PUSH EBP                            ; 005a6f03
    MOV EBP,ESP                         ; 005a6f04
    SUB ESP,0x20                        ; 005a6f06
    AND ESP,0xfffffff8                  ; 005a6f09
    MOV ESI,dword ptr [0x00681b18]      ; 005a6f0c | g_AudioChannelCount
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a6f12
    CMP dword ptr [0x03f6940c],0x0      ; 005a6f15 | g_SoundLockCount
    JLE 0x005a6f9d                      ; 005a6f1c
        ;   XREF to: 005a6f9d (CONDITIONAL_JUMP)  ; LAB_005a6f9d
    MOV ECX,dword ptr [EBX + 0x78]      ; 005a6f22
        ;   Label: LAB_005a6f22
    MOV ECX,dword ptr [ECX + 0x104]     ; 005a6f25
    MOV EDX,0x1                         ; 005a6f2b
    DEC ECX                             ; 005a6f30
    SHL EDX,CL                          ; 005a6f31
    MOV EAX,dword ptr [EBX]             ; 005a6f33
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a6f35
    PUSH EAX                            ; 005a6f39
    FILD dword ptr [ESP + 0x20]         ; 005a6f3a
    FSTP float ptr [ESP + 0xc]          ; 005a6f3e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005a6f42
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0x20],EAX      ; 005a6f47
    FLD float ptr [ESP + 0x20]          ; 005a6f4b
    FMUL float ptr [EBX + 0x44]         ; 005a6f4f
    ADD ESP,0x4                         ; 005a6f52
    FDIV float ptr [ESP + 0x8]          ; 005a6f55
    MOV AH,byte ptr [EBX + 0x5c]        ; 005a6f59
    FSTP float ptr [ESP + 0xc]          ; 005a6f5c
    TEST AH,0x1                         ; 005a6f60
    JZ 0x005a6fc5                       ; 005a6f63
        ;   XREF to: 005a6fc5 (CONDITIONAL_JUMP)  ; LAB_005a6fc5
    MOV ESI,dword ptr [0x00681b18]      ; 005a6f65 | g_AudioChannelCount
    XOR EDX,EDX                         ; 005a6f6b
    TEST ESI,ESI                        ; 005a6f6d
    JLE 0x005a6f90                      ; 005a6f6f
        ;   XREF to: 005a6f90 (CONDITIONAL_JUMP)  ; LAB_005a6f90
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a6f71
    ADD EBX,0x4                         ; 005a6f75
        ;   Label: LAB_005a6f75
    INC EDX                             ; 005a6f78
    MOV dword ptr [EBX + 0x9c],EAX      ; 005a6f79
    CMP EDX,ESI                         ; 005a6f7f
    JL 0x005a6f75                       ; 005a6f81
        ;   XREF to: 005a6f75 (CONDITIONAL_JUMP)  ; LAB_005a6f75
    LEA EAX,[EAX]                       ; 005a6f83
    LEA EDX,[EDX]                       ; 005a6f89
    NOP                                 ; 005a6f8f
    MOV dword ptr [0x00681b18],ESI      ; 005a6f90 | g_AudioChannelCount
        ;   Label: LAB_005a6f90
    MOV ESP,EBP                         ; 005a6f96
    POP EBP                             ; 005a6f98
    POP EDI                             ; 005a6f99
    POP ESI                             ; 005a6f9a
    POP EBX                             ; 005a6f9b
    RET                                 ; 005a6f9c
    MOV ECX,0x6501a3                    ; 005a6f9d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a6f9d
    MOV EDI,0x924                       ; 005a6fa2
    PUSH 0x6501b8                       ; 005a6fa7 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a6fac | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a6fb2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6fb8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6fbd
    JMP 0x005a6f22                      ; 005a6fc0
        ;   XREF to: 005a6f22 (UNCONDITIONAL_JUMP)  ; LAB_005a6f22
    MOV ESI,dword ptr [0x00681b18]      ; 005a6fc5 | g_AudioChannelCount
        ;   Label: LAB_005a6fc5
    XOR ECX,ECX                         ; 005a6fcb
    TEST ESI,ESI                        ; 005a6fcd
    JLE 0x005a6f90                      ; 005a6fcf
        ;   XREF to: 005a6f90 (CONDITIONAL_JUMP)  ; LAB_005a6f90
    MOV EDI,0x41a00000                  ; 005a6fd1
    MOV EDX,EBX                         ; 005a6fd6
    MOV EAX,dword ptr [EDX + 0x80]      ; 005a6fd8
        ;   Label: LAB_005a6fd8
    MOV dword ptr [ESP],EAX             ; 005a6fde
    MOV EAX,dword ptr [EBX + 0x100]     ; 005a6fe1
    MOV dword ptr [ESP + 0x4],EAX       ; 005a6fe7
    MOV EAX,dword ptr [EBX + 0x104]     ; 005a6feb
    MOV dword ptr [ESP + 0x18],EAX      ; 005a6ff1
    MOV EAX,dword ptr [EBX + 0x108]     ; 005a6ff5
    FLD float ptr [ESP]                 ; 005a6ffb
    MOV dword ptr [ESP + 0x14],EAX      ; 005a6ffe
    FCOMP float ptr [ESP + 0x18]        ; 005a7002
    FNSTSW AX                           ; 005a7006
    SAHF                                ; 005a7008
    JC 0x005a7052                       ; 005a7009
        ;   XREF to: 005a7052 (CONDITIONAL_JUMP)  ; LAB_005a7052
    FLD float ptr [ESP]                 ; 005a700b
        ;   Label: LAB_005a700b
    FCOMP float ptr [ESP + 0x14]        ; 005a700e
    FNSTSW AX                           ; 005a7012
    SAHF                                ; 005a7014
    JBE 0x005a701e                      ; 005a7015
        ;   XREF to: 005a701e (CONDITIONAL_JUMP)  ; LAB_005a701e
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a7017
    MOV dword ptr [ESP],EAX             ; 005a701b
    FLD float ptr [ESP + 0x4]           ; 005a701e
        ;   Label: LAB_005a701e
    FMUL double ptr [0x006501df]        ; 005a7022 | DOUBLE_006501df
    FLD float ptr [ESP]                 ; 005a7028
    FCOMPP                              ; 005a702b
    FNSTSW AX                           ; 005a702d
    SAHF                                ; 005a702f
    JA 0x005a705b                       ; 005a7030
        ;   XREF to: 005a705b (CONDITIONAL_JUMP)  ; LAB_005a705b
    MOV dword ptr [ESP + 0x10],EDI      ; 005a7032
    FLD float ptr [ESP + 0xc]           ; 005a7036
        ;   Label: LAB_005a7036
    FMUL float ptr [ESP + 0x10]         ; 005a703a
    ADD EDX,0x4                         ; 005a703e
    INC ECX                             ; 005a7041
    FSTP float ptr [EDX + 0x9c]         ; 005a7042
    CMP ECX,ESI                         ; 005a7048
    JGE 0x005a6f90                      ; 005a704a
        ;   XREF to: 005a6f90 (CONDITIONAL_JUMP)  ; LAB_005a6f90
    JMP 0x005a6fd8                      ; 005a7050
        ;   XREF to: 005a6fd8 (UNCONDITIONAL_JUMP)  ; LAB_005a6fd8
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a7052
        ;   Label: LAB_005a7052
    MOV dword ptr [ESP],EAX             ; 005a7056
    JMP 0x005a700b                      ; 005a7059
        ;   XREF to: 005a700b (UNCONDITIONAL_JUMP)  ; LAB_005a700b
    FLD float ptr [ESP + 0x4]           ; 005a705b
        ;   Label: LAB_005a705b
    FDIV float ptr [ESP]                ; 005a705f
    FSTP float ptr [ESP + 0x10]         ; 005a7062
    JMP 0x005a7036                      ; 005a7066
        ;   XREF to: 005a7036 (UNCONDITIONAL_JUMP)  ; LAB_005a7036

