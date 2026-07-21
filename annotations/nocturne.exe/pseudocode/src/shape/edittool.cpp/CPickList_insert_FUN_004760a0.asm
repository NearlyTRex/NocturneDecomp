; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_CPickList_insert_FUN_004760a0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057eefa
;   string s_CPickList::insert_-_can't_do_thi_0057ef10
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   shape_edittool.cpp_CStrList_insert_FUN_00473cf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004760a0
        ;   Label: shape_edittool.cpp_CPickList_insert_FUN_004760a0
    PUSH EDI                            ; 004760a1
    PUSH EBP                            ; 004760a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004760a3
    CMP dword ptr [EAX + 0x130],0x0     ; 004760a7
    JG 0x004760cb                       ; 004760ae
        ;   XREF to: 004760cb (CONDITIONAL_JUMP)  ; LAB_004760cb
    MOV ESI,dword ptr [ESP + 0x18]      ; 004760b0
        ;   Label: LAB_004760b0
    PUSH ESI                            ; 004760b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004760b5
    PUSH EDI                            ; 004760b9
    MOV EBP,dword ptr [ESP + 0x18]      ; 004760ba
    PUSH EBP                            ; 004760be
    CALL shape_edittool.cpp_CStrList_insert_FUN_00473cf0 ; 004760bf
        ;   XREF to: 00473cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_insert_FUN_00473cf0()
    ADD ESP,0xc                         ; 004760c4
    POP EBP                             ; 004760c7
    POP EDI                             ; 004760c8
    POP ESI                             ; 004760c9
    RET                                 ; 004760ca
    PUSH EBX                            ; 004760cb
        ;   Label: LAB_004760cb
    MOV ECX,0x57eefa                    ; 004760cc | = "..\\shape\\edittool.cpp"
    MOV EBX,0xe1d                       ; 004760d1
    PUSH 0x57ef10                       ; 004760d6 | = "CPickList::insert - can't do this aft..."
    MOV dword ptr [0x01cc4800],ECX      ; 004760db | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004760e1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004760e7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004760ec
    POP EBX                             ; 004760ef
    JMP 0x004760b0                      ; 004760f0
        ;   XREF to: 004760b0 (UNCONDITIONAL_JUMP)  ; LAB_004760b0

