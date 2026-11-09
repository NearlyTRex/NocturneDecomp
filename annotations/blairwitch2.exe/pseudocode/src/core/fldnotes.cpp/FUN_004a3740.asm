; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a3740(int param_1,int param_2)
;
;
; XREF[5]:
;   core_fldnotes.cpp_FUN_004a41b0 at 004a4383
;   core_fldnotes.cpp_FUN_004a5490 at 004a5526
;   core_fldnotes.cpp_FUN_004a5700 at 004a578a
;   unkaddr_004a1200.cpp_FUN_004a1d4e at 004a1d99
;   unkaddr_004a1200.cpp_FUN_004a1dcc at 004a1e29
;
; Referenced Globals:
;   undefined4 DAT_005d5dc8
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a28b0
;   core_fldnotes.cpp_FUN_004a32e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3740
        ;   Label: core_fldnotes.cpp_FUN_004a3740
    PUSH ESI                            ; 004a3741
    PUSH EDI                            ; 004a3742
    PUSH EBP                            ; 004a3743
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a3744
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a3748
    MOV EAX,dword ptr [EBP + 0x10]      ; 004a374c
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a374f
    XOR EBX,EBX                         ; 004a3755
    MOV dword ptr [EDI + 0x140],EAX     ; 004a3757
    TEST EDX,EDX                        ; 004a375d
    JLE 0x004a3785                      ; 004a375f
        ;   XREF to: 004a3785 (CONDITIONAL_JUMP)  ; LAB_004a3785
    MOV ESI,EDI                         ; 004a3761
    PUSH EBP                            ; 004a3763
        ;   Label: LAB_004a3763
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a3764
    PUSH EAX                            ; 004a376a
    CALL core_fldnotes.cpp_FUN_004a32e0 ; 004a376b
        ;   XREF to: 004a32e0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a32e0()
    ADD ESP,0x8                         ; 004a3770
    TEST EAX,EAX                        ; 004a3773
    JZ 0x004a37ad                       ; 004a3775
        ;   XREF to: 004a37ad (CONDITIONAL_JUMP)  ; LAB_004a37ad
    INC EBX                             ; 004a3777
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a3778
    ADD ESI,0x4                         ; 004a377e
    CMP EBX,ECX                         ; 004a3781
    JL 0x004a3763                       ; 004a3783
        ;   XREF to: 004a3763 (CONDITIONAL_JUMP)  ; LAB_004a3763
    PUSH 0x5d5dc8                       ; 004a3785 | DAT_005d5dc8
        ;   Label: LAB_004a3785
    PUSH EBP                            ; 004a378a
    CALL core_fldnotes.cpp_FUN_004a28b0 ; 004a378b
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a28b0()
    ADD ESP,0x8                         ; 004a3790
    TEST EAX,EAX                        ; 004a3793
    JL 0x004a37b2                       ; 004a3795
        ;   XREF to: 004a37b2 (CONDITIONAL_JUMP)  ; LAB_004a37b2
    MOV EBX,dword ptr [EDI + 0x140]     ; 004a3797
    MOV EAX,dword ptr [EBP + 0x10]      ; 004a379d
    SUB EAX,EBX                         ; 004a37a0
    MOV dword ptr [EDI + 0x144],EAX     ; 004a37a2
    MOV EAX,0x1                         ; 004a37a8
    POP EBP                             ; 004a37ad
        ;   Label: LAB_004a37ad
    POP EDI                             ; 004a37ae
    POP ESI                             ; 004a37af
    POP EBX                             ; 004a37b0
    RET                                 ; 004a37b1
    XOR EAX,EAX                         ; 004a37b2
        ;   Label: LAB_004a37b2
    POP EBP                             ; 004a37b4
    POP EDI                             ; 004a37b5
    POP ESI                             ; 004a37b6
    POP EBX                             ; 004a37b7
    RET                                 ; 004a37b8

