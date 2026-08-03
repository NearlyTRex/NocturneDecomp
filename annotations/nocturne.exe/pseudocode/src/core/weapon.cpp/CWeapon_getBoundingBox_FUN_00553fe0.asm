; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_weapon_cpp_CWeapon_getBoundingBox_FUN_00553fe0(CWeapon *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553fe0
        ;   Label: core_weapon.cpp_CWeapon_getBoundingBox_FUN_00553fe0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00553fe1
    MOV EAX,dword ptr [ESP + 0x8]       ; 00553fe5
    ADD EAX,0x150                       ; 00553fe9
    PUSH EAX                            ; 00553fee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00553fef
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 00553ff4
    MOV EDX,dword ptr [EAX]             ; 00553ffa
    LEA ECX,[EAX + 0x4]                 ; 00553ffc
    MOV dword ptr [EBX],EDX             ; 00553fff
    LEA EDX,[EBX + 0x4]                 ; 00554001
    MOV ECX,dword ptr [ECX]             ; 00554004
    MOV dword ptr [EDX],ECX             ; 00554006
    LEA ECX,[EAX + 0x8]                 ; 00554008
    MOV ECX,dword ptr [ECX]             ; 0055400b
    MOV dword ptr [EDX + 0x4],ECX       ; 0055400d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00554010
    ADD EAX,0xc                         ; 00554013
    MOV dword ptr [EDX + 0x8],ECX       ; 00554016
    LEA ECX,[EAX + 0x4]                 ; 00554019
    MOV ECX,dword ptr [ECX]             ; 0055401c
    MOV dword ptr [EDX + 0xc],ECX       ; 0055401e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00554021
    ADD ESP,0x4                         ; 00554024
    MOV dword ptr [EDX + 0x10],EAX      ; 00554027
    MOV EAX,EBX                         ; 0055402a
    POP EBX                             ; 0055402c
    RET                                 ; 0055402d

