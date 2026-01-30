; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ushort __cdecl core_colonel_cpp_FUN_00440430(void)
;
;
; XREF[1]:
;   core_colonel.cpp_FUN_0043fa00 at 0043fa64
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440430
        ;   Label: core_colonel.cpp_FUN_00440430
    PUSH ESI                            ; 00440431
    PUSH EBP                            ; 00440432
    MOV EBP,ESP                         ; 00440433
    AND ESP,0xfffffff8                  ; 00440435
    MOV ESI,dword ptr [EBP + 0x10]      ; 00440438
    LEA EBX,[ESI + 0x158]               ; 0044043b
    LEA EAX,[EBP + 0x14]                ; 00440441
        ;   Label: LAB_00440441
    PUSH EAX                            ; 00440444
    PUSH EBX                            ; 00440445
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00440446
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 0044044b
    MOV EDX,EAX                         ; 0044044e
    CMP EAX,0x64                        ; 00440450
    JC 0x00440471                       ; 00440453
        ;   XREF to: 00440471 (CONDITIONAL_JUMP)  ; LAB_00440471
    JA 0x0044047d                       ; 00440455
        ;   XREF to: 0044047d (CONDITIONAL_JUMP)  ; LAB_0044047d
    FLD float ptr [EBP + 0x14]          ; 00440457
        ;   Label: LAB_00440457
    FLDZ                                ; 0044045a
    FCOMPP                              ; 0044045c
    FNSTSW AX                           ; 0044045e
    SAHF                                ; 00440460
    JC 0x00440441                       ; 00440461
        ;   XREF to: 00440441 (CONDITIONAL_JUMP)  ; LAB_00440441
    MOV ESP,EBP                         ; 00440463
    POP EBP                             ; 00440465
    POP ESI                             ; 00440466
    POP EBX                             ; 00440467
    LEA EAX,[EAX]                       ; 00440468
    MOV EDX,EDX                         ; 0044046e
    RET                                 ; 00440470
    PUSH EDX                            ; 00440471
        ;   Label: LAB_00440471
    PUSH ESI                            ; 00440472
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00440473
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00440478
    JMP 0x00440457                      ; 0044047b
        ;   XREF to: 00440457 (UNCONDITIONAL_JUMP)  ; LAB_00440457
    CMP EAX,0x65                        ; 0044047d
        ;   Label: LAB_0044047d
    JZ 0x00440457                       ; 00440480
        ;   XREF to: 00440457 (CONDITIONAL_JUMP)  ; LAB_00440457
    PUSH EDX                            ; 00440482
    PUSH ESI                            ; 00440483
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00440484
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00440489
    JMP 0x00440457                      ; 0044048c
        ;   XREF to: 00440457 (UNCONDITIONAL_JUMP)  ; LAB_00440457

