; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042d8a0(CCharacter *this_ptr,int frame,float hold_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame
; float            Stack[0xc]:4   hold_time
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052f0a3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d8a0
        ;   Label: core_charactr.cpp_CCharacter_setMouthFrame_FUN_0042d8a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042d8a4
    MOV dword ptr [EAX + 0xcd80],EDX    ; 0042d8a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d8ae
    MOV dword ptr [EAX + 0xcd8c],EDX    ; 0042d8b2
    RET                                 ; 0042d8b8

