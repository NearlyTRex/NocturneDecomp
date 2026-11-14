; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_flashlit_cpp_CFlashlight_getMuzzlePoint_FUN_004b99c0(CFlashlight *this_ptr,CVector3f *out_point)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_005df816
;   undefined4 DAT_005df81a
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b99c0
        ;   Label: core_flashlit.cpp_CFlashlight_getMuzzlePoint_FUN_004b99c0
    PUSH EDI                            ; 004b99c1
    SUB ESP,0x23c8                      ; 004b99c2
    MOV EBX,ESI                         ; 004b99c8
    MOV EAX,ESP                         ; 004b99ca
    PUSH EAX                            ; 004b99cc
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 004b99cd
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b99d2
    MOV EAX,dword ptr [ESP + 0x23d4]    ; 004b99d5
    ADD EAX,0x158                       ; 004b99dc
    PUSH EAX                            ; 004b99e1
    LEA EDI,[ESP + 0x23a8]              ; 004b99e2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004b99e9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004b99ee
    LEA ESI,[EAX + 0x338]               ; 004b99f3
    ADD ESP,0x4                         ; 004b99f9
    MOVSD.REP ES:EDI,ESI                ; 004b99fc
    FLD float ptr [ESP + 0x23b0]        ; 004b99fe
    FMUL float ptr [0x005df816]         ; 004b9a05 | DAT_005df816
    PUSH 0x0                            ; 004b9a0b
    FLD float ptr [ESP + 0x23b8]        ; 004b9a0d
    MOV EAX,dword ptr [ESP + 0x23bc]    ; 004b9a14
    LEA ESI,[ESP + 0x23c0]              ; 004b9a1b
    MOV EDI,EBX                         ; 004b9a22
    MOV dword ptr [ESP + 0x23c8],EAX    ; 004b9a24
    FADD double ptr [0x005df81a]        ; 004b9a2b | DAT_005df81a
    LEA EAX,[ESP + 0x4]                 ; 004b9a31
    FXCH                                ; 004b9a35
    FSTP float ptr [ESP + 0x23c0]       ; 004b9a37
    PUSH EAX                            ; 004b9a3e
    FSTP float ptr [ESP + 0x23c8]       ; 004b9a3f
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004b9a46
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a4b
    MOVSD ES:EDI,ESI                    ; 004b9a4e
    MOVSD ES:EDI,ESI                    ; 004b9a4f
    MOVSD ES:EDI,ESI                    ; 004b9a50
    MOV EAX,EBX                         ; 004b9a51
    ADD ESP,0x23c8                      ; 004b9a53
    POP EDI                             ; 004b9a59
    POP EBX                             ; 004b9a5a
    RET                                 ; 004b9a5b

