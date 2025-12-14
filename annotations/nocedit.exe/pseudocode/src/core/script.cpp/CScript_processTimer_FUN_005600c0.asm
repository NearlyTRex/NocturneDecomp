; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_processTimer_FUN_005600c0()
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c4dd
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_006431b8
;   TerminatedCString s_CScript_processTimer_inv_006431cb
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005600c0
        ;   Label: core_script.cpp_CScript_processTimer_FUN_005600c0
    PUSH ESI                            ; 005600c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005600c2
    MOV ESI,dword ptr [ESP + 0x14]      ; 005600c6
    FLD float ptr [ESP + 0x10]          ; 005600ca
    FLDZ                                ; 005600ce
    FCOMPP                              ; 005600d0
    FNSTSW AX                           ; 005600d2
    SAHF                                ; 005600d4
    JA 0x00560108                       ; 005600d5
        ;   XREF to: 00560108 (CONDITIONAL_JUMP)  ; LAB_00560108
    FLDZ                                ; 005600d7
        ;   Label: LAB_005600d7
    FCOMP float ptr [EBX + 0x4c]        ; 005600d9
    FNSTSW AX                           ; 005600dc
    SAHF                                ; 005600de
    JBE 0x005600e8                      ; 005600df
        ;   XREF to: 005600e8 (CONDITIONAL_JUMP)  ; LAB_005600e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005600e1
    MOV dword ptr [EBX + 0x4c],EAX      ; 005600e5
    FLD float ptr [EBX + 0x4c]          ; 005600e8
        ;   Label: LAB_005600e8
    FCOMP float ptr [ESI]               ; 005600eb
    FNSTSW AX                           ; 005600ed
    SAHF                                ; 005600ef
    JA 0x0056012d                       ; 005600f0
        ;   XREF to: 0056012d (CONDITIONAL_JUMP)  ; LAB_0056012d
    FLD float ptr [EBX + 0x4c]          ; 005600f2
    FSUBR float ptr [ESI]               ; 005600f5
    MOV EAX,0x1                         ; 005600f7
    FSTP float ptr [ESI]                ; 005600fc
    MOV dword ptr [EBX + 0x4c],0x0      ; 005600fe
    POP ESI                             ; 00560105
    POP EBX                             ; 00560106
    RET                                 ; 00560107
    MOV EDX,0x6431b8                    ; 00560108 | = "..\\core\\script.cpp"
        ;   Label: LAB_00560108
    MOV ECX,0xdf7                       ; 0056010d
    PUSH 0x6431cb                       ; 00560112 | = "CScript::processTimer - invalidTimeTo..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00560117 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0056011d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00560123
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00560128
    JMP 0x005600d7                      ; 0056012b
        ;   XREF to: 005600d7 (UNCONDITIONAL_JUMP)  ; LAB_005600d7
    FLD float ptr [ESI]                 ; 0056012d
        ;   Label: LAB_0056012d
    FSUBR float ptr [EBX + 0x4c]        ; 0056012f
    XOR EAX,EAX                         ; 00560132
    FSTP float ptr [EBX + 0x4c]         ; 00560134
    MOV dword ptr [ESI],0x0             ; 00560137
    POP ESI                             ; 0056013d
    POP EBX                             ; 0056013e
    RET                                 ; 0056013f

