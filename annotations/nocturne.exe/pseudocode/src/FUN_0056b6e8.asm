; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b6e8(int *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_00564fd8 at 00565010
;   FUN_00565264 at 0056529c
;   FUN_0056b6d0 at 0056b6df
;
; Referenced Globals:
;   void* PTR_FUN_005a49c4 = 0056b6e8
;   void* PTR_FUN_005a49cc = 0056b6d0
;   undefined4 DAT_005a4a00
;
; Called Functions:
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;   FUN_0056b633
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b6e8
        ;   Label: FUN_0056b6e8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b6e9
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b6ed
    JNZ 0x0056b727                      ; 0056b6f2
        ;   XREF to: 0056b727 (CONDITIONAL_JUMP)  ; LAB_0056b727
    MOV EAX,dword ptr [EBX]             ; 0056b6f4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056b6f6
    LEA EAX,[EBX + EDX*0x1]             ; 0056b6f9
    MOV dword ptr [EAX + -0x4],EDX      ; 0056b6fc
    MOV EAX,dword ptr [EBX]             ; 0056b6ff
    MOV dword ptr [EBX + 0x8],0x5a49c4  ; 0056b701 | PTR_FUN_005a49c4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b708
    MOV DL,byte ptr [ESP + 0xc]         ; 0056b70b
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a49cc ; 0056b70f | PTR_FUN_005a49cc
    TEST DL,0x1                         ; 0056b717
    JZ 0x0056b742                       ; 0056b71a
        ;   XREF to: 0056b742 (CONDITIONAL_JUMP)  ; LAB_0056b742
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b71c
        ;   Label: LAB_0056b71c
    JNZ 0x0056b755                      ; 0056b721
        ;   XREF to: 0056b755 (CONDITIONAL_JUMP)  ; LAB_0056b755
    MOV EAX,EBX                         ; 0056b723
    POP EBX                             ; 0056b725
    RET                                 ; 0056b726
    PUSH 0x5a4a00                       ; 0056b727 | DAT_005a4a00
        ;   Label: LAB_0056b727
    PUSH EBX                            ; 0056b72c
    CALL FUN_0056445f                   ; 0056b72d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0056b732
    PUSH EAX                            ; 0056b735
    CALL FUN_00564486                   ; 0056b736
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0056b73b
        ;   Label: LAB_0056b73b
    MOV EAX,EBX                         ; 0056b73e
    POP EBX                             ; 0056b740
    RET                                 ; 0056b741
    PUSH 0x1                            ; 0056b742
        ;   Label: LAB_0056b742
    ADD EBX,0x10                        ; 0056b744
    PUSH EBX                            ; 0056b747
    CALL FUN_0056b633                   ; 0056b748
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b633()
    ADD ESP,0x8                         ; 0056b74d
    LEA EBX,[EAX + -0x10]               ; 0056b750
    JMP 0x0056b71c                      ; 0056b753
        ;   XREF to: 0056b71c (UNCONDITIONAL_JUMP)  ; LAB_0056b71c
    PUSH EBX                            ; 0056b755
        ;   Label: LAB_0056b755
    CALL FUN_00564494                   ; 0056b756
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    JMP 0x0056b73b                      ; 0056b75b
        ;   XREF to: 0056b73b (UNCONDITIONAL_JUMP)  ; LAB_0056b73b

