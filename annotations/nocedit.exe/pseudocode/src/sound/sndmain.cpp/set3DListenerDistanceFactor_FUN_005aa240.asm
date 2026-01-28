; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005aa240(double distance_in_feet)
;
; Parameters:
; double           Stack[0x4]:8   distance_in_feet
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae29
;
; Referenced Globals:
;   double DOUBLE_00681b30 = 1
;   undefined4 DOUBLE_00681b30+4
;   double DOUBLE_00681b38 = 1
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    FLD1                                ; 005aa240
        ;   Label: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240
    FDIV double ptr [ESP + 0x4]         ; 005aa242
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa246
    MOV [0x00681b30],EAX                ; 005aa24a | DOUBLE_00681b30
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa24f
    MOV EDX,dword ptr [0x03f69268]      ; 005aa253 | g_CSoundDevicePtr
    MOV [0x00681b34],EAX                ; 005aa259 | DOUBLE_00681b30+4
    FSTP double ptr [0x00681b38]        ; 005aa25e | DOUBLE_00681b38
    TEST EDX,EDX                        ; 005aa264
    JNZ 0x005aa269                      ; 005aa266
        ;   XREF to: 005aa269 (CONDITIONAL_JUMP)  ; LAB_005aa269
    RET                                 ; 005aa268
    PUSH EBX                            ; 005aa269
        ;   Label: LAB_005aa269
    MOV ECX,dword ptr [ESP + 0xc]       ; 005aa26a
    PUSH ECX                            ; 005aa26e
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aa26f
    PUSH EBX                            ; 005aa273
    MOV EAX,EDX                         ; 005aa274
    MOV EDX,dword ptr [EDX]             ; 005aa276
    PUSH EAX                            ; 005aa278
    CALL dword ptr [EDX + 0x24]         ; 005aa279
    ADD ESP,0xc                         ; 005aa27c
    POP EBX                             ; 005aa27f
    RET                                 ; 005aa280

