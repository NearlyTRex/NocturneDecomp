; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_setSfxIsActive_FUN_005a9c10(uint sfx_handle,int active)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   active
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a9c10
        ;   Label: sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9c12
    PUSH EDX                            ; 005a9c16
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9c17
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9c1c
    TEST EAX,EAX                        ; 005a9c1f
    JNZ 0x005a9c24                      ; 005a9c21
        ;   XREF to: 005a9c24 (CONDITIONAL_JUMP)  ; LAB_005a9c24
    RET                                 ; 005a9c23
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9c24
        ;   Label: LAB_005a9c24
    MOV dword ptr [EAX + 0x118],EDX     ; 005a9c28
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9c2e
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005a9c33
    RET                                 ; 005a9c38

