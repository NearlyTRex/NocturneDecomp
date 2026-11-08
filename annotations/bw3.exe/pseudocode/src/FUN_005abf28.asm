; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005abf28(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005abf84 at 005abfae
;
; Called Functions:
;   FUN_005abe28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abf28
        ;   Label: FUN_005abf28
    PUSH ESI                            ; 005abf29
    PUSH EBP                            ; 005abf2a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005abf2b
    MOV ESI,dword ptr [ESP + 0x14]      ; 005abf2f
    CMP dword ptr [EAX + 0x20],0x0      ; 005abf33
    JNZ 0x005abf54                      ; 005abf37
        ;   XREF to: 005abf54 (CONDITIONAL_JUMP)  ; LAB_005abf54
    CMP dword ptr [ESI + 0x20],0x0      ; 005abf39
    JNZ 0x005abf54                      ; 005abf3d
        ;   XREF to: 005abf54 (CONDITIONAL_JUMP)  ; LAB_005abf54
    MOV EBX,dword ptr [EAX + 0x10]      ; 005abf3f
    MOV ECX,dword ptr [ESI + 0x10]      ; 005abf42
    CMP EBX,ECX                         ; 005abf45
    JLE 0x005abf52                      ; 005abf47
        ;   XREF to: 005abf52 (CONDITIONAL_JUMP)  ; LAB_005abf52
    MOV EAX,0x1                         ; 005abf49
    POP EBP                             ; 005abf4e
    POP ESI                             ; 005abf4f
    POP EBX                             ; 005abf50
    RET                                 ; 005abf51
    JL 0x005abf7b                       ; 005abf52
        ;   XREF to: 005abf7b (CONDITIONAL_JUMP)  ; LAB_005abf7b
        ;   Label: LAB_005abf52
    MOV EBP,dword ptr [ESP + 0x18]      ; 005abf54
        ;   Label: LAB_005abf54
    PUSH EBP                            ; 005abf58
    PUSH EAX                            ; 005abf59
    CALL FUN_005abe28                   ; 005abf5a
        ;   XREF to: 005abe28 (UNCONDITIONAL_CALL)  ; undefined FUN_005abe28()
    ADD ESP,0x8                         ; 005abf5f
    PUSH EBP                            ; 005abf62
    PUSH ESI                            ; 005abf63
    MOV EBX,EAX                         ; 005abf64
    CALL FUN_005abe28                   ; 005abf66
        ;   XREF to: 005abe28 (UNCONDITIONAL_CALL)  ; undefined FUN_005abe28()
    ADD ESP,0x8                         ; 005abf6b
    CMP EBX,EAX                         ; 005abf6e
    JLE 0x005abf7b                      ; 005abf70
        ;   XREF to: 005abf7b (CONDITIONAL_JUMP)  ; LAB_005abf7b
    MOV EAX,0x1                         ; 005abf72
    POP EBP                             ; 005abf77
    POP ESI                             ; 005abf78
    POP EBX                             ; 005abf79
    RET                                 ; 005abf7a
    XOR EAX,EAX                         ; 005abf7b
        ;   Label: LAB_005abf7b
    POP EBP                             ; 005abf7d
    POP ESI                             ; 005abf7e
    POP EBX                             ; 005abf7f
    RET                                 ; 005abf80

