; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004b4630(float *param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004259f0 at 00425bf1
;
; Referenced Globals:
;   undefined4 DAT_01cae0d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4630
        ;   Label: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630
    PUSH ESI                            ; 004b4631
    PUSH EBP                            ; 004b4632
    MOV EBP,ESP                         ; 004b4633
    SUB ESP,0x10                        ; 004b4635
    AND ESP,0xfffffff8                  ; 004b4638
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b463b
    MOV ECX,dword ptr [EBP + 0x10]      ; 004b463e
    MOV dword ptr [ESP],EAX             ; 004b4641
    FLD float ptr [EBP + 0x14]          ; 004b4644
    FMUL ST0                            ; 004b4647
    MOV EDX,dword ptr [0x01cae0d4]      ; 004b4649 | DAT_01cae0d4
    FSTP float ptr [EBP + 0x14]         ; 004b464f
    TEST EDX,EDX                        ; 004b4652
    JLE 0x004b4672                      ; 004b4654
        ;   XREF to: 004b4672 (CONDITIONAL_JUMP)  ; LAB_004b4672
    MOV EBX,dword ptr [0x01cae0d4]      ; 004b4656 | DAT_01cae0d4
    XOR EDX,EDX                         ; 004b465c
    SHL EBX,0x2                         ; 004b465e
    MOV ESI,dword ptr [EDX + 0x1cae0d8] ; 004b4661
        ;   Label: LAB_004b4661
    TEST ESI,ESI                        ; 004b4667
    JNZ 0x004b467a                      ; 004b4669
        ;   XREF to: 004b467a (CONDITIONAL_JUMP)  ; LAB_004b467a
    ADD EDX,0x4                         ; 004b466b
        ;   Label: LAB_004b466b
    CMP EDX,EBX                         ; 004b466e
    JL 0x004b4661                       ; 004b4670
        ;   XREF to: 004b4661 (CONDITIONAL_JUMP)  ; LAB_004b4661
    XOR EAX,EAX                         ; 004b4672
        ;   Label: LAB_004b4672
    MOV ESP,EBP                         ; 004b4674
    POP EBP                             ; 004b4676
    POP ESI                             ; 004b4677
    POP EBX                             ; 004b4678
    RET                                 ; 004b4679
    MOV EAX,ESI                         ; 004b467a
        ;   Label: LAB_004b467a
    FLD float ptr [EAX + 0x20]          ; 004b467c
    FSUB float ptr [ECX]                ; 004b467f
    FSTP float ptr [ESP + 0x4]          ; 004b4681
    FLD float ptr [EAX + 0x24]          ; 004b4685
    FSUB float ptr [ECX + 0x4]          ; 004b4688
    FST float ptr [ESP + 0x8]           ; 004b468b
    FLD float ptr [EAX + 0x28]          ; 004b468f
    FXCH                                ; 004b4692
    FABS                                ; 004b4694
    FXCH                                ; 004b4696
    FSUB float ptr [ECX + 0x8]          ; 004b4698
    FSTP float ptr [ESP + 0xc]          ; 004b469b
    FLD float ptr [ESP]                 ; 004b469f
    FCOMPP                              ; 004b46a2
    FNSTSW AX                           ; 004b46a4
    SAHF                                ; 004b46a6
    JC 0x004b466b                       ; 004b46a7
        ;   XREF to: 004b466b (CONDITIONAL_JUMP)  ; LAB_004b466b
    FLD float ptr [ESP + 0xc]           ; 004b46a9
    FMUL ST0                            ; 004b46ad
    FLD float ptr [ESP + 0x4]           ; 004b46af
    FMUL ST0                            ; 004b46b3
    FADDP                               ; 004b46b5
    FCOMP float ptr [EBP + 0x14]        ; 004b46b7
    FNSTSW AX                           ; 004b46ba
    SAHF                                ; 004b46bc
    JNC 0x004b466b                      ; 004b46bd
        ;   XREF to: 004b466b (CONDITIONAL_JUMP)  ; LAB_004b466b
    MOV EAX,0x1                         ; 004b46bf
    MOV ESP,EBP                         ; 004b46c4
    POP EBP                             ; 004b46c6
    POP ESI                             ; 004b46c7
    POP EBX                             ; 004b46c8
    RET                                 ; 004b46c9

