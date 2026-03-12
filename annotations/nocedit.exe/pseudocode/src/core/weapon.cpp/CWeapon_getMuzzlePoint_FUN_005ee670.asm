; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670(CWeapon *this_ptr,CVector3f *out_point)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee670
        ;   Label: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_005ee670
    SUB ESP,0x18                        ; 005ee671
    MOV EBX,dword ptr [ESP + 0x24]      ; 005ee674
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ee678
    ADD EAX,0x158                       ; 005ee67c
    PUSH EAX                            ; 005ee681
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005ee682
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x5678]              ; 005ee687
    ADD ESP,0x4                         ; 005ee68d
    MOV EAX,dword ptr [EDX]             ; 005ee690
    MOV dword ptr [ESP],EAX             ; 005ee692
    LEA EAX,[EDX + 0x4]                 ; 005ee695
    MOV EAX,dword ptr [EAX]             ; 005ee698
    MOV dword ptr [ESP + 0x4],EAX       ; 005ee69a
    LEA EAX,[EDX + 0x8]                 ; 005ee69e
    MOV EAX,dword ptr [EAX]             ; 005ee6a1
    MOV dword ptr [ESP + 0x8],EAX       ; 005ee6a3
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ee6a7
    ADD EDX,0xc                         ; 005ee6aa
    MOV dword ptr [ESP + 0xc],EAX       ; 005ee6ad
    LEA EAX,[EDX + 0x4]                 ; 005ee6b1
    MOV EAX,dword ptr [EAX]             ; 005ee6b4
    MOV dword ptr [ESP + 0x10],EAX      ; 005ee6b6
    LEA EAX,[EDX + 0x8]                 ; 005ee6ba
    MOV EAX,dword ptr [EAX]             ; 005ee6bd
    MOV dword ptr [ESP + 0x14],EAX      ; 005ee6bf
    MOV dword ptr [EBX],0x0             ; 005ee6c3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ee6c9
    MOV dword ptr [EBX + 0x4],EAX       ; 005ee6cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ee6d0
    MOV dword ptr [EBX + 0x8],EAX       ; 005ee6d4
    MOV EAX,EBX                         ; 005ee6d7
    ADD ESP,0x18                        ; 005ee6d9
    POP EBX                             ; 005ee6dc
    RET                                 ; 005ee6dd

