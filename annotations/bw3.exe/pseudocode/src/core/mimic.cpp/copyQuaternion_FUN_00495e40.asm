; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_copyQuaternion_FUN_00495e40(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e16f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00495e40
        ;   Label: core_mimic.cpp_copyQuaternion_FUN_00495e40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00495e44
    MOV ECX,dword ptr [EDX]             ; 00495e48
    MOV dword ptr [EAX],ECX             ; 00495e4a
    MOV ECX,dword ptr [EDX + 0x4]       ; 00495e4c
    MOV dword ptr [EAX + 0x4],ECX       ; 00495e4f
    MOV ECX,dword ptr [EDX + 0x8]       ; 00495e52
    MOV dword ptr [EAX + 0x8],ECX       ; 00495e55
    MOV EDX,dword ptr [EDX + 0xc]       ; 00495e58
    MOV dword ptr [EAX + 0xc],EDX       ; 00495e5b
    RET                                 ; 00495e5e

