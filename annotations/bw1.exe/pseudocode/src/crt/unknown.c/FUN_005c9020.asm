; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c9020(byte *param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c21f0 at 005c2229
;   crt_unknown.c_FUN_005c8ff0 at 005c9000
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_unknown.c_FUN_005c90c0
;   crt_unknown.c_FUN_005c9110
;   unkafter_zombie.cpp_FUN_005cc560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9020
        ;   Label: crt_unknown.c_FUN_005c9020
    PUSH ESI                            ; 005c9021
    PUSH EDI                            ; 005c9022
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c9023
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c9027
    XOR ESI,ESI                         ; 005c902b
    PUSH EBX                            ; 005c902d
        ;   Label: LAB_005c902d
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005c902e
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005c9033
    TEST EAX,EAX                        ; 005c9036
    JNZ 0x005c907a                      ; 005c9038
        ;   XREF to: 005c907a (CONDITIONAL_JUMP)  ; LAB_005c907a
    TEST EDI,EDI                        ; 005c903a
    JBE 0x005c907a                      ; 005c903c
        ;   XREF to: 005c907a (CONDITIONAL_JUMP)  ; LAB_005c907a
    CMP dword ptr [0x02c9f6e0],0x0      ; 005c903e | DAT_02c9f6e0
    JZ 0x005c906b                       ; 005c9045
        ;   XREF to: 005c906b (CONDITIONAL_JUMP)  ; LAB_005c906b
    MOV AL,byte ptr [EBX]               ; 005c9047
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005c9049
    AND AL,0x1                          ; 005c904f
    AND EAX,0xff                        ; 005c9051
    JZ 0x005c906b                       ; 005c9056
        ;   XREF to: 005c906b (CONDITIONAL_JUMP)  ; LAB_005c906b
    CMP byte ptr [EBX + 0x1],0x0        ; 005c9058
    JZ 0x005c907a                       ; 005c905c
        ;   XREF to: 005c907a (CONDITIONAL_JUMP)  ; LAB_005c907a
    PUSH EBX                            ; 005c905e
    CALL crt_unknown.c_FUN_005c9110     ; 005c905f
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9110()
    ADD ESP,0x4                         ; 005c9064
    ADD ESI,EAX                         ; 005c9067
    JMP 0x005c906c                      ; 005c9069
        ;   XREF to: 005c906c (UNCONDITIONAL_JUMP)  ; LAB_005c906c
    INC ESI                             ; 005c906b
        ;   Label: LAB_005c906b
    PUSH EBX                            ; 005c906c
        ;   Label: LAB_005c906c
    CALL crt_unknown.c_FUN_005c90c0     ; 005c906d
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    DEC EDI                             ; 005c9072
    MOV EBX,EAX                         ; 005c9073
    ADD ESP,0x4                         ; 005c9075
    JMP 0x005c902d                      ; 005c9078
        ;   XREF to: 005c902d (UNCONDITIONAL_JUMP)  ; LAB_005c902d
    MOV EAX,ESI                         ; 005c907a
        ;   Label: LAB_005c907a
    POP EDI                             ; 005c907c
    POP ESI                             ; 005c907d
    POP EBX                             ; 005c907e
    RET                                 ; 005c907f

