; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_FUN_005123e0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005123e0
        ;   Label: core_platfrm.cpp_FUN_005123e0
    PUSH EDI                            ; 005123e1
    SUB ESP,0x18                        ; 005123e2
    MOV EBX,ESI                         ; 005123e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 005123e7
    ADD EAX,0x158                       ; 005123eb
    PUSH EAX                            ; 005123f0
    LEA EDI,[ESP + 0x4]                 ; 005123f1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 005123f5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005123fa
    MOV ESI,dword ptr [EAX + 0x350]     ; 005123ff
    ADD ESP,0x4                         ; 00512405
    MOVSD.REP ES:EDI,ESI                ; 00512408
    MOV ECX,0x6                         ; 0051240a
    MOV ESI,ESP                         ; 0051240f
    MOV EDI,EBX                         ; 00512411
    MOVSD.REP ES:EDI,ESI                ; 00512413
    MOV EAX,EBX                         ; 00512415
    ADD ESP,0x18                        ; 00512417
    POP EDI                             ; 0051241a
    POP EBX                             ; 0051241b
    RET                                 ; 0051241c

