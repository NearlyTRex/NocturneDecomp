; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint sound_sndmain_cpp_FUN_00527520(uint param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d40f
;
; Referenced Globals:
;   undefined4 DAT_02dbd3e4
;   undefined4 DAT_02dbd504
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527520
        ;   Label: sound_sndmain.cpp_FUN_00527520
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527521
    AND EDX,0x3f                        ; 00527525
    INC EDX                             ; 00527528
    CMP EDX,0x40                        ; 00527529
    JGE 0x0052755a                      ; 0052752c
        ;   XREF to: 0052755a (CONDITIONAL_JUMP)  ; LAB_0052755a
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052752e
    ADD EAX,EDX                         ; 00527535
    SHL EAX,0x5                         ; 00527537
    CMP dword ptr [EAX + 0x2dbd3e8],0x0 ; 0052753a
        ;   Label: LAB_0052753a
    JZ 0x0052754d                       ; 00527541
        ;   XREF to: 0052754d (CONDITIONAL_JUMP)  ; LAB_0052754d
    MOV EBX,dword ptr [EAX + 0x2dbd3e4] ; 00527543 | DAT_02dbd3e4 | DAT_02dbd504
    TEST EBX,EBX                        ; 00527549
    JNZ 0x0052755e                      ; 0052754b
        ;   XREF to: 0052755e (CONDITIONAL_JUMP)  ; LAB_0052755e
    ADD EAX,0x120                       ; 0052754d
        ;   Label: LAB_0052754d
    INC EDX                             ; 00527552
    CMP EAX,0x4800                      ; 00527553
    JL 0x0052753a                       ; 00527558
        ;   XREF to: 0052753a (CONDITIONAL_JUMP)  ; LAB_0052753a
    XOR EAX,EAX                         ; 0052755a
        ;   Label: LAB_0052755a
    POP EBX                             ; 0052755c
    RET                                 ; 0052755d
    MOV EAX,EBX                         ; 0052755e
        ;   Label: LAB_0052755e
    SHL EAX,0x6                         ; 00527560
    OR EAX,EDX                          ; 00527563
    POP EBX                             ; 00527565
    RET                                 ; 00527566

