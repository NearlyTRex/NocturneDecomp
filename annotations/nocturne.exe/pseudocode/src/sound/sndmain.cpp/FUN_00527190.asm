; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00527190(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0059358d
;   TerminatedCString s_setSfxUserData_invalid_u_005935a2
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527190
        ;   Label: sound_sndmain.cpp_FUN_00527190
    PUSH ESI                            ; 00527191
    MOV EBX,dword ptr [ESP + 0x10]      ; 00527192
    TEST EBX,EBX                        ; 00527196
    JL 0x0052719f                       ; 00527198
        ;   XREF to: 0052719f (CONDITIONAL_JUMP)  ; LAB_0052719f
    CMP EBX,0x2                         ; 0052719a
    JL 0x005271c3                       ; 0052719d
        ;   XREF to: 005271c3 (CONDITIONAL_JUMP)  ; LAB_005271c3
    PUSH EBX                            ; 0052719f
        ;   Label: LAB_0052719f
    MOV EDX,0x59358d                    ; 005271a0 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xef1                       ; 005271a5
    PUSH 0x5935a2                       ; 005271aa | = "setSfxUserData - invalid user data in..."
    MOV dword ptr [0x01cc4800],EDX      ; 005271af | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005271b5 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005271bb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 005271c0
    PUSH 0x1                            ; 005271c3
        ;   Label: LAB_005271c3
    MOV ESI,dword ptr [ESP + 0x10]      ; 005271c5
    PUSH ESI                            ; 005271c9
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 005271ca
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 005271cf
    TEST EAX,EAX                        ; 005271d2
    JNZ 0x005271d9                      ; 005271d4
        ;   XREF to: 005271d9 (CONDITIONAL_JUMP)  ; LAB_005271d9
    POP ESI                             ; 005271d6
    POP EBX                             ; 005271d7
    RET                                 ; 005271d8
    SHL EBX,0x2                         ; 005271d9
        ;   Label: LAB_005271d9
    ADD EAX,EBX                         ; 005271dc
    MOV EBX,dword ptr [ESP + 0x14]      ; 005271de
    MOV dword ptr [EAX + 0x54],EBX      ; 005271e2
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 005271e5
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 005271ea
    POP ESI                             ; 005271ef
    POP EBX                             ; 005271f0
    RET                                 ; 005271f1

