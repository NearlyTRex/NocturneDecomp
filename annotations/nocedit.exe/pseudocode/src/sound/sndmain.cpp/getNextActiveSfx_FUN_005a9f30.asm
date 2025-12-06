; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   current_sfx_handle
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da973
;
; Referenced Globals:
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 DAT_03f5db1c
;   undefined4 DAT_03f5dc40
;   undefined4 DAT_03f5dc44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9f30
        ;   Label: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9f31
    AND EDX,0x3f                        ; 005a9f35
    INC EDX                             ; 005a9f38
    CMP EDX,0x40                        ; 005a9f39
    JGE 0x005a9f6f                      ; 005a9f3c | LAB_005a9f6f
        ;   XREF to: 005a9f6f (CONDITIONAL_JUMP)
    LEA EAX,[EDX*0x8 + 0x0]             ; 005a9f3e
    ADD EAX,EDX                         ; 005a9f45
    SHL EAX,0x2                         ; 005a9f47
    ADD EAX,EDX                         ; 005a9f4a
    SHL EAX,0x3                         ; 005a9f4c
    CMP dword ptr [EAX + 0x3f5db1c],0x0 ; 005a9f4f | DAT_03f5db1c | DAT_03f5dc44
        ;   Label: LAB_005a9f4f
    JZ 0x005a9f62                       ; 005a9f56 | LAB_005a9f62
        ;   XREF to: 005a9f62 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x3f5db18] ; 005a9f58 | g_SfxSlots[0].field7_0x74
    TEST EBX,EBX                        ; 005a9f5e
    JNZ 0x005a9f73                      ; 005a9f60 | LAB_005a9f73
        ;   XREF to: 005a9f73 (CONDITIONAL_JUMP)
    ADD EAX,0x128                       ; 005a9f62
        ;   Label: LAB_005a9f62
    INC EDX                             ; 005a9f67
    CMP EAX,0x4a00                      ; 005a9f68
    JL 0x005a9f4f                       ; 005a9f6d | LAB_005a9f4f
        ;   XREF to: 005a9f4f (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a9f6f
        ;   Label: LAB_005a9f6f
    POP EBX                             ; 005a9f71
    RET                                 ; 005a9f72
    MOV EAX,EBX                         ; 005a9f73
        ;   Label: LAB_005a9f73
    SHL EAX,0x6                         ; 005a9f75
    OR EAX,EDX                          ; 005a9f78
    POP EBX                             ; 005a9f7a
    RET                                 ; 005a9f7b

