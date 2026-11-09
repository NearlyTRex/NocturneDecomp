; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_FUN_00515ec0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ec0
        ;   Label: core_pendulum.cpp_FUN_00515ec0
    PUSH EDI                            ; 00515ec1
    SUB ESP,0x18                        ; 00515ec2
    MOV EBX,ESI                         ; 00515ec5
    MOV EAX,dword ptr [ESP + 0x24]      ; 00515ec7
    ADD EAX,0x2b4                       ; 00515ecb
    PUSH EAX                            ; 00515ed0
    LEA EDI,[ESP + 0x4]                 ; 00515ed1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00515ed5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00515eda
    MOV ESI,dword ptr [EAX + 0x350]     ; 00515edf
    ADD ESP,0x4                         ; 00515ee5
    MOVSD.REP ES:EDI,ESI                ; 00515ee8
    MOV ECX,0x6                         ; 00515eea
    MOV ESI,ESP                         ; 00515eef
    MOV EDI,EBX                         ; 00515ef1
    MOVSD.REP ES:EDI,ESI                ; 00515ef3
    MOV EAX,EBX                         ; 00515ef5
    ADD ESP,0x18                        ; 00515ef7
    POP EDI                             ; 00515efa
    POP EBX                             ; 00515efb
    RET                                 ; 00515efc

