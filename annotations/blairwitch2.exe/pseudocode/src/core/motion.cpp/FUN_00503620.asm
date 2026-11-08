; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503620(undefined4 *param_1,int param_2,int param_3)
;
;
; XREF[160]:
;   FUN_0040f950 at 0040faba
;   FUN_0040fef0 at 0040fffb
;   FUN_00410040 at 00410064
;   FUN_00411a10 at 00412055
;   FUN_00412760 at 0041284b
;   FUN_00412ec0 at 00412ee0
;   FUN_00412f40 at 004135b6
;   FUN_00414290 at 0041437b
;   FUN_00414e50 at 00414f01
;   FUN_004152e0 at 0041532d
;   ... and 150 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005dfc48
;   TerminatedCString s_CMotionController_setDes_005dfc5b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00503470
;   FUN_00503560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503620
        ;   Label: FUN_00503620
    PUSH ESI                            ; 00503621
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503622
    MOV ESI,dword ptr [ESP + 0x10]      ; 00503626
    TEST ESI,ESI                        ; 0050362a
    JL 0x00503660                       ; 0050362c
        ;   XREF to: 00503660 (CONDITIONAL_JUMP)  ; LAB_00503660
    MOV EAX,dword ptr [EBX]             ; 0050362e
    CMP ESI,dword ptr [EAX]             ; 00503630
    JGE 0x0050366a                      ; 00503632
        ;   XREF to: 0050366a (CONDITIONAL_JUMP)  ; LAB_0050366a
    CMP ESI,dword ptr [EBX + 0x28]      ; 00503634
        ;   Label: LAB_00503634
    JZ 0x00503656                       ; 00503637
        ;   XREF to: 00503656 (CONDITIONAL_JUMP)  ; LAB_00503656
    CMP dword ptr [EBX + 0x2c],0x0      ; 00503639
    JZ 0x0050364c                       ; 0050363d
        ;   XREF to: 0050364c (CONDITIONAL_JUMP)  ; LAB_0050364c
    CMP dword ptr [EBX + 0x20],0x0      ; 0050363f
    JZ 0x00503691                       ; 00503643
        ;   XREF to: 00503691 (CONDITIONAL_JUMP)  ; LAB_00503691
    MOV dword ptr [EBX + 0x2c],0x0      ; 00503645
        ;   Label: LAB_00503645
    MOV dword ptr [EBX + 0x24],0x0      ; 0050364c
        ;   Label: LAB_0050364c
    MOV dword ptr [EBX + 0x28],ESI      ; 00503653
    CMP dword ptr [ESP + 0x14],0x0      ; 00503656
        ;   Label: LAB_00503656
    JNZ 0x0050369c                      ; 0050365b
        ;   XREF to: 0050369c (CONDITIONAL_JUMP)  ; LAB_0050369c
    POP ESI                             ; 0050365d
    POP EBX                             ; 0050365e
    RET                                 ; 0050365f
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00503660
        ;   Label: LAB_00503660
    POP ESI                             ; 00503667
    POP EBX                             ; 00503668
    RET                                 ; 00503669
    PUSH EDI                            ; 0050366a
        ;   Label: LAB_0050366a
    MOV ECX,0x5dfc48                    ; 0050366b | = "..\\core\\motion.cpp"
    MOV EDI,0x2a4                       ; 00503670
    PUSH 0x5dfc5b                       ; 00503675 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050367a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00503680 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00503686
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050368b
    POP EDI                             ; 0050368e
    JMP 0x00503634                      ; 0050368f
        ;   XREF to: 00503634 (UNCONDITIONAL_JUMP)  ; LAB_00503634
    PUSH EBX                            ; 00503691
        ;   Label: LAB_00503691
    CALL FUN_00503560                   ; 00503692
        ;   XREF to: 00503560 (UNCONDITIONAL_CALL)  ; undefined FUN_00503560()
    ADD ESP,0x4                         ; 00503697
    JMP 0x00503645                      ; 0050369a
        ;   XREF to: 00503645 (UNCONDITIONAL_JUMP)  ; LAB_00503645
    PUSH EBX                            ; 0050369c
        ;   Label: LAB_0050369c
    CALL FUN_00503470                   ; 0050369d
        ;   XREF to: 00503470 (UNCONDITIONAL_CALL)  ; undefined FUN_00503470()
    ADD ESP,0x4                         ; 005036a2
    POP ESI                             ; 005036a5
    POP EBX                             ; 005036a6
    RET                                 ; 005036a7

