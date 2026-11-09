; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_processTimer_FUN_0054ac20(CScript *this_ptr,float delta_time,float *timer_value)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; float *          Stack[0xc]:4   timer_value
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005465e7
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005efdd7
;   TerminatedCString s_CScript_processTimer_inv_005efdea
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ac20
        ;   Label: core_script.cpp_CScript_processTimer_FUN_0054ac20
    PUSH ESI                            ; 0054ac21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054ac22
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054ac26
    FLD float ptr [ESP + 0x10]          ; 0054ac2a
    FLDZ                                ; 0054ac2e
    FCOMPP                              ; 0054ac30
    FNSTSW AX                           ; 0054ac32
    SAHF                                ; 0054ac34
    JA 0x0054ac68                       ; 0054ac35
        ;   XREF to: 0054ac68 (CONDITIONAL_JUMP)  ; LAB_0054ac68
    FLDZ                                ; 0054ac37
        ;   Label: LAB_0054ac37
    FCOMP float ptr [EBX + 0x48]        ; 0054ac39
    FNSTSW AX                           ; 0054ac3c
    SAHF                                ; 0054ac3e
    JBE 0x0054ac48                      ; 0054ac3f
        ;   XREF to: 0054ac48 (CONDITIONAL_JUMP)  ; LAB_0054ac48
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054ac41
    MOV dword ptr [EBX + 0x48],EAX      ; 0054ac45
    FLD float ptr [EBX + 0x48]          ; 0054ac48
        ;   Label: LAB_0054ac48
    FCOMP float ptr [ESI]               ; 0054ac4b
    FNSTSW AX                           ; 0054ac4d
    SAHF                                ; 0054ac4f
    JA 0x0054ac8d                       ; 0054ac50
        ;   XREF to: 0054ac8d (CONDITIONAL_JUMP)  ; LAB_0054ac8d
    FLD float ptr [EBX + 0x48]          ; 0054ac52
    FSUBR float ptr [ESI]               ; 0054ac55
    MOV EAX,0x1                         ; 0054ac57
    FSTP float ptr [ESI]                ; 0054ac5c
    MOV dword ptr [EBX + 0x48],0x0      ; 0054ac5e
    POP ESI                             ; 0054ac65
    POP EBX                             ; 0054ac66
    RET                                 ; 0054ac67
    MOV EDX,0x5efdd7                    ; 0054ac68 | = "..\\core\\script.cpp"
        ;   Label: LAB_0054ac68
    MOV ECX,0xf7d                       ; 0054ac6d
    PUSH 0x5efdea                       ; 0054ac72 | = "CScript::processTimer - invalidTimeTo..."
    MOV dword ptr [0x01d1d400],EDX      ; 0054ac77 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0054ac7d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054ac83
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054ac88
    JMP 0x0054ac37                      ; 0054ac8b
        ;   XREF to: 0054ac37 (UNCONDITIONAL_JUMP)  ; LAB_0054ac37
    FLD float ptr [ESI]                 ; 0054ac8d
        ;   Label: LAB_0054ac8d
    FSUBR float ptr [EBX + 0x48]        ; 0054ac8f
    XOR EAX,EAX                         ; 0054ac92
    FSTP float ptr [EBX + 0x48]         ; 0054ac94
    MOV dword ptr [ESI],0x0             ; 0054ac97
    POP ESI                             ; 0054ac9d
    POP EBX                             ; 0054ac9e
    RET                                 ; 0054ac9f

