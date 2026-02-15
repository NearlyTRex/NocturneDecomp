; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_00603d60(void)
;
;
; XREF[2]:
;   crt_string.c_parseFloatString_FUN_00605b9b at 00605d09
;   crt_unknown.c_FUN_00603dc8 at 00603fc8
;
; Called Functions:
;   crt_unknown.c_CondCallDoNothing_FUN_00603ccc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00603d60
        ;   Label: crt_unknown.c_FUN_00603d60
    MOV EBP,ESP                         ; 00603d61
    PUSH EBX                            ; 00603d63
    PUSH ESI                            ; 00603d64
    MOV EBX,dword ptr [EBP + 0xc]       ; 00603d65
    CMP EBX,0x1000                      ; 00603d68
    JLE 0x00603d81                      ; 00603d6e
        ;   XREF to: 00603d81 (CONDITIONAL_JUMP)  ; LAB_00603d81
    PUSH 0x1000                         ; 00603d70
    MOV ECX,dword ptr [EBP + 0x8]       ; 00603d75
    PUSH ECX                            ; 00603d78
    SUB EBX,0x1000                      ; 00603d79
    JMP 0x00603d98                      ; 00603d7f
        ;   XREF to: 00603d98 (UNCONDITIONAL_JUMP)  ; LAB_00603d98
    CMP EBX,0xfffff000                  ; 00603d81
        ;   Label: LAB_00603d81
    JGE 0x00603da0                      ; 00603d87
        ;   XREF to: 00603da0 (CONDITIONAL_JUMP)  ; LAB_00603da0
    PUSH 0xfffff000                     ; 00603d89
    MOV EDX,dword ptr [EBP + 0x8]       ; 00603d8e
    PUSH EDX                            ; 00603d91
    ADD EBX,0x1000                      ; 00603d92
    CALL crt_unknown.c_CondCallDoNothing_FUN_00603ccc ; 00603d98
        ;   XREF to: 00603ccc (UNCONDITIONAL_CALL)  ; void crt_unknown.c_CondCallDoNothing_FUN_00603ccc()
        ;   Label: LAB_00603d98
    ADD ESP,0x8                         ; 00603d9d
    PUSH EBX                            ; 00603da0
        ;   Label: LAB_00603da0
    MOV ESI,dword ptr [EBP + 0x8]       ; 00603da1
    PUSH ESI                            ; 00603da4
    CALL crt_unknown.c_CondCallDoNothing_FUN_00603ccc ; 00603da5
        ;   XREF to: 00603ccc (UNCONDITIONAL_CALL)  ; void crt_unknown.c_CondCallDoNothing_FUN_00603ccc()
    ADD ESP,0x8                         ; 00603daa
    POP ESI                             ; 00603dad
    POP EBX                             ; 00603dae
    POP EBP                             ; 00603daf
    RET                                 ; 00603db0

