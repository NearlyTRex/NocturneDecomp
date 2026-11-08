; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bece0(int param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bece0
        ;   Label: FUN_005bece0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bece1
    CMP dword ptr [ESP + 0x10],0x1      ; 005bece5
    JNZ 0x005bed11                      ; 005becea
        ;   XREF to: 005bed11 (CONDITIONAL_JUMP)  ; LAB_005bed11
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 005becec
    TEST ECX,ECX                        ; 005becf2
    JNZ 0x005bed15                      ; 005becf4
        ;   XREF to: 005bed15 (CONDITIONAL_JUMP)  ; LAB_005bed15
    MOV EAX,dword ptr [ESP + 0xc]       ; 005becf6
        ;   Label: LAB_005becf6
    MOV dword ptr [EBX + 0x26fc],EAX    ; 005becfa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bed00
    MOV dword ptr [EBX + 0x2700],EAX    ; 005bed04
    MOV EAX,0x1                         ; 005bed0a
    POP EBX                             ; 005bed0f
    RET                                 ; 005bed10
    XOR EAX,EAX                         ; 005bed11
        ;   Label: LAB_005bed11
    POP EBX                             ; 005bed13
    RET                                 ; 005bed14
    PUSH ECX                            ; 005bed15
        ;   Label: LAB_005bed15
    MOV EDX,dword ptr [ECX + 0x154]     ; 005bed16
    CALL dword ptr [EDX + 0xf4]         ; 005bed1c
    ADD ESP,0x4                         ; 005bed22
    CMP EAX,EBX                         ; 005bed25
    JNZ 0x005becf6                      ; 005bed27
        ;   XREF to: 005becf6 (CONDITIONAL_JUMP)  ; LAB_005becf6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bed29
    PUSH EAX                            ; 005bed2f
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bed30
    CALL dword ptr [EDX + 0xf0]         ; 005bed36
    ADD ESP,0x4                         ; 005bed3c
    JMP 0x005becf6                      ; 005bed3f
        ;   XREF to: 005becf6 (UNCONDITIONAL_JUMP)  ; LAB_005becf6

