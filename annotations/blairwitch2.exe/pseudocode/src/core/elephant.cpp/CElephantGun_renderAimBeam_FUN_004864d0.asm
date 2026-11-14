; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_renderAimBeam_FUN_004864d0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d2b86
;   undefined4 DAT_005d2b8a
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004864d0
        ;   Label: core_elephant.cpp_CElephantGun_renderAimBeam_FUN_004864d0
    PUSH ESI                            ; 004864d1
    PUSH EDI                            ; 004864d2
    PUSH EBP                            ; 004864d3
    MOV EBP,ESP                         ; 004864d4
    SUB ESP,0xb0                        ; 004864d6
    AND ESP,0xfffffff8                  ; 004864dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004864df
    MOV EDX,dword ptr [0x0060b280]      ; 004864e2 | DAT_0060b280
    PUSH EDX                            ; 004864e8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004864e9
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004864ee
    TEST EAX,EAX                        ; 004864f1
    JZ 0x004864fc                       ; 004864f3
        ;   XREF to: 004864fc (CONDITIONAL_JUMP)  ; LAB_004864fc
    MOV ESP,EBP                         ; 004864f5
    POP EBP                             ; 004864f7
    POP EDI                             ; 004864f8
    POP ESI                             ; 004864f9
    POP EBX                             ; 004864fa
    RET                                 ; 004864fb
    PUSH EBX                            ; 004864fc
        ;   Label: LAB_004864fc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004864fd
    LEA ESI,[ESP + 0x88]                ; 00486503
    LEA EDI,[ESP + 0x28]                ; 0048650a
    CALL dword ptr [EAX + 0xe8]         ; 0048650e
    ADD ESP,0x4                         ; 00486514
    LEA EAX,[ESP + 0x24]                ; 00486517
    LEA ESI,[ESP + 0x84]                ; 0048651b
    PUSH EAX                            ; 00486522
    MOVSD ES:EDI,ESI                    ; 00486523
    MOVSD ES:EDI,ESI                    ; 00486524
    MOVSD ES:EDI,ESI                    ; 00486525
    PUSH EBX                            ; 00486526
    LEA ESI,[ESP + 0x14]                ; 00486527
    LEA EDI,[ESP + 0x8]                 ; 0048652b
    CALL core_actor.cpp_FUN_00408d70    ; 0048652f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 00486534
    ADD ESP,0x8                         ; 00486538
    MOVSD ES:EDI,ESI                    ; 0048653b
    MOVSD ES:EDI,ESI                    ; 0048653c
    MOVSD ES:EDI,ESI                    ; 0048653d
    MOV EAX,dword ptr [EBX + 0x444]     ; 0048653e
    MOV dword ptr [ESP + 0x38],EAX      ; 00486544
    LEA EAX,[ESP + 0x30]                ; 00486548
    XOR ECX,ECX                         ; 0048654c
    PUSH EAX                            ; 0048654e
    LEA ESI,[ESP + 0xa0]                ; 0048654f
    LEA EDI,[ESP + 0x58]                ; 00486556
    PUSH EBX                            ; 0048655a
    MOV dword ptr [ESP + 0x38],ECX      ; 0048655b
    MOV dword ptr [ESP + 0x3c],ECX      ; 0048655f
    CALL core_actor.cpp_FUN_00408cf0    ; 00486563
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 00486568
    LEA ESI,[ESP + 0x9c]                ; 0048656b
    FLD float ptr [ESP]                 ; 00486572
    FLD float ptr [ESP + 0x4]           ; 00486575
    MOVSD ES:EDI,ESI                    ; 00486579
    MOVSD ES:EDI,ESI                    ; 0048657a
    MOVSD ES:EDI,ESI                    ; 0048657b
    FLD float ptr [ESP + 0x8]           ; 0048657c
    FLD float ptr [ESP + 0x54]          ; 00486580
    FLD float ptr [ESP + 0x58]          ; 00486584
    FLD float ptr [ESP + 0x5c]          ; 00486588
    LEA EDI,[ESP + 0x60]                ; 0048658c
    LEA ESI,[ESP + 0x90]                ; 00486590
    FXCH ST2                            ; 00486597
    FCHS                                ; 00486599
    FXCH                                ; 0048659b
    FCHS                                ; 0048659d
    FXCH ST2                            ; 0048659f
    FCHS                                ; 004865a1
    FXCH ST5                            ; 004865a3
    FADD float ptr [ESP + 0x54]         ; 004865a5
    FXCH ST4                            ; 004865a9
    FADD float ptr [ESP + 0x58]         ; 004865ab
    FXCH ST3                            ; 004865af
    FADD float ptr [ESP + 0x5c]         ; 004865b1
    FXCH                                ; 004865b5
    FSTP float ptr [ESP + 0x78]         ; 004865b7
    FXCH ST3                            ; 004865bb
    FSTP float ptr [ESP + 0x90]         ; 004865bd
    FXCH                                ; 004865c4
    FSTP float ptr [ESP + 0x94]         ; 004865c6
    FXCH                                ; 004865cd
    FSTP float ptr [ESP + 0x98]         ; 004865cf
    MOVSD ES:EDI,ESI                    ; 004865d6
    MOVSD ES:EDI,ESI                    ; 004865d7
    MOVSD ES:EDI,ESI                    ; 004865d8
    FSTP float ptr [ESP + 0x7c]         ; 004865d9
    LEA EDI,[ESP + 0x3c]                ; 004865dd
    LEA ESI,[ESP + 0x78]                ; 004865e1
    FSTP float ptr [ESP + 0x80]         ; 004865e5
    MOVSD ES:EDI,ESI                    ; 004865ec
    MOVSD ES:EDI,ESI                    ; 004865ed
    MOVSD ES:EDI,ESI                    ; 004865ee
    LEA EAX,[ESP + 0x48]                ; 004865ef
    LEA ESI,[ESP + 0x3c]                ; 004865f3
    CMP EAX,ESI                         ; 004865f7
    JZ 0x00486613                       ; 004865f9
        ;   XREF to: 00486613 (CONDITIONAL_JUMP)  ; LAB_00486613
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004865fb
    MOV dword ptr [ESP + 0x48],EAX      ; 004865ff
    MOV EAX,dword ptr [ESP + 0x40]      ; 00486603
    MOV dword ptr [ESP + 0x4c],EAX      ; 00486607
    MOV EAX,dword ptr [ESP + 0x44]      ; 0048660b
    MOV dword ptr [ESP + 0x50],EAX      ; 0048660f
    FLD float ptr [ESP + 0x4c]          ; 00486613
        ;   Label: LAB_00486613
    FMUL ST0                            ; 00486617
    FLD float ptr [ESP + 0x48]          ; 00486619
    FMUL ST0                            ; 0048661d
    FADDP                               ; 0048661f
    FLD float ptr [ESP + 0x50]          ; 00486621
    FMUL ST0                            ; 00486625
    FADDP                               ; 00486627
    FSQRT                               ; 00486629
    FLDZ                                ; 0048662b
    FXCH                                ; 0048662d
    FSTP float ptr [ESP + 0xa8]         ; 0048662f
    FCOMP float ptr [ESP + 0xa8]        ; 00486636
    FNSTSW AX                           ; 0048663d
    SAHF                                ; 0048663f
    JNC 0x00486719                      ; 00486640
        ;   XREF to: 00486719 (CONDITIONAL_JUMP)  ; LAB_00486719
    FLD1                                ; 00486646
    FLD float ptr [ESP + 0x48]          ; 00486648
    FXCH                                ; 0048664c
    FDIV float ptr [ESP + 0xa8]         ; 0048664e
    FXCH                                ; 00486655
    FMUL ST1                            ; 00486657
    FLD float ptr [ESP + 0x4c]          ; 00486659
    FMUL ST2                            ; 0048665d
    FLD float ptr [ESP + 0x50]          ; 0048665f
    FMULP ST3                           ; 00486663
    FXCH                                ; 00486665
    FSTP float ptr [ESP + 0x48]         ; 00486667
    FSTP float ptr [ESP + 0x4c]         ; 0048666b
    FSTP float ptr [ESP + 0x50]         ; 0048666f
    FLD float ptr [EBX + 0x6d4]         ; 00486673
        ;   Label: LAB_00486673
    FMUL float ptr [0x005d2b86]         ; 00486679 | DAT_005d2b86
    FMUL float ptr [0x005d2b8a]         ; 0048667f | DAT_005d2b8a
    SUB ESP,0x4                         ; 00486685
    FSTP float ptr [ESP]                ; 00486688
    PUSH 0x0                            ; 0048668b
    PUSH 0xff                           ; 0048668d
    PUSH 0x0                            ; 00486692
    LEA EAX,[ESP + 0x70]                ; 00486694
    PUSH 0x3f800000                     ; 00486698
    PUSH EAX                            ; 0048669d
    LEA EAX,[ESP + 0x18]                ; 0048669e
    PUSH EAX                            ; 004866a2
    MOV ECX,dword ptr [0x00614d30]      ; 004866a3 | DAT_00614d30
    PUSH ECX                            ; 004866a9
    LEA EDI,[ESP + 0x38]                ; 004866aa
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0 ; 004866ae
        ;   XREF to: 0049d7e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 004866b3
    MOV dword ptr [EBX + 0x6d8],0x1     ; 004866b6
    LEA ESI,[ESP + 0x6c]                ; 004866c0
    FLD float ptr [ESP + 0x60]          ; 004866c4
    FLD float ptr [ESP + 0x64]          ; 004866c8
    FLD float ptr [ESP + 0x68]          ; 004866cc
    FXCH ST2                            ; 004866d0
    FSUB float ptr [ESP]                ; 004866d2
    FXCH                                ; 004866d5
    FSUB float ptr [ESP + 0x4]          ; 004866d7
    FXCH ST2                            ; 004866db
    FSUB float ptr [ESP + 0x8]          ; 004866dd
    FXCH                                ; 004866e1
    FSTP float ptr [ESP + 0x6c]         ; 004866e3
    FXCH                                ; 004866e7
    FSTP float ptr [ESP + 0x70]         ; 004866e9
    FSTP float ptr [ESP + 0x74]         ; 004866ed
    MOVSD ES:EDI,ESI                    ; 004866f1
    MOVSD ES:EDI,ESI                    ; 004866f2
    MOVSD ES:EDI,ESI                    ; 004866f3
    FLD float ptr [ESP + 0x1c]          ; 004866f4
    FMUL ST0                            ; 004866f8
    FLD float ptr [ESP + 0x18]          ; 004866fa
    FMUL ST0                            ; 004866fe
    FADDP                               ; 00486700
    FLD float ptr [ESP + 0x20]          ; 00486702
    FMUL ST0                            ; 00486706
    FADDP                               ; 00486708
    FSQRT                               ; 0048670a
    FSTP float ptr [EBX + 0x6dc]        ; 0048670c
    MOV ESP,EBP                         ; 00486712
    POP EBP                             ; 00486714
    POP EDI                             ; 00486715
    POP ESI                             ; 00486716
    POP EBX                             ; 00486717
    RET                                 ; 00486718
    XOR EDI,EDI                         ; 00486719
        ;   Label: LAB_00486719
    MOV dword ptr [ESP + 0x4c],EDI      ; 0048671b
    MOV dword ptr [ESP + 0x48],EDI      ; 0048671f
    MOV dword ptr [ESP + 0x50],EDI      ; 00486723
    JMP 0x00486673                      ; 00486727
        ;   XREF to: 00486673 (UNCONDITIONAL_JUMP)  ; LAB_00486673

