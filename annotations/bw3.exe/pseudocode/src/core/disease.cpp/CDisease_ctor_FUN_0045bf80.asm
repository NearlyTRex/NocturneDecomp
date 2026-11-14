; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDisease * __cdecl core_disease_cpp_CDisease_ctor_FUN_0045bf80(CDisease *this_ptr)
;
; Parameters:
; CDisease *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_disease.cpp_factoryFuncDisease_FUN_0045bf50 at 0045bf63
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bf80
        ;   Label: core_disease.cpp_CDisease_ctor_FUN_0045bf80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045bf81
    PUSH EDX                            ; 0045bf85
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 0045bf86
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0045bf8b
    PUSH 0x5bb1a7                       ; 0045bf8e
    MOV EBX,EAX                         ; 0045bf93
    ADD EAX,0x158                       ; 0045bf95
    PUSH EAX                            ; 0045bf9a
    MOV dword ptr [EAX + -0x4],0x5de3d4 ; 0045bf9b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0045bfa2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0045bfa7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0045bfb1
    MOV dword ptr [EBX + 0x2e0],0x3     ; 0045bfbb
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0045bfc5
    MOV dword ptr [EBX + 0x2e8],0x42c80000 ; 0045bfcf
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0045bfd9
    MOV dword ptr [EBX + 0x56c],0xa     ; 0045bfe3
    MOV dword ptr [EBX + 0x58c],0x14    ; 0045bfed
    LEA EAX,[EBX + 0x598]               ; 0045bff7
    MOV dword ptr [EBX + 0x574],0x4     ; 0045bffd
    MOV dword ptr [EAX + 0x8],0x0       ; 0045c007
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045c00e
    MOV dword ptr [EAX + 0x4],EDX       ; 0045c011
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045c014
    MOV dword ptr [EAX],EDX             ; 0045c017
    MOV dword ptr [EBX + 0x590],0x1     ; 0045c019
    ADD ESP,0x8                         ; 0045c023
    MOV dword ptr [EBX + 0x578],0x2     ; 0045c026
    MOV EAX,EBX                         ; 0045c030
    MOV dword ptr [EBX + 0x57c],0x0     ; 0045c032
    POP EBX                             ; 0045c03c
    RET                                 ; 0045c03d

