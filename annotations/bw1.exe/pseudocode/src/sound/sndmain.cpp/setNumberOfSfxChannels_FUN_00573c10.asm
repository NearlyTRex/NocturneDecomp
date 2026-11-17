; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00573c10(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0057cb10 at 0057cb1d
;
; Referenced Globals:
;   int g_INT_006232e4 = 0x20
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x20      ; 00573c10
        ;   Label: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00573c10
    JG 0x00573c21                       ; 00573c15
        ;   XREF to: 00573c21 (CONDITIONAL_JUMP)  ; LAB_00573c21
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573c17
    MOV [0x006232e4],EAX                ; 00573c1b | g_INT_006232e4
    RET                                 ; 00573c20
    PUSH EBX                            ; 00573c21
        ;   Label: LAB_00573c21
    MOV ECX,0x5f3ff5                    ; 00573c22
    MOV EBX,0x111f                      ; 00573c27
    PUSH 0x5f400a                       ; 00573c2c
    MOV dword ptr [0x01d1d400],ECX      ; 00573c31 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00573c37 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00573c3d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00573c42
    POP EBX                             ; 00573c45
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573c46
    MOV [0x006232e4],EAX                ; 00573c4a | g_INT_006232e4
    RET                                 ; 00573c4f

