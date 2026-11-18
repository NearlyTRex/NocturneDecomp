; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(CSound *this_ptr,int index)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f302
;
; Referenced Globals:
;   TerminatedCString s_core_sound_cpp_005f5b2b
;   TerminatedCString s_CSound_setReverbPreset_i_005f5b3d
;   undefined4 g_ReverbPresetTable[0].reverb.volume
;   undefined4 g_ReverbPresetTable[0].reverb.decay_time
;   undefined4 g_ReverbPresetTable[0].reverb.damping
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   core_sound.cpp_CSound_setReverb_FUN_0057dad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057db00
        ;   Label: core_sound.cpp_CSound_setReverbPreset_FUN_0057db00
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057db01
    TEST EBX,EBX                        ; 0057db05
    JL 0x0057db34                       ; 0057db07
        ;   XREF to: 0057db34 (CONDITIONAL_JUMP)  ; LAB_0057db34
    CMP EBX,0x1b                        ; 0057db09
    JGE 0x0057db34                      ; 0057db0c
        ;   XREF to: 0057db34 (CONDITIONAL_JUMP)  ; LAB_0057db34
    MOV EAX,EBX                         ; 0057db0e
        ;   Label: LAB_0057db0e
    SHL EAX,0x4                         ; 0057db10
    PUSH dword ptr [EAX + 0x6236c8]     ; 0057db13 | g_ReverbPresetTable[0].reverb.damping
    PUSH dword ptr [EAX + 0x6236c4]     ; 0057db19 | g_ReverbPresetTable[0].reverb.decay_time
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057db1f
    PUSH dword ptr [EAX + 0x6236c0]     ; 0057db23 | g_ReverbPresetTable[0].reverb.volume
    PUSH EBX                            ; 0057db29
    CALL core_sound.cpp_CSound_setReverb_FUN_0057dad0 ; 0057db2a
        ;   XREF to: 0057dad0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setReverb_FUN_0057dad0(CSound * this_ptr, float volume, float decay_time, float damping)
    ADD ESP,0x10                        ; 0057db2f
    POP EBX                             ; 0057db32
    RET                                 ; 0057db33
    MOV EDX,0x5f5b2b                    ; 0057db34 | = "..\\core\\sound.cpp"
        ;   Label: LAB_0057db34
    MOV ECX,0x402                       ; 0057db39
    PUSH 0x5f5b3d                       ; 0057db3e | = "CSound::setReverbPreset - invalid index"
    MOV dword ptr [0x01d1d400],EDX      ; 0057db43 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0057db49 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0057db4f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0057db54
    JMP 0x0057db0e                      ; 0057db57
        ;   XREF to: 0057db0e (UNCONDITIONAL_JUMP)  ; LAB_0057db0e

