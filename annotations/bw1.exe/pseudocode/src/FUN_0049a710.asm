; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049a710(int param_1,byte param_2)
;
;
; XREF[7]:
;   FUN_00494fd0 at 00495122
;   FUN_004cf5e0 at 004d0172
;   FUN_004d7250 at 004d76ac
;   FUN_0050ba70 at 0050c92d
;   FUN_0050d640 at 0050e6ce
;   FUN_0051c240 at 0051c3a8
;   FUN_0057db60 at 0057dbcd
;
; Referenced Globals:
;   undefined1* PTR_FUN_005ff834 = 0049a710
;   undefined4 DAT_005ff8b0
;
; Called Functions:
;   FUN_004993a0
;   FUN_0049c370
;   FUN_0049c9b0
;   FUN_0049d4b0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a710
        ;   Label: FUN_0049a710
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a711
    TEST byte ptr [ESP + 0xc],0x4       ; 0049a715
    JNZ 0x0049a77b                      ; 0049a71a
        ;   XREF to: 0049a77b (CONDITIONAL_JUMP)  ; LAB_0049a77b
    PUSH EBX                            ; 0049a71c
    MOV dword ptr [EBX + 0xc],0x5ff834  ; 0049a71d | PTR_FUN_005ff834
    CALL FUN_0049c370                   ; 0049a724
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c370()
    ADD ESP,0x4                         ; 0049a729
    PUSH 0x0                            ; 0049a72c
    ADD EBX,0x2d8                       ; 0049a72e
    PUSH EBX                            ; 0049a734
    CALL FUN_0049d4b0                   ; 0049a735
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d4b0()
    ADD ESP,0x8                         ; 0049a73a
    PUSH 0x0                            ; 0049a73d
    SUB EAX,0xe4                        ; 0049a73f
    PUSH EAX                            ; 0049a744
    CALL FUN_0049d4b0                   ; 0049a745
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d4b0()
    ADD ESP,0x8                         ; 0049a74a
    PUSH 0x0                            ; 0049a74d
    SUB EAX,0x38                        ; 0049a74f
    PUSH EAX                            ; 0049a752
    CALL FUN_0049c9b0                   ; 0049a753
        ;   XREF to: 0049c9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c9b0()
    ADD ESP,0x8                         ; 0049a758
    PUSH 0x1                            ; 0049a75b
    LEA EBX,[EAX + 0xfffffe44]          ; 0049a75d
    PUSH EBX                            ; 0049a763
    CALL FUN_004993a0                   ; 0049a764
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004993a0()
    ADD ESP,0x8                         ; 0049a769
    MOV DL,byte ptr [ESP + 0xc]         ; 0049a76c
    MOV EBX,EAX                         ; 0049a770
    TEST DL,0x2                         ; 0049a772
    JNZ 0x0049a796                      ; 0049a775
        ;   XREF to: 0049a796 (CONDITIONAL_JUMP)  ; LAB_0049a796
    MOV EAX,EBX                         ; 0049a777
    POP EBX                             ; 0049a779
    RET                                 ; 0049a77a
    PUSH 0x5ff8b0                       ; 0049a77b | DAT_005ff8b0
        ;   Label: LAB_0049a77b
    PUSH EBX                            ; 0049a780
    CALL FUN_005c030f                   ; 0049a781
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0049a786
    PUSH EAX                            ; 0049a789
    CALL FUN_005c0336                   ; 0049a78a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0049a78f
    MOV EAX,EBX                         ; 0049a792
    POP EBX                             ; 0049a794
    RET                                 ; 0049a795
    PUSH EAX                            ; 0049a796
        ;   Label: LAB_0049a796
    CALL FUN_005c0344                   ; 0049a797
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0049a79c
    MOV EAX,EBX                         ; 0049a79f
    POP EBX                             ; 0049a7a1
    RET                                 ; 0049a7a2

