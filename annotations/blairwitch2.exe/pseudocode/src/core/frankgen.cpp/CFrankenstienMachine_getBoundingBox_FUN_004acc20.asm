; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004acc20(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acc20
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_004acc20
    PUSH EDI                            ; 004acc21
    SUB ESP,0x1c                        ; 004acc22
    MOV EAX,dword ptr [ESP + 0x28]      ; 004acc25
    MOV EBX,ESI                         ; 004acc29
    FLD float ptr [EAX + 0x2dc]         ; 004acc2b
    ADD EAX,0x2e0                       ; 004acc31
    CALL crt_math.c_round_FUN_005b7ff0  ; 004acc36
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 004acc3b
    FISTP dword ptr [ESP + 0x1c]        ; 004acc3c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004acc40
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004acc45
    MOV EDX,dword ptr [ESP + 0x18]      ; 004acc48
    MOV ESI,EAX                         ; 004acc4c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004acc4e
    MOV EDI,ESP                         ; 004acc55
    SUB EAX,EDX                         ; 004acc57
    MOV ESI,dword ptr [ESI + 0x350]     ; 004acc59
    SHL EAX,0x3                         ; 004acc5f
    MOV ECX,0x6                         ; 004acc62
    ADD ESI,EAX                         ; 004acc67
    MOVSD.REP ES:EDI,ESI                ; 004acc69
    MOV ECX,0x6                         ; 004acc6b
    MOV ESI,ESP                         ; 004acc70
    MOV EDI,EBX                         ; 004acc72
    MOVSD.REP ES:EDI,ESI                ; 004acc74
    MOV EAX,EBX                         ; 004acc76
    ADD ESP,0x1c                        ; 004acc78
    POP EDI                             ; 004acc7b
    POP EBX                             ; 004acc7c
    RET                                 ; 004acc7d

