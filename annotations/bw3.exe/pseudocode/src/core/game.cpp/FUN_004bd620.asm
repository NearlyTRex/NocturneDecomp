; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bd620(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b82dd
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b7b9
;
; Referenced Globals:
;   undefined4 DAT_005c3540
;   undefined4 DAT_005e06dc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CScript* g_CScriptPtr = 01ed73e0
;   undefined4 DAT_01d22c84
;   undefined4 DAT_01d22c88
;   undefined4 DAT_01d22c8c
;   undefined4 DAT_01d22c90
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_dcamera.cpp_FUN_0044a3e0
;   core_game.cpp_calculateIrisFadeCenter_FUN_004bd6a0
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004bd479
        ;   Label: LAB_004bd479
    MOV EAX,dword ptr [ECX + 0x154]     ; 004bd47a
    LEA ESI,[ESP + 0x1c]                ; 004bd480
    LEA EDI,[ESP + 0x4]                 ; 004bd484
    CALL dword ptr [EAX + 0x1c]         ; 004bd488
    MOV ECX,0x6                         ; 004bd48b
    LEA ESI,[ESP + 0x1c]                ; 004bd490
    ADD ESP,0x4                         ; 004bd494
    MOVSD.REP ES:EDI,ESI                ; 004bd497
    MOV EDX,ESP                         ; 004bd499
    FLD float ptr [ESP]                 ; 004bd49b
    FLD float ptr [ESP + 0x4]           ; 004bd49e
    FLD float ptr [ESP + 0x8]           ; 004bd4a2
    LEA EDI,[ESP + 0x90]                ; 004bd4a6
    LEA ESI,[ESP + 0x6c]                ; 004bd4ad
    FXCH ST2                            ; 004bd4b1
    FADD float ptr [EDX + 0xc]          ; 004bd4b3
    FXCH                                ; 004bd4b6
    FADD float ptr [EDX + 0x10]         ; 004bd4b8
    FXCH ST2                            ; 004bd4bb
    FADD float ptr [EDX + 0x14]         ; 004bd4bd
    FXCH                                ; 004bd4c0
    FSTP float ptr [ESP + 0x6c]         ; 004bd4c2
    FXCH                                ; 004bd4c6
    FSTP float ptr [ESP + 0x70]         ; 004bd4c8
    FSTP float ptr [ESP + 0x74]         ; 004bd4cc
    MOVSD ES:EDI,ESI                    ; 004bd4d0
    MOVSD ES:EDI,ESI                    ; 004bd4d1
    MOVSD ES:EDI,ESI                    ; 004bd4d2
    FLD float ptr [0x005c3540]          ; 004bd4d3 | DAT_005c3540
    FLD float ptr [ESP + 0x90]          ; 004bd4d9
    FMUL ST1                            ; 004bd4e0
    FLD float ptr [ESP + 0x94]          ; 004bd4e2
    FMUL ST2                            ; 004bd4e9
    LEA EAX,[ESP + 0x60]                ; 004bd4eb
    FLD float ptr [ESP + 0x98]          ; 004bd4ef
    FMULP ST3                           ; 004bd4f6
    PUSH EAX                            ; 004bd4f8
    MOV EAX,[0x006039e0]                ; 004bd4f9 | g_CScriptPtr
    LEA EDI,[ESP + 0x64]                ; 004bd4fe
    LEA ESI,[ESP + 0x58]                ; 004bd502
    FXCH                                ; 004bd506
    FSTP float ptr [ESP + 0x58]         ; 004bd508
    FSTP float ptr [ESP + 0x5c]         ; 004bd50c
    FSTP float ptr [ESP + 0x60]         ; 004bd510
    MOVSD ES:EDI,ESI                    ; 004bd514
    MOVSD ES:EDI,ESI                    ; 004bd515
    MOVSD ES:EDI,ESI                    ; 004bd516
    MOV EBX,dword ptr [EAX + 0xc]       ; 004bd517
    PUSH EBX                            ; 004bd51a
    LEA ESI,[ESP + 0x80]                ; 004bd51b
    LEA EDI,[ESP + 0x44]                ; 004bd522
    CALL core_actor.cpp_FUN_00408b80    ; 004bd526
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x80]                ; 004bd52b
    LEA EBX,[ESP + 0x38]                ; 004bd532
    ADD ESP,0x8                         ; 004bd536
    LEA EAX,[ESP + 0x3c]                ; 004bd539
    MOVSD ES:EDI,ESI                    ; 004bd53d
    MOVSD ES:EDI,ESI                    ; 004bd53e
    MOVSD ES:EDI,ESI                    ; 004bd53f
    FLD float ptr [EAX]                 ; 004bd540
    FMUL float ptr [0x005e06dc]         ; 004bd542 | DAT_005e06dc
    FISTP dword ptr [EBX]               ; 004bd548
    FLD float ptr [EAX + 0x4]           ; 004bd54a
    FMUL float ptr [0x005e06dc]         ; 004bd54d | DAT_005e06dc
    FISTP dword ptr [EBX + 0x4]         ; 004bd553
    FLD float ptr [EAX + 0x8]           ; 004bd556
    FMUL float ptr [0x005e06dc]         ; 004bd559 | DAT_005e06dc
    FISTP dword ptr [EBX + 0x8]         ; 004bd55f
    LEA EAX,[ESP + 0x30]                ; 004bd562
    PUSH EAX                            ; 004bd566
    PUSH 0x2038f4c                      ; 004bd567
    LEA ESI,[ESP + 0x8c]                ; 004bd56c
    LEA EDI,[ESP + 0x50]                ; 004bd573
    CALL core_dcamera.cpp_FUN_0044a3e0  ; 004bd577
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044a3e0()
    LEA ESI,[ESP + 0x8c]                ; 004bd57c
    ADD ESP,0x8                         ; 004bd583
    MOVSD ES:EDI,ESI                    ; 004bd586
    MOVSD ES:EDI,ESI                    ; 004bd587
    MOVSD ES:EDI,ESI                    ; 004bd588
    CMP dword ptr [ESP + 0x50],0x0      ; 004bd589
    JZ 0x004bd6bb                       ; 004bd58e
        ;   XREF to: 004bd6bb (CONDITIONAL_JUMP)  ; LAB_004bd6bb
    MOV EAX,dword ptr [ESP + 0x48]      ; 004bd594
    MOV EDX,EAX                         ; 004bd598
    SAR EDX,0x1f                        ; 004bd59a
    SHL EDX,0x10                        ; 004bd59d
    SBB EAX,EDX                         ; 004bd5a0
    SAR EAX,0x10                        ; 004bd5a2
    MOV [0x01d22c8c],EAX                ; 004bd5a5 | DAT_01d22c8c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004bd5aa
    MOV EDX,EAX                         ; 004bd5ae
    SAR EDX,0x1f                        ; 004bd5b0
    SHL EDX,0x10                        ; 004bd5b3
    SBB EAX,EDX                         ; 004bd5b6
    SAR EAX,0x10                        ; 004bd5b8
    MOV EDI,dword ptr [0x005fba1c]      ; 004bd5bb | DAT_005fba1c
    MOV [0x01d22c90],EAX                ; 004bd5c1 | DAT_01d22c90
    CMP EDI,0x1e0                       ; 004bd5c6
    JLE 0x004bd6bb                      ; 004bd5cc
        ;   XREF to: 004bd6bb (CONDITIONAL_JUMP)  ; LAB_004bd6bb
    MOV EBP,dword ptr [0x005fba18]      ; 004bd5d2 | DAT_005fba18
    MOV EDX,dword ptr [0x01d22c8c]      ; 004bd5d8 | DAT_01d22c8c
    IMUL EDX,EBP                        ; 004bd5de
    MOV EBX,0x280                       ; 004bd5e1
    MOV EAX,EDX                         ; 004bd5e6
    SAR EDX,0x1f                        ; 004bd5e8
    IDIV EBX                            ; 004bd5eb
    MOV EDX,dword ptr [0x01d22c90]      ; 004bd5ed | DAT_01d22c90
    IMUL EDX,EDI                        ; 004bd5f3
    MOV EBX,0x1e0                       ; 004bd5f6
    MOV [0x01d22c8c],EAX                ; 004bd5fb | DAT_01d22c8c
    MOV EAX,EDX                         ; 004bd600
    SAR EDX,0x1f                        ; 004bd602
    IDIV EBX                            ; 004bd605
    MOV [0x01d22c90],EAX                ; 004bd607 | DAT_01d22c90
    ADD ESP,0x9c                        ; 004bd60c
    POP EBP                             ; 004bd612
    POP EDI                             ; 004bd613
    POP ESI                             ; 004bd614
    POP EBX                             ; 004bd615
    RET                                 ; 004bd616
    MOV dword ptr [0x01d22c84],0x1      ; 004bd620 | DAT_01d22c84
        ;   Label: core_game.cpp_FUN_004bd620
    MOV EDX,dword ptr [0x005fba18]      ; 004bd62a | DAT_005fba18
    MOV EAX,EDX                         ; 004bd630
    SAR EDX,0x1f                        ; 004bd632
    SUB EAX,EDX                         ; 004bd635
    SAR EAX,0x1                         ; 004bd637
    MOV EDX,dword ptr [0x005fba1c]      ; 004bd639 | DAT_005fba1c
    MOV [0x01d22c8c],EAX                ; 004bd63f | DAT_01d22c8c
    MOV EAX,EDX                         ; 004bd644
    SAR EDX,0x1f                        ; 004bd646
    SUB EAX,EDX                         ; 004bd649
    SAR EAX,0x1                         ; 004bd64b
    XOR ECX,ECX                         ; 004bd64d
    MOV dword ptr [0x01d22c88],ECX      ; 004bd64f | DAT_01d22c88
    MOV [0x01d22c90],EAX                ; 004bd655 | DAT_01d22c90
    JMP 0x004bd6a0                      ; 004bd65a
        ;   XREF to: 004bd6a0 (UNCONDITIONAL_CALL)

