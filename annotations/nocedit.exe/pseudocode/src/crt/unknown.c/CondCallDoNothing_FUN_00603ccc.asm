; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_CondCallDoNothing_FUN_00603ccc(void)
;
; Parameters:
; float10 *        Stack[0x4]:4   in_stack_00000004
; int              Stack[0x8]:4   in_stack_00000008
;
; Referenced Globals:
;   undefined4 SUB_0060445e
;
; Called Functions:
;   crt_unknown.c_FUN_00603c74
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00603ccc
        ;   Label: crt_unknown.c_CondCallDoNothing_FUN_00603ccc
    MOV EBP,ESP                         ; 00603ccd
    PUSH EBX                            ; 00603ccf
    PUSH ESI                            ; 00603cd0
    PUSH EDI                            ; 00603cd1
    SUB ESP,0xc                         ; 00603cd2
    MOV ESI,dword ptr [EBP + 0x8]       ; 00603cd5
    MOV EBX,dword ptr [EBP + 0xc]       ; 00603cd8
    TEST EBX,EBX                        ; 00603cdb
    JZ 0x0060445e                       ; 00603cdd
        ;   XREF to: 0060445e (CONDITIONAL_JUMP)  ; SUB_0060445e
    PUSH 0x0                            ; 00603ce3
    FSTCW word ptr [ESP]                ; 00603ce5
    POP EAX                             ; 00603ce9
    MOV EDI,EAX                         ; 00603cea
    OR AH,0x3                           ; 00603cec
    AND EAX,0xffff                      ; 00603cef
    PUSH EAX                            ; 00603cf4
    FLDCW word ptr [ESP]                ; 00603cf5
    POP EAX                             ; 00603cf8
    MOV EDX,0x3fff                      ; 00603cf9
    XOR ECX,ECX                         ; 00603cfe
    MOV word ptr [EBP + -0x10],DX       ; 00603d00
    MOV EDX,0x80000000                  ; 00603d04
    MOV dword ptr [EBP + -0x18],ECX     ; 00603d09
    MOV dword ptr [EBP + -0x14],EDX     ; 00603d0c
    TEST EBX,EBX                        ; 00603d0f
    JGE 0x00603d35                      ; 00603d11
        ;   XREF to: 00603d35 (CONDITIONAL_JUMP)  ; LAB_00603d35
    MOV EAX,EBX                         ; 00603d13
    NEG EAX                             ; 00603d15
    PUSH EAX                            ; 00603d17
    LEA EAX,[EBP + -0x18]               ; 00603d18
    PUSH EAX                            ; 00603d1b
    MOV EBX,ESI                         ; 00603d1c
    CALL crt_unknown.c_FUN_00603c74     ; 00603d1e
        ;   XREF to: 00603c74 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00603c74()
    ADD ESP,0x8                         ; 00603d23
    LEA EDX,[EBP + -0x18]               ; 00603d26
    MOV EAX,ESI                         ; 00603d29
    FLD extended double ptr [EAX]       ; 00603d2b
    FLD extended double ptr [EDX]       ; 00603d2d
    FDIVP                               ; 00603d2f
    FSTP extended double ptr [EBX]      ; 00603d31
    JMP 0x00603d51                      ; 00603d33
        ;   XREF to: 00603d51 (UNCONDITIONAL_JUMP)  ; LAB_00603d51
    PUSH EBX                            ; 00603d35
        ;   Label: LAB_00603d35
    LEA EAX,[EBP + -0x18]               ; 00603d36
    PUSH EAX                            ; 00603d39
    CALL crt_unknown.c_FUN_00603c74     ; 00603d3a
        ;   XREF to: 00603c74 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00603c74()
    MOV EBX,ESI                         ; 00603d3f
    ADD ESP,0x8                         ; 00603d41
    LEA EDX,[EBP + -0x18]               ; 00603d44
    MOV EAX,ESI                         ; 00603d47
    FLD extended double ptr [EAX]       ; 00603d49
    FLD extended double ptr [EDX]       ; 00603d4b
    FMULP                               ; 00603d4d
    FSTP extended double ptr [EBX]      ; 00603d4f
    XOR EAX,EAX                         ; 00603d51
        ;   Label: LAB_00603d51
    MOV AX,DI                           ; 00603d53
    PUSH EAX                            ; 00603d56
    FLDCW word ptr [ESP]                ; 00603d57
    POP EAX                             ; 00603d5a
    JMP 0x0060445e                      ; 00603d5b
        ;   XREF to: 0060445e (UNCONDITIONAL_CALL)  ; SUB_0060445e

