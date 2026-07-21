; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void)
;
;
; XREF[25]:
;   FUN_0046f7e0 at 0046f82d
;   FUN_0046fb40 at 0046fc9a
;   FUN_0046fcd0 at 0046fe2a
;   FUN_0046fe60 at 0046ffba
;   FUN_00470eb0 at 00471281
;   FUN_00475470 at 0047594a
;   FUN_004a57c0 at 004a5b60
;   FUN_004c8510 at 004c8557
;   FUN_004c90e0 at 004c9123
;   FUN_004d23d0 at 004d246d
;   ... and 15 more
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_00558ae0
;   wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403f50
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_00403f50
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_00558d50 ; 00403f55
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_clearMouseClicks_FUN_00558d50()
    XOR EAX,EAX                         ; 00403f5a
    INC EAX                             ; 00403f5c
        ;   Label: LAB_00403f5c
    XOR DL,DL                           ; 00403f5d
    MOV byte ptr [EAX + 0x1c02597],DL   ; 00403f5f
    CMP EAX,0x258                       ; 00403f65
    JL 0x00403f5c                       ; 00403f6a
        ;   XREF to: 00403f5c (CONDITIONAL_JUMP)  ; LAB_00403f5c
    PUSH EBX                            ; 00403f6c
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00403f6d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBX,EAX                         ; 00403f72
    SAR EBX,0x10                        ; 00403f74
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00403f77
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00403f77
    SAR EAX,0x10                        ; 00403f7c
    CMP EBX,EAX                         ; 00403f7f
    JZ 0x00403fa1                       ; 00403f81
        ;   XREF to: 00403fa1 (CONDITIONAL_JUMP)  ; LAB_00403fa1
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403f83
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_00558d50 ; 00403f88
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_clearMouseClicks_FUN_00558d50()
    XOR EAX,EAX                         ; 00403f8d
    POP EBX                             ; 00403f8f
    INC EAX                             ; 00403f90
        ;   Label: LAB_00403f90
    XOR DH,DH                           ; 00403f91
    MOV byte ptr [EAX + 0x1c02597],DH   ; 00403f93
    CMP EAX,0x258                       ; 00403f99
    JL 0x00403f90                       ; 00403f9e
        ;   XREF to: 00403f90 (CONDITIONAL_JUMP)  ; LAB_00403f90
    RET                                 ; 00403fa0
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403fa1
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
        ;   Label: LAB_00403fa1
    JMP 0x00403f77                      ; 00403fa6
        ;   XREF to: 00403f77 (UNCONDITIONAL_JUMP)  ; LAB_00403f77

