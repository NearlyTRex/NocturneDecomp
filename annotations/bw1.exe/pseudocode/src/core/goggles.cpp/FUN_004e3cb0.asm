; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_FUN_004e3cb0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3cb0
        ;   Label: core_goggles.cpp_FUN_004e3cb0
    PUSH EDI                            ; 004e3cb1
    SUB ESP,0x18                        ; 004e3cb2
    MOV EBX,ESI                         ; 004e3cb5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e3cb7
    ADD EAX,0x158                       ; 004e3cbb
    PUSH EAX                            ; 004e3cc0
    LEA EDI,[ESP + 0x4]                 ; 004e3cc1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004e3cc5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e3cca
    MOV ESI,dword ptr [EAX + 0x350]     ; 004e3ccf
    ADD ESP,0x4                         ; 004e3cd5
    MOVSD.REP ES:EDI,ESI                ; 004e3cd8
    MOV ECX,0x6                         ; 004e3cda
    MOV ESI,ESP                         ; 004e3cdf
    MOV EDI,EBX                         ; 004e3ce1
    MOVSD.REP ES:EDI,ESI                ; 004e3ce3
    MOV EAX,EBX                         ; 004e3ce5
    ADD ESP,0x18                        ; 004e3ce7
    POP EDI                             ; 004e3cea
    POP EBX                             ; 004e3ceb
    RET                                 ; 004e3cec

