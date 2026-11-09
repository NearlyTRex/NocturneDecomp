; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBurncross * core_burncrss_cpp_CBurncross_ctor_FUN_00424430(CBurncross *this_ptr)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_burncrss.cpp_factoryFuncBurncross_FUN_00424400 at 00424413
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424430
        ;   Label: core_burncrss.cpp_CBurncross_ctor_FUN_00424430
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424431
    PUSH EBX                            ; 00424435
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 00424436
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0042443b
    PUSH 0x5dbca0                       ; 0042443e
    PUSH 0x8                            ; 00424443
    ADD EAX,0x5a8                       ; 00424445
    PUSH EAX                            ; 0042444a
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0042444b
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00424450
    LEA EBX,[EAX + 0xfffffa58]          ; 00424453
    PUSH 0x5b78d9                       ; 00424459
    LEA EAX,[EBX + 0x158]               ; 0042445e
    PUSH EAX                            ; 00424464
    MOV dword ptr [EBX + 0x154],0x5dcdb4 ; 00424465
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0042446f
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00424474
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0042447e
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00424488
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 00424492
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0042449c
    MOV dword ptr [EBX + 0x56c],0xa     ; 004244a6
    MOV dword ptr [EBX + 0x58c],0x1     ; 004244b0
    MOV dword ptr [EBX + 0x574],0x2     ; 004244ba
    MOV dword ptr [EBX + 0x5a4],0x0     ; 004244c4
    MOV dword ptr [EBX + 0x59c],0x0     ; 004244ce
    MOV dword ptr [EBX + 0x5a0],0x0     ; 004244d8
    ADD ESP,0x8                         ; 004244e2
    MOV dword ptr [EBX + 0x594],0x0     ; 004244e5
    MOV EAX,EBX                         ; 004244ef
    MOV dword ptr [EBX + 0x598],0x0     ; 004244f1
    LEA EDX,[EBX + 0x1520]              ; 004244fb
    ADD EAX,0x2a4                       ; 00424501
        ;   Label: LAB_00424501
    MOV dword ptr [EAX + 0x45c],0x3f000000 ; 00424506
    MOV dword ptr [EAX + 0x460],0x3f800000 ; 00424510
    MOV dword ptr [EAX + 0x464],0x3f000000 ; 0042451a
    MOV dword ptr [EAX + 0x4ac],0x0     ; 00424524
    MOV dword ptr [EAX + 0x4b0],0x0     ; 0042452e
    CMP EAX,EDX                         ; 00424538
    JNZ 0x00424501                      ; 0042453a
        ;   XREF to: 00424501 (CONDITIONAL_JUMP)  ; LAB_00424501
    MOV EAX,EBX                         ; 0042453c
    MOV dword ptr [EBX + 0x1ac8],0x0    ; 0042453e
    POP EBX                             ; 00424548
    RET                                 ; 00424549

