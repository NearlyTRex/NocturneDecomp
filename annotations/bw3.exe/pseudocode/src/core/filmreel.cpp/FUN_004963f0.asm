; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_004963f0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004963f0
        ;   Label: core_filmreel.cpp_FUN_004963f0
    PUSH EDI                            ; 004963f1
    SUB ESP,0x18                        ; 004963f2
    MOV EBX,ESI                         ; 004963f5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004963f7
    ADD EAX,0x158                       ; 004963fb
    PUSH EAX                            ; 00496400
    LEA EDI,[ESP + 0x4]                 ; 00496401
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00496405
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0049640a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0049640f
    ADD ESP,0x4                         ; 00496415
    MOVSD.REP ES:EDI,ESI                ; 00496418
    MOV ECX,0x6                         ; 0049641a
    MOV ESI,ESP                         ; 0049641f
    MOV EDI,EBX                         ; 00496421
    MOVSD.REP ES:EDI,ESI                ; 00496423
    MOV EAX,EBX                         ; 00496425
    ADD ESP,0x18                        ; 00496427
    POP EDI                             ; 0049642a
    POP EBX                             ; 0049642b
    RET                                 ; 0049642c

