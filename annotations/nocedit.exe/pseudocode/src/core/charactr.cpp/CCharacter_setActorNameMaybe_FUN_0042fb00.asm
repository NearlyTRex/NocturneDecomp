; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter *this_ptr,char **actor_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char * *         Stack[0x8]:4   actor_name
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004959c3
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042fb00
        ;   Label: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042fb04
    MOV EAX,dword ptr [EAX]             ; 0042fb08
    MOV dword ptr [EDX],EAX             ; 0042fb0a
    MOV EAX,EDX                         ; 0042fb0c
    RET                                 ; 0042fb0e

