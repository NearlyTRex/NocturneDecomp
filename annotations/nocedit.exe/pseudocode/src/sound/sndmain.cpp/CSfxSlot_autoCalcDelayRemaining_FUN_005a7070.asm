; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a741d
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006501e7
;   TerminatedCString s_SfxSlot_autoCalcDelayRem_006501fc
;   double DOUBLE_00663140 = 1116.40000000000
;   double g_Cached3DDistanceFactor = 1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CVector3d g_Cached3DListenerPos
;   undefined4 g_Cached3DListenerPos.y
;   undefined4 g_Cached3DListenerPos.z
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7070
        ;   Label: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
    SUB ESP,0x18                        ; 005a7071
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a7074
    CMP dword ptr [0x03f6940c],0x0      ; 005a7078 | g_SoundLockCount
    JLE 0x005a709a                      ; 005a707f
        ;   XREF to: 005a709a (CONDITIONAL_JUMP)  ; LAB_005a709a
    TEST byte ptr [EBX + 0x5c],0x1      ; 005a7081
        ;   Label: LAB_005a7081
    JZ 0x005a70c1                       ; 005a7085
        ;   XREF to: 005a70c1 (CONDITIONAL_JUMP)  ; LAB_005a70c1
    MOV dword ptr [EBX + 0x4c],0x0      ; 005a7087
    MOV dword ptr [EBX + 0x50],0x0      ; 005a708e
    ADD ESP,0x18                        ; 005a7095
    POP EBX                             ; 005a7098
    RET                                 ; 005a7099
    PUSH ESI                            ; 005a709a
        ;   Label: LAB_005a709a
    MOV ECX,0x6501e7                    ; 005a709b | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x942                       ; 005a70a0
    PUSH 0x6501fc                       ; 005a70a5 | = "SfxSlot::autoCalcDelayRemaining - mus..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a70aa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a70b0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a70b6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a70bb
    POP ESI                             ; 005a70be
    JMP 0x005a7081                      ; 005a70bf
        ;   XREF to: 005a7081 (UNCONDITIONAL_JUMP)  ; LAB_005a7081
    FLD double ptr [EBX + 0x4]          ; 005a70c1
        ;   Label: LAB_005a70c1
    FSUB double ptr [0x03f68830]        ; 005a70c4 | g_Cached3DListenerPos
    FMUL ST0                            ; 005a70ca
    FLD double ptr [EBX + 0xc]          ; 005a70cc
    FSUB double ptr [0x03f68838]        ; 005a70cf | g_Cached3DListenerPos.y
    FMUL ST0                            ; 005a70d5
    FLD double ptr [EBX + 0x14]         ; 005a70d7
    FXCH                                ; 005a70da
    FADDP ST2,ST0                       ; 005a70dc
    FSUB double ptr [0x03f68840]        ; 005a70de | g_Cached3DListenerPos.z
    FMUL ST0                            ; 005a70e4
    FADDP                               ; 005a70e6
    FSQRT                               ; 005a70e8
    FMUL double ptr [0x00681b30]        ; 005a70ea | g_Cached3DDistanceFactor
    FDIV double ptr [0x00663140]        ; 005a70f0 | DOUBLE_00663140
    FSTP double ptr [EBX + 0x4c]        ; 005a70f6
    ADD ESP,0x18                        ; 005a70f9
    POP EBX                             ; 005a70fc
    RET                                 ; 005a70fd

