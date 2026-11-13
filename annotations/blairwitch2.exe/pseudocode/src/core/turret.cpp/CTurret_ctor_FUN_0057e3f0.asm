; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_0057e3f0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_turret.cpp_factoryFuncTurret_FUN_0057e3c0 at 0057e3d3
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e3f0
        ;   Label: core_turret.cpp_CTurret_ctor_FUN_0057e3f0
    PUSH ESI                            ; 0057e3f1
    PUSH EDI                            ; 0057e3f2
    SUB ESP,0x24                        ; 0057e3f3
    MOV EBX,dword ptr [ESP + 0x34]      ; 0057e3f6
    PUSH EBX                            ; 0057e3fa
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 0057e3fb
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0057e400
    ADD EAX,0x6e0                       ; 0057e403
    PUSH EAX                            ; 0057e408
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0057e409
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057e40e
    LEA EBX,[EAX + 0xfffff920]          ; 0057e411
    PUSH 0x5ed654                       ; 0057e417
    LEA EAX,[EBX + 0x2b4]               ; 0057e41c
    PUSH EAX                            ; 0057e422
    MOV dword ptr [EBX + 0x2b0],0x5fd544 ; 0057e423
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0057e42d
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0057e432
    PUSH 0x5ed665                       ; 0057e435
    LEA EAX,[EBX + 0x6e0]               ; 0057e43a
    PUSH EAX                            ; 0057e440
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0057e441
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x85c],0x0     ; 0057e446
    MOV byte ptr [EBX + 0x860],0x0      ; 0057e450
    MOV dword ptr [EBX + 0x8c4],0x40400000 ; 0057e457
    MOV dword ptr [EBX + 0x8c8],0x40c00000 ; 0057e461
    MOV dword ptr [EBX + 0x8cc],0x40400000 ; 0057e46b
    MOV dword ptr [EBX + 0x8d0],0x3e4ccccd ; 0057e475
    MOV dword ptr [EBX + 0x8d4],0x41f00000 ; 0057e47f
    MOV ESI,0x5ed678                    ; 0057e489
    MOV dword ptr [EBX + 0x8d8],0x0     ; 0057e48e
    ADD ESP,0x8                         ; 0057e498
    MOV dword ptr [EBX + 0x45c],0x0     ; 0057e49b
    LEA EDI,[EBX + 0x8e0]               ; 0057e4a5
    MOV dword ptr [EBX + 0x8dc],0x0     ; 0057e4ab
    PUSH EDI                            ; 0057e4b5
    MOV AL,byte ptr [ESI]               ; 0057e4b6
        ;   Label: LAB_0057e4b6
    MOV byte ptr [EDI],AL               ; 0057e4b8
    CMP AL,0x0                          ; 0057e4ba
    JZ 0x0057e4ce                       ; 0057e4bc
        ;   XREF to: 0057e4ce (CONDITIONAL_JUMP)  ; LAB_0057e4ce
    MOV AL,byte ptr [ESI + 0x1]         ; 0057e4be
    ADD ESI,0x2                         ; 0057e4c1
    MOV byte ptr [EDI + 0x1],AL         ; 0057e4c4
    ADD EDI,0x2                         ; 0057e4c7
    CMP AL,0x0                          ; 0057e4ca
    JNZ 0x0057e4b6                      ; 0057e4cc
        ;   XREF to: 0057e4b6 (CONDITIONAL_JUMP)  ; LAB_0057e4b6
    POP EDI                             ; 0057e4ce
        ;   Label: LAB_0057e4ce
    XOR EDX,EDX                         ; 0057e4cf
    MOV ESI,0x3f800000                  ; 0057e4d1
    LEA EAX,[ESP + 0x18]                ; 0057e4d6
    LEA EDI,[ESP + 0xc]                 ; 0057e4da
    PUSH EAX                            ; 0057e4de
    MOV dword ptr [ESP + 0x1c],EDX      ; 0057e4df
    MOV dword ptr [ESP + 0x24],ESI      ; 0057e4e3
    PUSH EBX                            ; 0057e4e7
    LEA ESI,[ESP + 0x8]                 ; 0057e4e8
    MOV dword ptr [ESP + 0x24],EDX      ; 0057e4ec
    CALL core_actor.cpp_FUN_00408d70    ; 0057e4f0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x8]                 ; 0057e4f5
    LEA EAX,[ESP + 0x14]                ; 0057e4f9
    ADD ESP,0x8                         ; 0057e4fd
    LEA EDX,[EBX + 0x9a8]               ; 0057e500
    MOVSD ES:EDI,ESI                    ; 0057e506
    MOVSD ES:EDI,ESI                    ; 0057e507
    MOVSD ES:EDI,ESI                    ; 0057e508
    CMP EDX,EAX                         ; 0057e509
    JNZ 0x0057e534                      ; 0057e50b
        ;   XREF to: 0057e534 (CONDITIONAL_JUMP)  ; LAB_0057e534
    MOV dword ptr [EBX + 0x9b8],0x0     ; 0057e50d
        ;   Label: LAB_0057e50d
    MOV dword ptr [EBX + 0x9c8],0x0     ; 0057e517
    MOV EAX,EBX                         ; 0057e521
    MOV dword ptr [EBX + 0x9b4],0x0     ; 0057e523
    ADD ESP,0x24                        ; 0057e52d
    POP EDI                             ; 0057e530
    POP ESI                             ; 0057e531
    POP EBX                             ; 0057e532
    RET                                 ; 0057e533
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057e534
        ;   Label: LAB_0057e534
    MOV dword ptr [EDX],EAX             ; 0057e538
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057e53a
    MOV dword ptr [EDX + 0x4],EAX       ; 0057e53e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057e541
    MOV dword ptr [EDX + 0x8],EAX       ; 0057e545
    JMP 0x0057e50d                      ; 0057e548
        ;   XREF to: 0057e50d (UNCONDITIONAL_JUMP)  ; LAB_0057e50d

