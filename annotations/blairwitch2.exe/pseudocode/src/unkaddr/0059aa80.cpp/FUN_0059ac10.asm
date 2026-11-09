; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059ac10(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b6398
;
; Referenced Globals:
;   undefined4 DAT_026677b4
;   undefined4 DAT_026677e0
;
; Called Functions:
;   unkaddr_0059aa80.cpp_FUN_0059ab70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ac10
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059ac10
    PUSH ESI                            ; 0059ac11
    MOV EDX,dword ptr [0x026677e0]      ; 0059ac12 | DAT_026677e0
    TEST EDX,EDX                        ; 0059ac18
    JNZ 0x0059ac4c                      ; 0059ac1a
        ;   XREF to: 0059ac4c (CONDITIONAL_JUMP)  ; LAB_0059ac4c
    MOV ESI,dword ptr [0x026677b4]      ; 0059ac1c | DAT_026677b4
        ;   Label: LAB_0059ac1c
    XOR EBX,EBX                         ; 0059ac22
    TEST ESI,ESI                        ; 0059ac24
    JLE 0x0059ac49                      ; 0059ac26
        ;   XREF to: 0059ac49 (CONDITIONAL_JUMP)  ; LAB_0059ac49
    PUSH EDI                            ; 0059ac28
    XOR ESI,ESI                         ; 0059ac29
    MOV EAX,dword ptr [ESI + 0x26677b8] ; 0059ac2b
        ;   Label: LAB_0059ac2b
    PUSH EAX                            ; 0059ac31
    MOV EDX,dword ptr [EAX]             ; 0059ac32
    ADD ESI,0x4                         ; 0059ac34
    INC EBX                             ; 0059ac37
    CALL dword ptr [EDX + 0x10]         ; 0059ac38
    MOV EDI,dword ptr [0x026677b4]      ; 0059ac3b | DAT_026677b4
    ADD ESP,0x4                         ; 0059ac41
    CMP EBX,EDI                         ; 0059ac44
    JL 0x0059ac2b                       ; 0059ac46
        ;   XREF to: 0059ac2b (CONDITIONAL_JUMP)  ; LAB_0059ac2b
    POP EDI                             ; 0059ac48
    POP ESI                             ; 0059ac49
        ;   Label: LAB_0059ac49
    POP EBX                             ; 0059ac4a
    RET                                 ; 0059ac4b
    PUSH 0x0                            ; 0059ac4c
        ;   Label: LAB_0059ac4c
    PUSH EDX                            ; 0059ac4e
    CALL unkaddr_0059aa80.cpp_FUN_0059ab70 ; 0059ac4f
        ;   XREF to: 0059ab70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059aa80.cpp_FUN_0059ab70()
    ADD ESP,0x8                         ; 0059ac54
    JMP 0x0059ac1c                      ; 0059ac57
        ;   XREF to: 0059ac1c (UNCONDITIONAL_JUMP)  ; LAB_0059ac1c

