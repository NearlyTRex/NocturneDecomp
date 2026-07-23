; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *param_1)
;
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500e5c
;   core_script.cpp_getActor_FUN_004fe180 at 004fe1a4
;
; Referenced Globals:
;   TerminatedCString s_Actor_variable_name_must_0058dfaa
;   TerminatedCString s_Actor_variable_name_s_is_0058dfd2
;   TerminatedCString s_Actor_variable_name_s_is_0058dff7
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdec0
        ;   Label: core_script.cpp_validateActorVariableName_FUN_004fdec0
    PUSH ESI                            ; 004fdec1
    PUSH EDI                            ; 004fdec2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fdec3
    CMP byte ptr [ESI],0x40             ; 004fdec7
    JNZ 0x004fdefa                      ; 004fdeca
        ;   XREF to: 004fdefa (CONDITIONAL_JUMP)  ; LAB_004fdefa
    MOV EDI,ESI                         ; 004fdecc
    SUB ECX,ECX                         ; 004fdece
    DEC ECX                             ; 004fded0
    XOR EAX,EAX                         ; 004fded1
    SCASB.REPNE ES:EDI                  ; 004fded3
    NOT ECX                             ; 004fded5
    DEC ECX                             ; 004fded7
    CMP ECX,0x1e                        ; 004fded8
    JA 0x004fdf12                       ; 004fdedb
        ;   XREF to: 004fdf12 (CONDITIONAL_JUMP)  ; LAB_004fdf12
    MOV EDX,0x1                         ; 004fdedd
    LEA EAX,[ESI + EDX*0x1]             ; 004fdee2
    MOV BL,byte ptr [EAX]               ; 004fdee5
        ;   Label: LAB_004fdee5
    XOR ECX,ECX                         ; 004fdee7
    INC BL                              ; 004fdee9
    MOV CL,BL                           ; 004fdeeb
    TEST byte ptr [ECX + 0x5c168c],0xe0 ; 004fdeed | DAT_005c168c
    JZ 0x004fdf27                       ; 004fdef4
        ;   XREF to: 004fdf27 (CONDITIONAL_JUMP)  ; LAB_004fdf27
    INC EDX                             ; 004fdef6
        ;   Label: LAB_004fdef6
    INC EAX                             ; 004fdef7
    JMP 0x004fdee5                      ; 004fdef8
        ;   XREF to: 004fdee5 (UNCONDITIONAL_JUMP)  ; LAB_004fdee5
    PUSH 0x58dfaa                       ; 004fdefa | = "Actor variable name must begin with '@'"
        ;   Label: LAB_004fdefa
    PUSH 0x1e56420                      ; 004fdeff
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004fdf04
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004fdf09
    XOR EAX,EAX                         ; 004fdf0c
        ;   Label: LAB_004fdf0c
    POP EDI                             ; 004fdf0e
    POP ESI                             ; 004fdf0f
    POP EBX                             ; 004fdf10
    RET                                 ; 004fdf11
    PUSH ESI                            ; 004fdf12
        ;   Label: LAB_004fdf12
    PUSH 0x58dfd2                       ; 004fdf13 | = "Actor variable name \"%s\" is too long"
    PUSH 0x1e56420                      ; 004fdf18
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004fdf1d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004fdf22
    JMP 0x004fdf0c                      ; 004fdf25
        ;   XREF to: 004fdf0c (UNCONDITIONAL_JUMP)  ; LAB_004fdf0c
    MOV BH,byte ptr [EAX]               ; 004fdf27
        ;   Label: LAB_004fdf27
    CMP BH,0x5f                         ; 004fdf29
    JZ 0x004fdef6                       ; 004fdf2c
        ;   XREF to: 004fdef6 (CONDITIONAL_JUMP)  ; LAB_004fdef6
    CMP EDX,0x1                         ; 004fdf2e
    JZ 0x004fdf40                       ; 004fdf31
        ;   XREF to: 004fdf40 (CONDITIONAL_JUMP)  ; LAB_004fdf40
    TEST BH,BH                          ; 004fdf33
    JNZ 0x004fdf40                      ; 004fdf35
        ;   XREF to: 004fdf40 (CONDITIONAL_JUMP)  ; LAB_004fdf40
    MOV EAX,0x1                         ; 004fdf37
    POP EDI                             ; 004fdf3c
    POP ESI                             ; 004fdf3d
    POP EBX                             ; 004fdf3e
    RET                                 ; 004fdf3f
    PUSH ESI                            ; 004fdf40
        ;   Label: LAB_004fdf40
    PUSH 0x58dff7                       ; 004fdf41 | = "Actor variable name \"%s\" is not valid"
    PUSH 0x1e56420                      ; 004fdf46
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004fdf4b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004fdf50
    XOR EAX,EAX                         ; 004fdf53
    POP EDI                             ; 004fdf55
    POP ESI                             ; 004fdf56
    POP EBX                             ; 004fdf57
    RET                                 ; 004fdf58

