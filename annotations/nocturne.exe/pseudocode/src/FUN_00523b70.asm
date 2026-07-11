; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523b70(int param_1)
;
;
; XREF[2]:
;   FUN_00523910 at 00523929
;   FUN_00523a60 at 00523a79
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523b70
        ;   Label: FUN_00523b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523b71
    MOV EDX,dword ptr [EBX + 0x120]     ; 00523b75
    TEST EDX,EDX                        ; 00523b7b
    JNZ 0x00523b81                      ; 00523b7d
        ;   XREF to: 00523b81 (CONDITIONAL_JUMP)  ; LAB_00523b81
    POP EBX                             ; 00523b7f
    RET                                 ; 00523b80
    PUSH EDX                            ; 00523b81
        ;   Label: LAB_00523b81
    CALL FUN_005638d0                   ; 00523b82
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00523b87
    MOV dword ptr [EBX + 0x120],0x0     ; 00523b8a
    POP EBX                             ; 00523b94
    RET                                 ; 00523b95

