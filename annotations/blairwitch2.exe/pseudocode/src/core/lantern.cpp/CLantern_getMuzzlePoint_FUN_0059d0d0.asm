; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_lantern_cpp_CLantern_getMuzzlePoint_FUN_0059d0d0(CLantern *this_ptr,CVector3f *out_point)
;
; Parameters:
; CLantern *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_005ef7e1
;   undefined4 DAT_005ef7e9
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d0d0
        ;   Label: core_lantern.cpp_CLantern_getMuzzlePoint_FUN_0059d0d0
    PUSH EDI                            ; 0059d0d1
    SUB ESP,0x22d8                      ; 0059d0d2
    MOV EBX,ESI                         ; 0059d0d8
    MOV EAX,ESP                         ; 0059d0da
    PUSH EAX                            ; 0059d0dc
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 0059d0dd
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d0e2
    MOV EAX,dword ptr [ESP + 0x22e4]    ; 0059d0e5
    ADD EAX,0x2b4                       ; 0059d0ec
    PUSH EAX                            ; 0059d0f1
    LEA EDI,[ESP + 0x22b8]              ; 0059d0f2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0059d0f9
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0059d0fe
    LEA ESI,[EAX + 0x338]               ; 0059d103
    ADD ESP,0x4                         ; 0059d109
    MOVSD.REP ES:EDI,ESI                ; 0059d10c
    FLD float ptr [ESP + 0x22c0]        ; 0059d10e
    FMUL float ptr [0x005ef7e1]         ; 0059d115 | DAT_005ef7e1
    PUSH 0x0                            ; 0059d11b
    FLD float ptr [ESP + 0x22c8]        ; 0059d11d
    MOV EAX,dword ptr [ESP + 0x22cc]    ; 0059d124
    LEA ESI,[ESP + 0x22d0]              ; 0059d12b
    MOV EDI,EBX                         ; 0059d132
    MOV dword ptr [ESP + 0x22d8],EAX    ; 0059d134
    FADD double ptr [0x005ef7e9]        ; 0059d13b | DAT_005ef7e9
    LEA EAX,[ESP + 0x4]                 ; 0059d141
    FXCH                                ; 0059d145
    FSTP float ptr [ESP + 0x22d0]       ; 0059d147
    PUSH EAX                            ; 0059d14e
    FSTP float ptr [ESP + 0x22d8]       ; 0059d14f
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0059d156
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059d15b
    MOVSD ES:EDI,ESI                    ; 0059d15e
    MOVSD ES:EDI,ESI                    ; 0059d15f
    MOVSD ES:EDI,ESI                    ; 0059d160
    MOV EAX,EBX                         ; 0059d161
    ADD ESP,0x22d8                      ; 0059d163
    POP EDI                             ; 0059d169
    POP EBX                             ; 0059d16a
    RET                                 ; 0059d16b

