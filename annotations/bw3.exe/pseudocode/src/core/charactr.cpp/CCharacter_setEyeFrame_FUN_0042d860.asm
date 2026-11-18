; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042d860(CCharacter *this_ptr,int eye_side,int frame,float hold_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   eye_side
; int              Stack[0xc]:4   frame
; float            Stack[0x10]:4   hold_time
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052eb81
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d860
        ;   Label: core_charactr.cpp_CCharacter_setEyeFrame_FUN_0042d860
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d864
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042d868
    MOV dword ptr [EAX + 0xcd88],ECX    ; 0042d86c
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d872
    MOV dword ptr [EAX + 0xcd84],0x0    ; 0042d876
    TEST ECX,ECX                        ; 0042d880
    JNZ 0x0042d88b                      ; 0042d882
        ;   XREF to: 0042d88b (CONDITIONAL_JUMP)  ; LAB_0042d88b
    MOV dword ptr [EAX + 0xcd78],EDX    ; 0042d884
    RET                                 ; 0042d88a
    MOV dword ptr [EAX + 0xcd7c],EDX    ; 0042d88b
        ;   Label: LAB_0042d88b
    RET                                 ; 0042d891

