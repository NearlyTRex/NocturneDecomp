; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_imp_cpp_setVector_FUN_004fa900(CVector3f *out,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa900
        ;   Label: core_imp.cpp_setVector_FUN_004fa900
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fa904
    MOV dword ptr [EAX],EDX             ; 004fa908
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa90a
    MOV dword ptr [EAX + 0x8],EDX       ; 004fa90e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa911
    MOV dword ptr [EAX + 0x4],EDX       ; 004fa915
    RET                                 ; 004fa918

