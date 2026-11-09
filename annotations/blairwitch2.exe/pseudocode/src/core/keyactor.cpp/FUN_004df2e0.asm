; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_FUN_004df2e0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df2e0
        ;   Label: core_keyactor.cpp_FUN_004df2e0
    PUSH EDI                            ; 004df2e1
    SUB ESP,0x18                        ; 004df2e2
    MOV EBX,ESI                         ; 004df2e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004df2e7
    ADD EAX,0x2b4                       ; 004df2eb
    PUSH EAX                            ; 004df2f0
    LEA EDI,[ESP + 0x4]                 ; 004df2f1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004df2f5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004df2fa
    MOV ESI,dword ptr [EAX + 0x350]     ; 004df2ff
    ADD ESP,0x4                         ; 004df305
    MOVSD.REP ES:EDI,ESI                ; 004df308
    MOV ECX,0x6                         ; 004df30a
    MOV ESI,ESP                         ; 004df30f
    MOV EDI,EBX                         ; 004df311
    MOVSD.REP ES:EDI,ESI                ; 004df313
    MOV EAX,EBX                         ; 004df315
    ADD ESP,0x18                        ; 004df317
    POP EDI                             ; 004df31a
    POP EBX                             ; 004df31b
    RET                                 ; 004df31c

