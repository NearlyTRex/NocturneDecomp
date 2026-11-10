; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_0057b120(CWeapon *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b120
        ;   Label: core_weapon.cpp_CWeapon_getBoundingBox_FUN_0057b120
    PUSH EDI                            ; 0057b121
    SUB ESP,0x18                        ; 0057b122
    MOV EBX,ESI                         ; 0057b125
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057b127
    ADD EAX,0x158                       ; 0057b12b
    PUSH EAX                            ; 0057b130
    LEA EDI,[ESP + 0x4]                 ; 0057b131
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0057b135
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0057b13a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0057b13f
    ADD ESP,0x4                         ; 0057b145
    MOVSD.REP ES:EDI,ESI                ; 0057b148
    MOV ECX,0x6                         ; 0057b14a
    MOV ESI,ESP                         ; 0057b14f
    MOV EDI,EBX                         ; 0057b151
    MOVSD.REP ES:EDI,ESI                ; 0057b153
    MOV EAX,EBX                         ; 0057b155
    ADD ESP,0x18                        ; 0057b157
    POP EDI                             ; 0057b15a
    POP EBX                             ; 0057b15b
    RET                                 ; 0057b15c

