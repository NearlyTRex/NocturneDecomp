; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005add80(CWeapon *this_ptr,CVector3f *out_point)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005add80
        ;   Label: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_005add80
    PUSH EDI                            ; 005add81
    SUB ESP,0x24                        ; 005add82
    MOV EBX,ESI                         ; 005add85
    MOV EAX,dword ptr [ESP + 0x30]      ; 005add87
    ADD EAX,0x158                       ; 005add8b
    PUSH EAX                            ; 005add90
    LEA EDI,[ESP + 0x4]                 ; 005add91
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005add95
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005add9a
    LEA ESI,[EAX + 0x338]               ; 005add9f
    ADD ESP,0x4                         ; 005adda5
    MOVSD.REP ES:EDI,ESI                ; 005adda8
    XOR EDX,EDX                         ; 005addaa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005addac
    LEA ESI,[ESP + 0x18]                ; 005addb0
    MOV EDI,EBX                         ; 005addb4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005addb6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005addba
    MOV dword ptr [ESP + 0x18],EDX      ; 005addbe
    MOV dword ptr [ESP + 0x20],EAX      ; 005addc2
    MOVSD ES:EDI,ESI                    ; 005addc6
    MOVSD ES:EDI,ESI                    ; 005addc7
    MOVSD ES:EDI,ESI                    ; 005addc8
    MOV EAX,EBX                         ; 005addc9
    ADD ESP,0x24                        ; 005addcb
    POP EDI                             ; 005addce
    POP EBX                             ; 005addcf
    RET                                 ; 005addd0

