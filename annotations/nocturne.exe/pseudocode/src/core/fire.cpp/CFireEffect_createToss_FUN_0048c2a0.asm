; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)
;
;
; XREF[1]:
;   core_dynamite.cpp_FUN_0046ec80 at 0046ecb8
;
; Referenced Globals:
;   double DOUBLE_0058151c = 0.000100000000000000
;
; Called Functions:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c2a0
        ;   Label: core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0
    PUSH ESI                            ; 0048c2a1
    PUSH EDI                            ; 0048c2a2
    PUSH EBP                            ; 0048c2a3
    FLD float ptr [ESP + 0x24]          ; 0048c2a4
    FCOMP double ptr [0x0058151c]       ; 0048c2a8 | DOUBLE_0058151c
    FNSTSW AX                           ; 0048c2ae
    SAHF                                ; 0048c2b0
    JNC 0x0048c2bb                      ; 0048c2b1
        ;   XREF to: 0048c2bb (CONDITIONAL_JUMP)  ; LAB_0048c2bb
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 0048c2b3
    MOV ECX,dword ptr [ESP + 0x20]      ; 0048c2bb
        ;   Label: LAB_0048c2bb
    PUSH dword ptr [ESP + 0x24]         ; 0048c2bf
    PUSH ECX                            ; 0048c2c3
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048c2c4
    PUSH EBX                            ; 0048c2c8
    MOV ESI,dword ptr [ESP + 0x24]      ; 0048c2c9
    PUSH ESI                            ; 0048c2cd
    PUSH 0x0                            ; 0048c2ce
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048c2d0
    PUSH EDI                            ; 0048c2d4
    CALL core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310 ; 0048c2d5
        ;   XREF to: 0048c310 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310()
    IMUL EAX,EAX,0x3e4                  ; 0048c2da
    ADD ESP,0x18                        ; 0048c2e0
    MOV EDX,dword ptr [ESP + 0x28]      ; 0048c2e3
    MOV dword ptr [EAX + 0x1c5dc04],EDX ; 0048c2e7
    MOV EDX,0x1c5d824                   ; 0048c2ed
    ADD EDX,EAX                         ; 0048c2f2
    ADD EDX,0x180                       ; 0048c2f4
    PUSH EDX                            ; 0048c2fa
    MOV EBP,dword ptr [EAX + 0x1c5dc04] ; 0048c2fb
    PUSH EBP                            ; 0048c301
    CALL sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0 ; 0048c302
        ;   XREF to: 00526ea0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0()
    ADD ESP,0x8                         ; 0048c307
    POP EBP                             ; 0048c30a
    POP EDI                             ; 0048c30b
    POP ESI                             ; 0048c30c
    POP EBX                             ; 0048c30d
    RET                                 ; 0048c30e

