; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 004224f1
;   core_bugs.cpp_CBugs_setup_FUN_004211e0 at 00421417
;   core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0 at 004227a5
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00422050 at 00422151
;
; Referenced Globals:
;   float FLOAT_00579d85 = -0.3333333
;   float FLOAT_00579d89 = 0.3333333
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423680
        ;   Label: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
    PUSH ESI                            ; 00423681
    PUSH EDI                            ; 00423682
    PUSH EBP                            ; 00423683
    MOV EDI,dword ptr [ESP + 0x14]      ; 00423684
    LEA EBX,[EDI + 0x19834]             ; 00423688
    LEA ESI,[EDI + 0xbd34]              ; 0042368e
    MOV EAX,EBX                         ; 00423694
    MOV EBP,ESI                         ; 00423696
    CMP EBX,ESI                         ; 00423698
    JNZ 0x0042376d                      ; 0042369a
        ;   XREF to: 0042376d (CONDITIONAL_JUMP)  ; LAB_0042376d
    LEA EBX,[EAX + 0xc]                 ; 004236a0
        ;   Label: LAB_004236a0
    CMP EBX,EBP                         ; 004236a3
    JZ 0x004236b8                       ; 004236a5
        ;   XREF to: 004236b8 (CONDITIONAL_JUMP)  ; LAB_004236b8
    MOV EAX,dword ptr [EBP]             ; 004236a7
    MOV dword ptr [EBX],EAX             ; 004236aa
    MOV EAX,dword ptr [EBP + 0x4]       ; 004236ac
    MOV dword ptr [EBX + 0x4],EAX       ; 004236af
    MOV EAX,dword ptr [EBP + 0x8]       ; 004236b2
    MOV dword ptr [EBX + 0x8],EAX       ; 004236b5
    MOV ESI,0x1                         ; 004236b8
        ;   Label: LAB_004236b8
    CMP ESI,dword ptr [EDI + 0xbd28]    ; 004236bd
    JGE 0x004236f0                      ; 004236c3
        ;   XREF to: 004236f0 (CONDITIONAL_JUMP)  ; LAB_004236f0
    LEA EBP,[EDI + 0x19834]             ; 004236c5
    LEA EBX,[EDI + 0xbd74]              ; 004236cb
    PUSH EBX                            ; 004236d1
        ;   Label: LAB_004236d1
    PUSH EBP                            ; 004236d2
    INC ESI                             ; 004236d3
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 004236d4
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD EBX,0x40                        ; 004236d9
    MOV ECX,dword ptr [EDI + 0xbd28]    ; 004236dc
    ADD ESP,0x8                         ; 004236e2
    CMP ESI,ECX                         ; 004236e5
    JL 0x004236d1                       ; 004236e7
        ;   XREF to: 004236d1 (CONDITIONAL_JUMP)  ; LAB_004236d1
    LEA EAX,[EAX]                       ; 004236e9
    NOP                                 ; 004236ef
    FLD float ptr [EDI + 0x19834]       ; 004236f0
        ;   Label: LAB_004236f0
    FLD float ptr [EDI + 0x19838]       ; 004236f6
    FLD float ptr [EDI + 0x1983c]       ; 004236fc
    FLD float ptr [EDI + 0x19840]       ; 00423702
    FLD float ptr [EDI + 0x19844]       ; 00423708
    FLD float ptr [EDI + 0x19848]       ; 0042370e
    FXCH ST5                            ; 00423714
    FLD float ptr [0x00579d85]          ; 00423716 | FLOAT_00579d85
    FXCH                                ; 0042371c
    FADD ST0,ST1                        ; 0042371e
    FXCH ST5                            ; 00423720
    FADD ST0,ST1                        ; 00423722
    FXCH ST4                            ; 00423724
    FADDP                               ; 00423726
    FXCH ST2                            ; 00423728
    FLD float ptr [0x00579d89]          ; 0042372a | FLOAT_00579d89
    FXCH                                ; 00423730
    FADD ST0,ST1                        ; 00423732
    FXCH ST2                            ; 00423734
    FADD ST0,ST1                        ; 00423736
    FXCH ST6                            ; 00423738
    FADDP                               ; 0042373a
    FXCH ST3                            ; 0042373c
    FSTP float ptr [EDI + 0x19838]      ; 0042373e
    FXCH                                ; 00423744
    FSTP float ptr [EDI + 0x1983c]      ; 00423746
    FSTP float ptr [EDI + 0x19840]      ; 0042374c
    FXCH ST2                            ; 00423752
    FSTP float ptr [EDI + 0x19844]      ; 00423754
    FXCH                                ; 0042375a
    FSTP float ptr [EDI + 0x19848]      ; 0042375c
    FSTP float ptr [EDI + 0x19834]      ; 00423762
    POP EBP                             ; 00423768
    POP EDI                             ; 00423769
    POP ESI                             ; 0042376a
    POP EBX                             ; 0042376b
    RET                                 ; 0042376c
    MOV EDX,dword ptr [ESI]             ; 0042376d
        ;   Label: LAB_0042376d
    MOV dword ptr [EBX],EDX             ; 0042376f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00423771
    MOV dword ptr [EBX + 0x4],EDX       ; 00423774
    MOV EDX,dword ptr [ESI + 0x8]       ; 00423777
    MOV dword ptr [EBX + 0x8],EDX       ; 0042377a
    JMP 0x004236a0                      ; 0042377d
        ;   XREF to: 004236a0 (UNCONDITIONAL_JUMP)  ; LAB_004236a0

