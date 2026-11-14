; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_00589c40(CWeapon *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589c40
        ;   Label: core_weapon.cpp_CWeapon_getBoundingBox_FUN_00589c40
    PUSH EDI                            ; 00589c41
    SUB ESP,0x18                        ; 00589c42
    MOV EBX,ESI                         ; 00589c45
    MOV EAX,dword ptr [ESP + 0x24]      ; 00589c47
    ADD EAX,0x2b4                       ; 00589c4b
    PUSH EAX                            ; 00589c50
    LEA EDI,[ESP + 0x4]                 ; 00589c51
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00589c55
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00589c5a
    MOV ESI,dword ptr [EAX + 0x350]     ; 00589c5f
    ADD ESP,0x4                         ; 00589c65
    MOVSD.REP ES:EDI,ESI                ; 00589c68
    MOV ECX,0x6                         ; 00589c6a
    MOV ESI,ESP                         ; 00589c6f
    MOV EDI,EBX                         ; 00589c71
    MOVSD.REP ES:EDI,ESI                ; 00589c73
    MOV EAX,EBX                         ; 00589c75
    ADD ESP,0x18                        ; 00589c77
    POP EDI                             ; 00589c7a
    POP EBX                             ; 00589c7b
    RET                                 ; 00589c7c

