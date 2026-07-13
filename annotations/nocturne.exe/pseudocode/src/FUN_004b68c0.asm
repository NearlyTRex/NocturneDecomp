; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b68c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059ef00
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_004efdd0
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b68c0
        ;   Label: FUN_004b68c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b68c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b68c5
    JNZ 0x004b6961                      ; 004b68ca
        ;   XREF to: 004b6961 (CONDITIONAL_JUMP)  ; LAB_004b6961
    PUSH 0x0                            ; 004b68d0
    ADD EBX,0xbc8c                      ; 004b68d2
    PUSH EBX                            ; 004b68d8
    CALL FUN_004efdd0                   ; 004b68d9
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004efdd0()
    ADD ESP,0x8                         ; 004b68de
    PUSH 0x0                            ; 004b68e1
    SUB EAX,0x88c8                      ; 004b68e3
    PUSH EAX                            ; 004b68e8
    CALL FUN_0040fe50                   ; 004b68e9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 004b68ee
    PUSH 0x0                            ; 004b68f1
    SUB EAX,0x4b0                       ; 004b68f3
    PUSH EAX                            ; 004b68f8
    CALL FUN_0040fe30                   ; 004b68f9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 004b68fe
    PUSH 0x0                            ; 004b6901
    SUB EAX,0x20c                       ; 004b6903
    PUSH EAX                            ; 004b6908
    CALL FUN_0040fe10                   ; 004b6909
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b690e
    PUSH 0x0                            ; 004b6911
    SUB EAX,0xb4                        ; 004b6913
    PUSH EAX                            ; 004b6918
    CALL FUN_0040fe10                   ; 004b6919
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 004b691e
    PUSH 0x0                            ; 004b6921
    SUB EAX,0x1c8                       ; 004b6923
    PUSH EAX                            ; 004b6928
    CALL FUN_00438250                   ; 004b6929
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 004b692e
    PUSH 0x0                            ; 004b6931
    SUB EAX,0x293c                      ; 004b6933
    PUSH EAX                            ; 004b6938
    CALL FUN_0051b6e0                   ; 004b6939
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 004b693e
    PUSH 0x1                            ; 004b6941
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b6943
    PUSH EBX                            ; 004b6949
    CALL FUN_00409ea0                   ; 004b694a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004b694f
    MOV DL,byte ptr [ESP + 0xc]         ; 004b6952
    MOV EBX,EAX                         ; 004b6956
    TEST DL,0x2                         ; 004b6958
    JNZ 0x004b697c                      ; 004b695b
        ;   XREF to: 004b697c (CONDITIONAL_JUMP)  ; LAB_004b697c
    MOV EAX,EBX                         ; 004b695d
    POP EBX                             ; 004b695f
    RET                                 ; 004b6960
    PUSH 0x59ef00                       ; 004b6961 | DAT_0059ef00
        ;   Label: LAB_004b6961
    PUSH EBX                            ; 004b6966
    CALL FUN_0056445f                   ; 004b6967
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004b696c
    PUSH EAX                            ; 004b696f
    CALL FUN_00564486                   ; 004b6970
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004b6975
    MOV EAX,EBX                         ; 004b6978
    POP EBX                             ; 004b697a
    RET                                 ; 004b697b
    PUSH EAX                            ; 004b697c
        ;   Label: LAB_004b697c
    CALL FUN_00564494                   ; 004b697d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b6982
    MOV EAX,EBX                         ; 004b6985
    POP EBX                             ; 004b6987
    RET                                 ; 004b6988

