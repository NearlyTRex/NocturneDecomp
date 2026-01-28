; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0 (float orient_right_x,float orient_right_y,float orient_right_z)
;
; Parameters:
; float            Stack[0x4]:4   orient_right_x
; float            Stack[0x8]:4   orient_right_y
; float            Stack[0xc]:4   orient_right_z
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b38ce
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e2b
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90 at 005b3cb4
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;   CVector3f g_DeferredOrientRight
;   undefined4 g_DeferredOrientRight.y
;   undefined4 g_DeferredOrientRight.z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ab6e0
        ;   Label: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
    MOV [0x03f693e8],EAX                ; 005ab6e4 | g_DeferredOrientRight
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ab6e9
    MOV [0x03f693ec],EAX                ; 005ab6ed | g_DeferredOrientRight.y
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ab6f2
    MOV EDX,dword ptr [0x03f69268]      ; 005ab6f6 | g_CSoundDevicePtr
    MOV [0x03f693f0],EAX                ; 005ab6fc | g_DeferredOrientRight.z
    TEST EDX,EDX                        ; 005ab701
    JNZ 0x005ab706                      ; 005ab703
        ;   XREF to: 005ab706 (CONDITIONAL_JUMP)  ; LAB_005ab706
    RET                                 ; 005ab705
    PUSH dword ptr [ESP + 0xc]          ; 005ab706
        ;   Label: LAB_005ab706
    PUSH dword ptr [ESP + 0xc]          ; 005ab70a
    MOV EAX,EDX                         ; 005ab70e
    PUSH dword ptr [ESP + 0xc]          ; 005ab710
    MOV EDX,dword ptr [EDX]             ; 005ab714
    PUSH EAX                            ; 005ab716
    CALL dword ptr [EDX + 0x28]         ; 005ab717
    ADD ESP,0x10                        ; 005ab71a
    RET                                 ; 005ab71d

