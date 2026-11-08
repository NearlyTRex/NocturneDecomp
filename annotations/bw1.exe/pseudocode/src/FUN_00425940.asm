; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425940(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004a0f00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00425940
        ;   Label: FUN_00425940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00425944
    MOV ECX,dword ptr [EAX + 0x27b0]    ; 00425948
    TEST ECX,ECX                        ; 0042594e
    JZ 0x00425953                       ; 00425950
        ;   XREF to: 00425953 (CONDITIONAL_JUMP)  ; LAB_00425953
    RET                                 ; 00425952
    PUSH EDX                            ; 00425953
        ;   Label: LAB_00425953
    PUSH EAX                            ; 00425954
    MOV dword ptr [EDX + 0x4],ECX       ; 00425955
    CALL FUN_004a0f00                   ; 00425958
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0042595d
    RET                                 ; 00425960

