; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_windll_cpp_bindDllFunction_FUN_005b5d10(void **slot,void *proc)
;
; Parameters:
; void * *         Stack[0x4]:4   slot
; void *           Stack[0x8]:4   proc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b5d10
        ;   Label: wincore_windll.cpp_bindDllFunction_FUN_005b5d10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b5d14
    MOV dword ptr [EDX],EAX             ; 005b5d18
    RET                                 ; 005b5d1a

