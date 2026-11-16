; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042e8e0(CCharacter *this_ptr,int eye_side,int frame,float hold_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   eye_side
; int              Stack[0xc]:4   frame
; float            Stack[0x10]:4   hold_time
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00549491
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e8e0
        ;   Label: core_charactr.cpp_CCharacter_setEyeFrame_FUN_0042e8e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e8e4
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042e8e8
    MOV dword ptr [EAX + 0xc194],ECX    ; 0042e8ec
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042e8f2
    MOV dword ptr [EAX + 0xc190],0x0    ; 0042e8f6
    TEST ECX,ECX                        ; 0042e900
    JNZ 0x0042e90b                      ; 0042e902
        ;   XREF to: 0042e90b (CONDITIONAL_JUMP)  ; LAB_0042e90b
    MOV dword ptr [EAX + 0xc184],EDX    ; 0042e904
    RET                                 ; 0042e90a
    MOV dword ptr [EAX + 0xc188],EDX    ; 0042e90b
        ;   Label: LAB_0042e90b
    RET                                 ; 0042e911

