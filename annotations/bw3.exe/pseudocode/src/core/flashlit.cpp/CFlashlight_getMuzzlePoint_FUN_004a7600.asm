; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_flashlit_cpp_CFlashlight_getMuzzlePoint_FUN_004a7600(CFlashlight *this_ptr,CVector3f *out_point)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_005c0d03
;   undefined4 DAT_005c0d07
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7600
        ;   Label: core_flashlit.cpp_CFlashlight_getMuzzlePoint_FUN_004a7600
    PUSH EDI                            ; 004a7601
    SUB ESP,0x23c8                      ; 004a7602
    MOV EBX,ESI                         ; 004a7608
    MOV EAX,ESP                         ; 004a760a
    PUSH EAX                            ; 004a760c
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 004a760d
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a7612
    MOV EAX,dword ptr [ESP + 0x23d4]    ; 004a7615
    ADD EAX,0x158                       ; 004a761c
    PUSH EAX                            ; 004a7621
    LEA EDI,[ESP + 0x23a8]              ; 004a7622
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004a7629
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004a762e
    LEA ESI,[EAX + 0x338]               ; 004a7633
    ADD ESP,0x4                         ; 004a7639
    MOVSD.REP ES:EDI,ESI                ; 004a763c
    FLD float ptr [ESP + 0x23b0]        ; 004a763e
    FMUL float ptr [0x005c0d03]         ; 004a7645 | DAT_005c0d03
    PUSH 0x0                            ; 004a764b
    FLD float ptr [ESP + 0x23b8]        ; 004a764d
    MOV EAX,dword ptr [ESP + 0x23bc]    ; 004a7654
    LEA ESI,[ESP + 0x23c0]              ; 004a765b
    MOV EDI,EBX                         ; 004a7662
    MOV dword ptr [ESP + 0x23c8],EAX    ; 004a7664
    FADD double ptr [0x005c0d07]        ; 004a766b | DAT_005c0d07
    LEA EAX,[ESP + 0x4]                 ; 004a7671
    FXCH                                ; 004a7675
    FSTP float ptr [ESP + 0x23c0]       ; 004a7677
    PUSH EAX                            ; 004a767e
    FSTP float ptr [ESP + 0x23c8]       ; 004a767f
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004a7686
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a768b
    MOVSD ES:EDI,ESI                    ; 004a768e
    MOVSD ES:EDI,ESI                    ; 004a768f
    MOVSD ES:EDI,ESI                    ; 004a7690
    MOV EAX,EBX                         ; 004a7691
    ADD ESP,0x23c8                      ; 004a7693
    POP EDI                             ; 004a7699
    POP EBX                             ; 004a769a
    RET                                 ; 004a769b

