; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_00554590(CWeapon *this_ptr,CVector3f *out_point)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554590
        ;   Label: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_00554590
    SUB ESP,0x18                        ; 00554591
    MOV EBX,dword ptr [ESP + 0x24]      ; 00554594
    MOV EAX,dword ptr [ESP + 0x20]      ; 00554598
    ADD EAX,0x150                       ; 0055459c
    PUSH EAX                            ; 005545a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 005545a2
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x338]               ; 005545a7
    ADD ESP,0x4                         ; 005545ad
    MOV EAX,dword ptr [EDX]             ; 005545b0
    MOV dword ptr [ESP],EAX             ; 005545b2
    LEA EAX,[EDX + 0x4]                 ; 005545b5
    MOV EAX,dword ptr [EAX]             ; 005545b8
    MOV dword ptr [ESP + 0x4],EAX       ; 005545ba
    LEA EAX,[EDX + 0x8]                 ; 005545be
    MOV EAX,dword ptr [EAX]             ; 005545c1
    MOV dword ptr [ESP + 0x8],EAX       ; 005545c3
    MOV EAX,dword ptr [EDX + 0xc]       ; 005545c7
    ADD EDX,0xc                         ; 005545ca
    MOV dword ptr [ESP + 0xc],EAX       ; 005545cd
    LEA EAX,[EDX + 0x4]                 ; 005545d1
    MOV EAX,dword ptr [EAX]             ; 005545d4
    MOV dword ptr [ESP + 0x10],EAX      ; 005545d6
    LEA EAX,[EDX + 0x8]                 ; 005545da
    MOV EAX,dword ptr [EAX]             ; 005545dd
    MOV dword ptr [ESP + 0x14],EAX      ; 005545df
    MOV dword ptr [EBX],0x0             ; 005545e3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005545e9
    MOV dword ptr [EBX + 0x4],EAX       ; 005545ed
    MOV EAX,dword ptr [ESP + 0x14]      ; 005545f0
    MOV dword ptr [EBX + 0x8],EAX       ; 005545f4
    MOV EAX,EBX                         ; 005545f7
    ADD ESP,0x18                        ; 005545f9
    POP EBX                             ; 005545fc
    RET                                 ; 005545fd

