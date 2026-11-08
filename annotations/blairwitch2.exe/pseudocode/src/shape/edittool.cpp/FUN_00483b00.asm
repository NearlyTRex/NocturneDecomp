; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483b00(int *param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   FUN_00483c30 at 00483c79
;   FUN_00483cb0 at 00483d00
;   FUN_00483e10 at 00483e7d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d29d6
;   TerminatedCString s_CPickList_setItemHotKey_005d29ec
;   TerminatedCString s_shape_edittool_cpp_005d2a15
;   TerminatedCString s_Out_of_memory_005d2a2b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483b00
        ;   Label: FUN_00483b00
    PUSH ESI                            ; 00483b01
    PUSH EDI                            ; 00483b02
    PUSH EBP                            ; 00483b03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483b04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00483b08
    TEST ESI,ESI                        ; 00483b0c
    JL 0x00483b14                       ; 00483b0e
        ;   XREF to: 00483b14 (CONDITIONAL_JUMP)  ; LAB_00483b14
    CMP ESI,dword ptr [EBX]             ; 00483b10
    JL 0x00483b37                       ; 00483b12
        ;   XREF to: 00483b37 (CONDITIONAL_JUMP)  ; LAB_00483b37
    MOV ECX,0x5d29d6                    ; 00483b14 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00483b14
    MOV EDI,0x1115                      ; 00483b19
    PUSH 0x5d29ec                       ; 00483b1e | = "CPickList::setItemHotKey - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 00483b23 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00483b29 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00483b2f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00483b34
    CMP ESI,dword ptr [EBX + 0x1b4]     ; 00483b37
        ;   Label: LAB_00483b37
    JL 0x00483bb5                       ; 00483b3d
        ;   XREF to: 00483bb5 (CONDITIONAL_JUMP)  ; LAB_00483bb5
    CMP dword ptr [ESP + 0x1c],-0x1     ; 00483b43
    JZ 0x00483bc2                       ; 00483b48
        ;   XREF to: 00483bc2 (CONDITIONAL_JUMP)  ; LAB_00483bc2
    MOV EAX,dword ptr [EBX]             ; 00483b4e
    SHL EAX,0x2                         ; 00483b50
    PUSH EAX                            ; 00483b53
    MOV EDX,dword ptr [EBX + 0x1b8]     ; 00483b54
    PUSH EDX                            ; 00483b5a
    CALL FUN_005b8ce0                   ; 00483b5b
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 00483b60
    MOV dword ptr [EBX + 0x1b8],EAX     ; 00483b63
    TEST EAX,EAX                        ; 00483b69
    JZ 0x00483b90                       ; 00483b6b
        ;   XREF to: 00483b90 (CONDITIONAL_JUMP)  ; LAB_00483b90
    MOV EDX,dword ptr [EBX]             ; 00483b6d
        ;   Label: LAB_00483b6d
    MOV EAX,dword ptr [EBX + 0x1b4]     ; 00483b6f
    CMP EAX,EDX                         ; 00483b75
    JGE 0x00483bb5                      ; 00483b77
        ;   XREF to: 00483bb5 (CONDITIONAL_JUMP)  ; LAB_00483bb5
    MOV EDX,EAX                         ; 00483b79
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 00483b7b
    MOV dword ptr [EAX + EDX*0x4],0xffffffff ; 00483b81
    INC dword ptr [EBX + 0x1b4]         ; 00483b88
    JMP 0x00483b6d                      ; 00483b8e
        ;   XREF to: 00483b6d (UNCONDITIONAL_JUMP)  ; LAB_00483b6d
    MOV EDI,0x5d2a15                    ; 00483b90 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00483b90
    MOV EBP,0x111d                      ; 00483b95
    PUSH 0x5d2a2b                       ; 00483b9a | = "Out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 00483b9f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00483ba5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00483bab
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00483bb0
    JMP 0x00483b6d                      ; 00483bb3
        ;   XREF to: 00483b6d (UNCONDITIONAL_JUMP)  ; LAB_00483b6d
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 00483bb5
        ;   Label: LAB_00483bb5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00483bbb
    MOV dword ptr [EAX + ESI*0x4],EDX   ; 00483bbf
    POP EBP                             ; 00483bc2
        ;   Label: LAB_00483bc2
    POP EDI                             ; 00483bc3
    POP ESI                             ; 00483bc4
    POP EBX                             ; 00483bc5
    RET                                 ; 00483bc6

