; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_FUN_004ff670(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff670
        ;   Label: core_lever.cpp_FUN_004ff670
    PUSH EDI                            ; 004ff671
    SUB ESP,0x18                        ; 004ff672
    MOV EBX,ESI                         ; 004ff675
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ff677
    ADD EAX,0x158                       ; 004ff67b
    PUSH EAX                            ; 004ff680
    LEA EDI,[ESP + 0x4]                 ; 004ff681
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004ff685
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004ff68a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004ff68f
    ADD ESP,0x4                         ; 004ff695
    MOVSD.REP ES:EDI,ESI                ; 004ff698
    MOV ECX,0x6                         ; 004ff69a
    MOV ESI,ESP                         ; 004ff69f
    MOV EDI,EBX                         ; 004ff6a1
    MOVSD.REP ES:EDI,ESI                ; 004ff6a3
    MOV EAX,EBX                         ; 004ff6a5
    ADD ESP,0x18                        ; 004ff6a7
    POP EDI                             ; 004ff6aa
    POP EBX                             ; 004ff6ab
    RET                                 ; 004ff6ac

