; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_bindDllFunction_FUN_0059df80(void **slot,void *proc)
;
; Parameters:
; void * *         Stack[0x4]:4   slot
; void *           Stack[0x8]:4   proc
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 0042278d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059df80
        ;   Label: engine_special.cpp_bindDllFunction_FUN_0059df80
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059df84
    MOV dword ptr [EDX],EAX             ; 0059df88
    RET                                 ; 0059df8a

