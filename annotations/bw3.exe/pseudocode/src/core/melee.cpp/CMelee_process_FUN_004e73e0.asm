; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_process_FUN_004e73e0(CMelee *this_ptr,float delta_time)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005c7162
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e73e0
        ;   Label: core_melee.cpp_CMelee_process_FUN_004e73e0
    SUB ESP,0x38                        ; 004e73e1
    MOV EBX,dword ptr [ESP + 0x40]      ; 004e73e4
    PUSH dword ptr [ESP + 0x44]         ; 004e73e8
    PUSH EBX                            ; 004e73ec
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 004e73ed
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x5ac]     ; 004e73f2
    ADD ESP,0x8                         ; 004e73f8
    TEST EDX,EDX                        ; 004e73fb
    JLE 0x004e7418                      ; 004e73fd
        ;   XREF to: 004e7418 (CONDITIONAL_JUMP)  ; LAB_004e7418
    FLD float ptr [EBX + 0x5b0]         ; 004e73ff
    FSUB float ptr [ESP + 0x44]         ; 004e7405
    FST float ptr [EBX + 0x5b0]         ; 004e7409
    FLDZ                                ; 004e740f
    FCOMPP                              ; 004e7411
    FNSTSW AX                           ; 004e7413
    SAHF                                ; 004e7415
    JNC 0x004e741d                      ; 004e7416
        ;   XREF to: 004e741d (CONDITIONAL_JUMP)  ; LAB_004e741d
    ADD ESP,0x38                        ; 004e7418
        ;   Label: LAB_004e7418
    POP EBX                             ; 004e741b
    RET                                 ; 004e741c
    PUSH EDI                            ; 004e741d
        ;   Label: LAB_004e741d
    PUSH ESI                            ; 004e741e
    FLD float ptr [EBX + 0x5b4]         ; 004e741f
    FLD ST0                             ; 004e7425
    FMUL double ptr [0x005c7162]        ; 004e7427 | DAT_005c7162
    LEA ESI,[ESP + 0x8]                 ; 004e742d
    LEA EDI,[ESP + 0x20]                ; 004e7431
    MOV ECX,dword ptr [EBX + 0x5ac]     ; 004e7435
    PUSH EBX                            ; 004e743b
    DEC ECX                             ; 004e743c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e743d
    MOV dword ptr [EBX + 0x5ac],ECX     ; 004e7443
    FSTP ST1                            ; 004e7449
    FST float ptr [EBX + 0x5b4]         ; 004e744b
    FSTP float ptr [EBX + 0x5b0]        ; 004e7451
    CALL dword ptr [EAX + 0xe0]         ; 004e7457
    LEA ESI,[ESP + 0xc]                 ; 004e745d
    ADD ESP,0x4                         ; 004e7461
    MOVSD ES:EDI,ESI                    ; 004e7464
    MOVSD ES:EDI,ESI                    ; 004e7465
    MOVSD ES:EDI,ESI                    ; 004e7466
    LEA ESI,[ESP + 0x20]                ; 004e7467
    PUSH ESI                            ; 004e746b
    PUSH EBX                            ; 004e746c
    LEA ESI,[ESP + 0x34]                ; 004e746d
    LEA EDI,[ESP + 0x1c]                ; 004e7471
    CALL core_actor.cpp_FUN_00408b80    ; 004e7475
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x34]                ; 004e747a
    ADD ESP,0x8                         ; 004e747e
    MOVSD ES:EDI,ESI                    ; 004e7481
    MOVSD ES:EDI,ESI                    ; 004e7482
    MOVSD ES:EDI,ESI                    ; 004e7483
    MOV ESI,dword ptr [EBX + 0x5a8]     ; 004e7484
    PUSH ESI                            ; 004e748a
    PUSH 0x2cfd900                      ; 004e748b
    LEA EAX,[ESP + 0x1c]                ; 004e7490
    PUSH EAX                            ; 004e7494
    MOV EDI,dword ptr [0x005fed24]      ; 004e7495 | g_CGorePtr
    PUSH EDI                            ; 004e749b
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 004e749c
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004e74a1
    POP ESI                             ; 004e74a4
    POP EDI                             ; 004e74a5
    ADD ESP,0x38                        ; 004e74a6
    POP EBX                             ; 004e74a9
    RET                                 ; 004e74aa

