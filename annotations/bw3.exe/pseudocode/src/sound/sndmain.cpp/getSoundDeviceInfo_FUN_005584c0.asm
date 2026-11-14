; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(int device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; int              Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
;
; XREF[4]:
;   core_menu.cpp_FUN_004e94f0 at 004e9c56
;   sound_sndmain.cpp_findBestSoundDevice_FUN_00558520 at 00558542
;   sound_sndmain.cpp_readIni_FUN_00559220 at 005592e2
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 00559561
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3af6
;   TerminatedCString s_getSoundDeviceInfo_inval_005d3b0b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005584c0
        ;   Label: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0
    PUSH ESI                            ; 005584c1
    PUSH EDI                            ; 005584c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005584c3
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 ; 005584c7
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430()
    TEST EBX,EBX                        ; 005584cc
    JL 0x005584f8                       ; 005584ce
        ;   XREF to: 005584f8 (CONDITIONAL_JUMP)  ; LAB_005584f8
    CMP EBX,EAX                         ; 005584d0
    JGE 0x005584f8                      ; 005584d2
        ;   XREF to: 005584f8 (CONDITIONAL_JUMP)  ; LAB_005584f8
    LEA EAX,[EBX*0x8 + 0x0]             ; 005584d4
        ;   Label: LAB_005584d4
    ADD EAX,EBX                         ; 005584db
    SHL EAX,0x2                         ; 005584dd
    SUB EAX,EBX                         ; 005584e0
    MOV ECX,0x46                        ; 005584e2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005584e7
    LEA ESI,[EAX*0x8 + 0x2cf29c0]       ; 005584eb
    MOVSD.REP ES:EDI,ESI                ; 005584f2
    POP EDI                             ; 005584f4
    POP ESI                             ; 005584f5
    POP EBX                             ; 005584f6
    RET                                 ; 005584f7
    MOV EDX,0x5d3af6                    ; 005584f8 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005584f8
    MOV ECX,0x1523                      ; 005584fd
    PUSH 0x5d3b0b                       ; 00558502 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x01d71de0],EDX      ; 00558507 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0055850d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00558513
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558518
    JMP 0x005584d4                      ; 0055851b
        ;   XREF to: 005584d4 (UNCONDITIONAL_JUMP)  ; LAB_005584d4

