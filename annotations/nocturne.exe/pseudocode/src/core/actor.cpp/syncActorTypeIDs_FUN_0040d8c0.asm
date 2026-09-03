; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0(void)
;
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_save_FUN_0040c040 at 0040c04f
;   core_mission.cpp_CDemonMission_writeFile_FUN_004d8720 at 004d882b
;
; Referenced Globals:
;   undefined4 DAT_00763e94
;   undefined4 DAT_00763e98
;   undefined4 DAT_00763e9c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040d8c0
        ;   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040d8c0
    MOV ESI,dword ptr [0x00763e94]      ; 0040d8c1 | DAT_00763e94
    XOR EAX,EAX                         ; 0040d8c7
    TEST ESI,ESI                        ; 0040d8c9
    JLE 0x0040d8e7                      ; 0040d8cb
        ;   XREF to: 0040d8e7 (CONDITIONAL_JUMP)  ; LAB_0040d8e7
    PUSH EBX                            ; 0040d8cd
    XOR EDX,EDX                         ; 0040d8ce
    MOV ECX,dword ptr [EDX + 0x763e98]  ; 0040d8d0 | DAT_00763e98 | DAT_00763e9c
        ;   Label: LAB_0040d8d0
    ADD EDX,0x4                         ; 0040d8d6
    MOV EBX,dword ptr [ECX + 0x30]      ; 0040d8d9
    MOV ECX,dword ptr [ECX + 0x34]      ; 0040d8dc
    INC EAX                             ; 0040d8df
    MOV dword ptr [EBX],ECX             ; 0040d8e0
    CMP EAX,ESI                         ; 0040d8e2
    JL 0x0040d8d0                       ; 0040d8e4
        ;   XREF to: 0040d8d0 (CONDITIONAL_JUMP)  ; LAB_0040d8d0
    POP EBX                             ; 0040d8e6
    MOV dword ptr [0x00763e94],ESI      ; 0040d8e7 | DAT_00763e94
        ;   Label: LAB_0040d8e7
    POP ESI                             ; 0040d8ed
    RET                                 ; 0040d8ee

