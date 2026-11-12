; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_process_FUN_00533010(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd712
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e699
;
; Referenced Globals:
;   undefined4 DAT_005e5b36
;   TerminatedCString s_soff_005e5b3b
;   undefined4 DAT_005e5b41
;   undefined4 DAT_006141f0
;   undefined4 DAT_01fc8d04
;   undefined4 DAT_01fc8e84
;   undefined4 DAT_01fc8e88
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_setutil.cpp_C3DSLight_process_FUN_0053b8d0
;   crt_string.c__strnicmp_FUN_005b8da0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533010
        ;   Label: core_set.cpp_CDemonSet_process_FUN_00533010
    PUSH ESI                            ; 00533011
    PUSH EDI                            ; 00533012
    PUSH EBP                            ; 00533013
    SUB ESP,0x108                       ; 00533014
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0053301a
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00533021
    XOR EBP,EBP                         ; 00533027
    TEST EDX,EDX                        ; 00533029
    JLE 0x0053305a                      ; 0053302b
        ;   XREF to: 0053305a (CONDITIONAL_JUMP)  ; LAB_0053305a
    MOV dword ptr [ESP + 0x104],EBP     ; 0053302d
    LEA EDI,[EAX + 0x19a30]             ; 00533034
    MOV EAX,dword ptr [EDI]             ; 0053303a
        ;   Label: LAB_0053303a
    MOV ESI,EDI                         ; 0053303c
    TEST EAX,EAX                        ; 0053303e
    JZ 0x00533065                       ; 00533040
        ;   XREF to: 00533065 (CONDITIONAL_JUMP)  ; LAB_00533065
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00533042
        ;   Label: LAB_00533042
    INC EBP                             ; 00533049
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0053304a
    ADD EDI,0x1898                      ; 00533050
    CMP EBP,ECX                         ; 00533056
    JL 0x0053303a                       ; 00533058
        ;   XREF to: 0053303a (CONDITIONAL_JUMP)  ; LAB_0053303a
    ADD ESP,0x108                       ; 0053305a
        ;   Label: LAB_0053305a
    POP EBP                             ; 00533060
    POP EDI                             ; 00533061
    POP ESI                             ; 00533062
    POP EBX                             ; 00533063
    RET                                 ; 00533064
    MOV EBX,dword ptr [ESP + 0x104]     ; 00533065
        ;   Label: LAB_00533065
    MOV EBX,dword ptr [EBX + 0x1fc8d04] ; 0053306c | DAT_01fc8d04
    TEST EBX,EBX                        ; 00533072
    JZ 0x0053305a                       ; 00533074
        ;   XREF to: 0053305a (CONDITIONAL_JUMP)  ; LAB_0053305a
    MOV ECX,dword ptr [0x01fc8e84]      ; 00533076 | DAT_01fc8e84
    MOV dword ptr [ESP + 0x100],EAX     ; 0053307c
    TEST ECX,ECX                        ; 00533083
    JLE 0x005330a5                      ; 00533085
        ;   XREF to: 005330a5 (CONDITIONAL_JUMP)  ; LAB_005330a5
    LEA EDX,[ECX*0x4 + 0x0]             ; 00533087
    CMP EBX,dword ptr [EAX + 0x1fc8e88] ; 0053308e | DAT_01fc8e88
        ;   Label: LAB_0053308e
    JNZ 0x00533161                      ; 00533094
        ;   XREF to: 00533161 (CONDITIONAL_JUMP)  ; LAB_00533161
    MOV dword ptr [ESP + 0x100],0x1     ; 0053309a
    MOV EDX,dword ptr [ESP + 0x100]     ; 005330a5
        ;   Label: LAB_005330a5
    PUSH EDX                            ; 005330ac
    PUSH EBX                            ; 005330ad
    PUSH ESI                            ; 005330ae
    CALL core_setutil.cpp_C3DSLight_process_FUN_0053b8d0 ; 005330af
        ;   XREF to: 0053b8d0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_process_FUN_0053b8d0(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
    ADD ESP,0xc                         ; 005330b4
    LEA EAX,[ESI + 0x4]                 ; 005330b7
    PUSH EAX                            ; 005330ba
    PUSH 0x5e5b36                       ; 005330bb | DAT_005e5b36
    LEA EAX,[ESP + 0x8]                 ; 005330c0
    PUSH EAX                            ; 005330c4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005330c5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 005330ca
    MOV EAX,ESP                         ; 005330cd
    PUSH EAX                            ; 005330cf
    MOV ECX,dword ptr [0x006141f0]      ; 005330d0 | DAT_006141f0
    PUSH ECX                            ; 005330d6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005330d7
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005330dc
    TEST EAX,EAX                        ; 005330df
    JZ 0x005330ed                       ; 005330e1
        ;   XREF to: 005330ed (CONDITIONAL_JUMP)  ; LAB_005330ed
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 005330e3
    LEA EAX,[ESI + 0x4]                 ; 005330ed
        ;   Label: LAB_005330ed
    PUSH EAX                            ; 005330f0
    PUSH 0x5e5b3b                       ; 005330f1 | = "%soff"
    LEA EAX,[ESP + 0x8]                 ; 005330f6
    PUSH EAX                            ; 005330fa
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005330fb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00533100
    MOV EAX,ESP                         ; 00533103
    PUSH EAX                            ; 00533105
    MOV EAX,[0x006141f0]                ; 00533106 | DAT_006141f0
    PUSH EAX                            ; 0053310b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0053310c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00533111
    TEST EAX,EAX                        ; 00533114
    JZ 0x00533122                       ; 00533116
        ;   XREF to: 00533122 (CONDITIONAL_JUMP)  ; LAB_00533122
    MOV dword ptr [EBX + 0x1cb4],0x0    ; 00533118
    PUSH 0x4                            ; 00533122
        ;   Label: LAB_00533122
    PUSH 0x5e5b41                       ; 00533124 | DAT_005e5b41
    ADD ESI,0x4                         ; 00533129
    PUSH ESI                            ; 0053312c
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 0053312d
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533132
    TEST EAX,EAX                        ; 00533135
    JNZ 0x00533154                      ; 00533137
        ;   XREF to: 00533154 (CONDITIONAL_JUMP)  ; LAB_00533154
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00533139
    MOV EDX,dword ptr [EAX + 0x15ae5c]  ; 00533140
    TEST EDX,EDX                        ; 00533146
    JZ 0x00533171                       ; 00533148
        ;   XREF to: 00533171 (CONDITIONAL_JUMP)  ; LAB_00533171
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 0053314a
    ADD dword ptr [ESP + 0x104],0x4     ; 00533154
        ;   Label: LAB_00533154
    JMP 0x00533042                      ; 0053315c
        ;   XREF to: 00533042 (UNCONDITIONAL_JUMP)  ; LAB_00533042
    ADD EAX,0x4                         ; 00533161
        ;   Label: LAB_00533161
    CMP EAX,EDX                         ; 00533164
    JL 0x0053308e                       ; 00533166
        ;   XREF to: 0053308e (CONDITIONAL_JUMP)  ; LAB_0053308e
    JMP 0x005330a5                      ; 0053316c
        ;   XREF to: 005330a5 (UNCONDITIONAL_JUMP)  ; LAB_005330a5
    MOV dword ptr [EBX + 0x1cb4],EDX    ; 00533171
        ;   Label: LAB_00533171
    ADD dword ptr [ESP + 0x104],0x4     ; 00533177
    JMP 0x00533042                      ; 0053317f
        ;   XREF to: 00533042 (UNCONDITIONAL_JUMP)  ; LAB_00533042

