; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x118]:256  local_118
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3329
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b59b
;
; Referenced Globals:
;   TerminatedCString s_son_00645fdb
;   TerminatedCString s_soff_00645fe0
;   TerminatedCString s_moon_00645fe6
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   CDemonLight*[96] g_MasterLightList
;   int g_SpotLightCount
;   CDemonLight*[96] g_SpotLightList
;   undefined4 DAT_03276f38
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_setutil.cpp_C3DSLight_process_FUN_00586cb0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f940
        ;   Label: core_set.cpp_CDemonSet_process_FUN_0056f940
    PUSH ESI                            ; 0056f941
    PUSH EDI                            ; 0056f942
    PUSH EBP                            ; 0056f943
    SUB ESP,0x108                       ; 0056f944
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0056f94a
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0056f951
    XOR EBP,EBP                         ; 0056f957
    TEST EDX,EDX                        ; 0056f959
    JLE 0x0056f98a                      ; 0056f95b
        ;   XREF to: 0056f98a (CONDITIONAL_JUMP)  ; LAB_0056f98a
    MOV dword ptr [ESP + 0x104],EBP     ; 0056f95d
    LEA EDI,[EAX + 0x19a30]             ; 0056f964
    MOV EAX,dword ptr [EDI]             ; 0056f96a
        ;   Label: LAB_0056f96a
    MOV ESI,EDI                         ; 0056f96c
    TEST EAX,EAX                        ; 0056f96e
    JZ 0x0056f995                       ; 0056f970
        ;   XREF to: 0056f995 (CONDITIONAL_JUMP)  ; LAB_0056f995
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0056f972
        ;   Label: LAB_0056f972
    INC EBP                             ; 0056f979
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0056f97a
    ADD EDI,0x1898                      ; 0056f980
    CMP EBP,ECX                         ; 0056f986
    JL 0x0056f96a                       ; 0056f988
        ;   XREF to: 0056f96a (CONDITIONAL_JUMP)  ; LAB_0056f96a
    ADD ESP,0x108                       ; 0056f98a
        ;   Label: LAB_0056f98a
    POP EBP                             ; 0056f990
    POP EDI                             ; 0056f991
    POP ESI                             ; 0056f992
    POP EBX                             ; 0056f993
    RET                                 ; 0056f994
    MOV EBX,dword ptr [ESP + 0x104]     ; 0056f995
        ;   Label: LAB_0056f995
    MOV EBX,dword ptr [EBX + 0x3276db0] ; 0056f99c | g_MasterLightList
    TEST EBX,EBX                        ; 0056f9a2
    JZ 0x0056f98a                       ; 0056f9a4
        ;   XREF to: 0056f98a (CONDITIONAL_JUMP)  ; LAB_0056f98a
    MOV ECX,dword ptr [0x03276f30]      ; 0056f9a6 | g_SpotLightCount
    MOV dword ptr [ESP + 0x100],EAX     ; 0056f9ac
    TEST ECX,ECX                        ; 0056f9b3
    JLE 0x0056f9d5                      ; 0056f9b5
        ;   XREF to: 0056f9d5 (CONDITIONAL_JUMP)  ; LAB_0056f9d5
    LEA EDX,[ECX*0x4 + 0x0]             ; 0056f9b7
    CMP EBX,dword ptr [EAX + 0x3276f34] ; 0056f9be | g_SpotLightList | DAT_03276f38
        ;   Label: LAB_0056f9be
    JNZ 0x0056fa91                      ; 0056f9c4
        ;   XREF to: 0056fa91 (CONDITIONAL_JUMP)  ; LAB_0056fa91
    MOV dword ptr [ESP + 0x100],0x1     ; 0056f9ca
    MOV EDX,dword ptr [ESP + 0x100]     ; 0056f9d5
        ;   Label: LAB_0056f9d5
    PUSH EDX                            ; 0056f9dc
    PUSH EBX                            ; 0056f9dd
    PUSH ESI                            ; 0056f9de
    CALL core_setutil.cpp_C3DSLight_process_FUN_00586cb0 ; 0056f9df
        ;   XREF to: 00586cb0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_process_FUN_00586cb0(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
    ADD ESP,0xc                         ; 0056f9e4
    LEA EAX,[ESI + 0x4]                 ; 0056f9e7
    PUSH EAX                            ; 0056f9ea
    PUSH 0x645fdb                       ; 0056f9eb | = "%son"
    LEA EAX,[ESP + 0x8]                 ; 0056f9f0
    PUSH EAX                            ; 0056f9f4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056f9f5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056f9fa
    MOV EAX,ESP                         ; 0056f9fd
    PUSH EAX                            ; 0056f9ff
    MOV ECX,dword ptr [0x006793d0]      ; 0056fa00 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 0056fa06 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0056fa07
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0056fa0c
    TEST EAX,EAX                        ; 0056fa0f
    JZ 0x0056fa1d                       ; 0056fa11
        ;   XREF to: 0056fa1d (CONDITIONAL_JUMP)  ; LAB_0056fa1d
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 0056fa13
    LEA EAX,[ESI + 0x4]                 ; 0056fa1d
        ;   Label: LAB_0056fa1d
    PUSH EAX                            ; 0056fa20
    PUSH 0x645fe0                       ; 0056fa21 | = "%soff"
    LEA EAX,[ESP + 0x8]                 ; 0056fa26
    PUSH EAX                            ; 0056fa2a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056fa2b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056fa30
    MOV EAX,ESP                         ; 0056fa33
    PUSH EAX                            ; 0056fa35
    MOV EAX,[0x006793d0]                ; 0056fa36 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 0056fa3b | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0056fa3c
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0056fa41
    TEST EAX,EAX                        ; 0056fa44
    JZ 0x0056fa52                       ; 0056fa46
        ;   XREF to: 0056fa52 (CONDITIONAL_JUMP)  ; LAB_0056fa52
    MOV dword ptr [EBX + 0x1cb4],0x0    ; 0056fa48
    PUSH 0x4                            ; 0056fa52
        ;   Label: LAB_0056fa52
    PUSH 0x645fe6                       ; 0056fa54 | = "moon"
    ADD ESI,0x4                         ; 0056fa59
    PUSH ESI                            ; 0056fa5c
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0056fa5d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056fa62
    TEST EAX,EAX                        ; 0056fa65
    JNZ 0x0056fa84                      ; 0056fa67
        ;   XREF to: 0056fa84 (CONDITIONAL_JUMP)  ; LAB_0056fa84
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0056fa69
    MOV EDX,dword ptr [EAX + 0x15ae48]  ; 0056fa70
    TEST EDX,EDX                        ; 0056fa76
    JZ 0x0056faa1                       ; 0056fa78
        ;   XREF to: 0056faa1 (CONDITIONAL_JUMP)  ; LAB_0056faa1
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 0056fa7a
    ADD dword ptr [ESP + 0x104],0x4     ; 0056fa84
        ;   Label: LAB_0056fa84
    JMP 0x0056f972                      ; 0056fa8c
        ;   XREF to: 0056f972 (UNCONDITIONAL_JUMP)  ; LAB_0056f972
    ADD EAX,0x4                         ; 0056fa91
        ;   Label: LAB_0056fa91
    CMP EAX,EDX                         ; 0056fa94
    JL 0x0056f9be                       ; 0056fa96
        ;   XREF to: 0056f9be (CONDITIONAL_JUMP)  ; LAB_0056f9be
    JMP 0x0056f9d5                      ; 0056fa9c
        ;   XREF to: 0056f9d5 (UNCONDITIONAL_JUMP)  ; LAB_0056f9d5
    MOV dword ptr [EBX + 0x1cb4],EDX    ; 0056faa1
        ;   Label: LAB_0056faa1
    ADD dword ptr [ESP + 0x104],0x4     ; 0056faa7
    JMP 0x0056f972                      ; 0056faaf
        ;   XREF to: 0056f972 (UNCONDITIONAL_JUMP)  ; LAB_0056f972

