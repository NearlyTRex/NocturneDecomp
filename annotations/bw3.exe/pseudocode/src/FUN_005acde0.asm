; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005acde0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_005a5fb8 at 005a5fc2
;   FUN_005a6007 at 005a602e
;   FUN_005a7d7f at 005a7d86
;   FUN_005ace10 at 005ace60
;   FUN_005ad360 at 005ad367
;   FUN_005ad794 at 005ad7d9
;   FUN_005afae0 at 005afb0b
;   FUN_005afb18 at 005afb64
;
; Called Functions:
;   FUN_005acda0
;   FUN_005ad290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acde0
        ;   Label: FUN_005acde0
    MOV AX,DS                           ; 005acde1
    AND EAX,0xffff                      ; 005acde3
    PUSH EAX                            ; 005acde8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005acde9
    PUSH EDX                            ; 005acded
    CALL FUN_005ad290                   ; 005acdee
        ;   XREF to: 005ad290 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad290()
    ADD ESP,0x8                         ; 005acdf3
    TEST EAX,EAX                        ; 005acdf6
    JNZ 0x005ace0c                      ; 005acdf8
        ;   XREF to: 005ace0c (CONDITIONAL_JUMP)  ; LAB_005ace0c
    MOV EBX,dword ptr [ESP + 0xc]       ; 005acdfa
    PUSH EBX                            ; 005acdfe
    MOV ECX,dword ptr [ESP + 0xc]       ; 005acdff
    PUSH ECX                            ; 005ace03
    CALL FUN_005acda0                   ; 005ace04
        ;   XREF to: 005acda0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acda0()
    ADD ESP,0x8                         ; 005ace09
    POP EBX                             ; 005ace0c
        ;   Label: LAB_005ace0c
    RET                                 ; 005ace0d

