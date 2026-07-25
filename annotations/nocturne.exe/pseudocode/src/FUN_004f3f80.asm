; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3f80(int param_1)
;
;
; XREF[1]:
;   FUN_004f5c80 at 004f5cb0
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f80
        ;   Label: FUN_004f3f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3f81
    MOV EDX,dword ptr [EBX + 0x14]      ; 004f3f85
    TEST EDX,EDX                        ; 004f3f88
    JNZ 0x004f3f8e                      ; 004f3f8a
        ;   XREF to: 004f3f8e (CONDITIONAL_JUMP)  ; LAB_004f3f8e
    POP EBX                             ; 004f3f8c
    RET                                 ; 004f3f8d
    PUSH EDX                            ; 004f3f8e
        ;   Label: LAB_004f3f8e
    CALL FUN_005638d0                   ; 004f3f8f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004f3f94
    MOV dword ptr [EBX + 0x14],0x0      ; 004f3f97
    POP EBX                             ; 004f3f9e
    RET                                 ; 004f3f9f

