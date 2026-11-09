; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_005a98c0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a98c0
        ;   Label: core_vessel.cpp_FUN_005a98c0
    PUSH EDI                            ; 005a98c1
    SUB ESP,0x18                        ; 005a98c2
    MOV EBX,ESI                         ; 005a98c5
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a98c7
    ADD EAX,0x158                       ; 005a98cb
    PUSH EAX                            ; 005a98d0
    LEA EDI,[ESP + 0x4]                 ; 005a98d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a98d5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005a98da
    MOV ESI,dword ptr [EAX + 0x350]     ; 005a98df
    ADD ESP,0x4                         ; 005a98e5
    MOVSD.REP ES:EDI,ESI                ; 005a98e8
    MOV ECX,0x6                         ; 005a98ea
    MOV ESI,ESP                         ; 005a98ef
    MOV EDI,EBX                         ; 005a98f1
    MOVSD.REP ES:EDI,ESI                ; 005a98f3
    MOV EAX,EBX                         ; 005a98f5
    ADD ESP,0x18                        ; 005a98f7
    POP EDI                             ; 005a98fa
    POP EBX                             ; 005a98fb
    RET                                 ; 005a98fc

