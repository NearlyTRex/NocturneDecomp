; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_simbox_cpp_CSimBox_getBoundingBox_FUN_00516fc0(CSimBox *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516fc0
        ;   Label: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00516fc0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516fc1
    MOV EAX,dword ptr [ESP + 0x8]       ; 00516fc5
    ADD EAX,0x150                       ; 00516fc9
    PUSH EAX                            ; 00516fce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00516fcf
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 00516fd4
    MOV EDX,dword ptr [EAX]             ; 00516fda
    LEA ECX,[EAX + 0x4]                 ; 00516fdc
    MOV dword ptr [EBX],EDX             ; 00516fdf
    LEA EDX,[EBX + 0x4]                 ; 00516fe1
    MOV ECX,dword ptr [ECX]             ; 00516fe4
    MOV dword ptr [EDX],ECX             ; 00516fe6
    LEA ECX,[EAX + 0x8]                 ; 00516fe8
    MOV ECX,dword ptr [ECX]             ; 00516feb
    MOV dword ptr [EDX + 0x4],ECX       ; 00516fed
    MOV ECX,dword ptr [EAX + 0xc]       ; 00516ff0
    ADD EAX,0xc                         ; 00516ff3
    MOV dword ptr [EDX + 0x8],ECX       ; 00516ff6
    LEA ECX,[EAX + 0x4]                 ; 00516ff9
    MOV ECX,dword ptr [ECX]             ; 00516ffc
    MOV dword ptr [EDX + 0xc],ECX       ; 00516ffe
    MOV EAX,dword ptr [EAX + 0x8]       ; 00517001
    ADD ESP,0x4                         ; 00517004
    MOV dword ptr [EDX + 0x10],EAX      ; 00517007
    MOV EAX,EBX                         ; 0051700a
    POP EBX                             ; 0051700c
    RET                                 ; 0051700d

