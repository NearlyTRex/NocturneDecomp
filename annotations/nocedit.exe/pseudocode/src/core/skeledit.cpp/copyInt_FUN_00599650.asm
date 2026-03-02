; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_skeledit_cpp_copyInt_FUN_00599650(int *dest,int *src)
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

    PUSH 0x4                            ; 00599650
        ;   Label: core_skeledit.cpp_copyInt_FUN_00599650
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00599655
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059965a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059965e
    MOV EAX,dword ptr [EAX]             ; 00599662
    MOV dword ptr [EDX],EAX             ; 00599664
    MOV EAX,EDX                         ; 00599666
    RET                                 ; 00599668

