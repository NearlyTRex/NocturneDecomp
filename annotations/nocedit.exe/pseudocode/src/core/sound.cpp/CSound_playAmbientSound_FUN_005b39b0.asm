; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(CSound *this_ptr,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055ea8d
;   core_script.cpp_FUN_0055a540 at 0055a673
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   char[40] g_SoundAmbientSoundName
;   undefined4 DAT_03f6b781
;   undefined4 DAT_03f6b782
;   undefined4 DAT_03f6b783
;   int g_SoundAmbientSfxHandle
;   int g_SoundAudioInitialized
;
; Called Functions:
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b39b0
        ;   Label: core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0
    PUSH EDI                            ; 005b39b1
    MOV EDX,dword ptr [0x03f6b7a8]      ; 005b39b2 | g_SoundAmbientSfxHandle
    PUSH EDX                            ; 005b39b8
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b39b9
    PUSH ECX                            ; 005b39bd
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 005b39be
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b39c3
    MOV EDI,0x3f6b780                   ; 005b39c6 | g_SoundAmbientSoundName
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b39cb
    PUSH EDI                            ; 005b39cf | g_SoundAmbientSoundName
    MOV AL,byte ptr [ESI]               ; 005b39d0
        ;   Label: LAB_005b39d0
    MOV byte ptr [EDI],AL               ; 005b39d2 | g_SoundAmbientSoundName | DAT_03f6b782
    CMP AL,0x0                          ; 005b39d4
    JZ 0x005b39e8                       ; 005b39d6
        ;   XREF to: 005b39e8 (CONDITIONAL_JUMP)  ; LAB_005b39e8
    MOV AL,byte ptr [ESI + 0x1]         ; 005b39d8
    ADD ESI,0x2                         ; 005b39db
    MOV byte ptr [EDI + 0x1],AL         ; 005b39de | DAT_03f6b781 | DAT_03f6b783
    ADD EDI,0x2                         ; 005b39e1
    CMP AL,0x0                          ; 005b39e4
    JNZ 0x005b39d0                      ; 005b39e6
        ;   XREF to: 005b39d0 (CONDITIONAL_JUMP)  ; LAB_005b39d0
    POP EDI                             ; 005b39e8
        ;   Label: LAB_005b39e8
    CMP dword ptr [0x03f6b7ac],0x0      ; 005b39e9 | g_SoundAudioInitialized
    JNZ 0x005b39f5                      ; 005b39f0
        ;   XREF to: 005b39f5 (CONDITIONAL_JUMP)  ; LAB_005b39f5
    POP EDI                             ; 005b39f2
    POP ESI                             ; 005b39f3
    RET                                 ; 005b39f4
    PUSH EDI                            ; 005b39f5 | g_SoundAmbientSoundName
        ;   Label: LAB_005b39f5
    MOV ESI,dword ptr [0x006810c8]      ; 005b39f6 | g_CDemonSetPtr
    PUSH ESI                            ; 005b39fc | g_CDemonSetInstance
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b39fd
    PUSH EDI                            ; 005b3a01
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005b3a02
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005b3a07
    MOV [0x03f6b7a8],EAX                ; 005b3a0a | g_SoundAmbientSfxHandle
    POP EDI                             ; 005b3a0f
    POP ESI                             ; 005b3a10
    RET                                 ; 005b3a11

