; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_validateActorVariableName_FUN_00520fd0(char *variable_name)
;
; Parameters:
; char *           Stack[0x4]:4   variable_name
;
; XREF[2]:
;   core_script.cpp_FUN_00522350 at 00525743
;   core_script.cpp_getActor_FUN_00521290 at 005212b4
;
; Referenced Globals:
;   undefined4 s_Actor_variable_name_must_005e2c0a+1
;   TerminatedCString s_Actor_variable_name_s_is_005e2c33
;   TerminatedCString s_Actor_variable_name_s_is_005e2c58
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520fd0
        ;   Label: core_script.cpp_validateActorVariableName_FUN_00520fd0
    PUSH ESI                            ; 00520fd1
    PUSH EDI                            ; 00520fd2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00520fd3
    CMP byte ptr [ESI],0x40             ; 00520fd7
    JNZ 0x0052100a                      ; 00520fda
        ;   XREF to: 0052100a (CONDITIONAL_JUMP)  ; LAB_0052100a
    MOV EDI,ESI                         ; 00520fdc
    SUB ECX,ECX                         ; 00520fde
    DEC ECX                             ; 00520fe0
    XOR EAX,EAX                         ; 00520fe1
    SCASB.REPNE ES:EDI                  ; 00520fe3
    NOT ECX                             ; 00520fe5
    DEC ECX                             ; 00520fe7
    CMP ECX,0x1e                        ; 00520fe8
    JA 0x00521022                       ; 00520feb
        ;   XREF to: 00521022 (CONDITIONAL_JUMP)  ; LAB_00521022
    MOV EDX,0x1                         ; 00520fed
    LEA EAX,[ESI + EDX*0x1]             ; 00520ff2
    MOV BL,byte ptr [EAX]               ; 00520ff5
        ;   Label: LAB_00520ff5
    XOR ECX,ECX                         ; 00520ff7
    INC BL                              ; 00520ff9
    MOV CL,BL                           ; 00520ffb
    TEST byte ptr [ECX + 0x61ed94],0xe0 ; 00520ffd | DAT_0061ed94
    JZ 0x00521037                       ; 00521004
        ;   XREF to: 00521037 (CONDITIONAL_JUMP)  ; LAB_00521037
    INC EDX                             ; 00521006
        ;   Label: LAB_00521006
    INC EAX                             ; 00521007
    JMP 0x00520ff5                      ; 00521008
        ;   XREF to: 00520ff5 (UNCONDITIONAL_JUMP)  ; LAB_00520ff5
    PUSH 0x5e2c0b                       ; 0052100a | s_Actor_variable_name_must_005e2c0a+1
        ;   Label: LAB_0052100a
    PUSH 0x1e65100                      ; 0052100f
    CALL crt_unknown.c_FUN_005b7790     ; 00521014
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 00521019
    XOR EAX,EAX                         ; 0052101c
        ;   Label: LAB_0052101c
    POP EDI                             ; 0052101e
    POP ESI                             ; 0052101f
    POP EBX                             ; 00521020
    RET                                 ; 00521021
    PUSH ESI                            ; 00521022
        ;   Label: LAB_00521022
    PUSH 0x5e2c33                       ; 00521023 | = "Actor variable name \"%s\" is too long"
    PUSH 0x1e65100                      ; 00521028
    CALL crt_unknown.c_FUN_005b7790     ; 0052102d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00521032
    JMP 0x0052101c                      ; 00521035
        ;   XREF to: 0052101c (UNCONDITIONAL_JUMP)  ; LAB_0052101c
    MOV BH,byte ptr [EAX]               ; 00521037
        ;   Label: LAB_00521037
    CMP BH,0x5f                         ; 00521039
    JZ 0x00521006                       ; 0052103c
        ;   XREF to: 00521006 (CONDITIONAL_JUMP)  ; LAB_00521006
    CMP EDX,0x1                         ; 0052103e
    JZ 0x00521050                       ; 00521041
        ;   XREF to: 00521050 (CONDITIONAL_JUMP)  ; LAB_00521050
    TEST BH,BH                          ; 00521043
    JNZ 0x00521050                      ; 00521045
        ;   XREF to: 00521050 (CONDITIONAL_JUMP)  ; LAB_00521050
    MOV EAX,0x1                         ; 00521047
    POP EDI                             ; 0052104c
    POP ESI                             ; 0052104d
    POP EBX                             ; 0052104e
    RET                                 ; 0052104f
    PUSH ESI                            ; 00521050
        ;   Label: LAB_00521050
    PUSH 0x5e2c58                       ; 00521051 | = "Actor variable name \"%s\" is not valid"
    PUSH 0x1e65100                      ; 00521056
    CALL crt_unknown.c_FUN_005b7790     ; 0052105b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00521060
    XOR EAX,EAX                         ; 00521063
    POP EDI                             ; 00521065
    POP ESI                             ; 00521066
    POP EBX                             ; 00521067
    RET                                 ; 00521068

