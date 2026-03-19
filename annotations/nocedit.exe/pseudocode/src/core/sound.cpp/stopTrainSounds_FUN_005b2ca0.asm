; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)
;
;
; Referenced Globals:
;   undefined4 g_TrainNoiseArray[0].sfx_handle
;   undefined4 g_TrainNoiseArray[1].sfx_handle
;   uint g_TrainRailNoiseHandle
;   uint g_TrainExteriorAmbientHandle
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2ca0
        ;   Label: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
    XOR EBX,EBX                         ; 005b2ca1
    MOV EDX,dword ptr [EBX + 0x3f6b7c8] ; 005b2ca3 | g_TrainNoiseArray[0].sfx_handle | g_TrainNoiseArray[1].sfx_handle
        ;   Label: LAB_005b2ca3
    PUSH EDX                            ; 005b2ca9
    ADD EBX,0x10                        ; 005b2caa
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2cad
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2cb2
    CMP EBX,0xa0                        ; 005b2cb5
    JNZ 0x005b2ca3                      ; 005b2cbb
        ;   XREF to: 005b2ca3 (CONDITIONAL_JUMP)  ; LAB_005b2ca3
    MOV ECX,dword ptr [0x03f6b870]      ; 005b2cbd | g_TrainRailNoiseHandle
    PUSH ECX                            ; 005b2cc3
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2cc4
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2cc9
    MOV EBX,dword ptr [0x03f6b874]      ; 005b2ccc | g_TrainExteriorAmbientHandle
    PUSH EBX                            ; 005b2cd2
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2cd3
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2cd8
    POP EBX                             ; 005b2cdb
    RET                                 ; 005b2cdc

