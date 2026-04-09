; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_setup_FUN_00448530(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00619b02 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448530
        ;   Label: core_crate.cpp_CCrate_setup_FUN_00448530
    SUB ESP,0x20                        ; 00448531
    MOV EBX,dword ptr [ESP + 0x28]      ; 00448534
    PUSH EBX                            ; 00448538
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00448539
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044853e
    LEA EAX,[EBX + 0x158]               ; 00448541
    PUSH EAX                            ; 00448547
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00448548
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044854d
    MOV EAX,ESP                         ; 00448550
    PUSH EAX                            ; 00448552
    MOV EDX,dword ptr [EBX + 0x154]     ; 00448553
    PUSH EBX                            ; 00448559
    CALL dword ptr [EDX + 0x14]         ; 0044855a
    ADD ESP,0x8                         ; 0044855d
    FLD float ptr [ESP + 0x14]          ; 00448560
    FLD float ptr [ESP + 0xc]           ; 00448564
    FSUB float ptr [ESP]                ; 00448568
    FXCH                                ; 0044856b
    FSUB float ptr [ESP + 0x8]          ; 0044856d
    FXCH                                ; 00448571
    FLD double ptr [0x00619b02]         ; 00448573 | DOUBLE_00619b02
    FXCH                                ; 00448579
    FMUL ST1                            ; 0044857b
    FXCH ST2                            ; 0044857d
    FMULP                               ; 0044857f
    FXCH                                ; 00448581
    FSTP float ptr [ESP + 0x1c]         ; 00448583
    FST float ptr [ESP + 0x18]          ; 00448587
    FCOMP float ptr [ESP + 0x1c]        ; 0044858b
    FNSTSW AX                           ; 0044858f
    SAHF                                ; 00448591
    JBE 0x004485f3                      ; 00448592
        ;   XREF to: 004485f3 (CONDITIONAL_JUMP)  ; LAB_004485f3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00448594
    MOV dword ptr [EBX + 0x2d8],EAX     ; 00448598
        ;   Label: LAB_00448598
    MOV dword ptr [EBX + 0x2e0],0xc61c3f9a ; 0044859e
    MOV dword ptr [EBX + 0x2e4],0xc61c3f9a ; 004485a8
    MOV dword ptr [EBX + 0x2e8],0xc61c3f9a ; 004485b2
    MOV dword ptr [EBX + 0x2ec],0xc61c3f9a ; 004485bc
    MOV dword ptr [EBX + 0x2f4],0xc61c3f9a ; 004485c6
    MOV dword ptr [EBX + 0x2f0],0xc61c3f9a ; 004485d0
    MOV dword ptr [EBX + 0x2f8],0x461c3f9a ; 004485da
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004485e4
    ADD ESP,0x20                        ; 004485ee
    POP EBX                             ; 004485f1
    RET                                 ; 004485f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004485f3
        ;   Label: LAB_004485f3
    JMP 0x00448598                      ; 004485f7
        ;   XREF to: 00448598 (UNCONDITIONAL_JUMP)  ; LAB_00448598

