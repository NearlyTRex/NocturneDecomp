; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_00577110(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577110
        ;   Label: core_vessel.cpp_FUN_00577110
    PUSH EDI                            ; 00577111
    SUB ESP,0x18                        ; 00577112
    MOV EBX,ESI                         ; 00577115
    MOV EAX,dword ptr [ESP + 0x24]      ; 00577117
    ADD EAX,0x158                       ; 0057711b
    PUSH EAX                            ; 00577120
    LEA EDI,[ESP + 0x4]                 ; 00577121
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00577125
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0057712a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0057712f
    ADD ESP,0x4                         ; 00577135
    MOVSD.REP ES:EDI,ESI                ; 00577138
    MOV ECX,0x6                         ; 0057713a
    MOV ESI,ESP                         ; 0057713f
    MOV EDI,EBX                         ; 00577141
    MOVSD.REP ES:EDI,ESI                ; 00577143
    MOV EAX,EBX                         ; 00577145
    ADD ESP,0x18                        ; 00577147
    POP EDI                             ; 0057714a
    POP EBX                             ; 0057714b
    RET                                 ; 0057714c

