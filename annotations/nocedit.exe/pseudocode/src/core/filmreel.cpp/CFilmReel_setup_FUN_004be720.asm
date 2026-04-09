; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004be720(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00629add = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be720
        ;   Label: core_filmreel.cpp_CFilmReel_setup_FUN_004be720
    SUB ESP,0x20                        ; 004be721
    MOV EBX,dword ptr [ESP + 0x28]      ; 004be724
    PUSH EBX                            ; 004be728
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004be729
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004be72e
    LEA EAX,[EBX + 0x158]               ; 004be731
    PUSH EAX                            ; 004be737
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004be738
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004be73d
    MOV EAX,ESP                         ; 004be740
    PUSH EAX                            ; 004be742
    MOV EDX,dword ptr [EBX + 0x154]     ; 004be743
    PUSH EBX                            ; 004be749
    CALL dword ptr [EDX + 0x14]         ; 004be74a
    ADD ESP,0x8                         ; 004be74d
    FLD float ptr [ESP + 0x14]          ; 004be750
    FLD float ptr [ESP + 0xc]           ; 004be754
    FSUB float ptr [ESP]                ; 004be758
    FXCH                                ; 004be75b
    FSUB float ptr [ESP + 0x8]          ; 004be75d
    FXCH                                ; 004be761
    FLD double ptr [0x00629add]         ; 004be763 | DOUBLE_00629add
    FXCH                                ; 004be769
    FMUL ST1                            ; 004be76b
    FXCH ST2                            ; 004be76d
    FMULP                               ; 004be76f
    FXCH                                ; 004be771
    FSTP float ptr [ESP + 0x1c]         ; 004be773
    FST float ptr [ESP + 0x18]          ; 004be777
    FCOMP float ptr [ESP + 0x1c]        ; 004be77b
    FNSTSW AX                           ; 004be77f
    SAHF                                ; 004be781
    JBE 0x004be79d                      ; 004be782
        ;   XREF to: 004be79d (CONDITIONAL_JUMP)  ; LAB_004be79d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004be784
    MOV dword ptr [EBX + 0x2f8],EAX     ; 004be788
        ;   Label: LAB_004be788
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004be78e
    ADD ESP,0x20                        ; 004be798
    POP EBX                             ; 004be79b
    RET                                 ; 004be79c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004be79d
        ;   Label: LAB_004be79d
    JMP 0x004be788                      ; 004be7a1
        ;   XREF to: 004be788 (UNCONDITIONAL_JUMP)  ; LAB_004be788

