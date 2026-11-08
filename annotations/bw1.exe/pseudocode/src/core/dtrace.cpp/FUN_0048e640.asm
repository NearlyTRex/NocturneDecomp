; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048e640(int param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0054e3c0 at 0054e463
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005dba1d
;   TerminatedCString s_CDemonRenderer_getPVS_PV_005dba30
;   TerminatedCString s_core_dtrace_cpp_005dba5b
;   TerminatedCString s_CDemonRaytrace_getPVS_no_005dba6e
;   TerminatedCString s_core_dtrace_cpp_005dba9c
;   TerminatedCString s_CDemonRaytrace_getPVS_ou_005dbaaf
;   TerminatedCString s_core_dtrace_cpp_005dbad6
;   TerminatedCString s_CDemonRenderer_savePVS_c_005dbae9
;   undefined4 DAT_01bef218
;   undefined4 DAT_01bef21c
;   undefined4 DAT_01bef224
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e640
        ;   Label: FUN_0048e640
    PUSH ESI                            ; 0048e641
    PUSH EDI                            ; 0048e642
    PUSH EBP                            ; 0048e643
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048e644
    CMP dword ptr [0x01bef21c],0x0      ; 0048e648 | DAT_01bef21c
    JNZ 0x0048e674                      ; 0048e64f
        ;   XREF to: 0048e674 (CONDITIONAL_JUMP)  ; LAB_0048e674
    MOV ECX,0x5dba1d                    ; 0048e651 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8ea                       ; 0048e656
    PUSH 0x5dba30                       ; 0048e65b | = "CDemonRenderer::getPVS - PVS is not v..."
    MOV dword ptr [0x01d1d400],ECX      ; 0048e660 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0048e666 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048e66c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048e671
    MOV EAX,[0x01bef218]                ; 0048e674 | DAT_01bef218
        ;   Label: LAB_0048e674
    MOV dword ptr [EBX],EAX             ; 0048e679
    SHL EAX,0x2                         ; 0048e67b
    PUSH EAX                            ; 0048e67e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048e67f
    MOV EDI,dword ptr [EAX]             ; 0048e683
    PUSH EDI                            ; 0048e685
    CALL FUN_005c10d0                   ; 0048e686
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0048e68b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048e68e
    MOV dword ptr [EDX],EAX             ; 0048e692
    CMP dword ptr [EBX],0x1             ; 0048e694
    JGE 0x0048e6bb                      ; 0048e697
        ;   XREF to: 0048e6bb (CONDITIONAL_JUMP)  ; LAB_0048e6bb
    MOV EAX,0x5dba5b                    ; 0048e699 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x8f6                       ; 0048e69e
    PUSH 0x5dba6e                       ; 0048e6a3 | = "CDemonRaytrace::getPVS - no cubes ren..."
    MOV [0x01d1d400],EAX                ; 0048e6a8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0048e6ad | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048e6b3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048e6b8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048e6bb
        ;   Label: LAB_0048e6bb
    CMP dword ptr [EAX],0x0             ; 0048e6bf
    JNZ 0x0048e6e7                      ; 0048e6c2
        ;   XREF to: 0048e6e7 (CONDITIONAL_JUMP)  ; LAB_0048e6e7
    MOV EBX,0x5dba9c                    ; 0048e6c4 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x8fa                       ; 0048e6c9
    PUSH 0x5dbaaf                       ; 0048e6ce | = "CDemonRaytrace::getPVS - out of memory"
    MOV dword ptr [0x01d1d400],EBX      ; 0048e6d3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0048e6d9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048e6df
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048e6e4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048e6e7
        ;   Label: LAB_0048e6e7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e6eb
    MOV EDI,dword ptr [EDX + 0x44]      ; 0048e6ef
    MOV EAX,dword ptr [EAX + 0x40]      ; 0048e6f2
    IMUL EAX,EDI                        ; 0048e6f5
    MOV ESI,dword ptr [EDX + 0x48]      ; 0048e6f8
    IMUL ESI,EAX                        ; 0048e6fb
    MOV EAX,[0x01bef218]                ; 0048e6fe | DAT_01bef218
    XOR EBP,EBP                         ; 0048e703
    TEST EAX,EAX                        ; 0048e705
    JLE 0x0048e760                      ; 0048e707
        ;   XREF to: 0048e760 (CONDITIONAL_JUMP)  ; LAB_0048e760
    XOR EDI,EDI                         ; 0048e709
    XOR EBX,EBX                         ; 0048e70b
        ;   Label: LAB_0048e70b
    TEST ESI,ESI                        ; 0048e70d
    JLE 0x0048e722                      ; 0048e70f
        ;   XREF to: 0048e722 (CONDITIONAL_JUMP)  ; LAB_0048e722
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e711
    MOV EDX,EDI                         ; 0048e715
    MOV EAX,dword ptr [EAX + 0x50]      ; 0048e717
    CMP EAX,dword ptr [EDX + 0x1bef220] ; 0048e71a | DAT_01bef224
        ;   Label: LAB_0048e71a
    JNZ 0x0048e765                      ; 0048e720
        ;   XREF to: 0048e765 (CONDITIONAL_JUMP)  ; LAB_0048e765
    CMP EBX,ESI                         ; 0048e722
        ;   Label: LAB_0048e722
    JL 0x0048e748                       ; 0048e724
        ;   XREF to: 0048e748 (CONDITIONAL_JUMP)  ; LAB_0048e748
    MOV EAX,0x5dbad6                    ; 0048e726 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x907                       ; 0048e72b
    PUSH 0x5dbae9                       ; 0048e730 | = "CDemonRenderer::savePVS - can't find ..."
    MOV [0x01d1d400],EAX                ; 0048e735 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0048e73a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048e740
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048e745
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048e748
        ;   Label: LAB_0048e748
    ADD EDI,0x4                         ; 0048e74c
    MOV EAX,dword ptr [EAX]             ; 0048e74f
    MOV EDX,dword ptr [0x01bef218]      ; 0048e751 | DAT_01bef218
    INC EBP                             ; 0048e757
    MOV dword ptr [EDI + EAX*0x1 + -0x4],EBX ; 0048e758
    CMP EBP,EDX                         ; 0048e75c
    JL 0x0048e70b                       ; 0048e75e
        ;   XREF to: 0048e70b (CONDITIONAL_JUMP)  ; LAB_0048e70b
    POP EBP                             ; 0048e760
        ;   Label: LAB_0048e760
    POP EDI                             ; 0048e761
    POP ESI                             ; 0048e762
    POP EBX                             ; 0048e763
    RET                                 ; 0048e764
    INC EBX                             ; 0048e765
        ;   Label: LAB_0048e765
    ADD EAX,0x34                        ; 0048e766
    CMP EBX,ESI                         ; 0048e769
    JL 0x0048e71a                       ; 0048e76b
        ;   XREF to: 0048e71a (CONDITIONAL_JUMP)  ; LAB_0048e71a
    JMP 0x0048e722                      ; 0048e76d
        ;   XREF to: 0048e722 (UNCONDITIONAL_JUMP)  ; LAB_0048e722

