; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(int param_1,float param_2,float *param_3)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500f8d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_0058fab2
;   TerminatedCString s_CScript_processTimer_inv_0058fac5
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504b70
        ;   Label: core_script.cpp_CScript_processTimer_FUN_00504b70
    PUSH ESI                            ; 00504b71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00504b72
    MOV ESI,dword ptr [ESP + 0x14]      ; 00504b76
    FLD float ptr [ESP + 0x10]          ; 00504b7a
    FLDZ                                ; 00504b7e
    FCOMPP                              ; 00504b80
    FNSTSW AX                           ; 00504b82
    SAHF                                ; 00504b84
    JA 0x00504bb8                       ; 00504b85
        ;   XREF to: 00504bb8 (CONDITIONAL_JUMP)  ; LAB_00504bb8
    FLDZ                                ; 00504b87
        ;   Label: LAB_00504b87
    FCOMP float ptr [EBX + 0x44]        ; 00504b89
    FNSTSW AX                           ; 00504b8c
    SAHF                                ; 00504b8e
    JBE 0x00504b98                      ; 00504b8f
        ;   XREF to: 00504b98 (CONDITIONAL_JUMP)  ; LAB_00504b98
    MOV EAX,dword ptr [ESP + 0x10]      ; 00504b91
    MOV dword ptr [EBX + 0x44],EAX      ; 00504b95
    FLD float ptr [EBX + 0x44]          ; 00504b98
        ;   Label: LAB_00504b98
    FCOMP float ptr [ESI]               ; 00504b9b
    FNSTSW AX                           ; 00504b9d
    SAHF                                ; 00504b9f
    JA 0x00504bdd                       ; 00504ba0
        ;   XREF to: 00504bdd (CONDITIONAL_JUMP)  ; LAB_00504bdd
    FLD float ptr [EBX + 0x44]          ; 00504ba2
    FSUBR float ptr [ESI]               ; 00504ba5
    MOV EAX,0x1                         ; 00504ba7
    FSTP float ptr [ESI]                ; 00504bac
    MOV dword ptr [EBX + 0x44],0x0      ; 00504bae
    POP ESI                             ; 00504bb5
    POP EBX                             ; 00504bb6
    RET                                 ; 00504bb7
    MOV EDX,0x58fab2                    ; 00504bb8 | = "..\\core\\script.cpp"
        ;   Label: LAB_00504bb8
    MOV ECX,0xdf7                       ; 00504bbd
    PUSH 0x58fac5                       ; 00504bc2 | = "CScript::processTimer - invalidTimeTo..."
    MOV dword ptr [0x01cc4800],EDX      ; 00504bc7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00504bcd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00504bd3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00504bd8
    JMP 0x00504b87                      ; 00504bdb
        ;   XREF to: 00504b87 (UNCONDITIONAL_JUMP)  ; LAB_00504b87
    FLD float ptr [ESI]                 ; 00504bdd
        ;   Label: LAB_00504bdd
    FSUBR float ptr [EBX + 0x44]        ; 00504bdf
    XOR EAX,EAX                         ; 00504be2
    FSTP float ptr [EBX + 0x44]         ; 00504be4
    MOV dword ptr [ESI],0x0             ; 00504be7
    POP ESI                             ; 00504bed
    POP EBX                             ; 00504bee
    RET                                 ; 00504bef

