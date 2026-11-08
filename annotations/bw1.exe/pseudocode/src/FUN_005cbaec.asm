; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cbaec(int param_1)
;
;
; XREF[1]:
;   FUN_005cba50 at 005cba73
;
; Referenced Globals:
;   undefined4 DAT_00626220
;
; Called Functions:
;   FUN_005cba8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbaec
        ;   Label: FUN_005cbaec
    PUSH ESI                            ; 005cbaed
    MOV EAX,dword ptr [ESP + 0xc]       ; 005cbaee
    PUSH EAX                            ; 005cbaf2
    MOV ESI,dword ptr [EAX + 0x4]       ; 005cbaf3
    MOV EBX,dword ptr [EAX + 0x8]       ; 005cbaf6
    CALL FUN_005cba8c                   ; 005cbaf9
        ;   XREF to: 005cba8c (UNCONDITIONAL_CALL)  ; undefined FUN_005cba8c()
    ADD ESP,0x4                         ; 005cbafe
    TEST EAX,EAX                        ; 005cbb01
    JNZ 0x005cbb1b                      ; 005cbb03
        ;   XREF to: 005cbb1b (CONDITIONAL_JUMP)  ; LAB_005cbb1b
    TEST ESI,ESI                        ; 005cbb05
    JNZ 0x005cbb11                      ; 005cbb07
        ;   XREF to: 005cbb11 (CONDITIONAL_JUMP)  ; LAB_005cbb11
    MOV dword ptr [0x00626220],EBX      ; 005cbb09 | DAT_00626220
    JMP 0x005cbb14                      ; 005cbb0f
        ;   XREF to: 005cbb14 (UNCONDITIONAL_JUMP)  ; LAB_005cbb14
    MOV dword ptr [ESI + 0x8],EBX       ; 005cbb11
        ;   Label: LAB_005cbb11
    TEST EBX,EBX                        ; 005cbb14
        ;   Label: LAB_005cbb14
    JZ 0x005cbb1b                       ; 005cbb16
        ;   XREF to: 005cbb1b (CONDITIONAL_JUMP)  ; LAB_005cbb1b
    MOV dword ptr [EBX + 0x4],ESI       ; 005cbb18
    POP ESI                             ; 005cbb1b
        ;   Label: LAB_005cbb1b
    POP EBX                             ; 005cbb1c
    RET                                 ; 005cbb1d

