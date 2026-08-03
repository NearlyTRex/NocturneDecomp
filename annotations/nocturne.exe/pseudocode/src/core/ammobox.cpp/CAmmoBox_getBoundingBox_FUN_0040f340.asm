; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_0040f340(CAmmoBox *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f340
        ;   Label: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040f340
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040f341
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040f345
    ADD EAX,0x150                       ; 0040f349
    PUSH EAX                            ; 0040f34e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0040f34f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0040f354
    MOV EDX,dword ptr [EAX]             ; 0040f35a
    LEA ECX,[EAX + 0x4]                 ; 0040f35c
    MOV dword ptr [EBX],EDX             ; 0040f35f
    LEA EDX,[EBX + 0x4]                 ; 0040f361
    MOV ECX,dword ptr [ECX]             ; 0040f364
    MOV dword ptr [EDX],ECX             ; 0040f366
    LEA ECX,[EAX + 0x8]                 ; 0040f368
    MOV ECX,dword ptr [ECX]             ; 0040f36b
    MOV dword ptr [EDX + 0x4],ECX       ; 0040f36d
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040f370
    ADD EAX,0xc                         ; 0040f373
    MOV dword ptr [EDX + 0x8],ECX       ; 0040f376
    LEA ECX,[EAX + 0x4]                 ; 0040f379
    MOV ECX,dword ptr [ECX]             ; 0040f37c
    MOV dword ptr [EDX + 0xc],ECX       ; 0040f37e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040f381
    ADD ESP,0x4                         ; 0040f384
    MOV dword ptr [EDX + 0x10],EAX      ; 0040f387
    MOV EAX,EBX                         ; 0040f38a
    POP EBX                             ; 0040f38c
    RET                                 ; 0040f38d

