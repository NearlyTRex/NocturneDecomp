; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c630(void)
;
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0 at 0040adbf
;   core_mission.cpp_FUN_0051ac40 at 0051ad2b
;
; Referenced Globals:
;   undefined4 DAT_007c3044
;   undefined4 DAT_007c3048
;   undefined4 DAT_007c304c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c630
        ;   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040c630
    MOV ESI,dword ptr [0x007c3044]      ; 0040c631 | DAT_007c3044
    XOR EAX,EAX                         ; 0040c637
    TEST ESI,ESI                        ; 0040c639
    JLE 0x0040c657                      ; 0040c63b
        ;   XREF to: 0040c657 (CONDITIONAL_JUMP)  ; LAB_0040c657
    PUSH EBX                            ; 0040c63d
    XOR EDX,EDX                         ; 0040c63e
    MOV ECX,dword ptr [EDX + 0x7c3048]  ; 0040c640 | DAT_007c3048 | DAT_007c304c
        ;   Label: LAB_0040c640
    ADD EDX,0x4                         ; 0040c646
    MOV EBX,dword ptr [ECX + 0x30]      ; 0040c649
    MOV ECX,dword ptr [ECX + 0x34]      ; 0040c64c
    INC EAX                             ; 0040c64f
    MOV dword ptr [EBX],ECX             ; 0040c650
    CMP EAX,ESI                         ; 0040c652
    JL 0x0040c640                       ; 0040c654
        ;   XREF to: 0040c640 (CONDITIONAL_JUMP)  ; LAB_0040c640
    POP EBX                             ; 0040c656
    MOV dword ptr [0x007c3044],ESI      ; 0040c657 | DAT_007c3044
        ;   Label: LAB_0040c657
    POP ESI                             ; 0040c65d
    RET                                 ; 0040c65e

