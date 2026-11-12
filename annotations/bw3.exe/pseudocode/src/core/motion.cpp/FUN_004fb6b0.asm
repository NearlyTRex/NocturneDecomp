; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_004fb6b0(int *param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb6b0
        ;   Label: core_motion.cpp_FUN_004fb6b0
    PUSH ESI                            ; 004fb6b1
    PUSH EDI                            ; 004fb6b2
    PUSH EBP                            ; 004fb6b3
    SUB ESP,0x8                         ; 004fb6b4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004fb6b7
    PUSH 0x5c9890                       ; 004fb6bb
    PUSH EDI                            ; 004fb6c0
    CALL crt_unknown.c_FUN_005a3140     ; 004fb6c1
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004fb6c6
    PUSH 0x3                            ; 004fb6c9
    PUSH 0x5c98a8                       ; 004fb6cb
    PUSH EDI                            ; 004fb6d0
    CALL crt_unknown.c_FUN_005a3140     ; 004fb6d1
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb6d6
    PUSH 0x5c98ac                       ; 004fb6d9
    PUSH EDI                            ; 004fb6de
    CALL crt_unknown.c_FUN_005a3140     ; 004fb6df
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004fb6e4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fb6e7
    MOV EDX,dword ptr [EAX]             ; 004fb6eb
    PUSH EDX                            ; 004fb6ed
    PUSH 0x5c98bb                       ; 004fb6ee
    PUSH EDI                            ; 004fb6f3
    CALL crt_unknown.c_FUN_005a3140     ; 004fb6f4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb6f9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fb6fc
    MOV ECX,dword ptr [EAX]             ; 004fb700
    XOR EBX,EBX                         ; 004fb702
    TEST ECX,ECX                        ; 004fb704
    JLE 0x004fb730                      ; 004fb706
        ;   XREF to: 004fb730 (CONDITIONAL_JUMP)  ; LAB_004fb730
    LEA ESI,[EAX + 0x4]                 ; 004fb708
    PUSH ESI                            ; 004fb70b
        ;   Label: LAB_004fb70b
    PUSH 0x5c98bf                       ; 004fb70c
    PUSH EDI                            ; 004fb711
    CALL crt_unknown.c_FUN_005a3140     ; 004fb712
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb717
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fb71a
    INC EBX                             ; 004fb71e
    MOV EBP,dword ptr [EAX]             ; 004fb71f
    ADD ESI,0x1e                        ; 004fb721
    CMP EBX,EBP                         ; 004fb724
    JL 0x004fb70b                       ; 004fb726
        ;   XREF to: 004fb70b (CONDITIONAL_JUMP)  ; LAB_004fb70b
    LEA EAX,[EAX]                       ; 004fb728

