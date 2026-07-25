; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0 at 00411509
;
; Referenced Globals:
;   undefined4 CDemonActorType_00765a60.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410a80
        ;   Label: core_baron.cpp_CBaron_attachToOwner_FUN_00410a80
    PUSH ESI                            ; 00410a81
    PUSH EDI                            ; 00410a82
    PUSH EBP                            ; 00410a83
    SUB ESP,0x24                        ; 00410a84
    MOV EBX,dword ptr [ESP + 0x38]      ; 00410a87
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00410a8b
    TEST ESI,ESI                        ; 00410a8f
    JZ 0x00410aa1                       ; 00410a91
        ;   XREF to: 00410aa1 (CONDITIONAL_JUMP)  ; LAB_00410aa1
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410a93
    CMP ESI,EDX                         ; 00410a99
    JZ 0x00410aa1                       ; 00410a9b
        ;   XREF to: 00410aa1 (CONDITIONAL_JUMP)  ; LAB_00410aa1
    TEST EDX,EDX                        ; 00410a9d
    JZ 0x00410aa9                       ; 00410a9f
        ;   XREF to: 00410aa9 (CONDITIONAL_JUMP)  ; LAB_00410aa9
    ADD ESP,0x24                        ; 00410aa1
        ;   Label: LAB_00410aa1
    POP EBP                             ; 00410aa4
    POP EDI                             ; 00410aa5
    POP ESI                             ; 00410aa6
    POP EBX                             ; 00410aa7
    RET                                 ; 00410aa8
    MOV EDI,dword ptr [0x00765a98]      ; 00410aa9 | CDemonActorType_00765a60.name_hash
        ;   Label: LAB_00410aa9
    PUSH EDI                            ; 00410aaf
    PUSH ESI                            ; 00410ab0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00410ab1
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00410ab6
    TEST EAX,EAX                        ; 00410ab9
    JNZ 0x00410b8f                      ; 00410abb
        ;   XREF to: 00410b8f (CONDITIONAL_JUMP)  ; LAB_00410b8f
    MOV EDX,0xc0000000                  ; 00410ac1
        ;   Label: LAB_00410ac1
    XOR EBP,EBP                         ; 00410ac6
    MOV dword ptr [EBX + 0x1fb14],ESI   ; 00410ac8
    LEA EAX,[ESP + 0x18]                ; 00410ace
    MOV dword ptr [ESP + 0x18],EBP      ; 00410ad2
    MOV dword ptr [ESP + 0x1c],EBP      ; 00410ad6
    PUSH EAX                            ; 00410ada
    LEA EAX,[ESP + 0x4]                 ; 00410adb
    MOV dword ptr [ESP + 0x24],EDX      ; 00410adf
    PUSH EAX                            ; 00410ae3
    MOV ECX,dword ptr [EBX + 0x1fb14]   ; 00410ae4
    PUSH ECX                            ; 00410aea
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00410aeb
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410af0
    FLD float ptr [EDX + 0x20]          ; 00410af6
    FADD float ptr [EAX]                ; 00410af9
    ADD ESP,0xc                         ; 00410afb
    FSTP float ptr [ESP + 0xc]          ; 00410afe
    FLD float ptr [EDX + 0x24]          ; 00410b02
    FADD float ptr [EAX + 0x4]          ; 00410b05
    FSTP float ptr [ESP + 0x10]         ; 00410b08
    FLD float ptr [EDX + 0x28]          ; 00410b0c
    LEA EDX,[EBX + 0x20]                ; 00410b0f
    FADD float ptr [EAX + 0x8]          ; 00410b12
    MOV EAX,dword ptr [ESP + 0xc]       ; 00410b15
    FSTP float ptr [ESP + 0x14]         ; 00410b19
    MOV dword ptr [EDX],EAX             ; 00410b1d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00410b1f
    MOV dword ptr [EDX + 0x4],EAX       ; 00410b23
    MOV EAX,dword ptr [ESP + 0x14]      ; 00410b26
    MOV dword ptr [EDX + 0x8],EAX       ; 00410b2a
    MOV EAX,dword ptr [EBX + 0x1fb14]   ; 00410b2d
    LEA EDX,[EBX + 0x30]                ; 00410b33
    ADD EAX,0x30                        ; 00410b36
    CMP EDX,EAX                         ; 00410b39
    JZ 0x00410b4d                       ; 00410b3b
        ;   XREF to: 00410b4d (CONDITIONAL_JUMP)  ; LAB_00410b4d
    MOV ECX,dword ptr [EAX]             ; 00410b3d
    MOV dword ptr [EDX],ECX             ; 00410b3f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00410b41
    MOV dword ptr [EDX + 0x4],ECX       ; 00410b44
    MOV ECX,dword ptr [EAX + 0x8]       ; 00410b47
    MOV dword ptr [EDX + 0x8],ECX       ; 00410b4a
    PUSH 0x2c                           ; 00410b4d
        ;   Label: LAB_00410b4d
    PUSH 0x0                            ; 00410b4f
    LEA EAX,[EBX + 0xbc94]              ; 00410b51
    PUSH EAX                            ; 00410b57
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00410b58
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00410b5d
    PUSH 0x1                            ; 00410b60
    PUSH 0x6                            ; 00410b62
    LEA EAX,[EBX + 0x150]               ; 00410b64
    PUSH EAX                            ; 00410b6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00410b6b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV dword ptr [EBX + 0x1fb34],0x1   ; 00410b70
    ADD ESP,0xc                         ; 00410b7a
    MOV dword ptr [EBX + 0x1fb38],0x0   ; 00410b7d
    ADD ESP,0x24                        ; 00410b87
    POP EBP                             ; 00410b8a
    POP EDI                             ; 00410b8b
    POP ESI                             ; 00410b8c
    POP EBX                             ; 00410b8d
    RET                                 ; 00410b8e
    PUSH EAX                            ; 00410b8f
        ;   Label: LAB_00410b8f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00410b90
    CALL dword ptr [EDX + 0x104]        ; 00410b96
    ADD ESP,0x4                         ; 00410b9c
    TEST EAX,EAX                        ; 00410b9f
    JG 0x00410aa1                       ; 00410ba1
        ;   XREF to: 00410aa1 (CONDITIONAL_JUMP)  ; LAB_00410aa1
    JMP 0x00410ac1                      ; 00410ba7
        ;   XREF to: 00410ac1 (UNCONDITIONAL_JUMP)  ; LAB_00410ac1

