; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(int param_1)
;
;
; XREF[4]:
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0 at 0041f103
;   core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240 at 0041f2b7
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041e430 at 0041e4b3
;   core_boxactor.cpp_FUN_0041ef90 at 0041f08f
;
; Referenced Globals:
;   float FLOAT_00579809 = 0.5
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e4d0
        ;   Label: core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0
    SUB ESP,0x48                        ; 0041e4d1
    MOV EBX,dword ptr [ESP + 0x50]      ; 0041e4d4
    FLD float ptr [EBX + 0x388]         ; 0041e4d8
    FLDZ                                ; 0041e4de
    MOV dword ptr [EBX + 0x5e0],0x0     ; 0041e4e0
    FCOMPP                              ; 0041e4ea
    FNSTSW AX                           ; 0041e4ec
    SAHF                                ; 0041e4ee
    JNC 0x0041e513                      ; 0041e4ef
        ;   XREF to: 0041e513 (CONDITIONAL_JUMP)  ; LAB_0041e513
    CMP dword ptr [EBX + 0x68],0x78a123 ; 0041e4f1 | DAT_0078a123
    JNZ 0x0041e513                      ; 0041e4f8
        ;   XREF to: 0041e513 (CONDITIONAL_JUMP)  ; LAB_0041e513
    LEA EAX,[EBX + 0x150]               ; 0041e4fa
    CMP dword ptr [EAX + 0x178],0x0     ; 0041e500
    JNZ 0x0041e518                      ; 0041e507
        ;   XREF to: 0041e518 (CONDITIONAL_JUMP)  ; LAB_0041e518
    MOV dword ptr [EBX + 0x5e0],0xffffffff ; 0041e509
    ADD ESP,0x48                        ; 0041e513
        ;   Label: LAB_0041e513
    POP EBX                             ; 0041e516
    RET                                 ; 0041e517
    MOV EAX,ESP                         ; 0041e518
        ;   Label: LAB_0041e518
    PUSH EAX                            ; 0041e51a
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0041e51b
    PUSH EBX                            ; 0041e521
    CALL dword ptr [EDX + 0x14]         ; 0041e522
    ADD ESP,0x8                         ; 0041e525
    FLD float ptr [ESP + 0x4]           ; 0041e528
    FLD float ptr [ESP]                 ; 0041e52c
    FADD float ptr [ESP + 0xc]          ; 0041e52f
    FXCH                                ; 0041e533
    FADD float ptr [ESP + 0x10]         ; 0041e535
    FXCH                                ; 0041e539
    FST float ptr [ESP + 0x30]          ; 0041e53b
    FLD float ptr [0x00579809]          ; 0041e53f | FLOAT_00579809
    FXCH                                ; 0041e545
    FMUL ST1                            ; 0041e547
    FXCH ST2                            ; 0041e549
    FST float ptr [ESP + 0x34]          ; 0041e54b
    FMUL ST1                            ; 0041e54f
    LEA EAX,[ESP + 0x24]                ; 0041e551
    FLD float ptr [ESP + 0x8]           ; 0041e555
    PUSH EAX                            ; 0041e559
    FADD float ptr [ESP + 0x18]         ; 0041e55a
    LEA EAX,[ESP + 0x1c]                ; 0041e55e
    FST float ptr [ESP + 0x3c]          ; 0041e562
    PUSH EAX                            ; 0041e566
    FMULP ST2                           ; 0041e567
    PUSH EBX                            ; 0041e569
    FXCH ST2                            ; 0041e56a
    FSTP float ptr [ESP + 0x30]         ; 0041e56c
    FXCH                                ; 0041e570
    FSTP float ptr [ESP + 0x34]         ; 0041e572
    FSTP float ptr [ESP + 0x38]         ; 0041e576
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041e57a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0041e57f
    LEA EAX,[ESP + 0x3c]                ; 0041e582
    FLD float ptr [ESP + 0xc]           ; 0041e586
    FLD float ptr [ESP + 0x10]          ; 0041e58a
    FLD float ptr [ESP + 0x14]          ; 0041e58e
    FXCH ST2                            ; 0041e592
    FSUB float ptr [ESP]                ; 0041e594
    FXCH                                ; 0041e597
    FSUB float ptr [ESP + 0x4]          ; 0041e599
    FXCH ST2                            ; 0041e59d
    FSUB float ptr [ESP + 0x8]          ; 0041e59f
    FXCH                                ; 0041e5a3
    FSTP float ptr [ESP + 0x3c]         ; 0041e5a5
    FXCH                                ; 0041e5a9
    FSTP float ptr [ESP + 0x40]         ; 0041e5ab
    FSTP float ptr [ESP + 0x44]         ; 0041e5af
    PUSH dword ptr [EBX + 0x388]        ; 0041e5b3
    PUSH EAX                            ; 0041e5b9
    LEA EAX,[EBX + 0x30]                ; 0041e5ba
    PUSH EAX                            ; 0041e5bd
    LEA EAX,[ESP + 0x24]                ; 0041e5be
    PUSH EAX                            ; 0041e5c2
    ADD EBX,0x38c                       ; 0041e5c3
    PUSH EBX                            ; 0041e5c9
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 0041e5ca
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_setupCorners_FUN_0041a6e0()
    ADD ESP,0x14                        ; 0041e5cf
    ADD ESP,0x48                        ; 0041e5d2
    POP EBX                             ; 0041e5d5
    RET                                 ; 0041e5d6

