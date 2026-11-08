; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005aad76(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_005a4b46 at 005a4b50
;   FUN_005a4b74 at 005a4b96
;
; Called Functions:
;   FUN_005aed4b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aad76
        ;   Label: FUN_005aad76
    MOV EBP,ESP                         ; 005aad77
    FTST                                ; 005aad79
    SUB ESP,0x10                        ; 005aad7b
    FSTSW word ptr [EBP + -0x8]         ; 005aad7e
    WAIT                                ; 005aad82
    XCHG word ptr [EBP + -0x8],AX       ; 005aad83
    SAHF                                ; 005aad87
    JNC 0x005aadac                      ; 005aad88
        ;   XREF to: 005aadac (CONDITIONAL_JUMP)  ; LAB_005aadac
    FSTP double ptr [EBP + -0x10]       ; 005aad8a
    MOV EAX,dword ptr [EBP + -0x8]      ; 005aad8d
    CMP AL,0x3                          ; 005aad90
    JZ 0x005aad97                       ; 005aad92
        ;   XREF to: 005aad97 (CONDITIONAL_JUMP)  ; LAB_005aad97
    FSTP double ptr [EBP + -0x10]       ; 005aad94
    MOV dword ptr [EBP + -0x4],EDX      ; 005aad97
        ;   Label: LAB_005aad97
    CALL FUN_005aed4b                   ; 005aad9a
        ;   XREF to: 005aed4b (UNCONDITIONAL_CALL)  ; undefined FUN_005aed4b()
    PUSH EDX                            ; 005aad9f
    PUSH EAX                            ; 005aada0
    FLD double ptr [ESP]                ; 005aada1
    MOV EDX,dword ptr [EBP + -0x4]      ; 005aada4
    WAIT                                ; 005aada7
    MOV AL,0x1                          ; 005aada8
    JMP 0x005aadb0                      ; 005aadaa
        ;   XREF to: 005aadb0 (UNCONDITIONAL_JUMP)  ; LAB_005aadb0
    FSQRT                               ; 005aadac
        ;   Label: LAB_005aadac
    MOV AL,0x0                          ; 005aadae
    MOV ESP,EBP                         ; 005aadb0
        ;   Label: LAB_005aadb0
    POP EBP                             ; 005aadb2
    RET                                 ; 005aadb3

