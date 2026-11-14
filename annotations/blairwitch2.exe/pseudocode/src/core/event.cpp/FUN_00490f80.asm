; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_FUN_00490f80(CEventList *this_ptr,char *name,int add_flag)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   add_flag
;
; XREF[5]:
;   core_event.cpp_FUN_00489670 at 0048b3d5
;   core_hero.cpp_FUN_004cff90 at 004cfffc
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d2541
;   core_inv.cpp_CInventory_select_FUN_004dc8c0 at 004dcc93
;   core_schngeis.cpp_CSchnellGeist_processDamage_FUN_005a3ba0 at 005a3bd4
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4cbb
;   TerminatedCString s_Too_many_persistent_even_005d4ccd
;   TerminatedCString s_core_event_cpp_005d4ce9
;   TerminatedCString s_Event_name_s_too_long_005d4cfb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_event.cpp_CEventList_findPersistentEvent_FUN_00491540
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strupr_FUN_005ba840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490f80
        ;   Label: core_event.cpp_FUN_00490f80
    PUSH ESI                            ; 00490f81
    PUSH EBP                            ; 00490f82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00490f83
    MOV ESI,dword ptr [ESP + 0x14]      ; 00490f87
    TEST ESI,ESI                        ; 00490f8b
    JZ 0x00490f94                       ; 00490f8d
        ;   XREF to: 00490f94 (CONDITIONAL_JUMP)  ; LAB_00490f94
    CMP byte ptr [ESI],0x0              ; 00490f8f
    JNZ 0x00490f98                      ; 00490f92
        ;   XREF to: 00490f98 (CONDITIONAL_JUMP)  ; LAB_00490f98
    POP EBP                             ; 00490f94
        ;   Label: LAB_00490f94
    POP ESI                             ; 00490f95
    POP EBX                             ; 00490f96
    RET                                 ; 00490f97
    PUSH ESI                            ; 00490f98
        ;   Label: LAB_00490f98
    PUSH EBX                            ; 00490f99
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_00491540 ; 00490f9a
        ;   XREF to: 00491540 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_00491540(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00490f9f
    CMP dword ptr [ESP + 0x18],0x0      ; 00490fa2
    JZ 0x0049106c                       ; 00490fa7
        ;   XREF to: 0049106c (CONDITIONAL_JUMP)  ; LAB_0049106c
    TEST EAX,EAX                        ; 00490fad
    JGE 0x00490f94                      ; 00490faf
        ;   XREF to: 00490f94 (CONDITIONAL_JUMP)  ; LAB_00490f94
    CMP dword ptr [EBX + 0x258c],0x64   ; 00490fb1
    JGE 0x00491045                      ; 00490fb8
        ;   XREF to: 00491045 (CONDITIONAL_JUMP)  ; LAB_00491045
    PUSH EDI                            ; 00490fbe
        ;   Label: LAB_00490fbe
    MOV EDI,ESI                         ; 00490fbf
    SUB ECX,ECX                         ; 00490fc1
    DEC ECX                             ; 00490fc3
    XOR EAX,EAX                         ; 00490fc4
    SCASB.REPNE ES:EDI                  ; 00490fc6
    NOT ECX                             ; 00490fc8
    DEC ECX                             ; 00490fca
    CMP ECX,0x20                        ; 00490fcb
    JC 0x00490ff4                       ; 00490fce
        ;   XREF to: 00490ff4 (CONDITIONAL_JUMP)  ; LAB_00490ff4
    PUSH ESI                            ; 00490fd0
    MOV EDX,0x5d4ce9                    ; 00490fd1 | = "..\\core\\event.cpp"
    MOV ECX,0xcf4                       ; 00490fd6
    PUSH 0x5d4cfb                       ; 00490fdb | = "Event name %s too long!"
    MOV dword ptr [0x01d046a0],EDX      ; 00490fe0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00490fe6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00490fec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00490ff1
    MOV EDI,dword ptr [EBX + 0x258c]    ; 00490ff4
        ;   Label: LAB_00490ff4
    LEA EDX,[EBX + 0x2590]              ; 00490ffa
    SHL EDI,0x5                         ; 00491000
    ADD EDI,EDX                         ; 00491003
    PUSH EDI                            ; 00491005
    MOV AL,byte ptr [ESI]               ; 00491006
        ;   Label: LAB_00491006
    MOV byte ptr [EDI],AL               ; 00491008
    CMP AL,0x0                          ; 0049100a
    JZ 0x0049101e                       ; 0049100c
        ;   XREF to: 0049101e (CONDITIONAL_JUMP)  ; LAB_0049101e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049100e
    ADD ESI,0x2                         ; 00491011
    MOV byte ptr [EDI + 0x1],AL         ; 00491014
    ADD EDI,0x2                         ; 00491017
    CMP AL,0x0                          ; 0049101a
    JNZ 0x00491006                      ; 0049101c
        ;   XREF to: 00491006 (CONDITIONAL_JUMP)  ; LAB_00491006
    POP EDI                             ; 0049101e
        ;   Label: LAB_0049101e
    MOV EAX,dword ptr [EBX + 0x258c]    ; 0049101f
    SHL EAX,0x5                         ; 00491025
    ADD EDX,EAX                         ; 00491028
    PUSH EDX                            ; 0049102a
    CALL crt_string.c_strupr_FUN_005ba840 ; 0049102b
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    MOV ESI,dword ptr [EBX + 0x258c]    ; 00491030
    INC ESI                             ; 00491036
    ADD ESP,0x4                         ; 00491037
    MOV dword ptr [EBX + 0x258c],ESI    ; 0049103a
    POP EDI                             ; 00491040
    POP EBP                             ; 00491041
    POP ESI                             ; 00491042
    POP EBX                             ; 00491043
    RET                                 ; 00491044
    MOV EBP,0x5d4cbb                    ; 00491045 | = "..\\core\\event.cpp"
        ;   Label: LAB_00491045
    MOV EAX,0xcee                       ; 0049104a
    PUSH 0x5d4ccd                       ; 0049104f | = "Too many persistent events!"
    MOV dword ptr [0x01d046a0],EBP      ; 00491054 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0049105a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0049105f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00491064
    JMP 0x00490fbe                      ; 00491067
        ;   XREF to: 00490fbe (UNCONDITIONAL_JUMP)  ; LAB_00490fbe
    TEST EAX,EAX                        ; 0049106c
        ;   Label: LAB_0049106c
    JL 0x00490f94                       ; 0049106e
        ;   XREF to: 00490f94 (CONDITIONAL_JUMP)  ; LAB_00490f94
    MOV ECX,dword ptr [EBX + 0x258c]    ; 00491074
    DEC ECX                             ; 0049107a
    MOV EDX,ECX                         ; 0049107b
    SUB EDX,EAX                         ; 0049107d
    ADD EBX,0x2590                      ; 0049107f
    SHL EDX,0x5                         ; 00491085
    SHL EAX,0x5                         ; 00491088
    PUSH EDX                            ; 0049108b
    LEA EDX,[EAX + 0x20]                ; 0049108c
    ADD EDX,EBX                         ; 0049108f
    PUSH EDX                            ; 00491091
    ADD EAX,EBX                         ; 00491092
    PUSH EAX                            ; 00491094
    MOV dword ptr [EBX + -0x4],ECX      ; 00491095
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491098
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049109d
    POP EBP                             ; 004910a0
    POP ESI                             ; 004910a1
    POP EBX                             ; 004910a2
    RET                                 ; 004910a3

