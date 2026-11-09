; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_FUN_00411000(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411000
        ;   Label: core_bat.cpp_FUN_00411000
    PUSH EDI                            ; 00411001
    SUB ESP,0x1c                        ; 00411002
    MOV EAX,dword ptr [ESP + 0x28]      ; 00411005
    MOV EBX,ESI                         ; 00411009
    FLD float ptr [EAX + 0x184]         ; 0041100b
    ADD EAX,0x188                       ; 00411011
    CALL crt_math.c_round_FUN_005c03a0  ; 00411016
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 0041101b
    FISTP dword ptr [ESP + 0x1c]        ; 0041101c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00411020
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411025
    MOV EDX,dword ptr [ESP + 0x18]      ; 00411028
    MOV ESI,EAX                         ; 0041102c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041102e
    MOV EDI,ESP                         ; 00411035
    SUB EAX,EDX                         ; 00411037
    MOV ESI,dword ptr [ESI + 0x350]     ; 00411039
    SHL EAX,0x3                         ; 0041103f
    MOV ECX,0x6                         ; 00411042
    ADD ESI,EAX                         ; 00411047
    MOVSD.REP ES:EDI,ESI                ; 00411049
    MOV ECX,0x6                         ; 0041104b
    MOV ESI,ESP                         ; 00411050
    MOV EDI,EBX                         ; 00411052
    MOVSD.REP ES:EDI,ESI                ; 00411054
    MOV EAX,EBX                         ; 00411056
    ADD ESP,0x1c                        ; 00411058
    POP EDI                             ; 0041105b
    POP EBX                             ; 0041105c
    RET                                 ; 0041105d

