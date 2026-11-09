; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fef0(CBaron *this_ptr,CDemonActor *target)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00410a30 at 00410a99
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fef0
        ;   Label: core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0
    PUSH ESI                            ; 0040fef1
    PUSH EDI                            ; 0040fef2
    PUSH EBP                            ; 0040fef3
    SUB ESP,0x3c                        ; 0040fef4
    MOV EBX,dword ptr [ESP + 0x50]      ; 0040fef7
    MOV ESI,dword ptr [ESP + 0x54]      ; 0040fefb
    TEST ESI,ESI                        ; 0040feff
    JZ 0x0040ff11                       ; 0040ff01
        ;   XREF to: 0040ff11 (CONDITIONAL_JUMP)  ; LAB_0040ff11
    MOV EDX,dword ptr [EBX + 0x25718]   ; 0040ff03
    CMP ESI,EDX                         ; 0040ff09
    JZ 0x0040ff11                       ; 0040ff0b
        ;   XREF to: 0040ff11 (CONDITIONAL_JUMP)  ; LAB_0040ff11
    TEST EDX,EDX                        ; 0040ff0d
    JZ 0x0040ff19                       ; 0040ff0f
        ;   XREF to: 0040ff19 (CONDITIONAL_JUMP)  ; LAB_0040ff19
    ADD ESP,0x3c                        ; 0040ff11
        ;   Label: LAB_0040ff11
    POP EBP                             ; 0040ff14
    POP EDI                             ; 0040ff15
    POP ESI                             ; 0040ff16
    POP EBX                             ; 0040ff17
    RET                                 ; 0040ff18
    MOV EDI,dword ptr [0x007bdc94]      ; 0040ff19 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0040ff19
    PUSH EDI                            ; 0040ff1f
    PUSH ESI                            ; 0040ff20
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040ff21
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0040ff26
    TEST EAX,EAX                        ; 0040ff29
    JNZ 0x0041001f                      ; 0040ff2b
        ;   XREF to: 0041001f (CONDITIONAL_JUMP)  ; LAB_0041001f
    MOV EDX,0xc0000000                  ; 0040ff31
        ;   Label: LAB_0040ff31
    XOR EBP,EBP                         ; 0040ff36
    MOV dword ptr [EBX + 0x25718],ESI   ; 0040ff38
    MOV EAX,ESP                         ; 0040ff3e
    MOV dword ptr [ESP],EBP             ; 0040ff40
    MOV dword ptr [ESP + 0x4],EBP       ; 0040ff43
    MOV dword ptr [ESP + 0x8],EDX       ; 0040ff47
    PUSH EAX                            ; 0040ff4b
    MOV ECX,dword ptr [EBX + 0x25718]   ; 0040ff4c
    PUSH ECX                            ; 0040ff52
    LEA ESI,[ESP + 0x20]                ; 0040ff53
    LEA EDI,[ESP + 0x14]                ; 0040ff57
    CALL core_actor.cpp_FUN_00408cf0    ; 0040ff5b
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x20]                ; 0040ff60
    ADD ESP,0x8                         ; 0040ff64
    MOVSD ES:EDI,ESI                    ; 0040ff67
    MOVSD ES:EDI,ESI                    ; 0040ff68
    MOVSD ES:EDI,ESI                    ; 0040ff69
    MOV EAX,dword ptr [EBX + 0x25718]   ; 0040ff6a
    LEA EDI,[ESP + 0x24]                ; 0040ff70
    LEA ESI,[ESP + 0x30]                ; 0040ff74
    FLD float ptr [EAX + 0x20]          ; 0040ff78
    FLD float ptr [EAX + 0x24]          ; 0040ff7b
    FLD float ptr [EAX + 0x28]          ; 0040ff7e
    FXCH ST2                            ; 0040ff81
    FADD float ptr [ESP + 0xc]          ; 0040ff83
    FXCH                                ; 0040ff87
    FADD float ptr [ESP + 0x10]         ; 0040ff89
    FXCH ST2                            ; 0040ff8d
    FADD float ptr [ESP + 0x14]         ; 0040ff8f
    FXCH                                ; 0040ff93
    FSTP float ptr [ESP + 0x30]         ; 0040ff95
    FXCH                                ; 0040ff99
    FSTP float ptr [ESP + 0x34]         ; 0040ff9b
    FSTP float ptr [ESP + 0x38]         ; 0040ff9f
    MOVSD ES:EDI,ESI                    ; 0040ffa3
    MOVSD ES:EDI,ESI                    ; 0040ffa4
    MOVSD ES:EDI,ESI                    ; 0040ffa5
    LEA EDX,[EBX + 0x20]                ; 0040ffa6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040ffa9
    MOV dword ptr [EDX],EAX             ; 0040ffad
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040ffaf
    MOV dword ptr [EDX + 0x4],EAX       ; 0040ffb3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0040ffb6
    MOV dword ptr [EDX + 0x8],EAX       ; 0040ffba
    MOV EDX,dword ptr [EBX + 0x25718]   ; 0040ffbd
    LEA EAX,[EBX + 0x30]                ; 0040ffc3
    ADD EDX,0x30                        ; 0040ffc6
    CMP EAX,EDX                         ; 0040ffc9
    JZ 0x0040ffdd                       ; 0040ffcb
        ;   XREF to: 0040ffdd (CONDITIONAL_JUMP)  ; LAB_0040ffdd
    MOV ECX,dword ptr [EDX]             ; 0040ffcd
    MOV dword ptr [EAX],ECX             ; 0040ffcf
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040ffd1
    MOV dword ptr [EAX + 0x4],ECX       ; 0040ffd4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040ffd7
    MOV dword ptr [EAX + 0x8],ECX       ; 0040ffda
    PUSH 0x34                           ; 0040ffdd
        ;   Label: LAB_0040ffdd
    PUSH 0x0                            ; 0040ffdf
    LEA EAX,[EBX + 0x10a68]             ; 0040ffe1
    PUSH EAX                            ; 0040ffe7
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0040ffe8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ffed
    PUSH 0x1                            ; 0040fff0
    PUSH 0x6                            ; 0040fff2
    LEA EAX,[EBX + 0x2b4]               ; 0040fff4
    PUSH EAX                            ; 0040fffa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0040fffb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x25738],0x1   ; 00410000
    ADD ESP,0xc                         ; 0041000a
    MOV dword ptr [EBX + 0x2573c],0x0   ; 0041000d
    ADD ESP,0x3c                        ; 00410017
    POP EBP                             ; 0041001a
    POP EDI                             ; 0041001b
    POP ESI                             ; 0041001c
    POP EBX                             ; 0041001d
    RET                                 ; 0041001e
    PUSH EAX                            ; 0041001f
        ;   Label: LAB_0041001f
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00410020
    CALL dword ptr [EDX + 0x114]        ; 00410026
    ADD ESP,0x4                         ; 0041002c
    TEST EAX,EAX                        ; 0041002f
    JG 0x0040ff11                       ; 00410031
        ;   XREF to: 0040ff11 (CONDITIONAL_JUMP)  ; LAB_0040ff11
    JMP 0x0040ff31                      ; 00410037
        ;   XREF to: 0040ff31 (UNCONDITIONAL_JUMP)  ; LAB_0040ff31

