; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_FUN_0040f290(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f290
        ;   Label: core_bat.cpp_FUN_0040f290
    PUSH EDI                            ; 0040f291
    SUB ESP,0x1c                        ; 0040f292
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040f295
    MOV EBX,ESI                         ; 0040f299
    FLD float ptr [EAX + 0x184]         ; 0040f29b
    ADD EAX,0x188                       ; 0040f2a1
    CALL crt_math.c_round_FUN_005a3120  ; 0040f2a6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 0040f2ab
    FISTP dword ptr [ESP + 0x1c]        ; 0040f2ac
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040f2b0
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f2b5
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040f2b8
    MOV ESI,EAX                         ; 0040f2bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040f2be
    MOV EDI,ESP                         ; 0040f2c5
    SUB EAX,EDX                         ; 0040f2c7
    MOV ESI,dword ptr [ESI + 0x350]     ; 0040f2c9
    SHL EAX,0x3                         ; 0040f2cf
    MOV ECX,0x6                         ; 0040f2d2
    ADD ESI,EAX                         ; 0040f2d7
    MOVSD.REP ES:EDI,ESI                ; 0040f2d9
    MOV ECX,0x6                         ; 0040f2db
    MOV ESI,ESP                         ; 0040f2e0
    MOV EDI,EBX                         ; 0040f2e2
    MOVSD.REP ES:EDI,ESI                ; 0040f2e4
    MOV EAX,EBX                         ; 0040f2e6
    ADD ESP,0x1c                        ; 0040f2e8
    POP EDI                             ; 0040f2eb
    POP EBX                             ; 0040f2ec
    RET                                 ; 0040f2ed

