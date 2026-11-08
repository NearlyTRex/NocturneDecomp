; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465730(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x36]:4  local_36
; undefined4       Stack[-0x2e]:4  local_2e
;
; XREF[4]:
;   FUN_004656d0 at 00465711
;   FUN_004e44e0 at 004e4561
;   FUN_00512fb0 at 00513010
;   FUN_00514560 at 00514597
;
; Called Functions:
;   FUN_00465ff0
;   thunk_FUN_005aaed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465730
        ;   Label: FUN_00465730
    SUB ESP,0x148                       ; 00465731
    MOV EBX,dword ptr [ESP + 0x150]     ; 00465737
    TEST EBX,EBX                        ; 0046573e
    JZ 0x00465747                       ; 00465740
        ;   XREF to: 00465747 (CONDITIONAL_JUMP)  ; LAB_00465747
    CMP byte ptr [EBX],0x0              ; 00465742
    JNZ 0x00465751                      ; 00465745
        ;   XREF to: 00465751 (CONDITIONAL_JUMP)  ; LAB_00465751
    XOR EAX,EAX                         ; 00465747
        ;   Label: LAB_00465747
    ADD ESP,0x148                       ; 00465749
        ;   Label: LAB_00465749
    POP EBX                             ; 0046574f
    RET                                 ; 00465750
    PUSH EBX                            ; 00465751
        ;   Label: LAB_00465751
    LEA EAX,[ESP + 0x4]                 ; 00465752
    PUSH EAX                            ; 00465756
    CALL FUN_00465ff0                   ; 00465757
        ;   XREF to: 00465ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ff0()
    ADD ESP,0x8                         ; 0046575c
    TEST EAX,EAX                        ; 0046575f
    JZ 0x00465749                       ; 00465761
        ;   XREF to: 00465749 (CONDITIONAL_JUMP)  ; LAB_00465749
    LEA EAX,[ESP + 0x100]               ; 00465763
    PUSH EAX                            ; 0046576a
    LEA EAX,[ESP + 0x4]                 ; 0046576b
    PUSH EAX                            ; 0046576f
    CALL thunk_FUN_005aaed4             ; 00465770
        ;   XREF to: 005a4bc4 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005aaed4()
    ADD ESP,0x8                         ; 00465775
    TEST EAX,EAX                        ; 00465778
    JNZ 0x00465747                      ; 0046577a
        ;   XREF to: 00465747 (CONDITIONAL_JUMP)  ; LAB_00465747
    PUSH EDI                            ; 0046577c
    PUSH ESI                            ; 0046577d
    MOV EAX,dword ptr [ESP + 0x11e]     ; 0046577e
    MOV dword ptr [EBX + 0x204],EAX     ; 00465785
    MOV EAX,dword ptr [ESP + 0x126]     ; 0046578b
    MOV dword ptr [EBX + 0x200],0x0     ; 00465792
    LEA ESI,[ESP + 0x8]                 ; 0046579c
    MOV dword ptr [EBX + 0x20c],EAX     ; 004657a0
    LEA EDI,[EBX + 0x100]               ; 004657a6
    MOV dword ptr [EBX + 0x210],EAX     ; 004657ac
    PUSH EDI                            ; 004657b2
    MOV AL,byte ptr [ESI]               ; 004657b3
        ;   Label: LAB_004657b3
    MOV byte ptr [EDI],AL               ; 004657b5
    CMP AL,0x0                          ; 004657b7
    JZ 0x004657cb                       ; 004657b9
        ;   XREF to: 004657cb (CONDITIONAL_JUMP)  ; LAB_004657cb
    MOV AL,byte ptr [ESI + 0x1]         ; 004657bb
    ADD ESI,0x2                         ; 004657be
    MOV byte ptr [EDI + 0x1],AL         ; 004657c1
    ADD EDI,0x2                         ; 004657c4
    CMP AL,0x0                          ; 004657c7
    JNZ 0x004657b3                      ; 004657c9
        ;   XREF to: 004657b3 (CONDITIONAL_JUMP)  ; LAB_004657b3
    POP EDI                             ; 004657cb
        ;   Label: LAB_004657cb
    MOV EAX,0x1                         ; 004657cc
    MOV dword ptr [EBX + 0x208],0x0     ; 004657d1
    POP ESI                             ; 004657db
    POP EDI                             ; 004657dc
    ADD ESP,0x148                       ; 004657dd
    POP EBX                             ; 004657e3
    RET                                 ; 004657e4

