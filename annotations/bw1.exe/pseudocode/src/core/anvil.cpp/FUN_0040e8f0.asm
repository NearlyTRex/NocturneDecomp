; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_anvil_cpp_FUN_0040e8f0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e8f0
        ;   Label: core_anvil.cpp_FUN_0040e8f0
    PUSH EDI                            ; 0040e8f1
    SUB ESP,0x18                        ; 0040e8f2
    MOV EBX,ESI                         ; 0040e8f5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e8f7
    ADD EAX,0x158                       ; 0040e8fb
    PUSH EAX                            ; 0040e900
    LEA EDI,[ESP + 0x4]                 ; 0040e901
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0040e905
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040e90a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040e90f
    ADD ESP,0x4                         ; 0040e915
    MOVSD.REP ES:EDI,ESI                ; 0040e918
    MOV ECX,0x6                         ; 0040e91a
    MOV ESI,ESP                         ; 0040e91f
    MOV EDI,EBX                         ; 0040e921
    MOVSD.REP ES:EDI,ESI                ; 0040e923
    MOV EAX,EBX                         ; 0040e925
    ADD ESP,0x18                        ; 0040e927
    POP EDI                             ; 0040e92a
    POP EBX                             ; 0040e92b
    RET                                 ; 0040e92c

