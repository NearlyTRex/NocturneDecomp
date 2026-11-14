; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_004aafc0(CQuaternion4f *dest,CQuaternion4f *src)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   dest
; CQuaternion4f *  Stack[0x8]:4   src
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00548a7f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aafc0
        ;   Label: core_event.cpp_copyQuaternion_FUN_004aafc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aafc4
    MOV ECX,dword ptr [EDX]             ; 004aafc8
    MOV dword ptr [EAX],ECX             ; 004aafca
    MOV ECX,dword ptr [EDX + 0x4]       ; 004aafcc
    MOV dword ptr [EAX + 0x4],ECX       ; 004aafcf
    MOV ECX,dword ptr [EDX + 0x8]       ; 004aafd2
    MOV dword ptr [EAX + 0x8],ECX       ; 004aafd5
    MOV EDX,dword ptr [EDX + 0xc]       ; 004aafd8
    MOV dword ptr [EAX + 0xc],EDX       ; 004aafdb
    RET                                 ; 004aafde

