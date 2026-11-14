; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_processTimer_FUN_00529910(CScript *this_ptr,float delta_time,float *timer_value)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; float *          Stack[0xc]:4   timer_value
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00524732
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005e4db3
;   TerminatedCString s_CScript_processTimer_inv_005e4dc6
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529910
        ;   Label: core_script.cpp_CScript_processTimer_FUN_00529910
    PUSH ESI                            ; 00529911
    MOV EBX,dword ptr [ESP + 0xc]       ; 00529912
    MOV ESI,dword ptr [ESP + 0x14]      ; 00529916
    FLD float ptr [ESP + 0x10]          ; 0052991a
    FLDZ                                ; 0052991e
    FCOMPP                              ; 00529920
    FNSTSW AX                           ; 00529922
    SAHF                                ; 00529924
    JA 0x00529958                       ; 00529925
        ;   XREF to: 00529958 (CONDITIONAL_JUMP)  ; LAB_00529958
    FLDZ                                ; 00529927
        ;   Label: LAB_00529927
    FCOMP float ptr [EBX + 0x48]        ; 00529929
    FNSTSW AX                           ; 0052992c
    SAHF                                ; 0052992e
    JBE 0x00529938                      ; 0052992f
        ;   XREF to: 00529938 (CONDITIONAL_JUMP)  ; LAB_00529938
    MOV EAX,dword ptr [ESP + 0x10]      ; 00529931
    MOV dword ptr [EBX + 0x48],EAX      ; 00529935
    FLD float ptr [EBX + 0x48]          ; 00529938
        ;   Label: LAB_00529938
    FCOMP float ptr [ESI]               ; 0052993b
    FNSTSW AX                           ; 0052993d
    SAHF                                ; 0052993f
    JA 0x0052997d                       ; 00529940
        ;   XREF to: 0052997d (CONDITIONAL_JUMP)  ; LAB_0052997d
    FLD float ptr [EBX + 0x48]          ; 00529942
    FSUBR float ptr [ESI]               ; 00529945
    MOV EAX,0x1                         ; 00529947
    FSTP float ptr [ESI]                ; 0052994c
    MOV dword ptr [EBX + 0x48],0x0      ; 0052994e
    POP ESI                             ; 00529955
    POP EBX                             ; 00529956
    RET                                 ; 00529957
    MOV EDX,0x5e4db3                    ; 00529958 | = "..\\core\\script.cpp"
        ;   Label: LAB_00529958
    MOV ECX,0x10e5                      ; 0052995d
    PUSH 0x5e4dc6                       ; 00529962 | = "CScript::processTimer - invalidTimeTo..."
    MOV dword ptr [0x01d046a0],EDX      ; 00529967 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0052996d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00529973
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00529978
    JMP 0x00529927                      ; 0052997b
        ;   XREF to: 00529927 (UNCONDITIONAL_JUMP)  ; LAB_00529927
    FLD float ptr [ESI]                 ; 0052997d
        ;   Label: LAB_0052997d
    FSUBR float ptr [EBX + 0x48]        ; 0052997f
    XOR EAX,EAX                         ; 00529982
    FSTP float ptr [EBX + 0x48]         ; 00529984
    MOV dword ptr [ESI],0x0             ; 00529987
    POP ESI                             ; 0052998d
    POP EBX                             ; 0052998e
    RET                                 ; 0052998f

