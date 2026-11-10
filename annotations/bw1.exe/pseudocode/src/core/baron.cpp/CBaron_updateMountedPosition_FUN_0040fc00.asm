; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron *this_ptr,float delta_time)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f79c
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_baron.cpp_CBaron_detachFromOwner_FUN_0040fbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fc00
        ;   Label: core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00
    PUSH ESI                            ; 0040fc01
    PUSH EDI                            ; 0040fc02
    PUSH EBP                            ; 0040fc03
    MOV EBP,ESP                         ; 0040fc04
    SUB ESP,0x40                        ; 0040fc06
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040fc09
    MOV EDX,dword ptr [EBX + 0x20084]   ; 0040fc0c
    TEST EDX,EDX                        ; 0040fc12
    JNZ 0x0040fc1d                      ; 0040fc14
        ;   XREF to: 0040fc1d (CONDITIONAL_JUMP)  ; LAB_0040fc1d
    MOV ESP,EBP                         ; 0040fc16
        ;   Label: LAB_0040fc16
    POP EBP                             ; 0040fc18
    POP EDI                             ; 0040fc19
    POP ESI                             ; 0040fc1a
    POP EBX                             ; 0040fc1b
    RET                                 ; 0040fc1c
    MOV EDI,0xc0000000                  ; 0040fc1d
        ;   Label: LAB_0040fc1d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040fc22
    XOR ECX,ECX                         ; 0040fc28
    MOV dword ptr [EBP + -0x4],EAX      ; 0040fc2a
    MOV dword ptr [EBP + -0x28],ECX     ; 0040fc2d
    LEA EAX,[EDX + 0x30]                ; 0040fc30
    MOV dword ptr [EBP + -0x24],ECX     ; 0040fc33
    PUSH EAX                            ; 0040fc36
    LEA EAX,[EBP + -0x28]               ; 0040fc37
    MOV dword ptr [EBP + -0x20],EDI     ; 0040fc3a
    PUSH EAX                            ; 0040fc3d
    MOV EAX,dword ptr [EBX + 0x20084]   ; 0040fc3e
    PUSH EAX                            ; 0040fc44
    LEA ESI,[EBP + -0x34]               ; 0040fc45
    LEA EDI,[EBP + -0x1c]               ; 0040fc48
    CALL core_actor.cpp_FUN_00408ac0    ; 0040fc4b
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + -0x34]               ; 0040fc50
    MOVSD ES:EDI,ESI                    ; 0040fc53
    MOVSD ES:EDI,ESI                    ; 0040fc54
    MOVSD ES:EDI,ESI                    ; 0040fc55
    ADD ESP,0x8                         ; 0040fc56
    MOV EAX,dword ptr [EBX + 0x20084]   ; 0040fc59
    LEA EDI,[EBP + -0x10]               ; 0040fc5f
    LEA ESI,[EBP + -0x40]               ; 0040fc62
    FLD float ptr [EAX + 0x24]          ; 0040fc65
    FLD float ptr [EAX + 0x28]          ; 0040fc68
    FLD float ptr [EAX + 0x20]          ; 0040fc6b
    LEA EAX,[EBP + -0x10]               ; 0040fc6e
    FADD float ptr [EBP + -0x1c]        ; 0040fc71
    FXCH ST2                            ; 0040fc74
    FADD float ptr [EBP + -0x18]        ; 0040fc76
    FXCH                                ; 0040fc79
    FADD float ptr [EBP + -0x14]        ; 0040fc7b
    FXCH ST2                            ; 0040fc7e
    FSTP float ptr [EBP + -0x40]        ; 0040fc80
    FSTP float ptr [EBP + -0x3c]        ; 0040fc83
    PUSH EAX                            ; 0040fc86
    FSTP float ptr [EBP + -0x38]        ; 0040fc87
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040fc8a
    PUSH EBX                            ; 0040fc8d
    MOVSD ES:EDI,ESI                    ; 0040fc8e
    MOVSD ES:EDI,ESI                    ; 0040fc8f
    MOVSD ES:EDI,ESI                    ; 0040fc90
    CALL dword ptr [EAX + 0x68]         ; 0040fc91
    ADD ESP,0xc                         ; 0040fc94
    MOV EDX,dword ptr [0x007c637c]      ; 0040fc97 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0040fc9d
    MOV ECX,dword ptr [EBX + 0x20084]   ; 0040fc9e
    PUSH ECX                            ; 0040fca4
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040fca5
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0040fcaa
    TEST EAX,EAX                        ; 0040fcad
    JZ 0x0040fc16                       ; 0040fcaf
        ;   XREF to: 0040fc16 (CONDITIONAL_JUMP)  ; LAB_0040fc16
    PUSH EAX                            ; 0040fcb5
    MOV ESI,dword ptr [EAX + 0x154]     ; 0040fcb6
    CALL dword ptr [ESI + 0x10c]        ; 0040fcbc
    ADD ESP,0x4                         ; 0040fcc2
    CMP EAX,0x2                         ; 0040fcc5
    JNZ 0x0040fc16                      ; 0040fcc8
        ;   XREF to: 0040fc16 (CONDITIONAL_JUMP)  ; LAB_0040fc16
    MOV ESI,dword ptr [EBX + 0x20084]   ; 0040fcce
    PUSH ESI                            ; 0040fcd4
    PUSH EBX                            ; 0040fcd5
    CALL core_baron.cpp_CBaron_detachFromOwner_FUN_0040fbc0 ; 0040fcd6
        ;   XREF to: 0040fbc0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_detachFromOwner_FUN_0040fbc0(CBaron * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0040fcdb
    MOV ESP,EBP                         ; 0040fcde
    POP EBP                             ; 0040fce0
    POP EDI                             ; 0040fce1
    POP ESI                             ; 0040fce2
    POP EBX                             ; 0040fce3
    RET                                 ; 0040fce4

