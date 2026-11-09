; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a1110(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d59d4
;   undefined4 DAT_005d59d8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1110
        ;   Label: core_flashlit.cpp_FUN_004a1110
    PUSH EDI                            ; 004a1111
    SUB ESP,0x22d8                      ; 004a1112
    MOV EBX,ESI                         ; 004a1118
    MOV EAX,ESP                         ; 004a111a
    PUSH EAX                            ; 004a111c
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 004a111d
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a1122
    MOV EAX,dword ptr [ESP + 0x22e4]    ; 004a1125
    ADD EAX,0x2b4                       ; 004a112c
    PUSH EAX                            ; 004a1131
    LEA EDI,[ESP + 0x22b8]              ; 004a1132
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004a1139
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004a113e
    LEA ESI,[EAX + 0x338]               ; 004a1143
    ADD ESP,0x4                         ; 004a1149
    MOVSD.REP ES:EDI,ESI                ; 004a114c
    FLD float ptr [ESP + 0x22c0]        ; 004a114e
    FMUL float ptr [0x005d59d4]         ; 004a1155 | DAT_005d59d4
    PUSH 0x0                            ; 004a115b
    FLD float ptr [ESP + 0x22c8]        ; 004a115d
    MOV EAX,dword ptr [ESP + 0x22cc]    ; 004a1164
    LEA ESI,[ESP + 0x22d0]              ; 004a116b
    MOV EDI,EBX                         ; 004a1172
    MOV dword ptr [ESP + 0x22d8],EAX    ; 004a1174
    FADD double ptr [0x005d59d8]        ; 004a117b | DAT_005d59d8
    LEA EAX,[ESP + 0x4]                 ; 004a1181
    FXCH                                ; 004a1185
    FSTP float ptr [ESP + 0x22d0]       ; 004a1187
    PUSH EAX                            ; 004a118e
    FSTP float ptr [ESP + 0x22d8]       ; 004a118f
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004a1196
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a119b
    MOVSD ES:EDI,ESI                    ; 004a119e
    MOVSD ES:EDI,ESI                    ; 004a119f
    MOVSD ES:EDI,ESI                    ; 004a11a0
    MOV EAX,EBX                         ; 004a11a1
    ADD ESP,0x22d8                      ; 004a11a3
    POP EDI                             ; 004a11a9
    POP EBX                             ; 004a11aa
    RET                                 ; 004a11ab

