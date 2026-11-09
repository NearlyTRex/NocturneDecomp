; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flamegun_cpp_FUN_004b9660(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006005c0
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9660
        ;   Label: core_flamegun.cpp_FUN_004b9660
    SUB ESP,0x30                        ; 004b9661
    MOV EBX,dword ptr [ESP + 0x38]      ; 004b9664
    CMP dword ptr [EBX + 0x568],0x0     ; 004b9668
    JG 0x004b9678                       ; 004b966f
        ;   XREF to: 004b9678 (CONDITIONAL_JUMP)  ; LAB_004b9678
    XOR EAX,EAX                         ; 004b9671
    ADD ESP,0x30                        ; 004b9673
    POP EBX                             ; 004b9676
    RET                                 ; 004b9677
    PUSH EDI                            ; 004b9678
        ;   Label: LAB_004b9678
    PUSH ESI                            ; 004b9679
    PUSH EBX                            ; 004b967a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b967b
    LEA ESI,[ESP + 0x30]                ; 004b9681
    LEA EDI,[ESP + 0x24]                ; 004b9685
    CALL dword ptr [EAX + 0xe0]         ; 004b9689
    ADD ESP,0x4                         ; 004b968f
    LEA EAX,[ESP + 0x20]                ; 004b9692
    LEA ESI,[ESP + 0x2c]                ; 004b9696
    PUSH EAX                            ; 004b969a
    MOVSD ES:EDI,ESI                    ; 004b969b
    MOVSD ES:EDI,ESI                    ; 004b969c
    MOVSD ES:EDI,ESI                    ; 004b969d
    PUSH EBX                            ; 004b969e
    LEA ESI,[ESP + 0x10]                ; 004b969f
    CALL core_actor.cpp_FUN_00408b40    ; 004b96a3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004b96a8
    PUSH 0x1                            ; 004b96ab
    PUSH 0x3                            ; 004b96ad
    LEA EAX,[EBX + 0x30]                ; 004b96af
    PUSH EAX                            ; 004b96b2
    LEA EAX,[ESP + 0x20]                ; 004b96b3
    LEA EDI,[ESP + 0x20]                ; 004b96b7
    PUSH EAX                            ; 004b96bb
    MOV ECX,dword ptr [0x0061c010]      ; 004b96bc | DAT_0061c010
    LEA ESI,[ESP + 0x18]                ; 004b96c2
    PUSH ECX                            ; 004b96c6
    MOVSD ES:EDI,ESI                    ; 004b96c7
    MOVSD ES:EDI,ESI                    ; 004b96c8
    MOVSD ES:EDI,ESI                    ; 004b96c9
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80 ; 004b96ca
        ;   XREF to: 004b6f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ESI,dword ptr [EBX + 0x580]     ; 004b96cf
    ADD ESP,0x14                        ; 004b96d5
    TEST ESI,ESI                        ; 004b96d8
    JNZ 0x004b96f2                      ; 004b96da
        ;   XREF to: 004b96f2 (CONDITIONAL_JUMP)  ; LAB_004b96f2
    FLD float ptr [0x006005c0]          ; 004b96dc | DAT_006005c0
    FLD1                                ; 004b96e2
    FDIVRP                              ; 004b96e4
    DEC dword ptr [EBX + 0x568]         ; 004b96e6
    FSTP float ptr [EBX + 0x584]        ; 004b96ec
    MOV EAX,0x1                         ; 004b96f2
        ;   Label: LAB_004b96f2
    MOV dword ptr [EBX + 0x578],0x1     ; 004b96f7
    POP ESI                             ; 004b9701
    POP EDI                             ; 004b9702
    ADD ESP,0x30                        ; 004b9703
    POP EBX                             ; 004b9706
    RET                                 ; 004b9707

