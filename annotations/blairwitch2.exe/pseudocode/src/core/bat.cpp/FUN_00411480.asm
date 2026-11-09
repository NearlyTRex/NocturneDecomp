; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_FUN_00411480(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411480
        ;   Label: core_bat.cpp_FUN_00411480
    PUSH EDI                            ; 00411481
    SUB ESP,0x1c                        ; 00411482
    MOV EAX,dword ptr [ESP + 0x28]      ; 00411485
    MOV EBX,ESI                         ; 00411489
    FLD float ptr [EAX + 0x2e0]         ; 0041148b
    ADD EAX,0x2e4                       ; 00411491
    CALL crt_math.c_round_FUN_005b7ff0  ; 00411496
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 0041149b
    FISTP dword ptr [ESP + 0x1c]        ; 0041149c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004114a0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004114a5
    MOV EDX,dword ptr [ESP + 0x18]      ; 004114a8
    MOV ESI,EAX                         ; 004114ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004114ae
    MOV EDI,ESP                         ; 004114b5
    SUB EAX,EDX                         ; 004114b7
    MOV ESI,dword ptr [ESI + 0x350]     ; 004114b9
    SHL EAX,0x3                         ; 004114bf
    MOV ECX,0x6                         ; 004114c2
    ADD ESI,EAX                         ; 004114c7
    MOVSD.REP ES:EDI,ESI                ; 004114c9
    MOV ECX,0x6                         ; 004114cb
    MOV ESI,ESP                         ; 004114d0
    MOV EDI,EBX                         ; 004114d2
    MOVSD.REP ES:EDI,ESI                ; 004114d4
    MOV EAX,EBX                         ; 004114d6
    ADD ESP,0x1c                        ; 004114d8
    POP EDI                             ; 004114db
    POP EBX                             ; 004114dc
    RET                                 ; 004114dd

