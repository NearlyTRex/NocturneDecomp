; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5c30(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00497410 at 004974ee
;   FUN_00537cd0 at 00537f1a
;
; Called Functions:
;   FUN_00428f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5c30
        ;   Label: FUN_004b5c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5c31
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 004b5c35
    TEST EDX,EDX                        ; 004b5c3b
    JNZ 0x004b5c41                      ; 004b5c3d
        ;   XREF to: 004b5c41 (CONDITIONAL_JUMP)  ; LAB_004b5c41
    POP EBX                             ; 004b5c3f
    RET                                 ; 004b5c40
    PUSH ESI                            ; 004b5c41
        ;   Label: LAB_004b5c41
    PUSH 0x3dcccccd                     ; 004b5c42
    PUSH EDX                            ; 004b5c47
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b5c48
    PUSH ESI                            ; 004b5c4c
    PUSH EBX                            ; 004b5c4d
    CALL FUN_00428f40                   ; 004b5c4e
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00428f40()
    ADD ESP,0x10                        ; 004b5c53
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 004b5c56
    POP ESI                             ; 004b5c60
    POP EBX                             ; 004b5c61
    RET                                 ; 004b5c62

