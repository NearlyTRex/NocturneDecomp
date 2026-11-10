; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_0041fb30(CBoxActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fb30
        ;   Label: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_0041fb30
    PUSH EDI                            ; 0041fb31
    SUB ESP,0x1c                        ; 0041fb32
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041fb35
    MOV EBX,ESI                         ; 0041fb39
    FLD float ptr [EAX + 0x310]         ; 0041fb3b
    ADD EAX,0x158                       ; 0041fb41
    CALL crt_math.c_round_FUN_005a3120  ; 0041fb46
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 0041fb4b
    FISTP dword ptr [ESP + 0x1c]        ; 0041fb4c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0041fb50
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041fb55
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041fb58
    MOV ESI,EAX                         ; 0041fb5c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041fb5e
    MOV EDI,ESP                         ; 0041fb65
    SUB EAX,EDX                         ; 0041fb67
    MOV ESI,dword ptr [ESI + 0x350]     ; 0041fb69
    SHL EAX,0x3                         ; 0041fb6f
    MOV ECX,0x6                         ; 0041fb72
    ADD ESI,EAX                         ; 0041fb77
    MOVSD.REP ES:EDI,ESI                ; 0041fb79
    MOV ECX,0x6                         ; 0041fb7b
    MOV ESI,ESP                         ; 0041fb80
    MOV EDI,EBX                         ; 0041fb82
    MOVSD.REP ES:EDI,ESI                ; 0041fb84
    MOV EAX,EBX                         ; 0041fb86
    ADD ESP,0x1c                        ; 0041fb88
    POP EDI                             ; 0041fb8b
    POP EBX                             ; 0041fb8c
    RET                                 ; 0041fb8d

