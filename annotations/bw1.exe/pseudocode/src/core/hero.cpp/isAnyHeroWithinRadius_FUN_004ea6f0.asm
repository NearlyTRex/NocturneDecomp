; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(float *param_1,float param_2)
;
;
; XREF[4]:
;   core_fire.cpp_initProcess_FUN_004b2880 at 004b28e2
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400 at 0050440e
;   core_trash.cpp_FUN_0059a370 at 0059a38b
;   core_vampboss.cpp_FUN_005a5550 at 005a6634
;
; Referenced Globals:
;   undefined4 DAT_01d06aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea6f0
        ;   Label: core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0
    PUSH ESI                            ; 004ea6f1
    SUB ESP,0xc                         ; 004ea6f2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ea6f5
    FLD float ptr [ESP + 0x1c]          ; 004ea6f9
    FMUL ST0                            ; 004ea6fd
    MOV EDX,dword ptr [0x01d06aa0]      ; 004ea6ff | DAT_01d06aa0
    FSTP float ptr [ESP + 0x1c]         ; 004ea705
    TEST EDX,EDX                        ; 004ea709
    JLE 0x004ea729                      ; 004ea70b
        ;   XREF to: 004ea729 (CONDITIONAL_JUMP)  ; LAB_004ea729
    MOV EBX,dword ptr [0x01d06aa0]      ; 004ea70d | DAT_01d06aa0
    XOR EDX,EDX                         ; 004ea713
    SHL EBX,0x2                         ; 004ea715
    MOV ESI,dword ptr [EDX + 0x1d06aa4] ; 004ea718
        ;   Label: LAB_004ea718
    TEST ESI,ESI                        ; 004ea71e
    JNZ 0x004ea731                      ; 004ea720
        ;   XREF to: 004ea731 (CONDITIONAL_JUMP)  ; LAB_004ea731
    ADD EDX,0x4                         ; 004ea722
        ;   Label: LAB_004ea722
    CMP EDX,EBX                         ; 004ea725
    JL 0x004ea718                       ; 004ea727
        ;   XREF to: 004ea718 (CONDITIONAL_JUMP)  ; LAB_004ea718
    XOR EAX,EAX                         ; 004ea729
        ;   Label: LAB_004ea729
    ADD ESP,0xc                         ; 004ea72b
    POP ESI                             ; 004ea72e
    POP EBX                             ; 004ea72f
    RET                                 ; 004ea730
    MOV EAX,ESI                         ; 004ea731
        ;   Label: LAB_004ea731
    FLD float ptr [EAX + 0x20]          ; 004ea733
    FSUB float ptr [ECX]                ; 004ea736
    FMUL ST0                            ; 004ea738
    FLD float ptr [EAX + 0x24]          ; 004ea73a
    FSUB float ptr [ECX + 0x4]          ; 004ea73d
    FMUL ST0                            ; 004ea740
    FLD float ptr [EAX + 0x28]          ; 004ea742
    FXCH                                ; 004ea745
    FADDP ST2,ST0                       ; 004ea747
    FSUB float ptr [ECX + 0x8]          ; 004ea749
    FMUL ST0                            ; 004ea74c
    FADDP                               ; 004ea74e
    FCOMP float ptr [ESP + 0x1c]        ; 004ea750
    FNSTSW AX                           ; 004ea754
    SAHF                                ; 004ea756
    JNC 0x004ea722                      ; 004ea757
        ;   XREF to: 004ea722 (CONDITIONAL_JUMP)  ; LAB_004ea722
    MOV EAX,0x1                         ; 004ea759
    ADD ESP,0xc                         ; 004ea75e
    POP ESI                             ; 004ea761
    POP EBX                             ; 004ea762
    RET                                 ; 004ea763

