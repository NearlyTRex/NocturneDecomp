; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_0043a580(CCrossbow *this_ptr,float delta_time)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_flame.cpp_CFlame_hide_FUN_004a0200
;   core_flame.cpp_CFlame_process_FUN_0049f2e0
;   core_weapon.cpp_CWeapon_process_FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a580
        ;   Label: core_crossbow.cpp_CCrossbow_process_FUN_0043a580
    PUSH ESI                            ; 0043a581
    PUSH EDI                            ; 0043a582
    SUB ESP,0x30                        ; 0043a583
    MOV EBX,dword ptr [ESP + 0x40]      ; 0043a586
    PUSH dword ptr [ESP + 0x44]         ; 0043a58a
    PUSH EBX                            ; 0043a58e
    CALL core_weapon.cpp_CWeapon_process_FUN_00589c80 ; 0043a58f
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00589c80(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043a594
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043a597
    PUSH EBX                            ; 0043a59d
    LEA ESI,[ESP + 0x10]                ; 0043a59e
    LEA EDI,[ESP + 0x1c]                ; 0043a5a2
    CALL dword ptr [EAX + 0xe8]         ; 0043a5a6
    ADD ESP,0x4                         ; 0043a5ac
    LEA EAX,[ESP + 0x18]                ; 0043a5af
    LEA ESI,[ESP + 0xc]                 ; 0043a5b3
    PUSH EAX                            ; 0043a5b7
    MOVSD ES:EDI,ESI                    ; 0043a5b8
    MOVSD ES:EDI,ESI                    ; 0043a5b9
    MOVSD ES:EDI,ESI                    ; 0043a5ba
    PUSH EBX                            ; 0043a5bb
    LEA ESI,[ESP + 0x2c]                ; 0043a5bc
    LEA EDI,[ESP + 0x8]                 ; 0043a5c0
    CALL core_actor.cpp_FUN_00408d70    ; 0043a5c4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x2c]                ; 0043a5c9
    ADD ESP,0x8                         ; 0043a5cd
    MOVSD ES:EDI,ESI                    ; 0043a5d0
    MOVSD ES:EDI,ESI                    ; 0043a5d1
    MOVSD ES:EDI,ESI                    ; 0043a5d2
    LEA EDX,[EBX + 0x6f8]               ; 0043a5d3
    MOV EAX,dword ptr [ESP]             ; 0043a5d9
    MOV dword ptr [EDX],EAX             ; 0043a5dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a5de
    MOV dword ptr [EDX + 0x4],EAX       ; 0043a5e2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043a5e5
    MOV dword ptr [EDX + 0x8],EAX       ; 0043a5e9
    CMP dword ptr [EBX + 0x430],0x2     ; 0043a5ec
    JNZ 0x0043a646                      ; 0043a5f3
        ;   XREF to: 0043a646 (CONDITIONAL_JUMP)  ; LAB_0043a646
    CMP dword ptr [EBX + 0x6c4],0x0     ; 0043a5f5
    JLE 0x0043a646                      ; 0043a5fc
        ;   XREF to: 0043a646 (CONDITIONAL_JUMP)  ; LAB_0043a646
    CMP dword ptr [EBX + 0x6c8],0x5     ; 0043a5fe
    JNZ 0x0043a646                      ; 0043a605
        ;   XREF to: 0043a646 (CONDITIONAL_JUMP)  ; LAB_0043a646
    FLD float ptr [EBX + 0x45c]         ; 0043a607
    FLDZ                                ; 0043a60d
    FCOMPP                              ; 0043a60f
    FNSTSW AX                           ; 0043a611
    SAHF                                ; 0043a613
    JC 0x0043a646                       ; 0043a614
        ;   XREF to: 0043a646 (CONDITIONAL_JUMP)  ; LAB_0043a646
    MOV dword ptr [EBX + 0x6d4],0x1     ; 0043a616
    LEA EAX,[EBX + 0x6d8]               ; 0043a620
        ;   Label: LAB_0043a620
    PUSH dword ptr [ESP + 0x44]         ; 0043a626
    PUSH EAX                            ; 0043a62a
    CALL core_flame.cpp_CFlame_process_FUN_0049f2e0 ; 0043a62b
        ;   XREF to: 0049f2e0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0049f2e0(CFlame * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX + 0x6d4]     ; 0043a630
    ADD ESP,0x8                         ; 0043a636
    MOV dword ptr [EBX + 0xfc],EAX      ; 0043a639
    ADD ESP,0x30                        ; 0043a63f
    POP EDI                             ; 0043a642
    POP ESI                             ; 0043a643
    POP EBX                             ; 0043a644
    RET                                 ; 0043a645
    LEA EAX,[EBX + 0x6d8]               ; 0043a646
        ;   Label: LAB_0043a646
    PUSH EAX                            ; 0043a64c
    CALL core_flame.cpp_CFlame_hide_FUN_004a0200 ; 0043a64d
        ;   XREF to: 004a0200 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_hide_FUN_004a0200(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0043a652
    MOV dword ptr [EBX + 0x6d4],0x0     ; 0043a655
    JMP 0x0043a620                      ; 0043a65f
        ;   XREF to: 0043a620 (UNCONDITIONAL_JUMP)  ; LAB_0043a620

