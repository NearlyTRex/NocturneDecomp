; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c870(void)
;
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_save_FUN_0040aff0 at 0040afff
;   core_mission.cpp_CDemonMission_writeFile_FUN_004f6410 at 004f64fb
;
; Referenced Globals:
;   undefined4 DAT_007df9c4
;   undefined4 DAT_007df9c8
;   undefined4 DAT_007df9cc
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c870
        ;   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040c870
    MOV ESI,dword ptr [0x007df9c4]      ; 0040c871 | DAT_007df9c4
    XOR EAX,EAX                         ; 0040c877
    TEST ESI,ESI                        ; 0040c879
    JLE 0x0040c897                      ; 0040c87b
        ;   XREF to: 0040c897 (CONDITIONAL_JUMP)  ; LAB_0040c897
    PUSH EBX                            ; 0040c87d
    XOR EDX,EDX                         ; 0040c87e
    MOV ECX,dword ptr [EDX + 0x7df9c8]  ; 0040c880 | DAT_007df9c8 | DAT_007df9cc
        ;   Label: LAB_0040c880
    ADD EDX,0x4                         ; 0040c886
    MOV EBX,dword ptr [ECX + 0x30]      ; 0040c889
    MOV ECX,dword ptr [ECX + 0x34]      ; 0040c88c
    INC EAX                             ; 0040c88f
    MOV dword ptr [EBX],ECX             ; 0040c890
    CMP EAX,ESI                         ; 0040c892
    JL 0x0040c880                       ; 0040c894
        ;   XREF to: 0040c880 (CONDITIONAL_JUMP)  ; LAB_0040c880
    POP EBX                             ; 0040c896
    MOV dword ptr [0x007df9c4],ESI      ; 0040c897 | DAT_007df9c4
        ;   Label: LAB_0040c897
    POP ESI                             ; 0040c89d
    RET                                 ; 0040c89e

