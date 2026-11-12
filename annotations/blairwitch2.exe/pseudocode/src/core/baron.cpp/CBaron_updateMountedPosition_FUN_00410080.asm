; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(CBaron *this_ptr,float delta_time)
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
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fc1c
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_baron.cpp_CBaron_detachFromOwner_FUN_00410040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410080
        ;   Label: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410080
    PUSH ESI                            ; 00410081
    PUSH EDI                            ; 00410082
    PUSH EBP                            ; 00410083
    MOV EBP,ESP                         ; 00410084
    SUB ESP,0x40                        ; 00410086
    MOV EBX,dword ptr [EBP + 0x14]      ; 00410089
    MOV EDX,dword ptr [EBX + 0x25718]   ; 0041008c
    TEST EDX,EDX                        ; 00410092
    JNZ 0x0041009d                      ; 00410094
        ;   XREF to: 0041009d (CONDITIONAL_JUMP)  ; LAB_0041009d
    MOV ESP,EBP                         ; 00410096
        ;   Label: LAB_00410096
    POP EBP                             ; 00410098
    POP EDI                             ; 00410099
    POP ESI                             ; 0041009a
    POP EBX                             ; 0041009b
    RET                                 ; 0041009c
    MOV EDI,0xc0000000                  ; 0041009d
        ;   Label: LAB_0041009d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004100a2
    XOR ECX,ECX                         ; 004100a8
    MOV dword ptr [EBP + -0x4],EAX      ; 004100aa
    MOV dword ptr [EBP + -0x28],ECX     ; 004100ad
    LEA EAX,[EDX + 0x30]                ; 004100b0
    MOV dword ptr [EBP + -0x24],ECX     ; 004100b3
    PUSH EAX                            ; 004100b6
    LEA EAX,[EBP + -0x28]               ; 004100b7
    MOV dword ptr [EBP + -0x20],EDI     ; 004100ba
    PUSH EAX                            ; 004100bd
    MOV EAX,dword ptr [EBX + 0x25718]   ; 004100be
    PUSH EAX                            ; 004100c4
    LEA ESI,[EBP + -0x34]               ; 004100c5
    LEA EDI,[EBP + -0x1c]               ; 004100c8
    CALL core_actor.cpp_FUN_00408cf0    ; 004100cb
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + -0x34]               ; 004100d0
    MOVSD ES:EDI,ESI                    ; 004100d3
    MOVSD ES:EDI,ESI                    ; 004100d4
    MOVSD ES:EDI,ESI                    ; 004100d5
    ADD ESP,0x8                         ; 004100d6
    MOV EAX,dword ptr [EBX + 0x25718]   ; 004100d9
    LEA EDI,[EBP + -0x10]               ; 004100df
    LEA ESI,[EBP + -0x40]               ; 004100e2
    FLD float ptr [EAX + 0x24]          ; 004100e5
    FLD float ptr [EAX + 0x28]          ; 004100e8
    FLD float ptr [EAX + 0x20]          ; 004100eb
    LEA EAX,[EBP + -0x10]               ; 004100ee
    FADD float ptr [EBP + -0x1c]        ; 004100f1
    FXCH ST2                            ; 004100f4
    FADD float ptr [EBP + -0x18]        ; 004100f6
    FXCH                                ; 004100f9
    FADD float ptr [EBP + -0x14]        ; 004100fb
    FXCH ST2                            ; 004100fe
    FSTP float ptr [EBP + -0x40]        ; 00410100
    FSTP float ptr [EBP + -0x3c]        ; 00410103
    PUSH EAX                            ; 00410106
    FSTP float ptr [EBP + -0x38]        ; 00410107
    MOV EAX,dword ptr [EBP + -0x4]      ; 0041010a
    PUSH EBX                            ; 0041010d
    MOVSD ES:EDI,ESI                    ; 0041010e
    MOVSD ES:EDI,ESI                    ; 0041010f
    MOVSD ES:EDI,ESI                    ; 00410110
    CALL dword ptr [EAX + 0x70]         ; 00410111
    ADD ESP,0xc                         ; 00410114
    MOV EDX,dword ptr [0x007bdc94]      ; 00410117 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0041011d
    MOV ECX,dword ptr [EBX + 0x25718]   ; 0041011e
    PUSH ECX                            ; 00410124
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00410125
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0041012a
    TEST EAX,EAX                        ; 0041012d
    JZ 0x00410096                       ; 0041012f
        ;   XREF to: 00410096 (CONDITIONAL_JUMP)  ; LAB_00410096
    PUSH EAX                            ; 00410135
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00410136
    CALL dword ptr [ESI + 0x114]        ; 0041013c
    ADD ESP,0x4                         ; 00410142
    CMP EAX,0x2                         ; 00410145
    JNZ 0x00410096                      ; 00410148
        ;   XREF to: 00410096 (CONDITIONAL_JUMP)  ; LAB_00410096
    MOV ESI,dword ptr [EBX + 0x25718]   ; 0041014e
    PUSH ESI                            ; 00410154
    PUSH EBX                            ; 00410155
    CALL core_baron.cpp_CBaron_detachFromOwner_FUN_00410040 ; 00410156
        ;   XREF to: 00410040 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_detachFromOwner_FUN_00410040(CBaron * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0041015b
    MOV ESP,EBP                         ; 0041015e
    POP EBP                             ; 00410160
    POP EDI                             ; 00410161
    POP ESI                             ; 00410162
    POP EBX                             ; 00410163
    RET                                 ; 00410164

