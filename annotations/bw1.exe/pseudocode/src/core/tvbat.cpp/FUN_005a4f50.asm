; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_005a4f50(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4f50
        ;   Label: core_tvbat.cpp_FUN_005a4f50
    PUSH EDI                            ; 005a4f51
    SUB ESP,0x1c                        ; 005a4f52
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a4f55
    MOV EBX,ESI                         ; 005a4f59
    FLD float ptr [EAX + 0xc268]        ; 005a4f5b
    ADD EAX,0xc26c                      ; 005a4f61
    CALL crt_math.c_round_FUN_005c03a0  ; 005a4f66
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 005a4f6b
    FISTP dword ptr [ESP + 0x1c]        ; 005a4f6c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a4f70
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a4f75
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a4f78
    MOV ESI,EAX                         ; 005a4f7c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a4f7e
    MOV EDI,ESP                         ; 005a4f85
    SUB EAX,EDX                         ; 005a4f87
    MOV ESI,dword ptr [ESI + 0x350]     ; 005a4f89
    SHL EAX,0x3                         ; 005a4f8f
    MOV ECX,0x6                         ; 005a4f92
    ADD ESI,EAX                         ; 005a4f97
    MOVSD.REP ES:EDI,ESI                ; 005a4f99
    MOV ECX,0x6                         ; 005a4f9b
    MOV ESI,ESP                         ; 005a4fa0
    MOV EDI,EBX                         ; 005a4fa2
    MOVSD.REP ES:EDI,ESI                ; 005a4fa4
    MOV EAX,EBX                         ; 005a4fa6
    ADD ESP,0x1c                        ; 005a4fa8
    POP EDI                             ; 005a4fab
    POP EBX                             ; 005a4fac
    RET                                 ; 005a4fad

