; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a7262
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0065016e
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00650183
;   double DOUBLE_00663140 = 1116.40000000000
;   int g_AudioChannelCount = 0x2
;   int g_AudioSampleRate = 0x5622
;   double g_Cached3DDistanceFactor = 1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6df0
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
    PUSH ESI                            ; 005a6df1
    PUSH EDI                            ; 005a6df2
    PUSH EBP                            ; 005a6df3
    MOV EBP,ESP                         ; 005a6df4
    SUB ESP,0xc                         ; 005a6df6
    AND ESP,0xfffffff8                  ; 005a6df9
    MOV ESI,dword ptr [0x00681b18]      ; 005a6dfc | g_AudioChannelCount
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a6e02
    CMP dword ptr [0x03f6940c],0x0      ; 005a6e05 | g_SoundLockCount
    JLE 0x005a6e4d                      ; 005a6e0c
        ;   XREF to: 005a6e4d (CONDITIONAL_JUMP)  ; LAB_005a6e4d
    MOV ESI,dword ptr [0x00681b18]      ; 005a6e0e | g_AudioChannelCount
        ;   Label: LAB_005a6e0e
    CMP ESI,0x2                         ; 005a6e14
    JL 0x005a6e72                       ; 005a6e17
        ;   XREF to: 005a6e72 (CONDITIONAL_JUMP)  ; LAB_005a6e72
    TEST byte ptr [EDI + 0x5c],0x1      ; 005a6e19
    JZ 0x005a6e7e                       ; 005a6e1d
        ;   XREF to: 005a6e7e (CONDITIONAL_JUMP)  ; LAB_005a6e7e
    XOR EDX,EDX                         ; 005a6e1f
    TEST ESI,ESI                        ; 005a6e21
    JLE 0x005a6e40                      ; 005a6e23
        ;   XREF to: 005a6e40 (CONDITIONAL_JUMP)  ; LAB_005a6e40
    MOV EAX,EDI                         ; 005a6e25
    ADD EAX,0x4                         ; 005a6e27
        ;   Label: LAB_005a6e27
    INC EDX                             ; 005a6e2a
    MOV dword ptr [EAX + 0xbc],0x0      ; 005a6e2b
    CMP EDX,ESI                         ; 005a6e35
    JL 0x005a6e27                       ; 005a6e37
        ;   XREF to: 005a6e27 (CONDITIONAL_JUMP)  ; LAB_005a6e27
    LEA EAX,[EAX]                       ; 005a6e39
    NOP                                 ; 005a6e3f
    MOV dword ptr [0x00681b18],ESI      ; 005a6e40 | g_AudioChannelCount
        ;   Label: LAB_005a6e40
    MOV ESP,EBP                         ; 005a6e46
    POP EBP                             ; 005a6e48
    POP EDI                             ; 005a6e49
    POP ESI                             ; 005a6e4a
    POP EBX                             ; 005a6e4b
    RET                                 ; 005a6e4c
    MOV ECX,0x65016e                    ; 005a6e4d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a6e4d
    MOV EBX,0x8f5                       ; 005a6e52
    PUSH 0x650183                       ; 005a6e57 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a6e5c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a6e62 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6e68
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6e6d
    JMP 0x005a6e0e                      ; 005a6e70
        ;   XREF to: 005a6e0e (UNCONDITIONAL_JUMP)  ; LAB_005a6e0e
    MOV dword ptr [EDI + 0xc0],0x0      ; 005a6e72
        ;   Label: LAB_005a6e72
    JMP 0x005a6e40                      ; 005a6e7c
        ;   XREF to: 005a6e40 (UNCONDITIONAL_JUMP)  ; LAB_005a6e40
    FLD double ptr [0x00681b30]         ; 005a6e7e | g_Cached3DDistanceFactor
        ;   Label: LAB_005a6e7e
    FDIV double ptr [0x00663140]        ; 005a6e84 | DOUBLE_00663140
    FILD dword ptr [0x00681b1c]         ; 005a6e8a | g_AudioSampleRate
    FMULP                               ; 005a6e90
    MOV EBX,0x1869f                     ; 005a6e92
    XOR ECX,ECX                         ; 005a6e97
    FSTP double ptr [ESP]               ; 005a6e99
    TEST ESI,ESI                        ; 005a6e9c
    JLE 0x005a6ecc                      ; 005a6e9e
        ;   XREF to: 005a6ecc (CONDITIONAL_JUMP)  ; LAB_005a6ecc
    MOV EDX,EDI                         ; 005a6ea0
    FLD float ptr [EDX + 0x80]          ; 005a6ea2
        ;   Label: LAB_005a6ea2
    FMUL double ptr [ESP]               ; 005a6ea8
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a6eab
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 005a6eb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a6eb4
    MOV dword ptr [EDX + 0xc0],EAX      ; 005a6eb8
    CMP EBX,EAX                         ; 005a6ebe
    JLE 0x005a6ec4                      ; 005a6ec0
        ;   XREF to: 005a6ec4 (CONDITIONAL_JUMP)  ; LAB_005a6ec4
    MOV EBX,EAX                         ; 005a6ec2
    INC ECX                             ; 005a6ec4
        ;   Label: LAB_005a6ec4
    ADD EDX,0x4                         ; 005a6ec5
    CMP ECX,ESI                         ; 005a6ec8
    JL 0x005a6ea2                       ; 005a6eca
        ;   XREF to: 005a6ea2 (CONDITIONAL_JUMP)  ; LAB_005a6ea2
    XOR EDX,EDX                         ; 005a6ecc
        ;   Label: LAB_005a6ecc
    TEST ESI,ESI                        ; 005a6ece
    JLE 0x005a6e40                      ; 005a6ed0
        ;   XREF to: 005a6e40 (CONDITIONAL_JUMP)  ; LAB_005a6e40
    MOV EAX,EDI                         ; 005a6ed6
    MOV ECX,dword ptr [EAX + 0xc0]      ; 005a6ed8
        ;   Label: LAB_005a6ed8
    ADD EAX,0x4                         ; 005a6ede
    SUB ECX,EBX                         ; 005a6ee1
    INC EDX                             ; 005a6ee3
    MOV dword ptr [EAX + 0xbc],ECX      ; 005a6ee4
    CMP EDX,ESI                         ; 005a6eea
    JL 0x005a6ed8                       ; 005a6eec
        ;   XREF to: 005a6ed8 (CONDITIONAL_JUMP)  ; LAB_005a6ed8
    MOV dword ptr [0x00681b18],ESI      ; 005a6eee | g_AudioChannelCount
    MOV ESP,EBP                         ; 005a6ef4
    POP EBP                             ; 005a6ef6
    POP EDI                             ; 005a6ef7
    POP ESI                             ; 005a6ef8
    POP EBX                             ; 005a6ef9
    RET                                 ; 005a6efa

