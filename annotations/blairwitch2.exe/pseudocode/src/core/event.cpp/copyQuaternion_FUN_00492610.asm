; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_00492610(CQuaternion4f *dest,CQuaternion4f *src)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   dest
; CQuaternion4f *  Stack[0x8]:4   src
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00526a5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492610
        ;   Label: core_event.cpp_copyQuaternion_FUN_00492610
    MOV EDX,dword ptr [ESP + 0x8]       ; 00492614
    MOV ECX,dword ptr [EDX]             ; 00492618
    MOV dword ptr [EAX],ECX             ; 0049261a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0049261c
    MOV dword ptr [EAX + 0x4],ECX       ; 0049261f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00492622
    MOV dword ptr [EAX + 0x8],ECX       ; 00492625
    MOV EDX,dword ptr [EDX + 0xc]       ; 00492628
    MOV dword ptr [EAX + 0xc],EDX       ; 0049262b
    RET                                 ; 0049262e

