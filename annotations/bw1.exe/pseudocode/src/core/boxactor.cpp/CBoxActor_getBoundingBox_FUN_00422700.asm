; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00422700(CBoxActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422700
        ;   Label: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_00422700
    PUSH EDI                            ; 00422701
    SUB ESP,0x1c                        ; 00422702
    MOV EAX,dword ptr [ESP + 0x28]      ; 00422705
    MOV EBX,ESI                         ; 00422709
    FLD float ptr [EAX + 0x310]         ; 0042270b
    ADD EAX,0x158                       ; 00422711
    CALL crt_math.c_round_FUN_005c03a0  ; 00422716
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 0042271b
    FISTP dword ptr [ESP + 0x1c]        ; 0042271c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00422720
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00422725
    MOV EDX,dword ptr [ESP + 0x18]      ; 00422728
    MOV ESI,EAX                         ; 0042272c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042272e
    MOV EDI,ESP                         ; 00422735
    SUB EAX,EDX                         ; 00422737
    MOV ESI,dword ptr [ESI + 0x350]     ; 00422739
    SHL EAX,0x3                         ; 0042273f
    MOV ECX,0x6                         ; 00422742
    ADD ESI,EAX                         ; 00422747
    MOVSD.REP ES:EDI,ESI                ; 00422749
    MOV ECX,0x6                         ; 0042274b
    MOV ESI,ESP                         ; 00422750
    MOV EDI,EBX                         ; 00422752
    MOVSD.REP ES:EDI,ESI                ; 00422754
    MOV EAX,EBX                         ; 00422756
    ADD ESP,0x1c                        ; 00422758
    POP EDI                             ; 0042275b
    POP EBX                             ; 0042275c
    RET                                 ; 0042275d

