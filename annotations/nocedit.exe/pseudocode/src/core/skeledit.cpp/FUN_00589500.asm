; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_00589500(void)
;
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00589500
        ;   Label: core_skeledit.cpp_FUN_00589500
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00589505
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058950a
    MOV DL,byte ptr [EAX]               ; 0058950e
        ;   Label: LAB_0058950e
    INC DL                              ; 00589510
    AND EDX,0xff                        ; 00589512
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00589518 | g_CharacterClassificationTable
    JZ 0x005894f1                       ; 0058951f
        ;   XREF to: 005894f1 (CONDITIONAL_JUMP)  ; LAB_005894f1
    INC EAX                             ; 00589521
    JMP 0x0058950e                      ; 00589522
        ;   XREF to: 0058950e (UNCONDITIONAL_JUMP)  ; LAB_0058950e

