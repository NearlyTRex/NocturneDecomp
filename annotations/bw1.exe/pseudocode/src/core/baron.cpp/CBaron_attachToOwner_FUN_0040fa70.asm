; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_0040fa70(CBaron *this_ptr,CDemonActor *target)
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
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004105b0 at 00410619
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fa70
        ;   Label: core_baron.cpp_CBaron_attachToOwner_FUN_0040fa70
    PUSH ESI                            ; 0040fa71
    PUSH EDI                            ; 0040fa72
    PUSH EBP                            ; 0040fa73
    SUB ESP,0x3c                        ; 0040fa74
    MOV EBX,dword ptr [ESP + 0x50]      ; 0040fa77
    MOV ESI,dword ptr [ESP + 0x54]      ; 0040fa7b
    TEST ESI,ESI                        ; 0040fa7f
    JZ 0x0040fa91                       ; 0040fa81
        ;   XREF to: 0040fa91 (CONDITIONAL_JUMP)  ; LAB_0040fa91
    MOV EDX,dword ptr [EBX + 0x20084]   ; 0040fa83
    CMP ESI,EDX                         ; 0040fa89
    JZ 0x0040fa91                       ; 0040fa8b
        ;   XREF to: 0040fa91 (CONDITIONAL_JUMP)  ; LAB_0040fa91
    TEST EDX,EDX                        ; 0040fa8d
    JZ 0x0040fa99                       ; 0040fa8f
        ;   XREF to: 0040fa99 (CONDITIONAL_JUMP)  ; LAB_0040fa99
    ADD ESP,0x3c                        ; 0040fa91
        ;   Label: LAB_0040fa91
    POP EBP                             ; 0040fa94
    POP EDI                             ; 0040fa95
    POP ESI                             ; 0040fa96
    POP EBX                             ; 0040fa97
    RET                                 ; 0040fa98
    MOV EDI,dword ptr [0x007c637c]      ; 0040fa99 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0040fa99
    PUSH EDI                            ; 0040fa9f
    PUSH ESI                            ; 0040faa0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040faa1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0040faa6
    TEST EAX,EAX                        ; 0040faa9
    JNZ 0x0040fb9f                      ; 0040faab
        ;   XREF to: 0040fb9f (CONDITIONAL_JUMP)  ; LAB_0040fb9f
    MOV EDX,0xc0000000                  ; 0040fab1
        ;   Label: LAB_0040fab1
    XOR EBP,EBP                         ; 0040fab6
    MOV dword ptr [EBX + 0x20084],ESI   ; 0040fab8
    MOV EAX,ESP                         ; 0040fabe
    MOV dword ptr [ESP],EBP             ; 0040fac0
    MOV dword ptr [ESP + 0x4],EBP       ; 0040fac3
    MOV dword ptr [ESP + 0x8],EDX       ; 0040fac7
    PUSH EAX                            ; 0040facb
    MOV ECX,dword ptr [EBX + 0x20084]   ; 0040facc
    PUSH ECX                            ; 0040fad2
    LEA ESI,[ESP + 0x20]                ; 0040fad3
    LEA EDI,[ESP + 0x14]                ; 0040fad7
    CALL core_actor.cpp_FUN_00408ac0    ; 0040fadb
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x20]                ; 0040fae0
    ADD ESP,0x8                         ; 0040fae4
    MOVSD ES:EDI,ESI                    ; 0040fae7
    MOVSD ES:EDI,ESI                    ; 0040fae8
    MOVSD ES:EDI,ESI                    ; 0040fae9
    MOV EAX,dword ptr [EBX + 0x20084]   ; 0040faea
    LEA EDI,[ESP + 0x24]                ; 0040faf0
    LEA ESI,[ESP + 0x30]                ; 0040faf4
    FLD float ptr [EAX + 0x20]          ; 0040faf8
    FLD float ptr [EAX + 0x24]          ; 0040fafb
    FLD float ptr [EAX + 0x28]          ; 0040fafe
    FXCH ST2                            ; 0040fb01
    FADD float ptr [ESP + 0xc]          ; 0040fb03
    FXCH                                ; 0040fb07
    FADD float ptr [ESP + 0x10]         ; 0040fb09
    FXCH ST2                            ; 0040fb0d
    FADD float ptr [ESP + 0x14]         ; 0040fb0f
    FXCH                                ; 0040fb13
    FSTP float ptr [ESP + 0x30]         ; 0040fb15
    FXCH                                ; 0040fb19
    FSTP float ptr [ESP + 0x34]         ; 0040fb1b
    FSTP float ptr [ESP + 0x38]         ; 0040fb1f
    MOVSD ES:EDI,ESI                    ; 0040fb23
    MOVSD ES:EDI,ESI                    ; 0040fb24
    MOVSD ES:EDI,ESI                    ; 0040fb25
    LEA EDX,[EBX + 0x20]                ; 0040fb26
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040fb29
    MOV dword ptr [EDX],EAX             ; 0040fb2d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040fb2f
    MOV dword ptr [EDX + 0x4],EAX       ; 0040fb33
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0040fb36
    MOV dword ptr [EDX + 0x8],EAX       ; 0040fb3a
    MOV EDX,dword ptr [EBX + 0x20084]   ; 0040fb3d
    LEA EAX,[EBX + 0x30]                ; 0040fb43
    ADD EDX,0x30                        ; 0040fb46
    CMP EAX,EDX                         ; 0040fb49
    JZ 0x0040fb5d                       ; 0040fb4b
        ;   XREF to: 0040fb5d (CONDITIONAL_JUMP)  ; LAB_0040fb5d
    MOV ECX,dword ptr [EDX]             ; 0040fb4d
    MOV dword ptr [EAX],ECX             ; 0040fb4f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040fb51
    MOV dword ptr [EAX + 0x4],ECX       ; 0040fb54
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040fb57
    MOV dword ptr [EAX + 0x8],ECX       ; 0040fb5a
    PUSH 0x30                           ; 0040fb5d
        ;   Label: LAB_0040fb5d
    PUSH 0x0                            ; 0040fb5f
    LEA EAX,[EBX + 0xc1d8]              ; 0040fb61
    PUSH EAX                            ; 0040fb67
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0040fb68
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040fb6d
    PUSH 0x1                            ; 0040fb70
    PUSH 0x6                            ; 0040fb72
    LEA EAX,[EBX + 0x158]               ; 0040fb74
    PUSH EAX                            ; 0040fb7a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0040fb7b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x200a4],0x1   ; 0040fb80
    ADD ESP,0xc                         ; 0040fb8a
    MOV dword ptr [EBX + 0x200a8],0x0   ; 0040fb8d
    ADD ESP,0x3c                        ; 0040fb97
    POP EBP                             ; 0040fb9a
    POP EDI                             ; 0040fb9b
    POP ESI                             ; 0040fb9c
    POP EBX                             ; 0040fb9d
    RET                                 ; 0040fb9e
    PUSH EAX                            ; 0040fb9f
        ;   Label: LAB_0040fb9f
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040fba0
    CALL dword ptr [EDX + 0x10c]        ; 0040fba6
    ADD ESP,0x4                         ; 0040fbac
    TEST EAX,EAX                        ; 0040fbaf
    JG 0x0040fa91                       ; 0040fbb1
        ;   XREF to: 0040fa91 (CONDITIONAL_JUMP)  ; LAB_0040fa91
    JMP 0x0040fab1                      ; 0040fbb7
        ;   XREF to: 0040fab1 (UNCONDITIONAL_JUMP)  ; LAB_0040fab1

