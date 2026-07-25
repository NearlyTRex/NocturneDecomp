; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c6a0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_0056c6b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0056c6a0
        ;   Label: FUN_0056c6a0
    TEST EAX,EAX                        ; 0056c6a4
    JNZ 0x0056c6a9                      ; 0056c6a6
        ;   XREF to: 0056c6a9 (CONDITIONAL_JUMP)  ; LAB_0056c6a9
    RET                                 ; 0056c6a8
    PUSH EAX                            ; 0056c6a9
        ;   Label: LAB_0056c6a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056c6aa
    PUSH EDX                            ; 0056c6ae
    CALL FUN_0056c6b8                   ; 0056c6af
        ;   XREF to: 0056c6b8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c6b8()
    ADD ESP,0x8                         ; 0056c6b4
    RET                                 ; 0056c6b7

