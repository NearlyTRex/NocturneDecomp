; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_parseConditionExpr_FUN_004fe140(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005008f3
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;   undefined4 DAT_01e56418
;
; Called Functions:
;   core_event.cpp_CEventList_validateCondition_FUN_0047dc90
;   core_script.cpp_parseArgument_FUN_004fe090
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 004fe140
        ;   Label: core_script.cpp_parseConditionExpr_FUN_004fe140
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fe142
    PUSH EDX                            ; 004fe146
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fe147
    PUSH ECX                            ; 004fe14b
    CALL core_script.cpp_parseArgument_FUN_004fe090 ; 004fe14c
        ;   XREF to: 004fe090 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_parseArgument_FUN_004fe090()
    ADD ESP,0xc                         ; 004fe151
    TEST EAX,EAX                        ; 004fe154
    JNZ 0x004fe161                      ; 004fe156
        ;   XREF to: 004fe161 (CONDITIONAL_JUMP)  ; LAB_004fe161
    CMP dword ptr [0x01e56418],0x0      ; 004fe158 | DAT_01e56418
    JNZ 0x004fe162                      ; 004fe15f
        ;   XREF to: 004fe162 (CONDITIONAL_JUMP)  ; LAB_004fe162
    RET                                 ; 004fe161
        ;   Label: LAB_004fe161
    PUSH EDI                            ; 004fe162
        ;   Label: LAB_004fe162
    PUSH ESI                            ; 004fe163
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fe164
    PUSH ESI                            ; 004fe168
    MOV EDI,dword ptr [0x005b7650]      ; 004fe169 | DAT_005b7650
    PUSH EDI                            ; 004fe16f
    CALL core_event.cpp_CEventList_validateCondition_FUN_0047dc90 ; 004fe170
        ;   XREF to: 0047dc90 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_validateCondition_FUN_0047dc90()
    ADD ESP,0x8                         ; 004fe175
    POP ESI                             ; 004fe178
    POP EDI                             ; 004fe179
    RET                                 ; 004fe17a

