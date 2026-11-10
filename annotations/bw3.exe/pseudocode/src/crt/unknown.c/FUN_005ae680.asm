; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005ae680(HANDLE param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1c]:2  local_1c
; undefined1       Stack[-0x1a]:1  local_1a
; undefined1       Stack[-0x17]:1  local_17
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae798 at 005ae7f8
;
; Referenced Globals:
;   void* PTR_ReadConsoleInputA_005b3614 = 001b40ec
;   undefined4 DAT_00607e0c
;   undefined4 DAT_02d261d0
;   undefined4 DAT_02d261d4
;   undefined4 DAT_02d261d8
;
; Called Functions:
;   crt_unknown.c_FUN_005afdb0
;   ReadConsoleInputA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae680
        ;   Label: crt_unknown.c_FUN_005ae680
    PUSH ESI                            ; 005ae681
    PUSH EDI                            ; 005ae682
    PUSH EBP                            ; 005ae683
    SUB ESP,0x18                        ; 005ae684
    MOV ESI,dword ptr [0x02d261d8]      ; 005ae687 | DAT_02d261d8
    MOV EDI,dword ptr [0x02d261d4]      ; 005ae68d | DAT_02d261d4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005ae693
    MOV EAX,[0x00607e0c]                ; 005ae697 | DAT_00607e0c
    CMP EAX,0x1                         ; 005ae69c
    JC 0x005ae6e5                       ; 005ae69f
        ;   XREF to: 005ae6e5 (CONDITIONAL_JUMP)  ; LAB_005ae6e5
    JBE 0x005ae6aa                      ; 005ae6a1
        ;   XREF to: 005ae6aa (CONDITIONAL_JUMP)  ; LAB_005ae6aa
    CMP EAX,0x2                         ; 005ae6a3
    JZ 0x005ae6cc                       ; 005ae6a6
        ;   XREF to: 005ae6cc (CONDITIONAL_JUMP)  ; LAB_005ae6cc
    JMP 0x005ae6e5                      ; 005ae6a8
        ;   XREF to: 005ae6e5 (UNCONDITIONAL_JUMP)  ; LAB_005ae6e5
    DEC ESI                             ; 005ae6aa
        ;   Label: LAB_005ae6aa
    TEST EDI,EDI                        ; 005ae6ab
    JZ 0x005ae6bb                       ; 005ae6ad
        ;   XREF to: 005ae6bb (CONDITIONAL_JUMP)  ; LAB_005ae6bb
    TEST ESI,ESI                        ; 005ae6af
    JNZ 0x005ae6c5                      ; 005ae6b1
        ;   XREF to: 005ae6c5 (CONDITIONAL_JUMP)  ; LAB_005ae6c5
    MOV dword ptr [0x00607e0c],ESI      ; 005ae6b3 | DAT_00607e0c
    JMP 0x005ae6c5                      ; 005ae6b9
        ;   XREF to: 005ae6c5 (UNCONDITIONAL_JUMP)  ; LAB_005ae6c5
    MOV dword ptr [0x00607e0c],0x2      ; 005ae6bb | DAT_00607e0c
        ;   Label: LAB_005ae6bb
    MOV EAX,EDI                         ; 005ae6c5
        ;   Label: LAB_005ae6c5
    JMP 0x005ae784                      ; 005ae6c7
        ;   XREF to: 005ae784 (UNCONDITIONAL_JUMP)  ; LAB_005ae784
    TEST ESI,ESI                        ; 005ae6cc
        ;   Label: LAB_005ae6cc
    SETNZ AL                            ; 005ae6ce
    AND EAX,0xff                        ; 005ae6d1
    MOV [0x00607e0c],EAX                ; 005ae6d6 | DAT_00607e0c
    MOV EAX,[0x02d261d0]                ; 005ae6db | DAT_02d261d0
    JMP 0x005ae784                      ; 005ae6e0
        ;   XREF to: 005ae784 (UNCONDITIONAL_JUMP)  ; LAB_005ae784
    MOV dword ptr [0x02d261d8],ESI      ; 005ae6e5 | DAT_02d261d8
        ;   Label: LAB_005ae6e5
    MOV dword ptr [0x02d261d4],EDI      ; 005ae6eb | DAT_02d261d4
    LEA EAX,[ESP + 0x14]                ; 005ae6f1
        ;   Label: LAB_005ae6f1
    PUSH EAX                            ; 005ae6f5
    PUSH 0x1                            ; 005ae6f6
    LEA EAX,[ESP + 0x8]                 ; 005ae6f8
    PUSH EAX                            ; 005ae6fc
    PUSH EBX                            ; 005ae6fd
    CALL dword ptr CS:[0x5b3614]        ; 005ae6fe | PTR_ReadConsoleInputA_005b3614
    TEST EAX,EAX                        ; 005ae705
    JZ 0x005ae773                       ; 005ae707
        ;   XREF to: 005ae773 (CONDITIONAL_JUMP)  ; LAB_005ae773
    MOV EAX,ESP                         ; 005ae709
    PUSH EAX                            ; 005ae70b
    CALL crt_unknown.c_FUN_005afdb0     ; 005ae70c
        ;   XREF to: 005afdb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afdb0()
    ADD ESP,0x4                         ; 005ae711
    TEST EAX,EAX                        ; 005ae714
    JZ 0x005ae6f1                       ; 005ae716
        ;   XREF to: 005ae6f1 (CONDITIONAL_JUMP)  ; LAB_005ae6f1
    XOR EAX,EAX                         ; 005ae718
    MOV AX,word ptr [ESP + 0x8]         ; 005ae71a
    LEA ESI,[EAX + -0x1]                ; 005ae71f
    MOV AH,byte ptr [ESP + 0x11]        ; 005ae722
    MOVZX EDI,byte ptr [ESP + 0xe]      ; 005ae726
    TEST AH,0x1                         ; 005ae72b
    JNZ 0x005ae734                      ; 005ae72e
        ;   XREF to: 005ae734 (CONDITIONAL_JUMP)  ; LAB_005ae734
    TEST EDI,EDI                        ; 005ae730
    JNZ 0x005ae74f                      ; 005ae732
        ;   XREF to: 005ae74f (CONDITIONAL_JUMP)  ; LAB_005ae74f
    MOV EBP,0x2                         ; 005ae734
        ;   Label: LAB_005ae734
    XOR EAX,EAX                         ; 005ae739
    XOR EDI,EDI                         ; 005ae73b
    MOV AX,word ptr [ESP + 0xc]         ; 005ae73d
    MOV dword ptr [0x00607e0c],EBP      ; 005ae742 | DAT_00607e0c
    MOV [0x02d261d0],EAX                ; 005ae748 | DAT_02d261d0
    JMP 0x005ae75d                      ; 005ae74d
        ;   XREF to: 005ae75d (UNCONDITIONAL_JUMP)  ; LAB_005ae75d
    TEST ESI,ESI                        ; 005ae74f
        ;   Label: LAB_005ae74f
    JZ 0x005ae75d                       ; 005ae751
        ;   XREF to: 005ae75d (CONDITIONAL_JUMP)  ; LAB_005ae75d
    MOV dword ptr [0x00607e0c],0x1      ; 005ae753 | DAT_00607e0c
    MOV EAX,EDI                         ; 005ae75d
        ;   Label: LAB_005ae75d
    MOV dword ptr [0x02d261d4],EDI      ; 005ae75f | DAT_02d261d4
    MOV dword ptr [0x02d261d8],ESI      ; 005ae765 | DAT_02d261d8
    ADD ESP,0x18                        ; 005ae76b
    POP EBP                             ; 005ae76e
    POP EDI                             ; 005ae76f
    POP ESI                             ; 005ae770
    POP EBX                             ; 005ae771
    RET                                 ; 005ae772
    MOV EAX,0xffffffff                  ; 005ae773
        ;   Label: LAB_005ae773
    MOV EDI,dword ptr [0x02d261d4]      ; 005ae778 | DAT_02d261d4
    MOV ESI,dword ptr [0x02d261d8]      ; 005ae77e | DAT_02d261d8
    MOV dword ptr [0x02d261d4],EDI      ; 005ae784 | DAT_02d261d4
        ;   Label: LAB_005ae784
    MOV dword ptr [0x02d261d8],ESI      ; 005ae78a | DAT_02d261d8
    ADD ESP,0x18                        ; 005ae790
    POP EBP                             ; 005ae793
    POP EDI                             ; 005ae794
    POP ESI                             ; 005ae795
    POP EBX                             ; 005ae796
    RET                                 ; 005ae797

