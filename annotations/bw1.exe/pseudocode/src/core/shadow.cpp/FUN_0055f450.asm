; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f450(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_0055de50 at 0055edb2
;
; Referenced Globals:
;   TerminatedCString s_shb_alert_wav_005f166b
;   TerminatedCString s_ghost_child_wav_005f167b
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f450
        ;   Label: core_shadow.cpp_FUN_0055f450
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f451
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 0055f455
    PUSH EDX                            ; 0055f45b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0055f45c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f461
    TEST EAX,EAX                        ; 0055f464
    JNZ 0x0055f493                      ; 0055f466
        ;   XREF to: 0055f493 (CONDITIONAL_JUMP)  ; LAB_0055f493
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f468
    JZ 0x0055f495                       ; 0055f46f
        ;   XREF to: 0055f495 (CONDITIONAL_JUMP)  ; LAB_0055f495
    PUSH 0x5f167b                       ; 0055f471 | = "ghost_child??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f476
        ;   Label: LAB_0055f476
    PUSH EBX                            ; 0055f47c
    CALL dword ptr [EAX + 0x2c]         ; 0055f47d
    ADD ESP,0x8                         ; 0055f480
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 0055f483
    MOV dword ptr [EBX + 0xc298],0x41700000 ; 0055f489
    POP EBX                             ; 0055f493
        ;   Label: LAB_0055f493
    RET                                 ; 0055f494
    PUSH 0x5f166b                       ; 0055f495 | = "shb_alert??.wav"
        ;   Label: LAB_0055f495
    JMP 0x0055f476                      ; 0055f49a
        ;   XREF to: 0055f476 (UNCONDITIONAL_JUMP)  ; LAB_0055f476

