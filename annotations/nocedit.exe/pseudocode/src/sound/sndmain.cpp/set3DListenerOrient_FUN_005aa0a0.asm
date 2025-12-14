; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, double up_y, double up_z, double right_x, double right_y, double right_z)
;
; Parameters:
; double           Stack[0x4]:8   front_x
; double           Stack[0xc]:8   front_y
; double           Stack[0x14]:8   front_z
; double           Stack[0x1c]:8   up_x
; double           Stack[0x24]:8   up_y
; double           Stack[0x2c]:8   up_z
; double           Stack[0x34]:8   right_x
; double           Stack[0x3c]:8   right_y
; double           Stack[0x44]:8   right_z
;
; XREF[5]:
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580fce
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b3917
;   core_sound.cpp_updateListeners_FUN_005b1870 at 005b1acf
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae72
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad44b
;
; Referenced Globals:
;   CVector3d g_Cached3DListenerOrientFront
;   undefined4 g_Cached3DListenerOrientFront.x+4
;   undefined4 g_Cached3DListenerOrientFront.y
;   undefined4 g_Cached3DListenerOrientFront.y+4
;   undefined4 g_Cached3DListenerOrientFront.z
;   undefined4 g_Cached3DListenerOrientFront.z+4
;   CVector3d g_Cached3DListenerOrientUp
;   undefined4 g_Cached3DListenerOrientUp.x+4
;   undefined4 g_Cached3DListenerOrientUp.y
;   undefined4 g_Cached3DListenerOrientUp.y+4
;   undefined4 g_Cached3DListenerOrientUp.z
;   undefined4 g_Cached3DListenerOrientUp.z+4
;   CVector3d g_Cached3DListenerOrientRight
;   undefined4 g_Cached3DListenerOrientRight.x+4
;   undefined4 g_Cached3DListenerOrientRight.y
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aa0a0
        ;   Label: sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa0a1
    MOV [0x03f68860],EAX                ; 005aa0a5 | g_Cached3DListenerOrientFront
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa0aa
    MOV [0x03f68864],EAX                ; 005aa0ae | g_Cached3DListenerOrientFront.x+4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005aa0b3
    MOV [0x03f68868],EAX                ; 005aa0b7 | g_Cached3DListenerOrientFront.y
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa0bc
    MOV [0x03f6886c],EAX                ; 005aa0c0 | g_Cached3DListenerOrientFront.y+4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa0c5
    MOV [0x03f68870],EAX                ; 005aa0c9 | g_Cached3DListenerOrientFront.z
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005aa0ce
    MOV [0x03f68874],EAX                ; 005aa0d2 | g_Cached3DListenerOrientFront.z+4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005aa0d7
    MOV [0x03f68878],EAX                ; 005aa0db | g_Cached3DListenerOrientUp
    MOV EAX,dword ptr [ESP + 0x24]      ; 005aa0e0
    MOV [0x03f6887c],EAX                ; 005aa0e4 | g_Cached3DListenerOrientUp.x+4
    MOV EAX,dword ptr [ESP + 0x28]      ; 005aa0e9
    MOV [0x03f68880],EAX                ; 005aa0ed | g_Cached3DListenerOrientUp.y
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005aa0f2
    MOV [0x03f68884],EAX                ; 005aa0f6 | g_Cached3DListenerOrientUp.y+4
    MOV EAX,dword ptr [ESP + 0x30]      ; 005aa0fb
    MOV [0x03f68888],EAX                ; 005aa0ff | g_Cached3DListenerOrientUp.z
    MOV EAX,dword ptr [ESP + 0x34]      ; 005aa104
    MOV [0x03f6888c],EAX                ; 005aa108 | g_Cached3DListenerOrientUp.z+4
    MOV EAX,dword ptr [ESP + 0x38]      ; 005aa10d
    MOV [0x03f68890],EAX                ; 005aa111 | g_Cached3DListenerOrientRight
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005aa116
    MOV [0x03f68894],EAX                ; 005aa11a | g_Cached3DListenerOrientRight.x+4
    MOV EAX,dword ptr [ESP + 0x40]      ; 005aa11f
    MOV [0x03f68898],EAX                ; 005aa123 | g_Cached3DListenerOrientRight.y
    MOV EAX,dword ptr [ESP + 0x44]      ; 005aa128
    MOV [0x03f6889c],EAX                ; 005aa12c | g_Cached3DListenerOrientRight.y+4
    MOV EAX,dword ptr [ESP + 0x48]      ; 005aa131
    MOV [0x03f688a0],EAX                ; 005aa135 | g_Cached3DListenerOrientRight.z
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005aa13a
    MOV EDX,dword ptr [0x03f69268]      ; 005aa13e | g_CSoundDevicePtr
    MOV [0x03f688a4],EAX                ; 005aa144 | g_Cached3DListenerOrientRight.z+4
    TEST EDX,EDX                        ; 005aa149
    JNZ 0x005aa14f                      ; 005aa14b
        ;   XREF to: 005aa14f (CONDITIONAL_JUMP)  ; LAB_005aa14f
    POP EBP                             ; 005aa14d
    RET                                 ; 005aa14e
    PUSH EDI                            ; 005aa14f
        ;   Label: LAB_005aa14f
    PUSH ESI                            ; 005aa150
    PUSH EBX                            ; 005aa151
    MOV ECX,dword ptr [ESP + 0x58]      ; 005aa152
    PUSH ECX                            ; 005aa156
    MOV EBX,dword ptr [ESP + 0x58]      ; 005aa157
    PUSH EBX                            ; 005aa15b
    MOV ESI,dword ptr [ESP + 0x58]      ; 005aa15c
    PUSH ESI                            ; 005aa160
    MOV EDI,dword ptr [ESP + 0x58]      ; 005aa161
    PUSH EDI                            ; 005aa165
    MOV EBP,dword ptr [ESP + 0x58]      ; 005aa166
    PUSH EBP                            ; 005aa16a
    MOV ECX,dword ptr [ESP + 0x58]      ; 005aa16b
    PUSH ECX                            ; 005aa16f
    MOV EBX,dword ptr [ESP + 0x58]      ; 005aa170
    PUSH EBX                            ; 005aa174
    MOV ESI,dword ptr [ESP + 0x58]      ; 005aa175
    PUSH ESI                            ; 005aa179
    MOV EDI,dword ptr [ESP + 0x58]      ; 005aa17a
    PUSH EDI                            ; 005aa17e
    MOV EBP,dword ptr [ESP + 0x58]      ; 005aa17f
    PUSH EBP                            ; 005aa183
    MOV ECX,dword ptr [ESP + 0x58]      ; 005aa184
    PUSH ECX                            ; 005aa188
    MOV EBX,dword ptr [ESP + 0x58]      ; 005aa189
    PUSH EBX                            ; 005aa18d
    MOV ESI,dword ptr [ESP + 0x58]      ; 005aa18e
    PUSH ESI                            ; 005aa192
    MOV EDI,dword ptr [ESP + 0x58]      ; 005aa193
    PUSH EDI                            ; 005aa197
    MOV EBP,dword ptr [ESP + 0x58]      ; 005aa198
    PUSH EBP                            ; 005aa19c
    MOV ECX,dword ptr [ESP + 0x58]      ; 005aa19d
    PUSH ECX                            ; 005aa1a1
    MOV EBX,dword ptr [ESP + 0x58]      ; 005aa1a2
    PUSH EBX                            ; 005aa1a6
    MOV ESI,dword ptr [ESP + 0x58]      ; 005aa1a7
    PUSH ESI                            ; 005aa1ab
    MOV EAX,EDX                         ; 005aa1ac
    MOV EDX,dword ptr [EDX]             ; 005aa1ae
    PUSH EAX                            ; 005aa1b0
    CALL dword ptr [EDX + 0x1c]         ; 005aa1b1
    ADD ESP,0x4c                        ; 005aa1b4
    POP EBX                             ; 005aa1b7
    POP ESI                             ; 005aa1b8
    POP EDI                             ; 005aa1b9
    POP EBP                             ; 005aa1ba
    RET                                 ; 005aa1bb

