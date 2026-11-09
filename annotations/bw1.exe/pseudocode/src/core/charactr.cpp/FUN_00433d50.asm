; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433d50(CDemonActor *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[6]:
;   core_charactr.cpp_FUN_0042e160 at 0042e18d
;   core_doc.cpp_FUN_004693e0 at 0046952a
;   core_doc.cpp_FUN_00469550 at 0046a890
;   core_stranger.cpp_FUN_00585b00 at 00586be6
;   core_tentacle.cpp_FUN_00595d40 at 00595eb7
;   core_thehand.cpp_FUN_00599a10 at 00599b87
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433d50
        ;   Label: core_charactr.cpp_FUN_00433d50
    PUSH ESI                            ; 00433d51
    PUSH EDI                            ; 00433d52
    PUSH EBP                            ; 00433d53
    SUB ESP,0x60                        ; 00433d54
    MOV EBX,dword ptr [ESP + 0x74]      ; 00433d57
    MOV EBP,dword ptr [ESP + 0x78]      ; 00433d5b
    LEA EAX,[EBX + 0x249c]              ; 00433d5f
    PUSH EAX                            ; 00433d65
    PUSH EBX                            ; 00433d66
    LEA ESI,[ESP + 0x5c]                ; 00433d67
    LEA EDI,[ESP + 0x20]                ; 00433d6b
    CALL core_actor.cpp_FUN_00408ac0    ; 00433d6f
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00433d74
    LEA EAX,[EBX + 0x250c]              ; 00433d77
    LEA ESI,[ESP + 0x54]                ; 00433d7d
    PUSH EAX                            ; 00433d81
    MOVSD ES:EDI,ESI                    ; 00433d82
    MOVSD ES:EDI,ESI                    ; 00433d83
    MOVSD ES:EDI,ESI                    ; 00433d84
    PUSH EBX                            ; 00433d85
    LEA ESI,[ESP + 0x38]                ; 00433d86
    LEA EDI,[ESP + 0x2c]                ; 00433d8a
    CALL core_actor.cpp_FUN_00408ac0    ; 00433d8e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x38]                ; 00433d93
    ADD ESP,0x8                         ; 00433d97
    LEA EAX,[EBX + 0x30]                ; 00433d9a
    MOVSD ES:EDI,ESI                    ; 00433d9d
    MOVSD ES:EDI,ESI                    ; 00433d9e
    MOVSD ES:EDI,ESI                    ; 00433d9f
    CMP EAX,EBP                         ; 00433da0
    JZ 0x00433db5                       ; 00433da2
        ;   XREF to: 00433db5 (CONDITIONAL_JUMP)  ; LAB_00433db5
    MOV EDX,dword ptr [EBP]             ; 00433da4
    MOV dword ptr [EAX],EDX             ; 00433da7
    MOV EDX,dword ptr [EBP + 0x4]       ; 00433da9
    MOV dword ptr [EAX + 0x4],EDX       ; 00433dac
    MOV EDX,dword ptr [EBP + 0x8]       ; 00433daf
    MOV dword ptr [EAX + 0x8],EDX       ; 00433db2
    PUSH EBX                            ; 00433db5
        ;   Label: LAB_00433db5
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00433db6
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00433dbb
    LEA EAX,[ESP + 0x18]                ; 00433dbe
    PUSH EAX                            ; 00433dc2
    PUSH EBX                            ; 00433dc3
    LEA ESI,[ESP + 0x8]                 ; 00433dc4
    LEA EDI,[ESP + 0x14]                ; 00433dc8
    CALL core_actor.cpp_FUN_00408b00    ; 00433dcc
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x8]                 ; 00433dd1
    LEA EAX,[ESP + 0x14]                ; 00433dd5
    ADD ESP,0x8                         ; 00433dd9
    LEA EDX,[EBX + 0x249c]              ; 00433ddc
    MOVSD ES:EDI,ESI                    ; 00433de2
    MOVSD ES:EDI,ESI                    ; 00433de3
    MOVSD ES:EDI,ESI                    ; 00433de4
    CMP EDX,EAX                         ; 00433de5
    JZ 0x00433dfd                       ; 00433de7
        ;   XREF to: 00433dfd (CONDITIONAL_JUMP)  ; LAB_00433dfd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00433de9
    MOV dword ptr [EDX],EAX             ; 00433ded
    MOV EAX,dword ptr [ESP + 0x10]      ; 00433def
    MOV dword ptr [EDX + 0x4],EAX       ; 00433df3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00433df6
    MOV dword ptr [EDX + 0x8],EAX       ; 00433dfa
    LEA EAX,[ESP + 0x24]                ; 00433dfd
        ;   Label: LAB_00433dfd
    PUSH EAX                            ; 00433e01
    PUSH EBX                            ; 00433e02
    LEA ESI,[ESP + 0x50]                ; 00433e03
    LEA EDI,[ESP + 0x44]                ; 00433e07
    CALL core_actor.cpp_FUN_00408b00    ; 00433e0b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x50]                ; 00433e10
    LEA EAX,[ESP + 0x44]                ; 00433e14
    ADD ESP,0x8                         ; 00433e18
    ADD EBX,0x250c                      ; 00433e1b
    MOVSD ES:EDI,ESI                    ; 00433e21
    MOVSD ES:EDI,ESI                    ; 00433e22
    MOVSD ES:EDI,ESI                    ; 00433e23
    CMP EBX,EAX                         ; 00433e24
    JNZ 0x00433e30                      ; 00433e26
        ;   XREF to: 00433e30 (CONDITIONAL_JUMP)  ; LAB_00433e30
    ADD ESP,0x60                        ; 00433e28
    POP EBP                             ; 00433e2b
    POP EDI                             ; 00433e2c
    POP ESI                             ; 00433e2d
    POP EBX                             ; 00433e2e
    RET                                 ; 00433e2f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00433e30
        ;   Label: LAB_00433e30
    MOV dword ptr [EBX],EAX             ; 00433e34
    MOV EAX,dword ptr [ESP + 0x40]      ; 00433e36
    MOV dword ptr [EBX + 0x4],EAX       ; 00433e3a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00433e3d
    MOV dword ptr [EBX + 0x8],EAX       ; 00433e41
    ADD ESP,0x60                        ; 00433e44
    POP EBP                             ; 00433e47
    POP EDI                             ; 00433e48
    POP ESI                             ; 00433e49
    POP EBX                             ; 00433e4a
    RET                                 ; 00433e4b

