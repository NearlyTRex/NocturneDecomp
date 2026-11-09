; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog1_cpp_FUN_005ac610(CDemonActor *param_1,uint param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_dogbite0_wav_005f0e54
;   TerminatedCString s_dogjump0_wav_005f0e62
;   TerminatedCString s_dogfoot0_wav_005f0e70
;   undefined4 DAT_00600c58
;   undefined4 DAT_00600c5c
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   unkafter_basicene.cpp_FUN_0059f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac610
        ;   Label: core_dog1.cpp_FUN_005ac610
    PUSH ESI                            ; 005ac611
    PUSH EBP                            ; 005ac612
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ac613
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ac617
    LEA ESI,[EBX + 0x20]                ; 005ac61b
    CMP EAX,0x2199                      ; 005ac61e
    JNC 0x005ac6ba                      ; 005ac623
        ;   XREF to: 005ac6ba (CONDITIONAL_JUMP)  ; LAB_005ac6ba
    CMP EAX,0x2198                      ; 005ac629
    JZ 0x005ac634                       ; 005ac62e
        ;   XREF to: 005ac634 (CONDITIONAL_JUMP)  ; LAB_005ac634
    POP EBP                             ; 005ac630
    POP ESI                             ; 005ac631
    POP EBX                             ; 005ac632
    RET                                 ; 005ac633
    PUSH EDI                            ; 005ac634
        ;   Label: LAB_005ac634
    MOV EDI,dword ptr [EBX + 0x11850]   ; 005ac635
    PUSH 0x40000000                     ; 005ac63b
    PUSH EDI                            ; 005ac640
    PUSH dword ptr [0x00600c58]         ; 005ac641 | DAT_00600c58
    PUSH EBX                            ; 005ac647
    CALL unkafter_basicene.cpp_FUN_0059f740 ; 005ac648
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005ac64d
    PUSH ESI                            ; 005ac650
    PUSH 0x5f0e54                       ; 005ac651 | = "dogbite0?.wav"
    PUSH EBX                            ; 005ac656
    MOV EBP,dword ptr [0x0061c068]      ; 005ac657 | DAT_0061c068
    PUSH EBP                            ; 005ac65d
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005ac65e
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ac663
    POP EDI                             ; 005ac666
    POP EBP                             ; 005ac667
    POP ESI                             ; 005ac668
    POP EBX                             ; 005ac669
    RET                                 ; 005ac66a
    MOV ECX,dword ptr [EBX + 0x11850]   ; 005ac66b
        ;   Label: LAB_005ac66b
    PUSH 0x40000000                     ; 005ac671
    PUSH ECX                            ; 005ac676
    PUSH dword ptr [0x00600c5c]         ; 005ac677 | DAT_00600c5c
    PUSH EBX                            ; 005ac67d
    CALL unkafter_basicene.cpp_FUN_0059f740 ; 005ac67e
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005ac683
    PUSH ESI                            ; 005ac686
    PUSH 0x5f0e62                       ; 005ac687 | = "dogjump0?.wav"
    PUSH EBX                            ; 005ac68c
    MOV EBX,dword ptr [0x0061c068]      ; 005ac68d | DAT_0061c068
    PUSH EBX                            ; 005ac693
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005ac694
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ac699
    POP EBP                             ; 005ac69c
    POP ESI                             ; 005ac69d
    POP EBX                             ; 005ac69e
    RET                                 ; 005ac69f
    PUSH ESI                            ; 005ac6a0
        ;   Label: LAB_005ac6a0
    PUSH 0x5f0e70                       ; 005ac6a1 | = "dogfoot0?.wav"
    PUSH EBX                            ; 005ac6a6
    MOV EDX,dword ptr [0x0061c068]      ; 005ac6a7 | DAT_0061c068
    PUSH EDX                            ; 005ac6ad
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005ac6ae
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ac6b3
    POP EBP                             ; 005ac6b6
    POP ESI                             ; 005ac6b7
    POP EBX                             ; 005ac6b8
    RET                                 ; 005ac6b9
    JBE 0x005ac66b                      ; 005ac6ba
        ;   XREF to: 005ac66b (CONDITIONAL_JUMP)  ; LAB_005ac66b
        ;   Label: LAB_005ac6ba
    CMP EAX,0x219a                      ; 005ac6bc
    JZ 0x005ac6a0                       ; 005ac6c1
        ;   XREF to: 005ac6a0 (CONDITIONAL_JUMP)  ; LAB_005ac6a0
    POP EBP                             ; 005ac6c3
    POP ESI                             ; 005ac6c4
    POP EBX                             ; 005ac6c5
    RET                                 ; 005ac6c6

