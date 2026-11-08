; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553660(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00551d20 at 00551f5f
;   FUN_00553960 at 00553bf3
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2c02
;   TerminatedCString s_SfxSample_lock_already_l_005d2c17
;   TerminatedCString s_sound_sndmain_cpp_005d2c39
;   TerminatedCString s_SfxSample_lock_invalid_r_005d2c4e
;   TerminatedCString s_sound_sndmain_cpp_005d2c6f
;   TerminatedCString s_SfxSample_lock_nothing_a_005d2c84
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   FUN_004e4330
;   FUN_00555900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553660
        ;   Label: FUN_00553660
    PUSH ESI                            ; 00553661
    PUSH EDI                            ; 00553662
    PUSH EBP                            ; 00553663
    MOV EBX,dword ptr [ESP + 0x14]      ; 00553664
    MOV ESI,dword ptr [ESP + 0x18]      ; 00553668
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055366c
    CMP dword ptr [EBX + 0x1ac],0x0     ; 00553670
    JNZ 0x00553710                      ; 00553677
        ;   XREF to: 00553710 (CONDITIONAL_JUMP)  ; LAB_00553710
    TEST ESI,ESI                        ; 0055367d
        ;   Label: LAB_0055367d
    JL 0x0055368e                       ; 0055367f
        ;   XREF to: 0055368e (CONDITIONAL_JUMP)  ; LAB_0055368e
    MOV EDX,dword ptr [EBX + 0x164]     ; 00553681
    LEA EAX,[ESI + EDI*0x1]             ; 00553687
    CMP EAX,EDX                         ; 0055368a
    JLE 0x005536b1                      ; 0055368c
        ;   XREF to: 005536b1 (CONDITIONAL_JUMP)  ; LAB_005536b1
    MOV ECX,0x5d2c39                    ; 0055368e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055368e
    MOV EBP,0x8a1                       ; 00553693
    PUSH 0x5d2c4e                       ; 00553698 | = "SfxSample::lock - invalid region"
    MOV dword ptr [0x01d71de0],ECX      ; 0055369d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 005536a3 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005536a9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005536ae
    CMP dword ptr [EBX + 0x158],0x0     ; 005536b1
        ;   Label: LAB_005536b1
    JNZ 0x00553738                      ; 005536b8
        ;   XREF to: 00553738 (CONDITIONAL_JUMP)  ; LAB_00553738
    CMP dword ptr [EBX + 0x120],0x0     ; 005536be
    JNZ 0x005536e9                      ; 005536c5
        ;   XREF to: 005536e9 (CONDITIONAL_JUMP)  ; LAB_005536e9
    MOV EAX,0x5d2c6f                    ; 005536c7 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x8a8                       ; 005536cc
    PUSH 0x5d2c84                       ; 005536d1 | = "SfxSample::lock - nothing allocated!"
    MOV [0x01d71de0],EAX                ; 005536d6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005536db | DAT_01d71de4
    CALL FUN_004e4330                   ; 005536e1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005536e6
    PUSH ESI                            ; 005536e9
        ;   Label: LAB_005536e9
    PUSH EBX                            ; 005536ea
    CALL FUN_00555900                   ; 005536eb
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; undefined FUN_00555900()
    MOV EDX,dword ptr [EBX + 0x120]     ; 005536f0
    ADD ESP,0x8                         ; 005536f6
    ADD EAX,EDX                         ; 005536f9
    TEST EAX,EAX                        ; 005536fb
        ;   Label: LAB_005536fb
    JZ 0x0055370b                       ; 005536fd
        ;   XREF to: 0055370b (CONDITIONAL_JUMP)  ; LAB_0055370b
    MOV dword ptr [EBX + 0x1ac],EDI     ; 005536ff
    MOV dword ptr [EBX + 0x1a8],ESI     ; 00553705
    POP EBP                             ; 0055370b
        ;   Label: LAB_0055370b
    POP EDI                             ; 0055370c
    POP ESI                             ; 0055370d
    POP EBX                             ; 0055370e
    RET                                 ; 0055370f
    MOV ECX,0x5d2c02                    ; 00553710 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553710
    MOV EBP,0x89c                       ; 00553715
    PUSH 0x5d2c17                       ; 0055371a | = "SfxSample::lock - already locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 0055371f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00553725 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055372b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00553730
    JMP 0x0055367d                      ; 00553733
        ;   XREF to: 0055367d (UNCONDITIONAL_JUMP)  ; LAB_0055367d
    MOV EDX,dword ptr [0x02cf3280]      ; 00553738 | DAT_02cf3280
        ;   Label: LAB_00553738
    TEST EDX,EDX                        ; 0055373e
    JNZ 0x00553749                      ; 00553740
        ;   XREF to: 00553749 (CONDITIONAL_JUMP)  ; LAB_00553749
    XOR EAX,EAX                         ; 00553742
    POP EBP                             ; 00553744
    POP EDI                             ; 00553745
    POP ESI                             ; 00553746
    POP EBX                             ; 00553747
    RET                                 ; 00553748
    PUSH EDI                            ; 00553749
        ;   Label: LAB_00553749
    PUSH ESI                            ; 0055374a
    MOV ECX,dword ptr [EBX + 0x158]     ; 0055374b
    PUSH ECX                            ; 00553751
    MOV EAX,EDX                         ; 00553752
    MOV EDX,dword ptr [EDX]             ; 00553754
    PUSH EAX                            ; 00553756
    CALL dword ptr [EDX + 0x38]         ; 00553757
    ADD ESP,0x10                        ; 0055375a
    JMP 0x005536fb                      ; 0055375d
        ;   XREF to: 005536fb (UNCONDITIONAL_JUMP)  ; LAB_005536fb

