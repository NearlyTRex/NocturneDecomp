; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_FUN_00560b10(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560b10
        ;   Label: core_spike.cpp_FUN_00560b10
    PUSH EDI                            ; 00560b11
    SUB ESP,0x18                        ; 00560b12
    MOV EBX,ESI                         ; 00560b15
    MOV EAX,dword ptr [ESP + 0x24]      ; 00560b17
    ADD EAX,0x2b4                       ; 00560b1b
    PUSH EAX                            ; 00560b20
    LEA EDI,[ESP + 0x4]                 ; 00560b21
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00560b25
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00560b2a
    MOV ESI,dword ptr [EAX + 0x350]     ; 00560b2f
    ADD ESP,0x4                         ; 00560b35
    MOVSD.REP ES:EDI,ESI                ; 00560b38
    MOV ECX,0x6                         ; 00560b3a
    MOV ESI,ESP                         ; 00560b3f
    MOV EDI,EBX                         ; 00560b41
    MOVSD.REP ES:EDI,ESI                ; 00560b43
    MOV EAX,EBX                         ; 00560b45
    ADD ESP,0x18                        ; 00560b47
    POP EDI                             ; 00560b4a
    POP EBX                             ; 00560b4b
    RET                                 ; 00560b4c

