; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_skeledit_cpp_copyInt_FUN_00599630(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00599630
        ;   Label: core_skeledit.cpp_copyInt_FUN_00599630
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00599635
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059963a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059963e
    MOV EAX,dword ptr [EAX]             ; 00599642
    MOV dword ptr [EDX],EAX             ; 00599644
    MOV EAX,EDX                         ; 00599646
    RET                                 ; 00599648

