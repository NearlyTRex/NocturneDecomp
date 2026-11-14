; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBindEvil * __cdecl core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(CBindEvil *this_ptr)
;
; Parameters:
; CBindEvil *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bindevil.cpp_factoryFuncBindEvil_FUN_0040f750 at 0040f763
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f780
        ;   Label: core_bindevil.cpp_CBindEvil_ctor_FUN_0040f780
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040f781
    PUSH EDX                            ; 0040f785
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 0040f786
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0040f78b
    PUSH 0x5b6321                       ; 0040f78e
    MOV EBX,EAX                         ; 0040f793
    ADD EAX,0x158                       ; 0040f795
    PUSH EAX                            ; 0040f79a
    MOV dword ptr [EAX + -0x4],0x5db9d4 ; 0040f79b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0040f7a2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0040f7a7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0040f7b1
    MOV dword ptr [EBX + 0x2e0],0x3     ; 0040f7bb
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0040f7c5
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 0040f7cf
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0040f7d9
    MOV dword ptr [EBX + 0x56c],0xa     ; 0040f7e3
    MOV dword ptr [EBX + 0x58c],0x14    ; 0040f7ed
    LEA EAX,[EBX + 0x594]               ; 0040f7f7
    MOV dword ptr [EBX + 0x574],0x4     ; 0040f7fd
    MOV dword ptr [EAX + 0x8],0x0       ; 0040f807
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040f80e
    MOV dword ptr [EAX + 0x4],EDX       ; 0040f811
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040f814
    MOV dword ptr [EAX],EDX             ; 0040f817
    MOV dword ptr [EBX + 0x590],0x1     ; 0040f819
    ADD ESP,0x8                         ; 0040f823
    MOV dword ptr [EBX + 0x578],0x2     ; 0040f826
    MOV EAX,EBX                         ; 0040f830
    MOV dword ptr [EBX + 0x57c],0x0     ; 0040f832
    POP EBX                             ; 0040f83c
    RET                                 ; 0040f83d

