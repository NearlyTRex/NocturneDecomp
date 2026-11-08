; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484f10(int param_1)
;
;
; XREF[3]:
;   FUN_004832b0 at 004832c4
;   FUN_004b7f90 at 004b82a9
;   FUN_00528d50 at 00528d7d
;
; Called Functions:
;   FUN_00482010
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484f10
        ;   Label: FUN_00484f10
    PUSH ESI                            ; 00484f11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00484f12
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00484f16
    TEST EDX,EDX                        ; 00484f1c
    JNZ 0x00484f4a                      ; 00484f1e
        ;   XREF to: 00484f4a (CONDITIONAL_JUMP)  ; LAB_00484f4a
    MOV ESI,dword ptr [EBX + 0x1b8]     ; 00484f20
        ;   Label: LAB_00484f20
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00484f26
    TEST ESI,ESI                        ; 00484f30
    JNZ 0x00484f5f                      ; 00484f32
        ;   XREF to: 00484f5f (CONDITIONAL_JUMP)  ; LAB_00484f5f
    PUSH EBX                            ; 00484f34
        ;   Label: LAB_00484f34
    MOV dword ptr [EBX + 0x1b4],0x0     ; 00484f35
    CALL FUN_00482010                   ; 00484f3f
        ;   XREF to: 00482010 (UNCONDITIONAL_CALL)  ; undefined FUN_00482010()
    ADD ESP,0x4                         ; 00484f44
    POP ESI                             ; 00484f47
    POP EBX                             ; 00484f48
    RET                                 ; 00484f49
    PUSH EDX                            ; 00484f4a
        ;   Label: LAB_00484f4a
    CALL FUN_005a3770                   ; 00484f4b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00484f50
    MOV dword ptr [EBX + 0x1b0],0x0     ; 00484f53
    JMP 0x00484f20                      ; 00484f5d
        ;   XREF to: 00484f20 (UNCONDITIONAL_JUMP)  ; LAB_00484f20
    PUSH ESI                            ; 00484f5f
        ;   Label: LAB_00484f5f
    CALL FUN_005a3770                   ; 00484f60
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00484f65
    MOV dword ptr [EBX + 0x1b8],0x0     ; 00484f68
    JMP 0x00484f34                      ; 00484f72
        ;   XREF to: 00484f34 (UNCONDITIONAL_JUMP)  ; LAB_00484f34

