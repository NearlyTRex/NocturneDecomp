; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_FUN_00410490 at 00410807
;
; Referenced Globals:
;   undefined4 DAT_00765a98
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410bf0
        ;   Label: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
    PUSH ESI                            ; 00410bf1
    PUSH EDI                            ; 00410bf2
    PUSH EBP                            ; 00410bf3
    MOV EBP,ESP                         ; 00410bf4
    SUB ESP,0x24                        ; 00410bf6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00410bf9
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410bfc
    TEST EDX,EDX                        ; 00410c02
    JNZ 0x00410c0d                      ; 00410c04
        ;   XREF to: 00410c0d (CONDITIONAL_JUMP)  ; LAB_00410c0d
    MOV ESP,EBP                         ; 00410c06
        ;   Label: LAB_00410c06
    POP EBP                             ; 00410c08
    POP EDI                             ; 00410c09
    POP ESI                             ; 00410c0a
    POP EBX                             ; 00410c0b
    RET                                 ; 00410c0c
    LEA EAX,[EDX + 0x30]                ; 00410c0d
        ;   Label: LAB_00410c0d
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00410c10
    PUSH EAX                            ; 00410c16
    MOV EAX,0xc0000000                  ; 00410c17
    XOR ECX,ECX                         ; 00410c1c
    MOV dword ptr [EBP + -0x4],EAX      ; 00410c1e
    LEA EAX,[EBP + -0xc]                ; 00410c21
    MOV dword ptr [EBP + -0xc],ECX      ; 00410c24
    PUSH EAX                            ; 00410c27
    LEA EAX,[EBP + -0x18]               ; 00410c28
    MOV dword ptr [EBP + -0x8],ECX      ; 00410c2b
    PUSH EAX                            ; 00410c2e
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410c2f
    PUSH EDX                            ; 00410c35
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00410c36
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410c3b
    FLD float ptr [EDX + 0x20]          ; 00410c41
    FADD float ptr [EAX]                ; 00410c44
    FSTP float ptr [EBP + -0x24]        ; 00410c46
    FLD float ptr [EDX + 0x24]          ; 00410c49
    FADD float ptr [EAX + 0x4]          ; 00410c4c
    ADD ESP,0xc                         ; 00410c4f
    FSTP float ptr [EBP + -0x20]        ; 00410c52
    FLD float ptr [EDX + 0x28]          ; 00410c55
    FADD float ptr [EAX + 0x8]          ; 00410c58
    LEA EAX,[EBP + -0x24]               ; 00410c5b
    PUSH EAX                            ; 00410c5e
    PUSH EBX                            ; 00410c5f
    FSTP float ptr [EBP + -0x1c]        ; 00410c60
    CALL dword ptr [ESI + 0x60]         ; 00410c63
    ADD ESP,0xc                         ; 00410c66
    MOV ECX,dword ptr [0x00765a98]      ; 00410c69 | DAT_00765a98
    PUSH ECX                            ; 00410c6f
    MOV ESI,dword ptr [EBX + 0x1fb14]   ; 00410c70
    PUSH ESI                            ; 00410c76
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00410c77
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00410c7c
    TEST EAX,EAX                        ; 00410c7f
    JZ 0x00410c06                       ; 00410c81
        ;   XREF to: 00410c06 (CONDITIONAL_JUMP)  ; LAB_00410c06
    PUSH EAX                            ; 00410c83
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00410c84
    CALL dword ptr [EDX + 0x104]        ; 00410c8a
    ADD ESP,0x4                         ; 00410c90
    CMP EAX,0x2                         ; 00410c93
    JNZ 0x00410c06                      ; 00410c96
        ;   XREF to: 00410c06 (CONDITIONAL_JUMP)  ; LAB_00410c06
    MOV EDI,dword ptr [EBX + 0x1fb14]   ; 00410c9c
    PUSH EDI                            ; 00410ca2
    PUSH EBX                            ; 00410ca3
    CALL core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0 ; 00410ca4
        ;   XREF to: 00410bb0 (UNCONDITIONAL_CALL)  ; undefined core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0()
    ADD ESP,0x8                         ; 00410ca9
    MOV ESP,EBP                         ; 00410cac
    POP EBP                             ; 00410cae
    POP EDI                             ; 00410caf
    POP ESI                             ; 00410cb0
    POP EBX                             ; 00410cb1
    RET                                 ; 00410cb2

