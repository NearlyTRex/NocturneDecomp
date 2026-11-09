; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_FUN_00566e30(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566e30
        ;   Label: core_spike.cpp_FUN_00566e30
    PUSH EDI                            ; 00566e31
    SUB ESP,0x18                        ; 00566e32
    MOV EBX,ESI                         ; 00566e35
    MOV EAX,dword ptr [ESP + 0x24]      ; 00566e37
    ADD EAX,0x158                       ; 00566e3b
    PUSH EAX                            ; 00566e40
    LEA EDI,[ESP + 0x4]                 ; 00566e41
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00566e45
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00566e4a
    MOV ESI,dword ptr [EAX + 0x350]     ; 00566e4f
    ADD ESP,0x4                         ; 00566e55
    MOVSD.REP ES:EDI,ESI                ; 00566e58
    MOV ECX,0x6                         ; 00566e5a
    MOV ESI,ESP                         ; 00566e5f
    MOV EDI,EBX                         ; 00566e61
    MOVSD.REP ES:EDI,ESI                ; 00566e63
    MOV EAX,EBX                         ; 00566e65
    ADD ESP,0x18                        ; 00566e67
    POP EDI                             ; 00566e6a
    POP EBX                             ; 00566e6b
    RET                                 ; 00566e6c

