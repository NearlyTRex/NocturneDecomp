; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(double pos_x,double pos_y,double pos_z)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
;
; XREF[5]:
;   core_setedit.cpp_CDemonSet_FUN_00580730 at 00580f97
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b38e2
;   core_sound.cpp_updateListeners_FUN_005b1870 at 005b19ab
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae3d
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad416
;
; Referenced Globals:
;   CVector3d g_Cached3DListenerPos
;   undefined4 g_Cached3DListenerPos.x+4
;   undefined4 g_Cached3DListenerPos.y
;   undefined4 g_Cached3DListenerPos.y+4
;   undefined4 g_Cached3DListenerPos.z
;   undefined4 g_Cached3DListenerPos.z+4
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aa020
        ;   Label: sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa021
    MOV [0x03f68830],EAX                ; 005aa025 | g_Cached3DListenerPos
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa02a
    MOV [0x03f68834],EAX                ; 005aa02e | g_Cached3DListenerPos.x+4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aa033
    MOV [0x03f68838],EAX                ; 005aa037 | g_Cached3DListenerPos.y
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa03c
    MOV [0x03f6883c],EAX                ; 005aa040 | g_Cached3DListenerPos.y+4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa045
    MOV [0x03f68840],EAX                ; 005aa049 | g_Cached3DListenerPos.z
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005aa04e
    MOV EDX,dword ptr [0x03f69268]      ; 005aa052 | g_CSoundDevicePtr
    MOV [0x03f68844],EAX                ; 005aa058 | g_Cached3DListenerPos.z+4
    TEST EDX,EDX                        ; 005aa05d
    JNZ 0x005aa063                      ; 005aa05f
        ;   XREF to: 005aa063 (CONDITIONAL_JUMP)  ; LAB_005aa063
    POP EBP                             ; 005aa061
    RET                                 ; 005aa062
    PUSH EDI                            ; 005aa063
        ;   Label: LAB_005aa063
    PUSH ESI                            ; 005aa064
    PUSH EBX                            ; 005aa065
    MOV ECX,dword ptr [ESP + 0x28]      ; 005aa066
    PUSH ECX                            ; 005aa06a
    MOV EBX,dword ptr [ESP + 0x28]      ; 005aa06b
    PUSH EBX                            ; 005aa06f
    MOV ESI,dword ptr [ESP + 0x28]      ; 005aa070
    PUSH ESI                            ; 005aa074
    MOV EDI,dword ptr [ESP + 0x28]      ; 005aa075
    PUSH EDI                            ; 005aa079
    MOV EBP,dword ptr [ESP + 0x28]      ; 005aa07a
    PUSH EBP                            ; 005aa07e
    MOV ECX,dword ptr [ESP + 0x28]      ; 005aa07f
    PUSH ECX                            ; 005aa083
    MOV EAX,EDX                         ; 005aa084
    MOV EDX,dword ptr [EDX]             ; 005aa086
    PUSH EAX                            ; 005aa088
    CALL dword ptr [EDX + 0x18]         ; 005aa089
    ADD ESP,0x1c                        ; 005aa08c
    POP EBX                             ; 005aa08f
    POP ESI                             ; 005aa090
    POP EDI                             ; 005aa091
    POP EBP                             ; 005aa092
    RET                                 ; 005aa093

