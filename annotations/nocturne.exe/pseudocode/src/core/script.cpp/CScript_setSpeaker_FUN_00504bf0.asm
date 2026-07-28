; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00504bf0(CScript *this_ptr,CDemonActor *actor)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_charactr.cpp_FUN_004259f0 at 00425a94
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500fa9
;   core_script.cpp_FUN_00504d60 at 00504d6a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00504bf0
        ;   Label: core_script.cpp_CScript_setSpeaker_FUN_00504bf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00504bf4
    CMP EDX,dword ptr [EAX + 0x4]       ; 00504bf8
    JZ 0x00504bfe                       ; 00504bfb
        ;   XREF to: 00504bfe (CONDITIONAL_JUMP)  ; LAB_00504bfe
    RET                                 ; 00504bfd
    MOV dword ptr [EAX + 0x4],0x0       ; 00504bfe
        ;   Label: LAB_00504bfe
    MOV byte ptr [EAX + 0x4c],0x0       ; 00504c05
    RET                                 ; 00504c09

