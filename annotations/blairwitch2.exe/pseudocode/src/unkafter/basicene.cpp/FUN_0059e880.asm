; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_0059e880(CDemonActor *param_1,int param_2)
;
;
; XREF[3]:
;   core_confedrt.cpp_FUN_005a1350 at 005a137b
;   core_schngeis.cpp_FUN_005a3420 at 005a345e
;   core_twigzomb.cpp_FUN_005a2e30 at 005a2e67
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059e880
        ;   Label: unkafter_basicene.cpp_FUN_0059e880
    CMP dword ptr [ESP + 0x8],0x1b58    ; 0059e884
    JNZ 0x0059e897                      ; 0059e88c
        ;   XREF to: 0059e897 (CONDITIONAL_JUMP)  ; LAB_0059e897
    CMP byte ptr [EAX + 0x11642],0x0    ; 0059e88e
    JNZ 0x0059e898                      ; 0059e895
        ;   XREF to: 0059e898 (CONDITIONAL_JUMP)  ; LAB_0059e898
    RET                                 ; 0059e897
        ;   Label: LAB_0059e897
    LEA EDX,[EAX + 0x20]                ; 0059e898
        ;   Label: LAB_0059e898
    PUSH EDX                            ; 0059e89b
    LEA EDX,[EAX + 0x11642]             ; 0059e89c
    PUSH EDX                            ; 0059e8a2
    PUSH EAX                            ; 0059e8a3
    MOV ECX,dword ptr [0x0061c068]      ; 0059e8a4 | DAT_0061c068
    PUSH ECX                            ; 0059e8aa
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0059e8ab
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0059e8b0
    RET                                 ; 0059e8b3

