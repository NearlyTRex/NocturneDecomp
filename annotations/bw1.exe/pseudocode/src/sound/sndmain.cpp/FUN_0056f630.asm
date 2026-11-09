; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_0056f630(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 at 00575107
;
; Referenced Globals:
;   undefined4 DAT_02c80660
;   undefined4 DAT_02c80664
;   undefined4 DAT_02c80668
;   undefined4 DAT_02c8066c
;   undefined4 DAT_02c80670
;   undefined4 DAT_02c80694
;   undefined4 DAT_02c806b8
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f630
        ;   Label: sound_sndmain.cpp_FUN_0056f630
    PUSH EBP                            ; 0056f631
    MOV EDX,dword ptr [0x02c80694]      ; 0056f632 | DAT_02c80694
    TEST EDX,EDX                        ; 0056f638
    JNZ 0x0056f6a3                      ; 0056f63a
        ;   XREF to: 0056f6a3 (CONDITIONAL_JUMP)  ; LAB_0056f6a3
    PUSH ESI                            ; 0056f63c
        ;   Label: LAB_0056f63c
    MOV ESI,dword ptr [0x02c806b8]      ; 0056f63d | DAT_02c806b8
    TEST ESI,ESI                        ; 0056f643
    JZ 0x0056f658                       ; 0056f645
        ;   XREF to: 0056f658 (CONDITIONAL_JUMP)  ; LAB_0056f658
    PUSH ESI                            ; 0056f647
    CALL crt_unknown.c_FUN_005c09f0     ; 0056f648
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBP,EBP                         ; 0056f64d
    ADD ESP,0x4                         ; 0056f64f
    MOV dword ptr [0x02c806b8],EBP      ; 0056f652 | DAT_02c806b8
    MOV EAX,[0x02c80670]                ; 0056f658 | DAT_02c80670
        ;   Label: LAB_0056f658
    TEST EAX,EAX                        ; 0056f65d
    JNZ 0x0056f6b6                      ; 0056f65f
        ;   XREF to: 0056f6b6 (CONDITIONAL_JUMP)  ; LAB_0056f6b6
    XOR EAX,EAX                         ; 0056f661
        ;   Label: LAB_0056f661
    XOR EDX,EDX                         ; 0056f663
    POP ESI                             ; 0056f665
    ADD EAX,0x4                         ; 0056f666
        ;   Label: LAB_0056f666
    MOV dword ptr [EAX + 0x2c80670],EDX ; 0056f669
    MOV dword ptr [EAX + 0x2c806b8],EDX ; 0056f66f
    MOV dword ptr [EAX + 0x2c806d8],EDX ; 0056f675
    MOV dword ptr [EAX + 0x2c80694],EDX ; 0056f67b
    CMP EAX,0x20                        ; 0056f681
    JNZ 0x0056f666                      ; 0056f684
        ;   XREF to: 0056f666 (CONDITIONAL_JUMP)  ; LAB_0056f666
    XOR EBX,EBX                         ; 0056f686
    MOV dword ptr [0x02c8066c],EBX      ; 0056f688 | DAT_02c8066c
    MOV dword ptr [0x02c80660],EBX      ; 0056f68e | DAT_02c80660
    MOV dword ptr [0x02c80664],EBX      ; 0056f694 | DAT_02c80664
    MOV dword ptr [0x02c80668],EBX      ; 0056f69a | DAT_02c80668
    POP EBP                             ; 0056f6a0
    POP EBX                             ; 0056f6a1
    RET                                 ; 0056f6a2
    PUSH EDX                            ; 0056f6a3
        ;   Label: LAB_0056f6a3
    CALL crt_unknown.c_FUN_005c09f0     ; 0056f6a4
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBX,EBX                         ; 0056f6a9
    ADD ESP,0x4                         ; 0056f6ab
    MOV dword ptr [0x02c80694],EBX      ; 0056f6ae | DAT_02c80694
    JMP 0x0056f63c                      ; 0056f6b4
        ;   XREF to: 0056f63c (UNCONDITIONAL_JUMP)  ; LAB_0056f63c
    PUSH EAX                            ; 0056f6b6
        ;   Label: LAB_0056f6b6
    CALL crt_unknown.c_FUN_005c09f0     ; 0056f6b7
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR ECX,ECX                         ; 0056f6bc
    ADD ESP,0x4                         ; 0056f6be
    MOV dword ptr [0x02c80670],ECX      ; 0056f6c1 | DAT_02c80670
    JMP 0x0056f661                      ; 0056f6c7
        ;   XREF to: 0056f661 (UNCONDITIONAL_JUMP)  ; LAB_0056f661

