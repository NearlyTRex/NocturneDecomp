; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamegun.cpp_FUN_004cb9b0()
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_fl_throw_wav_0062a39b
;   undefined4 DAT_0065e270
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb9b0
        ;   Label: core_flamegun.cpp_FUN_004cb9b0
    PUSH EDI                            ; 004cb9b1
    PUSH EBP                            ; 004cb9b2
    MOV EBP,ESP                         ; 004cb9b3
    SUB ESP,0x8                         ; 004cb9b5
    AND ESP,0xfffffff8                  ; 004cb9b8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004cb9bb
    PUSH dword ptr [EBP + 0x14]         ; 004cb9be
    PUSH EBX                            ; 004cb9c1
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 004cb9c2 | void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr)
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x578]     ; 004cb9c7
    ADD ESP,0x8                         ; 004cb9cd
    TEST EDX,EDX                        ; 004cb9d0
    JNZ 0x004cb9fe                      ; 004cb9d2 | LAB_004cb9fe
        ;   XREF to: 004cb9fe (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x57c]     ; 004cb9d4
    TEST ECX,ECX                        ; 004cb9da
    JNZ 0x004cba83                      ; 004cb9dc | LAB_004cba83
        ;   XREF to: 004cba83 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x578]     ; 004cb9e2
        ;   Label: LAB_004cb9e2
    MOV dword ptr [EBX + 0x578],0x0     ; 004cb9e8
    MOV dword ptr [EBX + 0x580],EAX     ; 004cb9f2
    MOV ESP,EBP                         ; 004cb9f8
    POP EBP                             ; 004cb9fa
    POP EDI                             ; 004cb9fb
    POP EBX                             ; 004cb9fc
    RET                                 ; 004cb9fd
    MOV EAX,dword ptr [EBX + 0x57c]     ; 004cb9fe
        ;   Label: LAB_004cb9fe
    PUSH EAX                            ; 004cba04
    MOV EDX,dword ptr [0x00681ef8]      ; 004cba05 | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EDX                            ; 004cba0b | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 004cba0c | void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cba11
    TEST EAX,EAX                        ; 004cba14
    JZ 0x004cba69                       ; 004cba16 | LAB_004cba69
        ;   XREF to: 004cba69 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x584]         ; 004cba18
        ;   Label: LAB_004cba18
    FSUB float ptr [EBP + 0x14]         ; 004cba1e
    FLDZ                                ; 004cba21
    FXCH                                ; 004cba23
    FST float ptr [EBX + 0x584]         ; 004cba25
    FSTP double ptr [ESP]               ; 004cba2b
    FCOMP double ptr [ESP]              ; 004cba2e
    FNSTSW AX                           ; 004cba31
    SAHF                                ; 004cba33
    JBE 0x004cb9e2                      ; 004cba34 | LAB_004cb9e2
        ;   XREF to: 004cb9e2 (CONDITIONAL_JUMP)
    FLD float ptr [0x0065e270]          ; 004cba36 | DAT_0065e270
    FLD1                                ; 004cba3c
    FDIVRP                              ; 004cba3e
    MOV ECX,dword ptr [EBX + 0x568]     ; 004cba40
    DEC ECX                             ; 004cba46
    FADD double ptr [ESP]               ; 004cba47
    MOV dword ptr [EBX + 0x568],ECX     ; 004cba4a
    FSTP float ptr [EBX + 0x584]        ; 004cba50
    TEST ECX,ECX                        ; 004cba56
    JGE 0x004cb9e2                      ; 004cba58 | LAB_004cb9e2
        ;   XREF to: 004cb9e2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x568],0x0     ; 004cba5a
    JMP 0x004cb9e2                      ; 004cba64 | LAB_004cb9e2
        ;   XREF to: 004cb9e2 (UNCONDITIONAL_JUMP)
    PUSH 0x62a39b                       ; 004cba69 | = "fl-throw.wav" | s_fl_throw_wav_0062a39b = fl-throw.wav
        ;   Label: LAB_004cba69
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cba6e
    PUSH EBX                            ; 004cba74
    CALL dword ptr [EAX + 0x24]         ; 004cba75
    ADD ESP,0x8                         ; 004cba78
    MOV dword ptr [EBX + 0x57c],EAX     ; 004cba7b
    JMP 0x004cba18                      ; 004cba81 | LAB_004cba18
        ;   XREF to: 004cba18 (UNCONDITIONAL_JUMP)
    PUSH ECX                            ; 004cba83
        ;   Label: LAB_004cba83
    MOV EDI,dword ptr [0x00681ef8]      ; 004cba84 | CSound * g_CSoundPtr
    PUSH EDI                            ; 004cba8a | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 004cba8b | void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cba90
    MOV dword ptr [EBX + 0x57c],0x0     ; 004cba93
    JMP 0x004cb9e2                      ; 004cba9d | LAB_004cb9e2
        ;   XREF to: 004cb9e2 (UNCONDITIONAL_JUMP)

