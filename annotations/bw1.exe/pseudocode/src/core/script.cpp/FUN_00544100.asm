; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * core_script_cpp_FUN_00544100(CScript *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01e810a8
;
; Called Functions:
;   core_script.cpp_CScript_initRuntime_FUN_00544190
;   core_script.cpp_CScript_step_FUN_00544460
;   shape_edittool.cpp_CPickList_clear_FUN_0049c370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544100
        ;   Label: core_script.cpp_FUN_00544100
    PUSH ESI                            ; 00544101
    PUSH EDI                            ; 00544102
    PUSH EBP                            ; 00544103
    SUB ESP,0x4                         ; 00544104
    MOV EBX,dword ptr [ESP + 0x18]      ; 00544107
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054410b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0054410f
    MOV EDX,0x1                         ; 00544113
    PUSH EBX                            ; 00544118
    MOV dword ptr [0x01e810a8],EDX      ; 00544119 | DAT_01e810a8
    CALL core_script.cpp_CScript_initRuntime_FUN_00544190 ; 0054411f
        ;   XREF to: 00544190 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_initRuntime_FUN_00544190(CScript * this_ptr)
    ADD ESP,0x4                         ; 00544124
    PUSH 0x1e818c0                      ; 00544127
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 0054412c
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x44]      ; 00544131
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00544134
    ADD ESP,0x4                         ; 00544137
    CMP EAX,ECX                         ; 0054413a
    JGE 0x00544164                      ; 0054413c
        ;   XREF to: 00544164 (CONDITIONAL_JUMP)  ; LAB_00544164
    MOV EAX,0x3e800000                  ; 0054413e
        ;   Label: LAB_0054413e
    MOV ESI,dword ptr [EBX + 0x44]      ; 00544143
    MOV dword ptr [ESP],EAX             ; 00544146
    MOV EAX,ESP                         ; 00544149
    PUSH EAX                            ; 0054414b
    PUSH EBX                            ; 0054414c
    CALL core_script.cpp_CScript_step_FUN_00544460 ; 0054414d
        ;   XREF to: 00544460 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00544460(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00544152
    TEST EAX,EAX                        ; 00544155
    JL 0x00544176                       ; 00544157
        ;   XREF to: 00544176 (CONDITIONAL_JUMP)  ; LAB_00544176
    INC ESI                             ; 00544159
        ;   Label: LAB_00544159
    MOV dword ptr [EBX + 0x44],ESI      ; 0054415a
    MOV EAX,ESI                         ; 0054415d
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0054415f
    JL 0x0054413e                       ; 00544162
        ;   XREF to: 0054413e (CONDITIONAL_JUMP)  ; LAB_0054413e
    XOR EDI,EDI                         ; 00544164
        ;   Label: LAB_00544164
    XOR EAX,EAX                         ; 00544166
    MOV dword ptr [0x01e810a8],EDI      ; 00544168 | DAT_01e810a8
    ADD ESP,0x4                         ; 0054416e
    POP EBP                             ; 00544171
    POP EDI                             ; 00544172
    POP ESI                             ; 00544173
    POP EBX                             ; 00544174
    RET                                 ; 00544175
    MOV EAX,dword ptr [EBX + 0x30]      ; 00544176
        ;   Label: LAB_00544176
    MOV EAX,dword ptr [EAX + ESI*0x8]   ; 00544179
    DEC EAX                             ; 0054417c
    MOV dword ptr [EDI],EAX             ; 0054417d
    CMP EBP,EAX                         ; 0054417f
    JG 0x00544159                       ; 00544181
        ;   XREF to: 00544159 (CONDITIONAL_JUMP)  ; LAB_00544159
    MOV EAX,0x1e810b0                   ; 00544183
    ADD ESP,0x4                         ; 00544188
    POP EBP                             ; 0054418b
    POP EDI                             ; 0054418c
    POP ESI                             ; 0054418d
    POP EBX                             ; 0054418e
    RET                                 ; 0054418f

