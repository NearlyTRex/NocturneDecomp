; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7c40(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0819
;   TerminatedCString s_Animation_005f081f
;
; Called Functions:
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7c40
        ;   Label: FUN_005a7c40
    PUSH ESI                            ; 005a7c41
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a7c42
    PUSH 0x5f0819                       ; 005a7c46 | = "Death"
    LEA EBX,[ESI + 0x10af8]             ; 005a7c4b
    PUSH EBX                            ; 005a7c51
    CALL FUN_0059daa0                   ; 005a7c52
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a7c57
    TEST EAX,EAX                        ; 005a7c5a
    JZ 0x005a7c61                       ; 005a7c5c
        ;   XREF to: 005a7c61 (CONDITIONAL_JUMP)  ; LAB_005a7c61
    POP ESI                             ; 005a7c5e
        ;   Label: LAB_005a7c5e
    POP EBX                             ; 005a7c5f
    RET                                 ; 005a7c60
    PUSH 0x5f081f                       ; 005a7c61 | = "Animation"
        ;   Label: LAB_005a7c61
    PUSH EBX                            ; 005a7c66
    CALL FUN_0059daa0                   ; 005a7c67
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a7c6c
    TEST EAX,EAX                        ; 005a7c6f
    JNZ 0x005a7c5e                      ; 005a7c71
        ;   XREF to: 005a7c5e (CONDITIONAL_JUMP)  ; LAB_005a7c5e
    PUSH ESI                            ; 005a7c73
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a7c74
    CALL dword ptr [EAX + 0x17c]        ; 005a7c7a
    ADD ESP,0x4                         ; 005a7c80
    POP ESI                             ; 005a7c83
    POP EBX                             ; 005a7c84
    RET                                 ; 005a7c85

