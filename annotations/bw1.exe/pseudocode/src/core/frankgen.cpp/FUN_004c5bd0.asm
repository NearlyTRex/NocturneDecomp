; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_FUN_004c5bd0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5bd0
        ;   Label: core_frankgen.cpp_FUN_004c5bd0
    PUSH EDI                            ; 004c5bd1
    SUB ESP,0x1c                        ; 004c5bd2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c5bd5
    MOV EBX,ESI                         ; 004c5bd9
    FLD float ptr [EAX + 0x180]         ; 004c5bdb
    ADD EAX,0x184                       ; 004c5be1
    CALL crt_math.c_round_FUN_005c03a0  ; 004c5be6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 004c5beb
    FISTP dword ptr [ESP + 0x1c]        ; 004c5bec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004c5bf0
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c5bf5
    MOV EDX,dword ptr [ESP + 0x18]      ; 004c5bf8
    MOV ESI,EAX                         ; 004c5bfc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c5bfe
    MOV EDI,ESP                         ; 004c5c05
    SUB EAX,EDX                         ; 004c5c07
    MOV ESI,dword ptr [ESI + 0x350]     ; 004c5c09
    SHL EAX,0x3                         ; 004c5c0f
    MOV ECX,0x6                         ; 004c5c12
    ADD ESI,EAX                         ; 004c5c17
    MOVSD.REP ES:EDI,ESI                ; 004c5c19
    MOV ECX,0x6                         ; 004c5c1b
    MOV ESI,ESP                         ; 004c5c20
    MOV EDI,EBX                         ; 004c5c22
    MOVSD.REP ES:EDI,ESI                ; 004c5c24
    MOV EAX,EBX                         ; 004c5c26
    ADD ESP,0x1c                        ; 004c5c28
    POP EDI                             ; 004c5c2b
    POP EBX                             ; 004c5c2c
    RET                                 ; 004c5c2d

