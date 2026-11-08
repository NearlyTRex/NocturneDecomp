; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484d00(int *param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   FUN_00484e30 at 00484e79
;   FUN_00484eb0 at 00484f00
;   FUN_00485010 at 0048507d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd82c
;   TerminatedCString s_CPickList_setItemHotKey_005bd842
;   TerminatedCString s_shape_edittool_cpp_005bd86b
;   TerminatedCString s_Out_of_memory_005bd881
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484d00
        ;   Label: FUN_00484d00
    PUSH ESI                            ; 00484d01
    PUSH EDI                            ; 00484d02
    PUSH EBP                            ; 00484d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00484d04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00484d08
    TEST ESI,ESI                        ; 00484d0c
    JL 0x00484d14                       ; 00484d0e
        ;   XREF to: 00484d14 (CONDITIONAL_JUMP)  ; LAB_00484d14
    CMP ESI,dword ptr [EBX]             ; 00484d10
    JL 0x00484d37                       ; 00484d12
        ;   XREF to: 00484d37 (CONDITIONAL_JUMP)  ; LAB_00484d37
    MOV ECX,0x5bd82c                    ; 00484d14 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00484d14
    MOV EDI,0x1199                      ; 00484d19
    PUSH 0x5bd842                       ; 00484d1e | = "CPickList::setItemHotKey - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 00484d23 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00484d29 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00484d2f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00484d34
    CMP ESI,dword ptr [EBX + 0x1b4]     ; 00484d37
        ;   Label: LAB_00484d37
    JL 0x00484db5                       ; 00484d3d
        ;   XREF to: 00484db5 (CONDITIONAL_JUMP)  ; LAB_00484db5
    CMP dword ptr [ESP + 0x1c],-0x1     ; 00484d43
    JZ 0x00484dc2                       ; 00484d48
        ;   XREF to: 00484dc2 (CONDITIONAL_JUMP)  ; LAB_00484dc2
    MOV EAX,dword ptr [EBX]             ; 00484d4e
    SHL EAX,0x2                         ; 00484d50
    PUSH EAX                            ; 00484d53
    MOV EDX,dword ptr [EBX + 0x1b8]     ; 00484d54
    PUSH EDX                            ; 00484d5a
    CALL FUN_005a3e50                   ; 00484d5b
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 00484d60
    MOV dword ptr [EBX + 0x1b8],EAX     ; 00484d63
    TEST EAX,EAX                        ; 00484d69
    JZ 0x00484d90                       ; 00484d6b
        ;   XREF to: 00484d90 (CONDITIONAL_JUMP)  ; LAB_00484d90
    MOV EDX,dword ptr [EBX]             ; 00484d6d
        ;   Label: LAB_00484d6d
    MOV EAX,dword ptr [EBX + 0x1b4]     ; 00484d6f
    CMP EAX,EDX                         ; 00484d75
    JGE 0x00484db5                      ; 00484d77
        ;   XREF to: 00484db5 (CONDITIONAL_JUMP)  ; LAB_00484db5
    MOV EDX,EAX                         ; 00484d79
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 00484d7b
    MOV dword ptr [EAX + EDX*0x4],0xffffffff ; 00484d81
    INC dword ptr [EBX + 0x1b4]         ; 00484d88
    JMP 0x00484d6d                      ; 00484d8e
        ;   XREF to: 00484d6d (UNCONDITIONAL_JUMP)  ; LAB_00484d6d
    MOV EDI,0x5bd86b                    ; 00484d90 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00484d90
    MOV EBP,0x11a1                      ; 00484d95
    PUSH 0x5bd881                       ; 00484d9a | = "Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 00484d9f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00484da5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00484dab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00484db0
    JMP 0x00484d6d                      ; 00484db3
        ;   XREF to: 00484d6d (UNCONDITIONAL_JUMP)  ; LAB_00484d6d
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 00484db5
        ;   Label: LAB_00484db5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00484dbb
    MOV dword ptr [EAX + ESI*0x4],EDX   ; 00484dbf
    POP EBP                             ; 00484dc2
        ;   Label: LAB_00484dc2
    POP EDI                             ; 00484dc3
    POP ESI                             ; 00484dc4
    POP EBX                             ; 00484dc5
    RET                                 ; 00484dc6

