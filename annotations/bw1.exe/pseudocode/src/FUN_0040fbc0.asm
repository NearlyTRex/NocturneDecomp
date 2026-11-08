; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fbc0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0040fc00 at 0040fcd6
;   FUN_004105b0 at 00410631
;
; Called Functions:
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fbc0
        ;   Label: FUN_0040fbc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fbc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040fbc5
    MOV EDX,dword ptr [EBX + 0x20084]   ; 0040fbc9
    CMP EAX,EDX                         ; 0040fbcf
    JNZ 0x0040fbd7                      ; 0040fbd1
        ;   XREF to: 0040fbd7 (CONDITIONAL_JUMP)  ; LAB_0040fbd7
    TEST EDX,EDX                        ; 0040fbd3
    JNZ 0x0040fbd9                      ; 0040fbd5
        ;   XREF to: 0040fbd9 (CONDITIONAL_JUMP)  ; LAB_0040fbd9
    POP EBX                             ; 0040fbd7
        ;   Label: LAB_0040fbd7
    RET                                 ; 0040fbd8
    PUSH 0x1                            ; 0040fbd9
        ;   Label: LAB_0040fbd9
    PUSH 0x7                            ; 0040fbdb
    LEA EAX,[EBX + 0x158]               ; 0040fbdd
    PUSH EAX                            ; 0040fbe3
    CALL FUN_005247c0                   ; 0040fbe4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0040fbe9
    MOV dword ptr [EBX + 0x20084],0x0   ; 0040fbec
    POP EBX                             ; 0040fbf6
    RET                                 ; 0040fbf7

