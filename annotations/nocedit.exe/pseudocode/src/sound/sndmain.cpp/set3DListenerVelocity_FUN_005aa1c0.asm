; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(double x_velocity,double y_velocity,double z_velocity)
;
; Parameters:
; double           Stack[0x4]:8   x_velocity
; double           Stack[0xc]:8   y_velocity
; double           Stack[0x14]:8   z_velocity
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b392b
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e05
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae86
;
; Referenced Globals:
;   CVector3d g_Cached3DListenerVelocity
;   undefined4 g_Cached3DListenerVelocity.x+4
;   undefined4 g_Cached3DListenerVelocity.y
;   undefined4 g_Cached3DListenerVelocity.y+4
;   undefined4 g_Cached3DListenerVelocity.z
;   undefined4 g_Cached3DListenerVelocity.z+4
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aa1c0
        ;   Label: sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa1c1
    MOV [0x03f68848],EAX                ; 005aa1c5 | g_Cached3DListenerVelocity
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa1ca
    MOV [0x03f6884c],EAX                ; 005aa1ce | g_Cached3DListenerVelocity.x+4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aa1d3
    MOV [0x03f68850],EAX                ; 005aa1d7 | g_Cached3DListenerVelocity.y
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa1dc
    MOV [0x03f68854],EAX                ; 005aa1e0 | g_Cached3DListenerVelocity.y+4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa1e5
    MOV [0x03f68858],EAX                ; 005aa1e9 | g_Cached3DListenerVelocity.z
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005aa1ee
    MOV EDX,dword ptr [0x03f69268]      ; 005aa1f2 | g_CSoundDevicePtr
    MOV [0x03f6885c],EAX                ; 005aa1f8 | g_Cached3DListenerVelocity.z+4
    TEST EDX,EDX                        ; 005aa1fd
    JNZ 0x005aa203                      ; 005aa1ff
        ;   XREF to: 005aa203 (CONDITIONAL_JUMP)  ; LAB_005aa203
    POP EBP                             ; 005aa201
    RET                                 ; 005aa202
    PUSH EDI                            ; 005aa203
        ;   Label: LAB_005aa203
    PUSH ESI                            ; 005aa204
    PUSH EBX                            ; 005aa205
    MOV ECX,dword ptr [ESP + 0x28]      ; 005aa206
    PUSH ECX                            ; 005aa20a
    MOV EBX,dword ptr [ESP + 0x28]      ; 005aa20b
    PUSH EBX                            ; 005aa20f
    MOV ESI,dword ptr [ESP + 0x28]      ; 005aa210
    PUSH ESI                            ; 005aa214
    MOV EDI,dword ptr [ESP + 0x28]      ; 005aa215
    PUSH EDI                            ; 005aa219
    MOV EBP,dword ptr [ESP + 0x28]      ; 005aa21a
    PUSH EBP                            ; 005aa21e
    MOV ECX,dword ptr [ESP + 0x28]      ; 005aa21f
    PUSH ECX                            ; 005aa223
    MOV EAX,EDX                         ; 005aa224
    MOV EDX,dword ptr [EDX]             ; 005aa226
    PUSH EAX                            ; 005aa228
    CALL dword ptr [EDX + 0x20]         ; 005aa229
    ADD ESP,0x1c                        ; 005aa22c
    POP EBX                             ; 005aa22f
    POP ESI                             ; 005aa230
    POP EDI                             ; 005aa231
    POP EBP                             ; 005aa232
    RET                                 ; 005aa233

