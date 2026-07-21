; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d8150
;
; Referenced Globals:
;   undefined4 DAT_00763e94
;   undefined4 DAT_00763e98
;   undefined4 DAT_00763e9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d8f0
        ;   Label: core_actor.cpp_resetActorTypeInfo_FUN_0040d8f0
    MOV EBX,dword ptr [0x00763e94]      ; 0040d8f1 | DAT_00763e94
    XOR EDX,EDX                         ; 0040d8f7
    TEST EBX,EBX                        ; 0040d8f9
    JLE 0x0040d920                      ; 0040d8fb
        ;   XREF to: 0040d920 (CONDITIONAL_JUMP)  ; LAB_0040d920
    XOR EAX,EAX                         ; 0040d8fd
    MOV ECX,dword ptr [EAX + 0x763e98]  ; 0040d8ff | DAT_00763e98 | DAT_00763e9c
        ;   Label: LAB_0040d8ff
    MOV ECX,dword ptr [ECX + 0x30]      ; 0040d905
    ADD EAX,0x4                         ; 0040d908
    INC EDX                             ; 0040d90b
    MOV dword ptr [ECX],0x1             ; 0040d90c
    CMP EDX,EBX                         ; 0040d912
    JL 0x0040d8ff                       ; 0040d914
        ;   XREF to: 0040d8ff (CONDITIONAL_JUMP)  ; LAB_0040d8ff
    LEA EAX,[EAX]                       ; 0040d916
    LEA EDX,[EDX]                       ; 0040d91c
    MOV dword ptr [0x00763e94],EBX      ; 0040d920 | DAT_00763e94
        ;   Label: LAB_0040d920
    POP EBX                             ; 0040d926
    RET                                 ; 0040d927

