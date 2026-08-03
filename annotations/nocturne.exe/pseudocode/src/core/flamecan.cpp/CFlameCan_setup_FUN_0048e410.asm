; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; Referenced Globals:
;   double DOUBLE_0058164f = 2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e410
        ;   Label: core_flamecan.cpp_CFlameCan_setup_FUN_0048e410
    PUSH EBP                            ; 0048e411
    MOV EBP,ESP                         ; 0048e412
    SUB ESP,0x40                        ; 0048e414
    AND ESP,0xfffffff8                  ; 0048e417
    MOV EBX,dword ptr [EBP + 0xc]       ; 0048e41a
    PUSH EBX                            ; 0048e41d
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0048e41e
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048e423
    LEA EAX,[EBX + 0x150]               ; 0048e426
    PUSH EAX                            ; 0048e42c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0048e42d
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048e432
    LEA EAX,[ESP + 0x10]                ; 0048e435
    PUSH EAX                            ; 0048e439
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0048e43a
    PUSH EBX                            ; 0048e440
    MOV dword ptr [EBX + 0x4e4],0x0     ; 0048e441
    CALL dword ptr [EDX + 0x14]         ; 0048e44b
    LEA EDX,[EBX + 0x358]               ; 0048e44e
    LEA EAX,[EBX + 0x20]                ; 0048e454
    MOV ECX,dword ptr [EAX]             ; 0048e457
    MOV dword ptr [EDX],ECX             ; 0048e459
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048e45b
    MOV dword ptr [EDX + 0x4],ECX       ; 0048e45e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0048e461
    MOV dword ptr [EDX + 0x8],ECX       ; 0048e464
    MOV EAX,dword ptr [EAX + 0xc]       ; 0048e467
    ADD ESP,0x8                         ; 0048e46a
    MOV dword ptr [EDX + 0xc],EAX       ; 0048e46d
    FLD float ptr [ESP + 0x20]          ; 0048e470
    FSUB float ptr [ESP + 0x14]         ; 0048e474
    FADD float ptr [EBX + 0x35c]        ; 0048e478
    FSTP float ptr [EBX + 0x35c]        ; 0048e47e
    FLD float ptr [ESP + 0x1c]          ; 0048e484
    FLD float ptr [ESP + 0x20]          ; 0048e488
    FLD float ptr [ESP + 0x24]          ; 0048e48c
    FXCH ST2                            ; 0048e490
    FSUB float ptr [ESP + 0x10]         ; 0048e492
    FXCH                                ; 0048e496
    FSUB float ptr [ESP + 0x14]         ; 0048e498
    FXCH ST2                            ; 0048e49c
    FSUB float ptr [ESP + 0x18]         ; 0048e49e
    FXCH                                ; 0048e4a2
    FSTP float ptr [ESP + 0x34]         ; 0048e4a4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048e4a8
    FXCH                                ; 0048e4ac
    FSTP float ptr [ESP + 0x38]         ; 0048e4ae
    MOV dword ptr [ESP + 0x28],EAX      ; 0048e4b2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048e4b6
    FSTP float ptr [ESP + 0x3c]         ; 0048e4ba
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048e4be
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048e4c2
    LEA EDX,[EBX + 0x488]               ; 0048e4c6
    MOV dword ptr [ESP + 0x30],EAX      ; 0048e4cc
    LEA EAX,[ESP + 0x28]                ; 0048e4d0
    CMP EDX,EAX                         ; 0048e4d4
    JNZ 0x0048e52c                      ; 0048e4d6
        ;   XREF to: 0048e52c (CONDITIONAL_JUMP)  ; LAB_0048e52c
    FLD float ptr [EBX + 0x488]         ; 0048e4d8
        ;   Label: LAB_0048e4d8
    FSTP double ptr [ESP + 0x8]         ; 0048e4de
    MOV dword ptr [EBX + 0x4d8],0x0     ; 0048e4e2
    FLD double ptr [ESP + 0x8]          ; 0048e4ec
    FMUL double ptr [0x0058164f]        ; 0048e4f0 | DOUBLE_0058164f
    FLD float ptr [EBX + 0x48c]         ; 0048e4f6
    MOV dword ptr [EBX + 0x4dc],0x0     ; 0048e4fc
    FXCH                                ; 0048e506
    FSTP double ptr [ESP]               ; 0048e508
    FCOMP double ptr [ESP]              ; 0048e50b
    FNSTSW AX                           ; 0048e50e
    SAHF                                ; 0048e510
    JC 0x0048e542                       ; 0048e511
        ;   XREF to: 0048e542 (CONDITIONAL_JUMP)  ; LAB_0048e542
    MOV dword ptr [EBX + 0x5d4],0x0     ; 0048e513
        ;   Label: LAB_0048e513
    MOV dword ptr [EBX + 0xfc],0x1      ; 0048e51d
    MOV ESP,EBP                         ; 0048e527
    POP EBP                             ; 0048e529
    POP EBX                             ; 0048e52a
    RET                                 ; 0048e52b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048e52c
        ;   Label: LAB_0048e52c
    MOV dword ptr [EDX],EAX             ; 0048e530
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0048e532
    MOV dword ptr [EDX + 0x4],EAX       ; 0048e536
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048e539
    MOV dword ptr [EDX + 0x8],EAX       ; 0048e53d
    JMP 0x0048e4d8                      ; 0048e540
        ;   XREF to: 0048e4d8 (UNCONDITIONAL_JUMP)  ; LAB_0048e4d8
    FLD double ptr [ESP]                ; 0048e542
        ;   Label: LAB_0048e542
    FSTP float ptr [EBX + 0x48c]        ; 0048e545
    JMP 0x0048e513                      ; 0048e54b
        ;   XREF to: 0048e513 (UNCONDITIONAL_JUMP)  ; LAB_0048e513

