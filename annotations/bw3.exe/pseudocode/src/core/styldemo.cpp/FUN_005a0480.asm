; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_styldemo_cpp_FUN_005a0480(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_styldemo.cpp_FUN_0059e600 at 0059ff46
;
; Referenced Globals:
;   void* switchdataD_005a046c = 005a05a8
;   undefined4 s_Casting_d_005da53d+1
;   undefined4 DAT_005da54e
;   undefined4 DAT_005da556
;   undefined4 DAT_005e84dc
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfa0
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_vecdir.cpp_FUN_00576250
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0480
        ;   Label: core_styldemo.cpp_FUN_005a0480
    PUSH ESI                            ; 005a0481
    PUSH EDI                            ; 005a0482
    PUSH EBP                            ; 005a0483
    SUB ESP,0x70                        ; 005a0484
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a0487
    FLD float ptr [EBX + 0xcde0]        ; 005a048e
    FLDZ                                ; 005a0494
    FCOMPP                              ; 005a0496
    FNSTSW AX                           ; 005a0498
    SAHF                                ; 005a049a
    JNC 0x005a04a7                      ; 005a049b
        ;   XREF to: 005a04a7 (CONDITIONAL_JUMP)  ; LAB_005a04a7
    XOR EAX,EAX                         ; 005a049d
        ;   Label: LAB_005a049d
    ADD ESP,0x70                        ; 005a049f
    POP EBP                             ; 005a04a2
    POP EDI                             ; 005a04a3
    POP ESI                             ; 005a04a4
    POP EBX                             ; 005a04a5
    RET                                 ; 005a04a6
    LEA EBP,[EBX + 0x158]               ; 005a04a7
        ;   Label: LAB_005a04a7
    PUSH EBP                            ; 005a04ad
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005a04ae
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a04b3
    PUSH 0x64                           ; 005a04b6
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a04b8
    PUSH 0x0                            ; 005a04bb
    MOV dword ptr [ESP + 0x6c],EAX      ; 005a04bd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005a04c1
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 005a04c6
    ADD ESP,0x8                         ; 005a04ca
    FLD float ptr [0x005e84dc]          ; 005a04cd | DAT_005e84dc
    MOV dword ptr [ESP + 0x60],EAX      ; 005a04d3
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a04d7
    FADD double ptr [0x005da54e]        ; 005a04de | DAT_005da54e
    MOV dword ptr [ESP + 0x6c],EAX      ; 005a04e4
    LEA ESI,[EBX + 0x20]                ; 005a04e8
    FILD dword ptr [ESP + 0x6c]         ; 005a04eb
    FCOMPP                              ; 005a04ef
    FNSTSW AX                           ; 005a04f1
    SAHF                                ; 005a04f3
    JBE 0x005a05e9                      ; 005a04f4
        ;   XREF to: 005a05e9 (CONDITIONAL_JUMP)  ; LAB_005a05e9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005a04fa
    LEA EDI,[ESP + 0x30]                ; 005a0500
    FLD float ptr [EAX + 0x24]          ; 005a0504
    FLD float ptr [EAX + 0x28]          ; 005a0507
    FLD float ptr [EAX + 0x20]          ; 005a050a
    LEA EAX,[ESP + 0x30]                ; 005a050d
    FSUB float ptr [ESI]                ; 005a0511
    FXCH ST2                            ; 005a0513
    FSUB float ptr [ESI + 0x4]          ; 005a0515
    FXCH                                ; 005a0518
    FSUB float ptr [ESI + 0x8]          ; 005a051a
    FXCH ST2                            ; 005a051d
    FSTP float ptr [ESP + 0x3c]         ; 005a051f
    FSTP float ptr [ESP + 0x40]         ; 005a0523
    LEA ESI,[ESP + 0x3c]                ; 005a0527
    FSTP float ptr [ESP + 0x44]         ; 005a052b
    MOVSD ES:EDI,ESI                    ; 005a052f
    MOVSD ES:EDI,ESI                    ; 005a0530
    MOVSD ES:EDI,ESI                    ; 005a0531
    PUSH EAX                            ; 005a0532
    LEA ESI,[ESP + 0x4]                 ; 005a0533
    LEA EDI,[ESP + 0x28]                ; 005a0537
    CALL core_vecdir.cpp_FUN_00576250   ; 005a053b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x4]                 ; 005a0540
    ADD ESP,0x4                         ; 005a0544
    MOVSD ES:EDI,ESI                    ; 005a0547
    MOVSD ES:EDI,ESI                    ; 005a0548
    MOVSD ES:EDI,ESI                    ; 005a0549
    FLD float ptr [ESP + 0x28]          ; 005a054a
    FSUB float ptr [EBX + 0x34]         ; 005a054e
    SUB ESP,0x4                         ; 005a0551
    FSTP float ptr [ESP]                ; 005a0554
    CALL core_actor.cpp_FUN_0040cfa0    ; 005a0557
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x70],EAX      ; 005a055c
    FLD float ptr [ESP + 0x70]          ; 005a0560
    FABS                                ; 005a0564
    ADD ESP,0x4                         ; 005a0566
    FCOMP double ptr [0x005da556]       ; 005a0569 | DAT_005da556
    FNSTSW AX                           ; 005a056f
    SAHF                                ; 005a0571
    JNC 0x005a05d1                      ; 005a0572
        ;   XREF to: 005a05d1 (CONDITIONAL_JUMP)  ; LAB_005a05d1
    CMP dword ptr [ESP + 0x68],0x5      ; 005a0574
    JGE 0x005a05d1                      ; 005a0579
        ;   XREF to: 005a05d1 (CONDITIONAL_JUMP)  ; LAB_005a05d1
    MOV ECX,dword ptr [EBX + 0xdc90]    ; 005a057b
    PUSH ECX                            ; 005a0581
    PUSH 0x5da53e                       ; 005a0582 | s_Casting_d_005da53d+1
    MOV ESI,dword ptr [0x005f1690]      ; 005a0587 | g_CConsolePtr
    PUSH ESI                            ; 005a058d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005a058e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EAX,dword ptr [EBX + 0xdc90]    ; 005a0593
    ADD ESP,0xc                         ; 005a0599
    CMP EAX,0x3                         ; 005a059c
    JA 0x005a05b5                       ; 005a059f
        ;   XREF to: 005a05b5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a046c]  ; 005a05a1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1                            ; 005a05a8
        ;   Label: caseD_0
    PUSH 0xc                            ; 005a05aa
    PUSH EBP                            ; 005a05ac
        ;   Label: LAB_005a05ac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a05ad
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a05b2
    MOV EDI,dword ptr [EBX + 0xdc90]    ; 005a05b5
        ;   Label: default
    INC EDI                             ; 005a05bb
    MOV dword ptr [EBX + 0xdc90],EDI    ; 005a05bc
    CMP EDI,0x3                         ; 005a05c2
    JLE 0x005a05d1                      ; 005a05c5
        ;   XREF to: 005a05d1 (CONDITIONAL_JUMP)  ; LAB_005a05d1
    MOV dword ptr [EBX + 0xdc90],0x0    ; 005a05c7
    CMP dword ptr [ESP + 0x60],0x5      ; 005a05d1
        ;   Label: LAB_005a05d1
    JGE 0x005a049d                      ; 005a05d6
        ;   XREF to: 005a049d (CONDITIONAL_JUMP)  ; LAB_005a049d
    MOV EAX,0x1                         ; 005a05dc
    ADD ESP,0x70                        ; 005a05e1
    POP EBP                             ; 005a05e4
    POP EDI                             ; 005a05e5
    POP ESI                             ; 005a05e6
    POP EBX                             ; 005a05e7
    RET                                 ; 005a05e8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005a05e9
        ;   Label: LAB_005a05e9
    LEA EDI,[ESP + 0x54]                ; 005a05ef
    FLD float ptr [EAX + 0x24]          ; 005a05f3
    FLD float ptr [EAX + 0x28]          ; 005a05f6
    FLD float ptr [EAX + 0x20]          ; 005a05f9
    LEA EAX,[ESP + 0x54]                ; 005a05fc
    FSUB float ptr [ESI]                ; 005a0600
    FXCH ST2                            ; 005a0602
    FSUB float ptr [ESI + 0x4]          ; 005a0604
    FXCH                                ; 005a0607
    FSUB float ptr [ESI + 0x8]          ; 005a0609
    FXCH ST2                            ; 005a060c
    FSTP float ptr [ESP + 0xc]          ; 005a060e
    FSTP float ptr [ESP + 0x10]         ; 005a0612
    LEA ESI,[ESP + 0xc]                 ; 005a0616
    FSTP float ptr [ESP + 0x14]         ; 005a061a
    MOVSD ES:EDI,ESI                    ; 005a061e
    MOVSD ES:EDI,ESI                    ; 005a061f
    MOVSD ES:EDI,ESI                    ; 005a0620
    PUSH EAX                            ; 005a0621
    LEA ESI,[ESP + 0x4c]                ; 005a0622
    LEA EDI,[ESP + 0x1c]                ; 005a0626
    CALL core_vecdir.cpp_FUN_00576250   ; 005a062a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x4c]                ; 005a062f
    ADD ESP,0x4                         ; 005a0633
    MOVSD ES:EDI,ESI                    ; 005a0636
    MOVSD ES:EDI,ESI                    ; 005a0637
    MOVSD ES:EDI,ESI                    ; 005a0638
    FLD float ptr [ESP + 0x1c]          ; 005a0639
    FSUB float ptr [EBX + 0x34]         ; 005a063d
    SUB ESP,0x4                         ; 005a0640
    FSTP float ptr [ESP]                ; 005a0643
    CALL core_actor.cpp_FUN_0040cfa0    ; 005a0646
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x70],EAX      ; 005a064b
    FLD float ptr [ESP + 0x70]          ; 005a064f
    FABS                                ; 005a0653
    ADD ESP,0x4                         ; 005a0655
    FCOMP double ptr [0x005da556]       ; 005a0658 | DAT_005da556
    FNSTSW AX                           ; 005a065e
    SAHF                                ; 005a0660
    JNC 0x005a049d                      ; 005a0661
        ;   XREF to: 005a049d (CONDITIONAL_JUMP)  ; LAB_005a049d
    MOV EDX,dword ptr [ESP + 0x64]      ; 005a0667
    CMP EDX,0x8                         ; 005a066b
    JZ 0x005a0694                       ; 005a066e
        ;   XREF to: 005a0694 (CONDITIONAL_JUMP)  ; LAB_005a0694
    CMP EDX,0x9                         ; 005a0670
    JZ 0x005a0694                       ; 005a0673
        ;   XREF to: 005a0694 (CONDITIONAL_JUMP)  ; LAB_005a0694
    CMP EDX,0x7                         ; 005a0675
    JZ 0x005a0694                       ; 005a0678
        ;   XREF to: 005a0694 (CONDITIONAL_JUMP)  ; LAB_005a0694
    PUSH 0x1                            ; 005a067a
    PUSH 0x3                            ; 005a067c
    PUSH EBP                            ; 005a067e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a067f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005a067f
    ADD ESP,0xc                         ; 005a0684
    MOV EAX,0x1                         ; 005a0687
    ADD ESP,0x70                        ; 005a068c
    POP EBP                             ; 005a068f
    POP EDI                             ; 005a0690
    POP ESI                             ; 005a0691
    POP EBX                             ; 005a0692
    RET                                 ; 005a0693
    PUSH 0x1                            ; 005a0694
        ;   Label: LAB_005a0694
    PUSH 0xa                            ; 005a0696
    ADD EBX,0x158                       ; 005a0698
    PUSH EBX                            ; 005a069e
    JMP 0x005a067f                      ; 005a069f
        ;   XREF to: 005a067f (UNCONDITIONAL_JUMP)  ; LAB_005a067f
    PUSH 0x1                            ; 005a06a1
        ;   Label: caseD_1
    PUSH 0x15                           ; 005a06a3
    JMP 0x005a05ac                      ; 005a06a5
        ;   XREF to: 005a05ac (UNCONDITIONAL_JUMP)  ; LAB_005a05ac
    PUSH 0x1                            ; 005a06aa
        ;   Label: caseD_2
    PUSH 0x13                           ; 005a06ac
    JMP 0x005a05ac                      ; 005a06ae
        ;   XREF to: 005a05ac (UNCONDITIONAL_JUMP)  ; LAB_005a05ac
    PUSH 0x1                            ; 005a06b3
        ;   Label: caseD_3
    PUSH 0x18                           ; 005a06b5
    JMP 0x005a05ac                      ; 005a06b7
        ;   XREF to: 005a05ac (UNCONDITIONAL_JUMP)  ; LAB_005a05ac

