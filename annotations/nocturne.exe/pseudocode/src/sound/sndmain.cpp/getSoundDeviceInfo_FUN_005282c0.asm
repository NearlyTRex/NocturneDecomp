; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; int              Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1c59
;   sound_sndmain.cpp_FUN_005289f0 at 00528a49
;   sound_sndmain.cpp_findBestSoundDevice_FUN_00528320 at 00528347
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528cc1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593818
;   TerminatedCString s_getSoundDeviceInfo_inval_0059382d
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005282c0
        ;   Label: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
    PUSH ESI                            ; 005282c1
    PUSH EDI                            ; 005282c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005282c3
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 005282c7
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
    TEST EBX,EBX                        ; 005282cc
    JL 0x005282f8                       ; 005282ce
        ;   XREF to: 005282f8 (CONDITIONAL_JUMP)  ; LAB_005282f8
    CMP EBX,EAX                         ; 005282d0
    JGE 0x005282f8                      ; 005282d2
        ;   XREF to: 005282f8 (CONDITIONAL_JUMP)  ; LAB_005282f8
    LEA EAX,[EBX*0x8 + 0x0]             ; 005282d4
        ;   Label: LAB_005282d4
    ADD EAX,EBX                         ; 005282db
    SHL EAX,0x2                         ; 005282dd
    SUB EAX,EBX                         ; 005282e0
    MOV ECX,0x46                        ; 005282e2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005282e7
    LEA ESI,[EAX*0x8 + 0x2dc7a58]       ; 005282eb
    MOVSD.REP ES:EDI,ESI                ; 005282f2
    POP EDI                             ; 005282f4
    POP ESI                             ; 005282f5
    POP EBX                             ; 005282f6
    RET                                 ; 005282f7
    MOV EDX,0x593818                    ; 005282f8 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005282f8
    MOV ECX,0x11d1                      ; 005282fd
    PUSH 0x59382d                       ; 00528302 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x01cc4800],EDX      ; 00528307 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052830d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00528313
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00528318
    JMP 0x005282d4                      ; 0052831b
        ;   XREF to: 005282d4 (UNCONDITIONAL_JUMP)  ; LAB_005282d4

