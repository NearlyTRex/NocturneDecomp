; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_dynamitestick.kfm_0057e4d0
;   undefined1* PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_0059c924 = 00553f10
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ebd0
        ;   Label: core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046ebd1
    PUSH EDX                            ; 0046ebd5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 0046ebd6
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_ctor_FUN_00553d90()
    ADD ESP,0x4                         ; 0046ebdb
    PUSH 0x57e4d0                       ; 0046ebde | = "dynamitestick.kfm"
    MOV EBX,EAX                         ; 0046ebe3
    ADD EAX,0x150                       ; 0046ebe5
    PUSH EAX                            ; 0046ebea
    MOV dword ptr [EAX + -0x4],0x59c924 ; 0046ebeb | PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_0059c924
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0046ebf2
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    LEA EAX,[EBX + 0x574]               ; 0046ebf7
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 0046ebfd
    MOV dword ptr [EAX + 0x8],0x0       ; 0046ec07
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046ec0e
    MOV dword ptr [EAX + 0x4],EDX       ; 0046ec11
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046ec14
    MOV dword ptr [EAX],EDX             ; 0046ec17
    MOV dword ptr [EBX + 0x570],0xbf800000 ; 0046ec19
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0046ec23
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0046ec2d
    MOV dword ptr [EBX + 0x2d8],0x3     ; 0046ec37
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0046ec41
    MOV dword ptr [EBX + 0x2e0],0x43480000 ; 0046ec4b
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0046ec55
    ADD ESP,0x8                         ; 0046ec5f
    MOV dword ptr [EBX + 0x2e8],0x0     ; 0046ec62
    MOV EAX,EBX                         ; 0046ec6c
    MOV dword ptr [EBX + 0x580],0x0     ; 0046ec6e
    POP EBX                             ; 0046ec78
    RET                                 ; 0046ec79

