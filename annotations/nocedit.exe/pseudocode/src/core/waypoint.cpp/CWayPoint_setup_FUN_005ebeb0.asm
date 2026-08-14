; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005ebeb0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_none_0065753c
;   TerminatedCString s_true_00657541
;   TerminatedCString s_core_waypoint_cpp_00657546
;   TerminatedCString s_Can_t_have_creation_even_0065755b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_trigger.cpp_CTrigger_setup_FUN_005df990
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ebeb0
        ;   Label: core_waypoint.cpp_CWayPoint_setup_FUN_005ebeb0
    PUSH ESI                            ; 005ebeb1
    PUSH EBP                            ; 005ebeb2
    SUB ESP,0xc                         ; 005ebeb3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ebeb6
    PUSH ESI                            ; 005ebeba
    CALL core_trigger.cpp_CTrigger_setup_FUN_005df990 ; 005ebebb
        ;   XREF to: 005df990 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_setup_FUN_005df990(CTrigger * this_ptr)
    XOR EBX,EBX                         ; 005ebec0
    MOV EDX,dword ptr [ESI + 0x370]     ; 005ebec2
    ADD ESP,0x4                         ; 005ebec8
    TEST EDX,EDX                        ; 005ebecb
    JLE 0x005ebf0f                      ; 005ebecd
        ;   XREF to: 005ebf0f (CONDITIONAL_JUMP)  ; LAB_005ebf0f
    PUSH EDI                            ; 005ebecf
    LEA ECX,[ESI + 0x20]                ; 005ebed0
    MOV EDX,ESI                         ; 005ebed3
    MOV EAX,dword ptr [EDX + 0x374]     ; 005ebed5
        ;   Label: LAB_005ebed5
    FLD float ptr [ECX]                 ; 005ebedb
    FSUB float ptr [EAX + 0x20]         ; 005ebedd
    FMUL ST0                            ; 005ebee0
    FLD float ptr [ECX + 0x4]           ; 005ebee2
    FSUB float ptr [EAX + 0x24]         ; 005ebee5
    FMUL ST0                            ; 005ebee8
    FLD float ptr [ECX + 0x8]           ; 005ebeea
    FXCH                                ; 005ebeed
    FADDP ST2,ST0                       ; 005ebeef
    FSUB float ptr [EAX + 0x28]         ; 005ebef1
    FMUL ST0                            ; 005ebef4
    FADDP                               ; 005ebef6
    FSQRT                               ; 005ebef8
    INC EBX                             ; 005ebefa
    FSTP float ptr [EDX + 0x378]        ; 005ebefb
    MOV EDI,dword ptr [ESI + 0x370]     ; 005ebf01
    ADD EDX,0x8                         ; 005ebf07
    CMP EBX,EDI                         ; 005ebf0a
    JL 0x005ebed5                       ; 005ebf0c
        ;   XREF to: 005ebed5 (CONDITIONAL_JUMP)  ; LAB_005ebed5
    POP EDI                             ; 005ebf0e
    CMP byte ptr [ESI + 0x78],0x0       ; 005ebf0f
        ;   Label: LAB_005ebf0f
    JNZ 0x005ebf1c                      ; 005ebf13
        ;   XREF to: 005ebf1c (CONDITIONAL_JUMP)  ; LAB_005ebf1c
    ADD ESP,0xc                         ; 005ebf15
        ;   Label: LAB_005ebf15
    POP EBP                             ; 005ebf18
    POP ESI                             ; 005ebf19
    POP EBX                             ; 005ebf1a
    RET                                 ; 005ebf1b
    PUSH 0x65753c                       ; 005ebf1c | = "none"
        ;   Label: LAB_005ebf1c
    ADD ESI,0x78                        ; 005ebf21
    PUSH ESI                            ; 005ebf24
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005ebf25
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005ebf2a
    TEST EAX,EAX                        ; 005ebf2d
    JZ 0x005ebf15                       ; 005ebf2f
        ;   XREF to: 005ebf15 (CONDITIONAL_JUMP)  ; LAB_005ebf15
    PUSH 0x657541                       ; 005ebf31 | = "true"
    PUSH ESI                            ; 005ebf36
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005ebf37
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005ebf3c
    TEST EAX,EAX                        ; 005ebf3f
    JZ 0x005ebf15                       ; 005ebf41
        ;   XREF to: 005ebf15 (CONDITIONAL_JUMP)  ; LAB_005ebf15
    MOV EBP,0x657546                    ; 005ebf43 | = "..\\core\\waypoint.cpp"
    MOV EAX,0x79                        ; 005ebf48
    PUSH 0x65755b                       ; 005ebf4d | = "Can't have creation event for waypoint."
    MOV dword ptr [0x02f0ca48],EBP      ; 005ebf52 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005ebf58 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ebf5d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ebf62
    ADD ESP,0xc                         ; 005ebf65
    POP EBP                             ; 005ebf68
    POP ESI                             ; 005ebf69
    POP EBX                             ; 005ebf6a
    RET                                 ; 005ebf6b

