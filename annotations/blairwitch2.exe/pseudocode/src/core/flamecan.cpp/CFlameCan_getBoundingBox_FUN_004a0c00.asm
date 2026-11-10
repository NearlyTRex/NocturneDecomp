; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_flamecan_cpp_CFlameCan_getBoundingBox_FUN_004a0c00(CFlameCan *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0c00
        ;   Label: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_004a0c00
    PUSH EDI                            ; 004a0c01
    SUB ESP,0x18                        ; 004a0c02
    MOV EBX,ESI                         ; 004a0c05
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a0c07
    ADD EAX,0x2b4                       ; 004a0c0b
    PUSH EAX                            ; 004a0c10
    LEA EDI,[ESP + 0x4]                 ; 004a0c11
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004a0c15
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004a0c1a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004a0c1f
    ADD ESP,0x4                         ; 004a0c25
    MOVSD.REP ES:EDI,ESI                ; 004a0c28
    MOV ECX,0x6                         ; 004a0c2a
    MOV ESI,ESP                         ; 004a0c2f
    MOV EDI,EBX                         ; 004a0c31
    MOVSD.REP ES:EDI,ESI                ; 004a0c33
    MOV EAX,EBX                         ; 004a0c35
    ADD ESP,0x18                        ; 004a0c37
    POP EDI                             ; 004a0c3a
    POP EBX                             ; 004a0c3b
    RET                                 ; 004a0c3c

