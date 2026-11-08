; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b100(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5 )
;
;
; XREF[1]:
;   FUN_0040b6f0 at 0040b762
;
; Referenced Globals:
;   undefined4 DAT_005e969a
;   undefined4 DAT_005e969f
;   TerminatedCString s_s_005e96a4
;   undefined4 DAT_005e96ad
;   TerminatedCString s_none_0061f790
;
; Called Functions:
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b100
        ;   Label: FUN_0051b100
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051b101
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b105
    CMP EDX,0xff000000                  ; 0051b109
    JNC 0x0051b144                      ; 0051b10f
        ;   XREF to: 0051b144 (CONDITIONAL_JUMP)  ; LAB_0051b144
    MOV EAX,0x61f790                    ; 0051b111 | = "(none)"
    TEST EDX,EDX                        ; 0051b116
    JZ 0x0051b11c                       ; 0051b118
        ;   XREF to: 0051b11c (CONDITIONAL_JUMP)  ; LAB_0051b11c
    MOV EAX,EDX                         ; 0051b11a
    PUSH EAX                            ; 0051b11c | = "(none)"
        ;   Label: LAB_0051b11c
    PUSH 0x5e969f                       ; 0051b11d | DAT_005e969f
    PUSH EBX                            ; 0051b122
        ;   Label: LAB_0051b122
    CALL FUN_005c03c0                   ; 0051b123
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 0051b128
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051b12b
    TEST EDX,EDX                        ; 0051b12f
    JZ 0x0051b14c                       ; 0051b131
        ;   XREF to: 0051b14c (CONDITIONAL_JUMP)  ; LAB_0051b14c
    PUSH EDX                            ; 0051b133
    PUSH 0x5e96a4                       ; 0051b134 | = "\t\t// %s\n"
    PUSH EBX                            ; 0051b139
    CALL FUN_005c03c0                   ; 0051b13a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 0051b13f
    POP EBX                             ; 0051b142
    RET                                 ; 0051b143
    PUSH EDX                            ; 0051b144
        ;   Label: LAB_0051b144
    PUSH 0x5e969a                       ; 0051b145 | DAT_005e969a
    JMP 0x0051b122                      ; 0051b14a
        ;   XREF to: 0051b122 (UNCONDITIONAL_JUMP)  ; LAB_0051b122
    PUSH 0x5e96ad                       ; 0051b14c | DAT_005e96ad
        ;   Label: LAB_0051b14c
    PUSH EBX                            ; 0051b151
    CALL FUN_005c03c0                   ; 0051b152
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 0051b157
    POP EBX                             ; 0051b15a
    RET                                 ; 0051b15b

