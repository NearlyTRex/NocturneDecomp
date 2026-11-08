; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0850(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004f1020 at 004f1095
;   FUN_004f1190 at 004f11e2
;   FUN_004f2a10 at 004f2abc
;
; Referenced Globals:
;   void* PTR_caseD_1_004f083c = 004f08fa
;   void* PTR_caseD_3_004f0844 = 004f08d8
;   undefined4 DAT_01d76f68
;   undefined4 DAT_01d76f6c
;   undefined4 DAT_01d7777c
;   undefined4 DAT_01d77780
;   undefined4 DAT_01d77784
;   undefined4 DAT_01d777bc
;   undefined4 DAT_01d777c4
;
; Called Functions:
;   FUN_004f0510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0850
        ;   Label: FUN_004f0850
    PUSH ESI                            ; 004f0851
    PUSH EDI                            ; 004f0852
    PUSH EBP                            ; 004f0853
    SUB ESP,0x8                         ; 004f0854
    MOV EBX,dword ptr [0x01d76f6c]      ; 004f0857 | DAT_01d76f6c
    XOR EDX,EDX                         ; 004f085d
    MOV ECX,dword ptr [0x01d76f68]      ; 004f085f | DAT_01d76f68
    MOV dword ptr [ESP],EDX             ; 004f0865
    TEST ECX,ECX                        ; 004f0868
    JLE 0x004f08ec                      ; 004f086a
        ;   XREF to: 004f08ec (CONDITIONAL_JUMP)  ; LAB_004f08ec
    MOV EBP,0x1d7777c                   ; 004f0870
    MOV ECX,dword ptr [ESP]             ; 004f0875
        ;   Label: LAB_004f0875
    MOV EAX,[0x01d76f68]                ; 004f0878 | DAT_01d76f68
    INC ECX                             ; 004f087d
    CMP ECX,EAX                         ; 004f087e
    JNZ 0x004f0884                      ; 004f0880
        ;   XREF to: 004f0884 (CONDITIONAL_JUMP)  ; LAB_004f0884
    XOR ECX,EAX                         ; 004f0882
    MOV ESI,0x1d7777c                   ; 004f0884
        ;   Label: LAB_004f0884
    SHL ECX,0x6                         ; 004f0889
    FLD float ptr [EBP]                 ; 004f088c | DAT_01d7777c | DAT_01d777bc
    ADD ESI,ECX                         ; 004f088f
    MOV EDX,EBP                         ; 004f0891
    MOV dword ptr [ESP + 0x4],ESI       ; 004f0893
    XOR ECX,ECX                         ; 004f0897
    FCOMP float ptr [EBP + 0x8]         ; 004f0899 | DAT_01d77784 | DAT_01d777c4
    FNSTSW AX                           ; 004f089c
    SAHF                                ; 004f089e
    JC 0x004f08a6                       ; 004f089f
        ;   XREF to: 004f08a6 (CONDITIONAL_JUMP)  ; LAB_004f08a6
    MOV ECX,0x1                         ; 004f08a1
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f08a6
        ;   Label: LAB_004f08a6
    FLD float ptr [ESI]                 ; 004f08aa | DAT_01d7777c
    FCOMP float ptr [ESI + 0x8]         ; 004f08ac | DAT_01d77784
    FNSTSW AX                           ; 004f08af
    SAHF                                ; 004f08b1
    JC 0x004f08b7                       ; 004f08b2
        ;   XREF to: 004f08b7 (CONDITIONAL_JUMP)  ; LAB_004f08b7
    OR CL,0x2                           ; 004f08b4
    CMP ECX,0x3                         ; 004f08b7
        ;   Label: LAB_004f08b7
    JA 0x004f08d8                       ; 004f08ba
        ;   XREF to: 004f08d8 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f0838]  ; 004f08bc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f08c3
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f08c5
    MOV ECX,0x10                        ; 004f08c8
    LEA EDI,[ESI + 0x1d76f7c]           ; 004f08cd
    MOV ESI,EDX                         ; 004f08d3
    INC EBX                             ; 004f08d5
    MOVSD.REP ES:EDI,ESI                ; 004f08d6 | DAT_01d7777c | DAT_01d77780
    MOV ESI,dword ptr [ESP]             ; 004f08d8
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d76f68]      ; 004f08db | DAT_01d76f68
    INC ESI                             ; 004f08e1
    ADD EBP,0x40                        ; 004f08e2
    MOV dword ptr [ESP],ESI             ; 004f08e5
    CMP ESI,EDI                         ; 004f08e8
    JL 0x004f0875                       ; 004f08ea
        ;   XREF to: 004f0875 (CONDITIONAL_JUMP)  ; LAB_004f0875
    MOV dword ptr [0x01d76f6c],EBX      ; 004f08ec | DAT_01d76f6c
        ;   Label: LAB_004f08ec
    ADD ESP,0x8                         ; 004f08f2
    POP EBP                             ; 004f08f5
    POP EDI                             ; 004f08f6
    POP ESI                             ; 004f08f7
    POP EBX                             ; 004f08f8
    RET                                 ; 004f08f9
    MOV ECX,EBX                         ; 004f08fa
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f08fc
    ADD ECX,0x1d76f7c                   ; 004f08ff
    PUSH ECX                            ; 004f0905
    PUSH EDX                            ; 004f0906 | DAT_01d7777c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0907
    PUSH ESI                            ; 004f090b
    MOV dword ptr [0x01d76f6c],EBX      ; 004f090c | DAT_01d76f6c
    CALL FUN_004f0510                   ; 004f0912
        ;   XREF to: 004f0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0510()
    MOV EBX,dword ptr [0x01d76f6c]      ; 004f0917 | DAT_01d76f6c
    ADD ESP,0xc                         ; 004f091d
    INC EBX                             ; 004f0920
    JMP 0x004f08d8                      ; 004f0921
        ;   XREF to: 004f08d8 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f0923
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f0925
    MOV ECX,0x10                        ; 004f0928
    LEA EDI,[ESI + 0x1d76f7c]           ; 004f092d
    MOV ESI,EDX                         ; 004f0933
    INC EBX                             ; 004f0935
    MOVSD.REP ES:EDI,ESI                ; 004f0936 | DAT_01d7777c | DAT_01d77780
    MOV ECX,EBX                         ; 004f0938
    SHL ECX,0x6                         ; 004f093a
    ADD ECX,0x1d76f7c                   ; 004f093d
    PUSH ECX                            ; 004f0943
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0944
    PUSH ECX                            ; 004f0948
    PUSH EDX                            ; 004f0949 | DAT_01d7777c
    MOV dword ptr [0x01d76f6c],EBX      ; 004f094a | DAT_01d76f6c
    CALL FUN_004f0510                   ; 004f0950
        ;   XREF to: 004f0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0510()
    MOV EBX,dword ptr [0x01d76f6c]      ; 004f0955 | DAT_01d76f6c
    ADD ESP,0xc                         ; 004f095b
    INC EBX                             ; 004f095e
    JMP 0x004f08d8                      ; 004f095f
        ;   XREF to: 004f08d8 (UNCONDITIONAL_JUMP)  ; caseD_3

