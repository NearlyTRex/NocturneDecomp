; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049eb50(void)
;
;
; XREF[2]:
;   FUN_0052fad0 at 0052fd6e
;   FUN_0052fea0 at 0053012f
;
; Referenced Globals:
;   undefined4 DAT_01c85ffc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049eb50
        ;   Label: FUN_0049eb50
    MOV EDX,dword ptr [0x01c85ffc]      ; 0049eb51 | DAT_01c85ffc
    XOR EAX,EAX                         ; 0049eb57
    CMP EDX,0x1                         ; 0049eb59
    JZ 0x0049eb7c                       ; 0049eb5c
        ;   XREF to: 0049eb7c (CONDITIONAL_JUMP)  ; LAB_0049eb7c
    MOV EBX,dword ptr [EAX + 0x1c86730] ; 0049eb5e
        ;   Label: LAB_0049eb5e
    CMP EBX,0x1                         ; 0049eb64
    JZ 0x0049eb83                       ; 0049eb67
        ;   XREF to: 0049eb83 (CONDITIONAL_JUMP)  ; LAB_0049eb83
    ADD EAX,0x5c                        ; 0049eb69
    CMP EAX,0x730                       ; 0049eb6c
    JGE 0x0049eb87                      ; 0049eb71
        ;   XREF to: 0049eb87 (CONDITIONAL_JUMP)  ; LAB_0049eb87
    CMP dword ptr [EAX + 0x1c85ffc],0x1 ; 0049eb73
    JNZ 0x0049eb5e                      ; 0049eb7a
        ;   XREF to: 0049eb5e (CONDITIONAL_JUMP)  ; LAB_0049eb5e
    MOV EAX,0x1                         ; 0049eb7c
        ;   Label: LAB_0049eb7c
    POP EBX                             ; 0049eb81
    RET                                 ; 0049eb82
    MOV EAX,EBX                         ; 0049eb83
        ;   Label: LAB_0049eb83
    POP EBX                             ; 0049eb85
    RET                                 ; 0049eb86
    XOR EAX,EAX                         ; 0049eb87
        ;   Label: LAB_0049eb87
    POP EBX                             ; 0049eb89
    RET                                 ; 0049eb8a

