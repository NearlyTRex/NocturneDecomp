; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00522480 at 005226d1
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 at 005240da
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_0059299a
;   string s_SfxSample::lock_-_already_locked_005929af
;   string s_..\\sound\\sndmain.cpp_005929d1
;   string s_SfxSample::lock_-_invalid_region_005929e6
;   string s_..\\sound\\sndmain.cpp_00592a07
;   string s_SfxSample::lock_-_nothing_alloca_00592a1c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   FUN_004c8440
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523ba0
        ;   Label: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
    PUSH ESI                            ; 00523ba1
    PUSH EDI                            ; 00523ba2
    PUSH EBP                            ; 00523ba3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00523ba4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00523ba8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00523bac
    CMP dword ptr [EBX + 0x154],0x0     ; 00523bb0
    JNZ 0x00523c52                      ; 00523bb7
        ;   XREF to: 00523c52 (CONDITIONAL_JUMP)  ; LAB_00523c52
    TEST ESI,ESI                        ; 00523bbd
        ;   Label: LAB_00523bbd
    JL 0x00523bce                       ; 00523bbf
        ;   XREF to: 00523bce (CONDITIONAL_JUMP)  ; LAB_00523bce
    MOV EDX,dword ptr [EBX + 0x138]     ; 00523bc1
    LEA EAX,[ESI + EDI*0x1]             ; 00523bc7
    CMP EAX,EDX                         ; 00523bca
    JLE 0x00523bf1                      ; 00523bcc
        ;   XREF to: 00523bf1 (CONDITIONAL_JUMP)  ; LAB_00523bf1
    MOV ECX,0x5929d1                    ; 00523bce | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00523bce
    MOV EBP,0x752                       ; 00523bd3
    PUSH 0x5929e6                       ; 00523bd8 | = "SfxSample::lock - invalid region"
    MOV dword ptr [0x01cc4800],ECX      ; 00523bdd | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00523be3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523be9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523bee
    CMP dword ptr [EBX + 0x130],0x0     ; 00523bf1
        ;   Label: LAB_00523bf1
    JNZ 0x00523c7a                      ; 00523bf8
        ;   XREF to: 00523c7a (CONDITIONAL_JUMP)  ; LAB_00523c7a
    CMP dword ptr [EBX + 0x120],0x0     ; 00523bfe
    JNZ 0x00523c29                      ; 00523c05
        ;   XREF to: 00523c29 (CONDITIONAL_JUMP)  ; LAB_00523c29
    MOV EAX,0x592a07                    ; 00523c07 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x759                       ; 00523c0c
    PUSH 0x592a1c                       ; 00523c11 | = "SfxSample::lock - nothing allocated!"
    MOV [0x01cc4800],EAX                ; 00523c16 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00523c1b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523c21
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523c26
    PUSH EBX                            ; 00523c29
        ;   Label: LAB_00523c29
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00523c2a
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    IMUL EAX,ESI                        ; 00523c2f
    MOV EDX,dword ptr [EBX + 0x120]     ; 00523c32
    ADD ESP,0x4                         ; 00523c38
    ADD EAX,EDX                         ; 00523c3b
    TEST EAX,EAX                        ; 00523c3d
        ;   Label: LAB_00523c3d
    JZ 0x00523c4d                       ; 00523c3f
        ;   XREF to: 00523c4d (CONDITIONAL_JUMP)  ; LAB_00523c4d
    MOV dword ptr [EBX + 0x154],EDI     ; 00523c41
    MOV dword ptr [EBX + 0x150],ESI     ; 00523c47
    POP EBP                             ; 00523c4d
        ;   Label: LAB_00523c4d
    POP EDI                             ; 00523c4e
    POP ESI                             ; 00523c4f
    POP EBX                             ; 00523c50
    RET                                 ; 00523c51
    MOV ECX,0x59299a                    ; 00523c52 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00523c52
    MOV EBP,0x74d                       ; 00523c57
    PUSH 0x5929af                       ; 00523c5c | = "SfxSample::lock - already locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 00523c61 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00523c67 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00523c6d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00523c72
    JMP 0x00523bbd                      ; 00523c75
        ;   XREF to: 00523bbd (UNCONDITIONAL_JUMP)  ; LAB_00523bbd
    MOV EDX,dword ptr [0x02dc8318]      ; 00523c7a | DAT_02dc8318
        ;   Label: LAB_00523c7a
    TEST EDX,EDX                        ; 00523c80
    JNZ 0x00523c8b                      ; 00523c82
        ;   XREF to: 00523c8b (CONDITIONAL_JUMP)  ; LAB_00523c8b
    XOR EAX,EAX                         ; 00523c84
    POP EBP                             ; 00523c86
    POP EDI                             ; 00523c87
    POP ESI                             ; 00523c88
    POP EBX                             ; 00523c89
    RET                                 ; 00523c8a
    PUSH EBX                            ; 00523c8b
        ;   Label: LAB_00523c8b
    PUSH EDI                            ; 00523c8c
    PUSH ESI                            ; 00523c8d
    MOV ECX,dword ptr [EBX + 0x130]     ; 00523c8e
    PUSH ECX                            ; 00523c94
    MOV EAX,EDX                         ; 00523c95
    MOV EDX,dword ptr [EDX]             ; 00523c97
    PUSH EAX                            ; 00523c99
    CALL dword ptr [EDX + 0x34]         ; 00523c9a
    ADD ESP,0x14                        ; 00523c9d
    JMP 0x00523c3d                      ; 00523ca0
        ;   XREF to: 00523c3d (UNCONDITIONAL_JUMP)  ; LAB_00523c3d

