; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   core_baron.cpp_FUN_00410cc0 at 00410da6
;   core_fire.cpp_FUN_0048c0d0 at 0048c139
;
; Referenced Globals:
;   undefined4 DAT_01c625f4
;
; Called Functions:
;   core_fire.cpp_CCrater_activate_FUN_004876d0
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0xc]          ; 0048c370
        ;   Label: core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
    MOV EAX,[0x01c625f4]                ; 0048c374 | DAT_01c625f4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048c379
    SHL EAX,0x4                         ; 0048c37d
    PUSH EDX                            ; 0048c380
    MOV EDX,EAX                         ; 0048c381
    SHL EAX,0x3                         ; 0048c383
    SUB EAX,EDX                         ; 0048c386
    ADD EAX,0x1c625f8                   ; 0048c388
    PUSH EAX                            ; 0048c38d
    CALL core_fire.cpp_CCrater_activate_FUN_004876d0 ; 0048c38e
        ;   XREF to: 004876d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CCrater_activate_FUN_004876d0()
    MOV ECX,dword ptr [0x01c625f4]      ; 0048c393 | DAT_01c625f4
    INC ECX                             ; 0048c399
    ADD ESP,0xc                         ; 0048c39a
    MOV dword ptr [0x01c625f4],ECX      ; 0048c39d | DAT_01c625f4
    CMP ECX,0x14                        ; 0048c3a3
    JGE 0x0048c3a9                      ; 0048c3a6
        ;   XREF to: 0048c3a9 (CONDITIONAL_JUMP)  ; LAB_0048c3a9
    RET                                 ; 0048c3a8
    PUSH ESI                            ; 0048c3a9
        ;   Label: LAB_0048c3a9
    XOR ESI,ESI                         ; 0048c3aa
    MOV dword ptr [0x01c625f4],ESI      ; 0048c3ac | DAT_01c625f4
    POP ESI                             ; 0048c3b2
    RET                                 ; 0048c3b3

