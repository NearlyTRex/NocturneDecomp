; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   shape_edittool.cpp_FUN_00494690 at 00494c86
;   shape_edittool.cpp_FUN_0049add0 at 0049aee0
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493efe
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493b3d
;
; Referenced Globals:
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d8a0
        ;   Label: shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
    MOV ECX,dword ptr [0x01c3f5d0]      ; 0049d8a1 | DAT_01c3f5d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d8a7
    CMP dword ptr [EAX],0x0             ; 0049d8ab
    JZ 0x0049d8de                       ; 0049d8ae
        ;   XREF to: 0049d8de (CONDITIONAL_JUMP)  ; LAB_0049d8de
    XOR EDX,EDX                         ; 0049d8b0
        ;   Label: LAB_0049d8b0
    CMP ECX,EAX                         ; 0049d8b2
        ;   Label: LAB_0049d8b2
    JNZ 0x0049d915                      ; 0049d8b4
        ;   XREF to: 0049d915 (CONDITIONAL_JUMP)  ; LAB_0049d915
    MOV BH,byte ptr [0x01c43544]        ; 0049d8b6 | DAT_01c43544
    MOV dword ptr [EAX + 0x18],EDX      ; 0049d8bc
    TEST BH,0x1                         ; 0049d8bf
    JNZ 0x0049d911                      ; 0049d8c2
        ;   XREF to: 0049d911 (CONDITIONAL_JUMP)  ; LAB_0049d911
    XOR ECX,EAX                         ; 0049d8c4
    TEST EDX,EDX                        ; 0049d8c6
    JZ 0x0049d911                       ; 0049d8c8
        ;   XREF to: 0049d911 (CONDITIONAL_JUMP)  ; LAB_0049d911
    MOV dword ptr [EAX + 0x18],0x0      ; 0049d8ca
    MOV EAX,0x1                         ; 0049d8d1
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049d8d6 | DAT_01c3f5d0
        ;   Label: LAB_0049d8d6
    POP EBX                             ; 0049d8dc
    RET                                 ; 0049d8dd
    MOV EDX,dword ptr [0x01c4353c]      ; 0049d8de | DAT_01c4353c
        ;   Label: LAB_0049d8de
    CMP EDX,dword ptr [EAX + 0x8]       ; 0049d8e4
    JL 0x0049d8b0                       ; 0049d8e7
        ;   XREF to: 0049d8b0 (CONDITIONAL_JUMP)  ; LAB_0049d8b0
    MOV EDX,dword ptr [0x01c43540]      ; 0049d8e9 | DAT_01c43540
    CMP EDX,dword ptr [EAX + 0xc]       ; 0049d8ef
    JL 0x0049d8b0                       ; 0049d8f2
        ;   XREF to: 0049d8b0 (CONDITIONAL_JUMP)  ; LAB_0049d8b0
    MOV EDX,dword ptr [0x01c4353c]      ; 0049d8f4 | DAT_01c4353c
    CMP EDX,dword ptr [EAX + 0x10]      ; 0049d8fa
    JGE 0x0049d8b0                      ; 0049d8fd
        ;   XREF to: 0049d8b0 (CONDITIONAL_JUMP)  ; LAB_0049d8b0
    MOV EDX,dword ptr [0x01c43540]      ; 0049d8ff | DAT_01c43540
    CMP EDX,dword ptr [EAX + 0x14]      ; 0049d905
    JGE 0x0049d8b0                      ; 0049d908
        ;   XREF to: 0049d8b0 (CONDITIONAL_JUMP)  ; LAB_0049d8b0
    MOV EDX,0x1                         ; 0049d90a
    JMP 0x0049d8b2                      ; 0049d90f
        ;   XREF to: 0049d8b2 (UNCONDITIONAL_JUMP)  ; LAB_0049d8b2
    XOR EAX,EAX                         ; 0049d911
        ;   Label: LAB_0049d911
    JMP 0x0049d8d6                      ; 0049d913
        ;   XREF to: 0049d8d6 (UNCONDITIONAL_JUMP)  ; LAB_0049d8d6
    TEST ECX,ECX                        ; 0049d915
        ;   Label: LAB_0049d915
    JNZ 0x0049d926                      ; 0049d917
        ;   XREF to: 0049d926 (CONDITIONAL_JUMP)  ; LAB_0049d926
    TEST byte ptr [0x01c43544],0x1      ; 0049d919 | DAT_01c43544
    JZ 0x0049d926                       ; 0049d920
        ;   XREF to: 0049d926 (CONDITIONAL_JUMP)  ; LAB_0049d926
    TEST EDX,EDX                        ; 0049d922
    JNZ 0x0049d930                      ; 0049d924
        ;   XREF to: 0049d930 (CONDITIONAL_JUMP)  ; LAB_0049d930
    XOR EAX,EAX                         ; 0049d926
        ;   Label: LAB_0049d926
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049d928 | DAT_01c3f5d0
    POP EBX                             ; 0049d92e
    RET                                 ; 0049d92f
    MOV ECX,EAX                         ; 0049d930
        ;   Label: LAB_0049d930
    MOV dword ptr [EAX + 0x18],0x1      ; 0049d932
    XOR EAX,EAX                         ; 0049d939
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049d93b | DAT_01c3f5d0
    POP EBX                             ; 0049d941
    RET                                 ; 0049d942

