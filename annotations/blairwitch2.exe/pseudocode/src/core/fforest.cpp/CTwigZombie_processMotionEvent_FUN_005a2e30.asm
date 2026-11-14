; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fforest_cpp_CTwigZombie_processMotionEvent_FUN_005a2e30(CTwigZombie *this_ptr,int event_id)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   event_id
;
; Referenced Globals:
;   TerminatedCString s_twigfootstep0_wav_005f0033
;   TerminatedCString s_twigswing0_wav_005f0046
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_processMotionEvent_FUN_0059e880
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2e30
        ;   Label: core_fforest.cpp_CTwigZombie_processMotionEvent_FUN_005a2e30
    PUSH ESI                            ; 005a2e31
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a2e32
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a2e36
    CMP ESI,0x21fc                      ; 005a2e3a
    JC 0x005a2e65                       ; 005a2e40
        ;   XREF to: 005a2e65 (CONDITIONAL_JUMP)  ; LAB_005a2e65
    LEA EAX,[EBX + 0x20]                ; 005a2e42
    JBE 0x005a2e72                      ; 005a2e45
        ;   XREF to: 005a2e72 (CONDITIONAL_JUMP)  ; LAB_005a2e72
    CMP ESI,0x21fd                      ; 005a2e47
    JNZ 0x005a2e65                      ; 005a2e4d
        ;   XREF to: 005a2e65 (CONDITIONAL_JUMP)  ; LAB_005a2e65
    PUSH EAX                            ; 005a2e4f
    PUSH 0x5f0046                       ; 005a2e50 | = "twigswing0?.wav"
    PUSH EBX                            ; 005a2e55
    MOV EDX,dword ptr [0x0061c068]      ; 005a2e56 | DAT_0061c068
    PUSH EDX                            ; 005a2e5c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a2e5d
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
        ;   Label: LAB_005a2e5d
    ADD ESP,0x10                        ; 005a2e62
    PUSH ESI                            ; 005a2e65
        ;   Label: LAB_005a2e65
    PUSH EBX                            ; 005a2e66
    CALL core_basicene.cpp_CBasicEnemy_processMotionEvent_FUN_0059e880 ; 005a2e67
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_processMotionEvent_FUN_0059e880(CBasicEnemy * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a2e6c
    POP ESI                             ; 005a2e6f
    POP EBX                             ; 005a2e70
    RET                                 ; 005a2e71
    PUSH EAX                            ; 005a2e72
        ;   Label: LAB_005a2e72
    PUSH 0x5f0033                       ; 005a2e73 | = "twigfootstep0?.wav"
    PUSH EBX                            ; 005a2e78
    MOV ECX,dword ptr [0x0061c068]      ; 005a2e79 | DAT_0061c068
    PUSH ECX                            ; 005a2e7f
    JMP 0x005a2e5d                      ; 005a2e80
        ;   XREF to: 005a2e5d (UNCONDITIONAL_JUMP)  ; LAB_005a2e5d

