; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_validateActorVariableName_FUN_005286f0(char *variable_name)
;
; Parameters:
; char *           Stack[0x4]:4   variable_name
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052cd97
;   core_script.cpp_getActor_FUN_005289b0 at 005289d4
;
; Referenced Globals:
;   TerminatedCString s_Actor_variable_name_must_005cdb70
;   TerminatedCString s_Actor_variable_name_s_is_005cdb98
;   TerminatedCString s_Actor_variable_name_s_is_005cdbbd
;   undefined4 DAT_006074b8
;   undefined4 DAT_01ed6810
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005286f0
        ;   Label: core_script.cpp_validateActorVariableName_FUN_005286f0
    PUSH ESI                            ; 005286f1
    PUSH EDI                            ; 005286f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005286f3
    CMP byte ptr [ESI],0x40             ; 005286f7
    JNZ 0x0052872a                      ; 005286fa
        ;   XREF to: 0052872a (CONDITIONAL_JUMP)  ; LAB_0052872a
    MOV EDI,ESI                         ; 005286fc
    SUB ECX,ECX                         ; 005286fe
    DEC ECX                             ; 00528700
    XOR EAX,EAX                         ; 00528701
    SCASB.REPNE ES:EDI                  ; 00528703
    NOT ECX                             ; 00528705
    DEC ECX                             ; 00528707
    CMP ECX,0x1e                        ; 00528708
    JA 0x00528742                       ; 0052870b
        ;   XREF to: 00528742 (CONDITIONAL_JUMP)  ; LAB_00528742
    MOV EDX,0x1                         ; 0052870d
    LEA EAX,[ESI + EDX*0x1]             ; 00528712
    MOV BL,byte ptr [EAX]               ; 00528715
        ;   Label: LAB_00528715
    XOR ECX,ECX                         ; 00528717
    INC BL                              ; 00528719
    MOV CL,BL                           ; 0052871b
    TEST byte ptr [ECX + 0x6074b8],0xe0 ; 0052871d | DAT_006074b8
    JZ 0x00528757                       ; 00528724
        ;   XREF to: 00528757 (CONDITIONAL_JUMP)  ; LAB_00528757
    INC EDX                             ; 00528726
        ;   Label: LAB_00528726
    INC EAX                             ; 00528727
    JMP 0x00528715                      ; 00528728
        ;   XREF to: 00528715 (UNCONDITIONAL_JUMP)  ; LAB_00528715
    PUSH 0x5cdb70                       ; 0052872a | = "Actor variable name must begin with '@'"
        ;   Label: LAB_0052872a
    PUSH 0x1ed6810                      ; 0052872f | DAT_01ed6810
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00528734
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00528739
    XOR EAX,EAX                         ; 0052873c
        ;   Label: LAB_0052873c
    POP EDI                             ; 0052873e
    POP ESI                             ; 0052873f
    POP EBX                             ; 00528740
    RET                                 ; 00528741
    PUSH ESI                            ; 00528742
        ;   Label: LAB_00528742
    PUSH 0x5cdb98                       ; 00528743 | = "Actor variable name \"%s\" is too long"
    PUSH 0x1ed6810                      ; 00528748 | DAT_01ed6810
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0052874d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00528752
    JMP 0x0052873c                      ; 00528755
        ;   XREF to: 0052873c (UNCONDITIONAL_JUMP)  ; LAB_0052873c
    MOV BH,byte ptr [EAX]               ; 00528757
        ;   Label: LAB_00528757
    CMP BH,0x5f                         ; 00528759
    JZ 0x00528726                       ; 0052875c
        ;   XREF to: 00528726 (CONDITIONAL_JUMP)  ; LAB_00528726
    CMP EDX,0x1                         ; 0052875e
    JZ 0x00528770                       ; 00528761
        ;   XREF to: 00528770 (CONDITIONAL_JUMP)  ; LAB_00528770
    TEST BH,BH                          ; 00528763
    JNZ 0x00528770                      ; 00528765
        ;   XREF to: 00528770 (CONDITIONAL_JUMP)  ; LAB_00528770
    MOV EAX,0x1                         ; 00528767
    POP EDI                             ; 0052876c
    POP ESI                             ; 0052876d
    POP EBX                             ; 0052876e
    RET                                 ; 0052876f
    PUSH ESI                            ; 00528770
        ;   Label: LAB_00528770
    PUSH 0x5cdbbd                       ; 00528771 | = "Actor variable name \"%s\" is not valid"
    PUSH 0x1ed6810                      ; 00528776 | DAT_01ed6810
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0052877b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00528780
    XOR EAX,EAX                         ; 00528783
    POP EDI                             ; 00528785
    POP ESI                             ; 00528786
    POP EBX                             ; 00528787
    RET                                 ; 00528788

