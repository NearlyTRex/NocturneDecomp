; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005aba00(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_trigger.cpp_CTrigger_setup_FUN_0059b100
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005aba00
        ;   Label: core_waypoint.cpp_CWayPoint_setup_FUN_005aba00
    PUSH EBP                            ; 005aba01
    SUB ESP,0xc                         ; 005aba02
    MOV ESI,dword ptr [ESP + 0x18]      ; 005aba05
    PUSH ESI                            ; 005aba09
    CALL core_trigger.cpp_CTrigger_setup_FUN_0059b100 ; 005aba0a
        ;   XREF to: 0059b100 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_setup_FUN_0059b100(CTrigger * this_ptr)
    MOV EAX,[0x0061f650]                ; 005aba0f | DAT_0061f650
    ADD ESP,0x4                         ; 005aba14
    MOV EDX,dword ptr [ESI + 0x374]     ; 005aba17
    MOV EAX,dword ptr [EAX + 0x1008]    ; 005aba1d
    XOR ECX,ECX                         ; 005aba23
    MOV dword ptr [ESI + 0xf8],EAX      ; 005aba25
    TEST EDX,EDX                        ; 005aba2b
    JLE 0x005aba71                      ; 005aba2d
        ;   XREF to: 005aba71 (CONDITIONAL_JUMP)  ; LAB_005aba71
    PUSH EDI                            ; 005aba2f
    PUSH EBX                            ; 005aba30
    LEA EBX,[ESI + 0x20]                ; 005aba31
    MOV EDX,ESI                         ; 005aba34
    MOV EAX,dword ptr [EDX + 0x378]     ; 005aba36
        ;   Label: LAB_005aba36
    FLD float ptr [EBX]                 ; 005aba3c
    FSUB float ptr [EAX + 0x20]         ; 005aba3e
    FMUL ST0                            ; 005aba41
    FLD float ptr [EBX + 0x4]           ; 005aba43
    FSUB float ptr [EAX + 0x24]         ; 005aba46
    FMUL ST0                            ; 005aba49
    FLD float ptr [EBX + 0x8]           ; 005aba4b
    FXCH                                ; 005aba4e
    FADDP ST2,ST0                       ; 005aba50
    FSUB float ptr [EAX + 0x28]         ; 005aba52
    FMUL ST0                            ; 005aba55
    FADDP                               ; 005aba57
    FSQRT                               ; 005aba59
    INC ECX                             ; 005aba5b
    FSTP float ptr [EDX + 0x37c]        ; 005aba5c
    MOV EDI,dword ptr [ESI + 0x374]     ; 005aba62
    ADD EDX,0x8                         ; 005aba68
    CMP ECX,EDI                         ; 005aba6b
    JL 0x005aba36                       ; 005aba6d
        ;   XREF to: 005aba36 (CONDITIONAL_JUMP)  ; LAB_005aba36
    POP EBX                             ; 005aba6f
    POP EDI                             ; 005aba70
    CMP byte ptr [ESI + 0x78],0x0       ; 005aba71
        ;   Label: LAB_005aba71
    JNZ 0x005aba7d                      ; 005aba75
        ;   XREF to: 005aba7d (CONDITIONAL_JUMP)  ; LAB_005aba7d
    ADD ESP,0xc                         ; 005aba77
        ;   Label: LAB_005aba77
    POP EBP                             ; 005aba7a
    POP ESI                             ; 005aba7b
    RET                                 ; 005aba7c
    PUSH 0x5f941b                       ; 005aba7d
        ;   Label: LAB_005aba7d
    ADD ESI,0x78                        ; 005aba82
    PUSH ESI                            ; 005aba85
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005aba86
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aba8b
    TEST EAX,EAX                        ; 005aba8e
    JZ 0x005aba77                       ; 005aba90
        ;   XREF to: 005aba77 (CONDITIONAL_JUMP)  ; LAB_005aba77
    PUSH 0x5f9420                       ; 005aba92
    PUSH ESI                            ; 005aba97
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005aba98
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aba9d
    TEST EAX,EAX                        ; 005abaa0
    JZ 0x005aba77                       ; 005abaa2
        ;   XREF to: 005aba77 (CONDITIONAL_JUMP)  ; LAB_005aba77
    MOV EBP,0x5f9425                    ; 005abaa4
    MOV EAX,0x81                        ; 005abaa9
    PUSH 0x5f943a                       ; 005abaae
    MOV dword ptr [0x01d1d400],EBP      ; 005abab3 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005abab9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ababe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005abac3
    ADD ESP,0xc                         ; 005abac6
    POP EBP                             ; 005abac9
    POP ESI                             ; 005abaca
    RET                                 ; 005abacb

