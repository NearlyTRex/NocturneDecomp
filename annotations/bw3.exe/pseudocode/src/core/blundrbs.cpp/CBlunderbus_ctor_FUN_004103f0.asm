; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBlunderbus * core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(CBlunderbus *this_ptr)
;
; Parameters:
; CBlunderbus *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_blundrbs.cpp_factoryFuncBlunderbus_FUN_004103c0 at 004103d3
;
; Referenced Globals:
;   undefined4 DAT_005dbcdc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004103f0
        ;   Label: core_blundrbs.cpp_CBlunderbus_ctor_FUN_004103f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004103f1
    PUSH EDX                            ; 004103f5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004103f6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004103fb
    PUSH 0x5b6466                       ; 004103fe
    MOV EBX,EAX                         ; 00410403
    ADD EAX,0x158                       ; 00410405
    PUSH EAX                            ; 0041040a
    MOV dword ptr [EAX + -0x4],0x5dbce4 ; 0041040b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00410412
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x594],0x41200000 ; 00410417
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00410421
    MOV dword ptr [EBX + 0x2dc],0x2     ; 0041042b
    MOV dword ptr [EBX + 0x2e0],0x1     ; 00410435
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0041043f
    MOV dword ptr [EBX + 0x2e8],0x41700000 ; 00410449
    MOV dword ptr [EBX + 0x58c],0x5     ; 00410453
    MOV dword ptr [EBX + 0x574],0x0     ; 0041045d
    FLD float ptr [0x005dbcdc]          ; 00410467 | DAT_005dbcdc
    MOV dword ptr [EBX + 0x56c],0xb     ; 0041046d
    ADD ESP,0x8                         ; 00410477
    MOV dword ptr [EBX + 0x578],0x2     ; 0041047a
    MOV EAX,EBX                         ; 00410484
    FSTP float ptr [EBX + 0x564]        ; 00410486
    POP EBX                             ; 0041048c
    RET                                 ; 0041048d

