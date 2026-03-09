; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_mimic_cpp_copyQuaternion_FUN_00520e00(CQuaternion4f *dest,CQuaternion4f *src)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   dest
; CQuaternion4f *  Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00520e00
        ;   Label: core_mimic.cpp_copyQuaternion_FUN_00520e00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00520e04
    MOV ECX,dword ptr [EDX]             ; 00520e08
    MOV dword ptr [EAX],ECX             ; 00520e0a
    MOV ECX,dword ptr [EDX + 0x4]       ; 00520e0c
    MOV dword ptr [EAX + 0x4],ECX       ; 00520e0f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00520e12
    MOV dword ptr [EAX + 0x8],ECX       ; 00520e15
    MOV EDX,dword ptr [EDX + 0xc]       ; 00520e18
    MOV dword ptr [EAX + 0xc],EDX       ; 00520e1b
    RET                                 ; 00520e1e

