; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c950(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fb700
;
; Referenced Globals:
;   undefined4 DAT_007bc044
;   undefined4 DAT_007bc048
;   undefined4 DAT_007bc04c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c950
        ;   Label: core_actor.cpp_resetActorTypeInfo_FUN_0040c950
    MOV EBX,dword ptr [0x007bc044]      ; 0040c951 | DAT_007bc044
    XOR EDX,EDX                         ; 0040c957
    TEST EBX,EBX                        ; 0040c959
    JLE 0x0040c980                      ; 0040c95b
        ;   XREF to: 0040c980 (CONDITIONAL_JUMP)  ; LAB_0040c980
    XOR EAX,EAX                         ; 0040c95d
    MOV ECX,dword ptr [EAX + 0x7bc048]  ; 0040c95f | DAT_007bc048 | DAT_007bc04c
        ;   Label: LAB_0040c95f
    MOV ECX,dword ptr [ECX + 0x30]      ; 0040c965
    ADD EAX,0x4                         ; 0040c968
    INC EDX                             ; 0040c96b
    MOV dword ptr [ECX],0x1             ; 0040c96c
    CMP EDX,EBX                         ; 0040c972
    JL 0x0040c95f                       ; 0040c974
        ;   XREF to: 0040c95f (CONDITIONAL_JUMP)  ; LAB_0040c95f
    LEA EAX,[EAX]                       ; 0040c976
    LEA EDX,[EDX]                       ; 0040c97c
    MOV dword ptr [0x007bc044],EBX      ; 0040c980 | DAT_007bc044
        ;   Label: LAB_0040c980
    POP EBX                             ; 0040c986
    RET                                 ; 0040c987

