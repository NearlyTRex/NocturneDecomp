; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_vessel_cpp_CCryptVessel_getBoundingBox_FUN_00585c90(CCryptVessel *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585c90
        ;   Label: core_vessel.cpp_CCryptVessel_getBoundingBox_FUN_00585c90
    PUSH EDI                            ; 00585c91
    SUB ESP,0x18                        ; 00585c92
    MOV EBX,ESI                         ; 00585c95
    MOV EAX,dword ptr [ESP + 0x24]      ; 00585c97
    ADD EAX,0x2b4                       ; 00585c9b
    PUSH EAX                            ; 00585ca0
    LEA EDI,[ESP + 0x4]                 ; 00585ca1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00585ca5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00585caa
    MOV ESI,dword ptr [EAX + 0x350]     ; 00585caf
    ADD ESP,0x4                         ; 00585cb5
    MOVSD.REP ES:EDI,ESI                ; 00585cb8
    MOV ECX,0x6                         ; 00585cba
    MOV ESI,ESP                         ; 00585cbf
    MOV EDI,EBX                         ; 00585cc1
    MOVSD.REP ES:EDI,ESI                ; 00585cc3
    MOV EAX,EBX                         ; 00585cc5
    ADD ESP,0x18                        ; 00585cc7
    POP EDI                             ; 00585cca
    POP EBX                             ; 00585ccb
    RET                                 ; 00585ccc

