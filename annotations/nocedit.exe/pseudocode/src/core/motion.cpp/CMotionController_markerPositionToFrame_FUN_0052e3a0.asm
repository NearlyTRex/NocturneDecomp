; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController *this_ptr,int motion_index,float marker_position)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   marker_position
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d51e0
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e68c0
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5eda
;   core_scat.cpp_CScat_FUN_005582c0 at 00558431
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 at 005c03b3
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60 at 005bfda9
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005bf6cc
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e3a0
        ;   Label: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
    PUSH EDI                            ; 0052e3a1
    PUSH EBP                            ; 0052e3a2
    MOV EBP,ESP                         ; 0052e3a3
    SUB ESP,0x18                        ; 0052e3a5
    AND ESP,0xfffffff8                  ; 0052e3a8
    IMUL EDX,dword ptr [EBP + 0x14],0x54c ; 0052e3ab
    MOV EAX,dword ptr [EBP + 0x10]      ; 0052e3b2
    MOV EAX,dword ptr [EAX]             ; 0052e3b5
    FLD float ptr [EBP + 0x18]          ; 0052e3b7
    ADD EAX,0x968                       ; 0052e3ba
    FLDZ                                ; 0052e3bf
    ADD EDX,EAX                         ; 0052e3c1
    FCOMPP                              ; 0052e3c3
    FNSTSW AX                           ; 0052e3c5
    SAHF                                ; 0052e3c7
    JNC 0x0052e488                      ; 0052e3c8
        ;   XREF to: 0052e488 (CONDITIONAL_JUMP)  ; LAB_0052e488
    MOV EAX,dword ptr [EDX + 0x520]     ; 0052e3ce
    INC EAX                             ; 0052e3d4
    MOV dword ptr [ESP + 0x14],EAX      ; 0052e3d5
    FILD dword ptr [ESP + 0x14]         ; 0052e3d9
    FCOMP float ptr [EBP + 0x18]        ; 0052e3dd
    FNSTSW AX                           ; 0052e3e0
    SAHF                                ; 0052e3e2
    JBE 0x0052e490                      ; 0052e3e3
        ;   XREF to: 0052e490 (CONDITIONAL_JUMP)  ; LAB_0052e490
    FLD float ptr [EBP + 0x18]          ; 0052e3e9
    FLD ST0                             ; 0052e3ec
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052e3ee
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 0052e3f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052e3f7
    MOV dword ptr [ESP + 0x14],EAX      ; 0052e3fb
    FILD dword ptr [ESP + 0x14]         ; 0052e3ff
    FSUBP                               ; 0052e403
    XOR EBX,EBX                         ; 0052e405
    FSTP float ptr [ESP]                ; 0052e407
    TEST EAX,EAX                        ; 0052e40a
    JLE 0x0052e415                      ; 0052e40c
        ;   XREF to: 0052e415 (CONDITIONAL_JUMP)  ; LAB_0052e415
    MOV EBX,dword ptr [EDX + EAX*0x4 + 0x520] ; 0052e40e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052e415
        ;   Label: LAB_0052e415
    MOV EDI,dword ptr [EDX + 0x520]     ; 0052e419
    MOV ECX,dword ptr [EDX + 0x64]      ; 0052e41f
    CMP EAX,EDI                         ; 0052e422
    JGE 0x0052e42d                      ; 0052e424
        ;   XREF to: 0052e42d (CONDITIONAL_JUMP)  ; LAB_0052e42d
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x524] ; 0052e426
    FLD float ptr [ESP]                 ; 0052e42d
        ;   Label: LAB_0052e42d
    FLD ST0                             ; 0052e430
    FLD1                                ; 0052e432
    FSUBRP                              ; 0052e434
    MOV dword ptr [ESP + 0x14],EBX      ; 0052e436
    FILD dword ptr [ESP + 0x14]         ; 0052e43a
    FMULP                               ; 0052e43e
    MOV dword ptr [ESP + 0x14],ECX      ; 0052e440
    FILD dword ptr [ESP + 0x14]         ; 0052e444
    FMULP ST2                           ; 0052e448
    FADDP                               ; 0052e44a
    FST float ptr [ESP + 0x4]           ; 0052e44c
    FLDZ                                ; 0052e450
    FCOMPP                              ; 0052e452
    FNSTSW AX                           ; 0052e454
    SAHF                                ; 0052e456
    JA 0x0052e4a2                       ; 0052e457
        ;   XREF to: 0052e4a2 (CONDITIONAL_JUMP)  ; LAB_0052e4a2
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052e459
    DEC EAX                             ; 0052e45c
    MOV dword ptr [ESP + 0x14],EAX      ; 0052e45d
    FLD float ptr [ESP + 0x4]           ; 0052e461
    FILD dword ptr [ESP + 0x14]         ; 0052e465
    FSTP float ptr [ESP + 0x8]          ; 0052e469
    FCOMP float ptr [ESP + 0x8]         ; 0052e46d
    FNSTSW AX                           ; 0052e471
    SAHF                                ; 0052e473
    JBE 0x0052e4a6                      ; 0052e474
        ;   XREF to: 0052e4a6 (CONDITIONAL_JUMP)  ; LAB_0052e4a6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052e476
    MOV dword ptr [ESP + 0x10],EAX      ; 0052e47a
        ;   Label: LAB_0052e47a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052e47e
        ;   Label: LAB_0052e47e
    MOV ESP,EBP                         ; 0052e482
    POP EBP                             ; 0052e484
    POP EDI                             ; 0052e485
    POP EBX                             ; 0052e486
    RET                                 ; 0052e487
    XOR EDX,EDX                         ; 0052e488
        ;   Label: LAB_0052e488
    MOV dword ptr [ESP + 0x10],EDX      ; 0052e48a
    JMP 0x0052e47e                      ; 0052e48e
        ;   XREF to: 0052e47e (UNCONDITIONAL_JUMP)  ; LAB_0052e47e
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052e490
        ;   Label: LAB_0052e490
    DEC EAX                             ; 0052e493
    MOV dword ptr [ESP + 0x14],EAX      ; 0052e494
    FILD dword ptr [ESP + 0x14]         ; 0052e498
    FSTP float ptr [ESP + 0x10]         ; 0052e49c
    JMP 0x0052e47e                      ; 0052e4a0
        ;   XREF to: 0052e47e (UNCONDITIONAL_JUMP)  ; LAB_0052e47e
    XOR EAX,EAX                         ; 0052e4a2
        ;   Label: LAB_0052e4a2
    JMP 0x0052e47a                      ; 0052e4a4
        ;   XREF to: 0052e47a (UNCONDITIONAL_JUMP)  ; LAB_0052e47a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052e4a6
        ;   Label: LAB_0052e4a6
    MOV dword ptr [ESP + 0x10],EAX      ; 0052e4aa
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052e4ae
    MOV ESP,EBP                         ; 0052e4b2
    POP EBP                             ; 0052e4b4
    POP EDI                             ; 0052e4b5
    POP EBX                             ; 0052e4b6
    RET                                 ; 0052e4b7

