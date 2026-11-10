; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ad730(CWeapon *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad730
        ;   Label: core_weapon.cpp_CWeapon_getBoundingBox_FUN_005ad730
    PUSH EDI                            ; 005ad731
    SUB ESP,0x18                        ; 005ad732
    MOV EBX,ESI                         ; 005ad735
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ad737
    ADD EAX,0x158                       ; 005ad73b
    PUSH EAX                            ; 005ad740
    LEA EDI,[ESP + 0x4]                 ; 005ad741
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005ad745
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005ad74a
    MOV ESI,dword ptr [EAX + 0x350]     ; 005ad74f
    ADD ESP,0x4                         ; 005ad755
    MOVSD.REP ES:EDI,ESI                ; 005ad758
    MOV ECX,0x6                         ; 005ad75a
    MOV ESI,ESP                         ; 005ad75f
    MOV EDI,EBX                         ; 005ad761
    MOVSD.REP ES:EDI,ESI                ; 005ad763
    MOV EAX,EBX                         ; 005ad765
    ADD ESP,0x18                        ; 005ad767
    POP EDI                             ; 005ad76a
    POP EBX                             ; 005ad76b
    RET                                 ; 005ad76c

