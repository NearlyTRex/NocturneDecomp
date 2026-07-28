; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_process_FUN_0050d040(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a61a9
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508f81
;
; Referenced Globals:
;   TerminatedCString s_son_0059079a
;   TerminatedCString s_soff_0059079f
;   TerminatedCString s_moon_005907a5
;   undefined4 DAT_005b7650
;   undefined4 DAT_01fb99d4
;   undefined4 DAT_01fb9b54
;   undefined4 DAT_01fb9b58
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_setutil.cpp_C3DSLight_process_FUN_00515420
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strnicmp_FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d040
        ;   Label: core_set.cpp_CDemonSet_process_FUN_0050d040
    PUSH ESI                            ; 0050d041
    PUSH EDI                            ; 0050d042
    PUSH EBP                            ; 0050d043
    SUB ESP,0x108                       ; 0050d044
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d04a
    MOV EDX,dword ptr [EAX + 0x19644]   ; 0050d051
    XOR EBP,EBP                         ; 0050d057
    TEST EDX,EDX                        ; 0050d059
    JLE 0x0050d08a                      ; 0050d05b
        ;   XREF to: 0050d08a (CONDITIONAL_JUMP)  ; LAB_0050d08a
    MOV dword ptr [ESP + 0x104],EBP     ; 0050d05d
    LEA EDI,[EAX + 0x19648]             ; 0050d064
    MOV EAX,dword ptr [EDI]             ; 0050d06a
        ;   Label: LAB_0050d06a
    MOV ESI,EDI                         ; 0050d06c
    TEST EAX,EAX                        ; 0050d06e
    JZ 0x0050d095                       ; 0050d070
        ;   XREF to: 0050d095 (CONDITIONAL_JUMP)  ; LAB_0050d095
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d072
        ;   Label: LAB_0050d072
    INC EBP                             ; 0050d079
    MOV ECX,dword ptr [EAX + 0x19644]   ; 0050d07a
    ADD EDI,0x1898                      ; 0050d080
    CMP EBP,ECX                         ; 0050d086
    JL 0x0050d06a                       ; 0050d088
        ;   XREF to: 0050d06a (CONDITIONAL_JUMP)  ; LAB_0050d06a
    ADD ESP,0x108                       ; 0050d08a
        ;   Label: LAB_0050d08a
    POP EBP                             ; 0050d090
    POP EDI                             ; 0050d091
    POP ESI                             ; 0050d092
    POP EBX                             ; 0050d093
    RET                                 ; 0050d094
    MOV EBX,dword ptr [ESP + 0x104]     ; 0050d095
        ;   Label: LAB_0050d095
    MOV EBX,dword ptr [EBX + 0x1fb99d4] ; 0050d09c | DAT_01fb99d4
    TEST EBX,EBX                        ; 0050d0a2
    JZ 0x0050d08a                       ; 0050d0a4
        ;   XREF to: 0050d08a (CONDITIONAL_JUMP)  ; LAB_0050d08a
    MOV ECX,dword ptr [0x01fb9b54]      ; 0050d0a6 | DAT_01fb9b54
    MOV dword ptr [ESP + 0x100],EAX     ; 0050d0ac
    TEST ECX,ECX                        ; 0050d0b3
    JLE 0x0050d0d5                      ; 0050d0b5
        ;   XREF to: 0050d0d5 (CONDITIONAL_JUMP)  ; LAB_0050d0d5
    LEA EDX,[ECX*0x4 + 0x0]             ; 0050d0b7
    CMP EBX,dword ptr [EAX + 0x1fb9b58] ; 0050d0be | DAT_01fb9b58
        ;   Label: LAB_0050d0be
    JNZ 0x0050d191                      ; 0050d0c4
        ;   XREF to: 0050d191 (CONDITIONAL_JUMP)  ; LAB_0050d191
    MOV dword ptr [ESP + 0x100],0x1     ; 0050d0ca
    MOV EDX,dword ptr [ESP + 0x100]     ; 0050d0d5
        ;   Label: LAB_0050d0d5
    PUSH EDX                            ; 0050d0dc
    PUSH EBX                            ; 0050d0dd
    PUSH ESI                            ; 0050d0de
    CALL core_setutil.cpp_C3DSLight_process_FUN_00515420 ; 0050d0df
        ;   XREF to: 00515420 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_process_FUN_00515420(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
    ADD ESP,0xc                         ; 0050d0e4
    LEA EAX,[ESI + 0x4]                 ; 0050d0e7
    PUSH EAX                            ; 0050d0ea
    PUSH 0x59079a                       ; 0050d0eb | = "%son"
    LEA EAX,[ESP + 0x8]                 ; 0050d0f0
    PUSH EAX                            ; 0050d0f4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050d0f5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0050d0fa
    MOV EAX,ESP                         ; 0050d0fd
    PUSH EAX                            ; 0050d0ff
    MOV ECX,dword ptr [0x005b7650]      ; 0050d100 | DAT_005b7650
    PUSH ECX                            ; 0050d106
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0050d107
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050d10c
    TEST EAX,EAX                        ; 0050d10f
    JZ 0x0050d11d                       ; 0050d111
        ;   XREF to: 0050d11d (CONDITIONAL_JUMP)  ; LAB_0050d11d
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 0050d113
    LEA EAX,[ESI + 0x4]                 ; 0050d11d
        ;   Label: LAB_0050d11d
    PUSH EAX                            ; 0050d120
    PUSH 0x59079f                       ; 0050d121 | = "%soff"
    LEA EAX,[ESP + 0x8]                 ; 0050d126
    PUSH EAX                            ; 0050d12a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050d12b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0050d130
    MOV EAX,ESP                         ; 0050d133
    PUSH EAX                            ; 0050d135
    MOV EAX,[0x005b7650]                ; 0050d136 | DAT_005b7650
    PUSH EAX                            ; 0050d13b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0050d13c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050d141
    TEST EAX,EAX                        ; 0050d144
    JZ 0x0050d152                       ; 0050d146
        ;   XREF to: 0050d152 (CONDITIONAL_JUMP)  ; LAB_0050d152
    MOV dword ptr [EBX + 0x1cb4],0x0    ; 0050d148
    PUSH 0x4                            ; 0050d152
        ;   Label: LAB_0050d152
    PUSH 0x5907a5                       ; 0050d154 | = "moon"
    ADD ESI,0x4                         ; 0050d159
    PUSH ESI                            ; 0050d15c
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050d15d
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0050d162
    TEST EAX,EAX                        ; 0050d165
    JNZ 0x0050d184                      ; 0050d167
        ;   XREF to: 0050d184 (CONDITIONAL_JUMP)  ; LAB_0050d184
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d169
    MOV EDX,dword ptr [EAX + 0x15aa60]  ; 0050d170
    TEST EDX,EDX                        ; 0050d176
    JZ 0x0050d1a1                       ; 0050d178
        ;   XREF to: 0050d1a1 (CONDITIONAL_JUMP)  ; LAB_0050d1a1
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 0050d17a
    ADD dword ptr [ESP + 0x104],0x4     ; 0050d184
        ;   Label: LAB_0050d184
    JMP 0x0050d072                      ; 0050d18c
        ;   XREF to: 0050d072 (UNCONDITIONAL_JUMP)  ; LAB_0050d072
    ADD EAX,0x4                         ; 0050d191
        ;   Label: LAB_0050d191
    CMP EAX,EDX                         ; 0050d194
    JL 0x0050d0be                       ; 0050d196
        ;   XREF to: 0050d0be (CONDITIONAL_JUMP)  ; LAB_0050d0be
    JMP 0x0050d0d5                      ; 0050d19c
        ;   XREF to: 0050d0d5 (UNCONDITIONAL_JUMP)  ; LAB_0050d0d5
    MOV dword ptr [EBX + 0x1cb4],EDX    ; 0050d1a1
        ;   Label: LAB_0050d1a1
    ADD dword ptr [ESP + 0x104],0x4     ; 0050d1a7
    JMP 0x0050d072                      ; 0050d1af
        ;   XREF to: 0050d072 (UNCONDITIONAL_JUMP)  ; LAB_0050d072

