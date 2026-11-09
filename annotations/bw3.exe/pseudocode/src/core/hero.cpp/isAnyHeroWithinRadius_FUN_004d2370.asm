; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(float *param_1,float param_2)
;
;
; XREF[2]:
;   core_fire.cpp_initProcess_FUN_0049de60 at 0049dec2
;   core_trash.cpp_FUN_0056d360 at 0056d37b
;
; Referenced Globals:
;   undefined4 DAT_01d5ba00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2370
        ;   Label: core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370
    PUSH ESI                            ; 004d2371
    SUB ESP,0xc                         ; 004d2372
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d2375
    FLD float ptr [ESP + 0x1c]          ; 004d2379
    FMUL ST0                            ; 004d237d
    MOV EDX,dword ptr [0x01d5ba00]      ; 004d237f | DAT_01d5ba00
    FSTP float ptr [ESP + 0x1c]         ; 004d2385
    TEST EDX,EDX                        ; 004d2389
    JLE 0x004d23a9                      ; 004d238b
        ;   XREF to: 004d23a9 (CONDITIONAL_JUMP)  ; LAB_004d23a9
    MOV EBX,dword ptr [0x01d5ba00]      ; 004d238d | DAT_01d5ba00
    XOR EDX,EDX                         ; 004d2393
    SHL EBX,0x2                         ; 004d2395
    MOV ESI,dword ptr [EDX + 0x1d5ba04] ; 004d2398
        ;   Label: LAB_004d2398
    TEST ESI,ESI                        ; 004d239e
    JNZ 0x004d23b1                      ; 004d23a0
        ;   XREF to: 004d23b1 (CONDITIONAL_JUMP)  ; LAB_004d23b1
    ADD EDX,0x4                         ; 004d23a2
        ;   Label: LAB_004d23a2
    CMP EDX,EBX                         ; 004d23a5
    JL 0x004d2398                       ; 004d23a7
        ;   XREF to: 004d2398 (CONDITIONAL_JUMP)  ; LAB_004d2398
    XOR EAX,EAX                         ; 004d23a9
        ;   Label: LAB_004d23a9
    ADD ESP,0xc                         ; 004d23ab
    POP ESI                             ; 004d23ae
    POP EBX                             ; 004d23af
    RET                                 ; 004d23b0
    MOV EAX,ESI                         ; 004d23b1
        ;   Label: LAB_004d23b1
    FLD float ptr [EAX + 0x20]          ; 004d23b3
    FSUB float ptr [ECX]                ; 004d23b6
    FMUL ST0                            ; 004d23b8
    FLD float ptr [EAX + 0x24]          ; 004d23ba
    FSUB float ptr [ECX + 0x4]          ; 004d23bd
    FMUL ST0                            ; 004d23c0
    FLD float ptr [EAX + 0x28]          ; 004d23c2
    FXCH                                ; 004d23c5
    FADDP ST2,ST0                       ; 004d23c7
    FSUB float ptr [ECX + 0x8]          ; 004d23c9
    FMUL ST0                            ; 004d23cc
    FADDP                               ; 004d23ce
    FCOMP float ptr [ESP + 0x1c]        ; 004d23d0
    FNSTSW AX                           ; 004d23d4
    SAHF                                ; 004d23d6
    JNC 0x004d23a2                      ; 004d23d7
        ;   XREF to: 004d23a2 (CONDITIONAL_JUMP)  ; LAB_004d23a2
    MOV EAX,0x1                         ; 004d23d9
    ADD ESP,0xc                         ; 004d23de
    POP ESI                             ; 004d23e1
    POP EBX                             ; 004d23e2
    RET                                 ; 004d23e3

