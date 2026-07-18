; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_windll_cpp_bindRequiredDllFunction_FUN_005b5cf0(void **slot,void *proc)
;
; Parameters:
; void * *         Stack[0x4]:4   slot
; void *           Stack[0x8]:4   proc
;
; Referenced Globals:
;   int g_DLLFunctionsMissing
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b5cf0
        ;   Label: wincore_windll.cpp_bindRequiredDllFunction_FUN_005b5cf0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b5cf4
    MOV dword ptr [EDX],EAX             ; 005b5cf8
    TEST EAX,EAX                        ; 005b5cfa
    JZ 0x005b5cff                       ; 005b5cfc
        ;   XREF to: 005b5cff (CONDITIONAL_JUMP)  ; LAB_005b5cff
    RET                                 ; 005b5cfe
    MOV dword ptr [0x03f6b994],0x1      ; 005b5cff | g_DLLFunctionsMissing
        ;   Label: LAB_005b5cff
    RET                                 ; 005b5d09

