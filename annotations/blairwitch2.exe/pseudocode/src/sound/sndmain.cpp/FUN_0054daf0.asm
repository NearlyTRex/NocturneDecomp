; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054daf0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0054c1c0 at 0054c3fd
;   FUN_0054ddf0 at 0054e083
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e811e
;   TerminatedCString s_SfxSample_lock_already_l_005e8133
;   TerminatedCString s_sound_sndmain_cpp_005e8155
;   TerminatedCString s_SfxSample_lock_invalid_r_005e816a
;   TerminatedCString s_sound_sndmain_cpp_005e818b
;   TerminatedCString s_SfxSample_lock_nothing_a_005e81a0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e80
;
; Called Functions:
;   FUN_004e4500
;   FUN_0054fd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054daf0
        ;   Label: FUN_0054daf0
    PUSH ESI                            ; 0054daf1
    PUSH EDI                            ; 0054daf2
    PUSH EBP                            ; 0054daf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054daf4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054daf8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054dafc
    CMP dword ptr [EBX + 0x1a8],0x0     ; 0054db00
    JNZ 0x0054dba0                      ; 0054db07
        ;   XREF to: 0054dba0 (CONDITIONAL_JUMP)  ; LAB_0054dba0
    TEST ESI,ESI                        ; 0054db0d
        ;   Label: LAB_0054db0d
    JL 0x0054db1e                       ; 0054db0f
        ;   XREF to: 0054db1e (CONDITIONAL_JUMP)  ; LAB_0054db1e
    MOV EDX,dword ptr [EBX + 0x164]     ; 0054db11
    LEA EAX,[ESI + EDI*0x1]             ; 0054db17
    CMP EAX,EDX                         ; 0054db1a
    JLE 0x0054db41                      ; 0054db1c
        ;   XREF to: 0054db41 (CONDITIONAL_JUMP)  ; LAB_0054db41
    MOV ECX,0x5e8155                    ; 0054db1e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054db1e
    MOV EBP,0x89f                       ; 0054db23
    PUSH 0x5e816a                       ; 0054db28 | = "SfxSample::lock - invalid region"
    MOV dword ptr [0x01d046a0],ECX      ; 0054db2d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054db33 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054db39
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054db3e
    CMP dword ptr [EBX + 0x158],0x0     ; 0054db41
        ;   Label: LAB_0054db41
    JNZ 0x0054dbc8                      ; 0054db48
        ;   XREF to: 0054dbc8 (CONDITIONAL_JUMP)  ; LAB_0054dbc8
    CMP dword ptr [EBX + 0x120],0x0     ; 0054db4e
    JNZ 0x0054db79                      ; 0054db55
        ;   XREF to: 0054db79 (CONDITIONAL_JUMP)  ; LAB_0054db79
    MOV EAX,0x5e818b                    ; 0054db57 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x8a6                       ; 0054db5c
    PUSH 0x5e81a0                       ; 0054db61 | = "SfxSample::lock - nothing allocated!"
    MOV [0x01d046a0],EAX                ; 0054db66 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054db6b | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054db71
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054db76
    PUSH ESI                            ; 0054db79
        ;   Label: LAB_0054db79
    PUSH EBX                            ; 0054db7a
    CALL FUN_0054fd90                   ; 0054db7b
        ;   XREF to: 0054fd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0054fd90()
    MOV EDX,dword ptr [EBX + 0x120]     ; 0054db80
    ADD ESP,0x8                         ; 0054db86
    ADD EAX,EDX                         ; 0054db89
    TEST EAX,EAX                        ; 0054db8b
        ;   Label: LAB_0054db8b
    JZ 0x0054db9b                       ; 0054db8d
        ;   XREF to: 0054db9b (CONDITIONAL_JUMP)  ; LAB_0054db9b
    MOV dword ptr [EBX + 0x1a8],EDI     ; 0054db8f
    MOV dword ptr [EBX + 0x1a4],ESI     ; 0054db95
    POP EBP                             ; 0054db9b
        ;   Label: LAB_0054db9b
    POP EDI                             ; 0054db9c
    POP ESI                             ; 0054db9d
    POP EBX                             ; 0054db9e
    RET                                 ; 0054db9f
    MOV ECX,0x5e811e                    ; 0054dba0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054dba0
    MOV EBP,0x89a                       ; 0054dba5
    PUSH 0x5e8133                       ; 0054dbaa | = "SfxSample::lock - already locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054dbaf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054dbb5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054dbbb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054dbc0
    JMP 0x0054db0d                      ; 0054dbc3
        ;   XREF to: 0054db0d (UNCONDITIONAL_JUMP)  ; LAB_0054db0d
    MOV EDX,dword ptr [0x02648e80]      ; 0054dbc8 | DAT_02648e80
        ;   Label: LAB_0054dbc8
    TEST EDX,EDX                        ; 0054dbce
    JNZ 0x0054dbd9                      ; 0054dbd0
        ;   XREF to: 0054dbd9 (CONDITIONAL_JUMP)  ; LAB_0054dbd9
    XOR EAX,EAX                         ; 0054dbd2
    POP EBP                             ; 0054dbd4
    POP EDI                             ; 0054dbd5
    POP ESI                             ; 0054dbd6
    POP EBX                             ; 0054dbd7
    RET                                 ; 0054dbd8
    PUSH EDI                            ; 0054dbd9
        ;   Label: LAB_0054dbd9
    PUSH ESI                            ; 0054dbda
    MOV ECX,dword ptr [EBX + 0x158]     ; 0054dbdb
    PUSH ECX                            ; 0054dbe1
    MOV EAX,EDX                         ; 0054dbe2
    MOV EDX,dword ptr [EDX]             ; 0054dbe4
    PUSH EAX                            ; 0054dbe6
    CALL dword ptr [EDX + 0x38]         ; 0054dbe7
    ADD ESP,0x10                        ; 0054dbea
    JMP 0x0054db8b                      ; 0054dbed
        ;   XREF to: 0054db8b (UNCONDITIONAL_JUMP)  ; LAB_0054db8b

