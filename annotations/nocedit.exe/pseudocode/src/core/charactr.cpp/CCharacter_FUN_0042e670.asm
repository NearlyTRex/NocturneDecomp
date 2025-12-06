; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_charactr.cpp_CCharacter_FUN_0042e670()
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e670
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042e670
    PUSH ESI                            ; 0042e671
    PUSH EDI                            ; 0042e672
    PUSH EBP                            ; 0042e673
    SUB ESP,0x18                        ; 0042e674
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e677
    CMP byte ptr [EAX + 0x23b8],0x0     ; 0042e67b
    JZ 0x0042e803                       ; 0042e682 | LAB_0042e803
        ;   XREF to: 0042e803 (CONDITIONAL_JUMP)
    ADD EAX,0x50                        ; 0042e688
    XOR EBX,EBX                         ; 0042e68b
    IMUL EDX,EBX,0x50                   ; 0042e68d
        ;   Label: LAB_0042e68d
    ADD EDX,dword ptr [ESP + 0x2c]      ; 0042e690
    MOV ECX,EAX                         ; 0042e694
    ADD EDX,0x4                         ; 0042e696
        ;   Label: LAB_0042e696
    MOV dword ptr [EDX + 0xb7e0],0x501502f9 ; 0042e699
    CMP EDX,ECX                         ; 0042e6a3
    JNZ 0x0042e696                      ; 0042e6a5 | LAB_0042e696
        ;   XREF to: 0042e696 (CONDITIONAL_JUMP)
    INC EBX                             ; 0042e6a7
    ADD EAX,0x50                        ; 0042e6a8
    CMP EBX,0x14                        ; 0042e6ab
    JL 0x0042e68d                       ; 0042e6ae | LAB_0042e68d
        ;   XREF to: 0042e68d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e6b0
    ADD EAX,0x158                       ; 0042e6b4
    PUSH EAX                            ; 0042e6b9
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042e6ba | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042e6bf
    MOV EDI,EAX                         ; 0042e6c2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e6c4
    MOV EBX,dword ptr [EAX + 0x2628]    ; 0042e6c8
    XOR ESI,ESI                         ; 0042e6ce
    TEST EBX,EBX                        ; 0042e6d0
    JLE 0x0042e762                      ; 0042e6d2 | LAB_0042e762
        ;   XREF to: 0042e762 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042e6d8
    ADD EAX,0x262c                      ; 0042e6dc
    ADD EBP,0x2634                      ; 0042e6e1
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e6e7
    IMUL EBX,ESI,0x38                   ; 0042e6eb
        ;   Label: LAB_0042e6eb
    PUSH 0x1                            ; 0042e6ee
    PUSH EBP                            ; 0042e6f0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042e6f1
    PUSH EDI                            ; 0042e6f5
    ADD EBX,ECX                         ; 0042e6f6
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0042e6f8 | int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2c],EAX      ; 0042e6fd
    IMUL EAX,EAX,0x54c                  ; 0042e700
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9cc] ; 0042e706
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0042e70d
    MOV dword ptr [EBX + 0x30],EAX      ; 0042e710
    IMUL EAX,ECX,0x54c                  ; 0042e713
    FILD dword ptr [EBX + 0x30]         ; 0042e719
    FDIV float ptr [EDI + EAX*0x1 + 0x988] ; 0042e71c
    ADD ESP,0xc                         ; 0042e723
    MOV EAX,dword ptr [EBX + 0x28]      ; 0042e726
    FSTP float ptr [EBX + 0x34]         ; 0042e729
    TEST EAX,EAX                        ; 0042e72c
    JL 0x0042e746                       ; 0042e72e | LAB_0042e746
        ;   XREF to: 0042e746 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBX],0x50       ; 0042e730
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042e733
    ADD EDX,EAX                         ; 0042e737
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042e739
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042e73c
    MOV dword ptr [EDX + EAX*0x4 + 0xb7e4],ECX ; 0042e73f
    CMP dword ptr [EBX + 0x28],0x0      ; 0042e746
        ;   Label: LAB_0042e746
    JLE 0x0042e80b                      ; 0042e74a | LAB_0042e80b
        ;   XREF to: 0042e80b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e750
        ;   Label: LAB_0042e750
    INC ESI                             ; 0042e754
    MOV EDX,dword ptr [EAX + 0x2628]    ; 0042e755
    ADD EBP,0x38                        ; 0042e75b
    CMP ESI,EDX                         ; 0042e75e
    JL 0x0042e6eb                       ; 0042e760 | LAB_0042e6eb
        ;   XREF to: 0042e6eb (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042e762
        ;   Label: LAB_0042e762
    XOR EAX,EAX                         ; 0042e766
    LEA ECX,[EDX + EAX*0x1]             ; 0042e768
        ;   Label: LAB_0042e768
    ADD EAX,0x4                         ; 0042e76b
    ADD EDX,0x50                        ; 0042e76e
    MOV dword ptr [ECX + 0xb7e4],0x0    ; 0042e771
    CMP EAX,0x50                        ; 0042e77b
    JNZ 0x0042e768                      ; 0042e77e | LAB_0042e768
        ;   XREF to: 0042e768 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e780
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e784
    ADD EAX,0x640                       ; 0042e788
    MOV dword ptr [ESP],EAX             ; 0042e78d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042e790
        ;   Label: LAB_0042e790
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042e794
    XOR EDI,EDI                         ; 0042e798
    MOV dword ptr [ESP + 0xc],EAX       ; 0042e79a
    ADD EBP,0x50                        ; 0042e79e
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e7a1
    IMUL ECX,EDI,0x50                   ; 0042e7a5
        ;   Label: LAB_0042e7a5
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042e7a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e7ac
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042e7b0
    ADD ECX,EBX                         ; 0042e7b4
    MOV EBX,EBP                         ; 0042e7b6
    FLD float ptr [ESI + 0xb7e4]        ; 0042e7b8
        ;   Label: LAB_0042e7b8
    FADD float ptr [ECX + 0xb7e4]       ; 0042e7be
    FST float ptr [ESP + 0x14]          ; 0042e7c4
    FCOMP float ptr [EDX + 0xb7e4]      ; 0042e7c8
    FNSTSW AX                           ; 0042e7ce
    SAHF                                ; 0042e7d0
    JC 0x0042e826                       ; 0042e7d1 | LAB_0042e826
        ;   XREF to: 0042e826 (CONDITIONAL_JUMP)
    ADD ECX,0x4                         ; 0042e7d3
        ;   Label: LAB_0042e7d3
    ADD EDX,0x4                         ; 0042e7d6
    CMP ECX,EBX                         ; 0042e7d9
    JNZ 0x0042e7b8                      ; 0042e7db | LAB_0042e7b8
        ;   XREF to: 0042e7b8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042e7dd
    INC EDI                             ; 0042e7e1
    ADD ESI,0x4                         ; 0042e7e2
    ADD EBP,0x50                        ; 0042e7e5
    MOV dword ptr [ESP + 0x10],ESI      ; 0042e7e8
    CMP EDI,0x14                        ; 0042e7ec
    JL 0x0042e7a5                       ; 0042e7ef | LAB_0042e7a5
        ;   XREF to: 0042e7a5 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x8]       ; 0042e7f1
    ADD EDI,0x50                        ; 0042e7f5
    MOV EBP,dword ptr [ESP]             ; 0042e7f8
    MOV dword ptr [ESP + 0x8],EDI       ; 0042e7fb
    CMP EDI,EBP                         ; 0042e7ff
    JNZ 0x0042e790                      ; 0042e801 | LAB_0042e790
        ;   XREF to: 0042e790 (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 0042e803
        ;   Label: LAB_0042e803
    POP EBP                             ; 0042e806
    POP EDI                             ; 0042e807
    POP ESI                             ; 0042e808
    POP EBX                             ; 0042e809
    RET                                 ; 0042e80a
    IMUL EAX,dword ptr [EBX + 0x4],0x50 ; 0042e80b
        ;   Label: LAB_0042e80b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042e80f
    ADD EDX,EAX                         ; 0042e813
    MOV EAX,dword ptr [EBX]             ; 0042e815
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042e817
    MOV dword ptr [EDX + EAX*0x4 + 0xb7e4],ECX ; 0042e81a
    JMP 0x0042e750                      ; 0042e821 | LAB_0042e750
        ;   XREF to: 0042e750 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e826
        ;   Label: LAB_0042e826
    MOV dword ptr [EDX + 0xb7e4],EAX    ; 0042e82a
    JMP 0x0042e7d3                      ; 0042e830 | LAB_0042e7d3
        ;   XREF to: 0042e7d3 (UNCONDITIONAL_JUMP)

