; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3f50(int param_1)
;
;
; Called Functions:
;   FUN_004f3f20
;   FUN_005638d0
;   FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f50
        ;   Label: FUN_004f3f50
    PUSH ESI                            ; 004f3f51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f3f52
    MOV EDX,dword ptr [EBX + 0x14]      ; 004f3f56
    TEST EDX,EDX                        ; 004f3f59
    JNZ 0x004f3f75                      ; 004f3f5b
        ;   XREF to: 004f3f75 (CONDITIONAL_JUMP)  ; LAB_004f3f75
    MOV ESI,dword ptr [EBX + 0x20]      ; 004f3f5d
        ;   Label: LAB_004f3f5d
    PUSH ESI                            ; 004f3f60
    CALL FUN_00564486                   ; 004f3f61
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004f3f66
    PUSH EBX                            ; 004f3f69
    CALL FUN_004f3f20                   ; 004f3f6a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3f20()
    ADD ESP,0x4                         ; 004f3f6f
    POP ESI                             ; 004f3f72
    POP EBX                             ; 004f3f73
    RET                                 ; 004f3f74
    PUSH EDX                            ; 004f3f75
        ;   Label: LAB_004f3f75
    CALL FUN_005638d0                   ; 004f3f76
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004f3f7b
    JMP 0x004f3f5d                      ; 004f3f7e
        ;   XREF to: 004f3f5d (UNCONDITIONAL_JUMP)  ; LAB_004f3f5d

