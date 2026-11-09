; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 at 00569c6d
;
; Referenced Globals:
;   undefined4 DAT_005f25ed
;   undefined4 DAT_00605890
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
;   core_skeleton.cpp_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569cc0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0
    PUSH ESI                            ; 00569cc1
    PUSH EDI                            ; 00569cc2
    PUSH EBP                            ; 00569cc3
    SUB ESP,0x54                        ; 00569cc4
    MOV EBP,dword ptr [ESP + 0x68]      ; 00569cc7
    MOV EDX,0x7fffffff                  ; 00569ccb
    MOV ESI,0x80000001                  ; 00569cd0
    PUSH EBP                            ; 00569cd5
    MOV dword ptr [ESP + 0x24],EDX      ; 00569cd6
    MOV dword ptr [ESP + 0x20],EDX      ; 00569cda
    MOV dword ptr [ESP + 0x1c],EDX      ; 00569cde
    MOV dword ptr [ESP + 0xc],ESI       ; 00569ce2
    MOV dword ptr [ESP + 0x8],ESI       ; 00569ce6
    MOV dword ptr [ESP + 0x4],ESI       ; 00569cea
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00569cee
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569cf3
    PUSH 0x0                            ; 00569cf6
    PUSH 0x0                            ; 00569cf8
    PUSH EBP                            ; 00569cfa
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00569cfb
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 ; 00569cfe
        ;   XREF to: 005675f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00569d03
    PUSH 0x0                            ; 00569d06
    PUSH EBP                            ; 00569d08
    CALL core_skeleton.cpp_FUN_00569890 ; 00569d09
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00569d0e
    TEST ESI,ESI                        ; 00569d11
    JLE 0x00569d91                      ; 00569d13
        ;   XREF to: 00569d91 (CONDITIONAL_JUMP)  ; LAB_00569d91
    LEA ECX,[ESI*0x4 + 0x0]             ; 00569d19
    SUB ECX,ESI                         ; 00569d20
    XOR EDX,EDX                         ; 00569d22
    SHL ECX,0x2                         ; 00569d24
    MOV ESI,dword ptr [EBP + 0x2324]    ; 00569d27
        ;   Label: LAB_00569d27
    LEA EDI,[ESP + 0xc]                 ; 00569d2d
    ADD ESI,EDX                         ; 00569d31
    MOVSD ES:EDI,ESI                    ; 00569d33
    MOVSD ES:EDI,ESI                    ; 00569d34
    MOVSD ES:EDI,ESI                    ; 00569d35
    MOV EBX,dword ptr [ESP + 0x18]      ; 00569d36
    MOV EAX,dword ptr [ESP + 0xc]       ; 00569d3a
    CMP EAX,EBX                         ; 00569d3e
    JGE 0x00569d46                      ; 00569d40
        ;   XREF to: 00569d46 (CONDITIONAL_JUMP)  ; LAB_00569d46
    MOV dword ptr [ESP + 0x18],EAX      ; 00569d42
    MOV EAX,dword ptr [ESP + 0xc]       ; 00569d46
        ;   Label: LAB_00569d46
    CMP EAX,dword ptr [ESP]             ; 00569d4a
    JLE 0x00569d52                      ; 00569d4d
        ;   XREF to: 00569d52 (CONDITIONAL_JUMP)  ; LAB_00569d52
    MOV dword ptr [ESP],EAX             ; 00569d4f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569d52
        ;   Label: LAB_00569d52
    CMP EAX,dword ptr [ESP + 0x1c]      ; 00569d56
    JGE 0x00569d60                      ; 00569d5a
        ;   XREF to: 00569d60 (CONDITIONAL_JUMP)  ; LAB_00569d60
    MOV dword ptr [ESP + 0x1c],EAX      ; 00569d5c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569d60
        ;   Label: LAB_00569d60
    CMP EAX,dword ptr [ESP + 0x4]       ; 00569d64
    JLE 0x00569d6e                      ; 00569d68
        ;   XREF to: 00569d6e (CONDITIONAL_JUMP)  ; LAB_00569d6e
    MOV dword ptr [ESP + 0x4],EAX       ; 00569d6a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569d6e
        ;   Label: LAB_00569d6e
    CMP EAX,dword ptr [ESP + 0x20]      ; 00569d72
    JGE 0x00569d7c                      ; 00569d76
        ;   XREF to: 00569d7c (CONDITIONAL_JUMP)  ; LAB_00569d7c
    MOV dword ptr [ESP + 0x20],EAX      ; 00569d78
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569d7c
        ;   Label: LAB_00569d7c
    CMP EAX,dword ptr [ESP + 0x8]       ; 00569d80
    JLE 0x00569d8a                      ; 00569d84
        ;   XREF to: 00569d8a (CONDITIONAL_JUMP)  ; LAB_00569d8a
    MOV dword ptr [ESP + 0x8],EAX       ; 00569d86
    ADD EDX,0xc                         ; 00569d8a
        ;   Label: LAB_00569d8a
    CMP EDX,ECX                         ; 00569d8d
    JL 0x00569d27                       ; 00569d8f
        ;   XREF to: 00569d27 (CONDITIONAL_JUMP)  ; LAB_00569d27
    LEA EDX,[EBP + 0x2328]              ; 00569d91
        ;   Label: LAB_00569d91
    LEA EAX,[ESP + 0x18]                ; 00569d97
    MOV EBX,EDX                         ; 00569d9b
    LEA EDI,[ESP + 0x3c]                ; 00569d9d
    FILD dword ptr [EAX]                ; 00569da1
    FMUL float ptr [0x00605890]         ; 00569da3 | DAT_00605890
    FSTP float ptr [EBX]                ; 00569da9
    FILD dword ptr [EAX + 0x4]          ; 00569dab
    FMUL float ptr [0x00605890]         ; 00569dae | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00569db4
    FILD dword ptr [EAX + 0x8]          ; 00569db7
    FMUL float ptr [0x00605890]         ; 00569dba | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00569dc0
    ADD EBP,0x2334                      ; 00569dc3
    MOV EAX,ESP                         ; 00569dc9
    MOV EBX,EBP                         ; 00569dcb
    LEA ESI,[ESP + 0x30]                ; 00569dcd
    FILD dword ptr [EAX]                ; 00569dd1
    FMUL float ptr [0x00605890]         ; 00569dd3 | DAT_00605890
    FSTP float ptr [EBX]                ; 00569dd9
    FILD dword ptr [EAX + 0x4]          ; 00569ddb
    FMUL float ptr [0x00605890]         ; 00569dde | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00569de4
    FILD dword ptr [EAX + 0x8]          ; 00569de7
    FMUL float ptr [0x00605890]         ; 00569dea | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00569df0
    FLD float ptr [EBP]                 ; 00569df3
    FLD float ptr [EBP + 0x4]           ; 00569df6
    FLD float ptr [EBP + 0x8]           ; 00569df9
    FXCH ST2                            ; 00569dfc
    FSUB float ptr [EDX]                ; 00569dfe
    FXCH                                ; 00569e00
    FSUB float ptr [EDX + 0x4]          ; 00569e02
    FXCH ST2                            ; 00569e05
    FSUB float ptr [EDX + 0x8]          ; 00569e07
    FXCH                                ; 00569e0a
    FSTP float ptr [ESP + 0x30]         ; 00569e0c
    FXCH                                ; 00569e10
    FSTP float ptr [ESP + 0x34]         ; 00569e12
    FSTP float ptr [ESP + 0x38]         ; 00569e16
    MOVSD ES:EDI,ESI                    ; 00569e1a
    MOVSD ES:EDI,ESI                    ; 00569e1b
    MOVSD ES:EDI,ESI                    ; 00569e1c
    FLD float ptr [0x005f25ed]          ; 00569e1d | DAT_005f25ed
    FLD float ptr [ESP + 0x3c]          ; 00569e23
    FMUL ST1                            ; 00569e27
    FLD float ptr [ESP + 0x40]          ; 00569e29
    FMUL ST2                            ; 00569e2d
    FLD float ptr [ESP + 0x44]          ; 00569e2f
    FMULP ST3                           ; 00569e33
    LEA EDI,[ESP + 0x24]                ; 00569e35
    LEA ESI,[ESP + 0x48]                ; 00569e39
    FXCH                                ; 00569e3d
    FSTP float ptr [ESP + 0x48]         ; 00569e3f
    FSTP float ptr [ESP + 0x4c]         ; 00569e43
    FSTP float ptr [ESP + 0x50]         ; 00569e47
    MOVSD ES:EDI,ESI                    ; 00569e4b
    MOVSD ES:EDI,ESI                    ; 00569e4c
    MOVSD ES:EDI,ESI                    ; 00569e4d
    FLD float ptr [EDX]                 ; 00569e4e
    FLD float ptr [EDX + 0x4]           ; 00569e50
    FLD float ptr [EDX + 0x8]           ; 00569e53
    FXCH ST2                            ; 00569e56
    FSUB float ptr [ESP + 0x24]         ; 00569e58
    FXCH                                ; 00569e5c
    FSUB float ptr [ESP + 0x28]         ; 00569e5e
    FXCH ST2                            ; 00569e62
    FSUB float ptr [ESP + 0x2c]         ; 00569e64
    FXCH                                ; 00569e68
    FSTP float ptr [EDX]                ; 00569e6a
    FXCH                                ; 00569e6c
    FSTP float ptr [EDX + 0x4]          ; 00569e6e
    FSTP float ptr [EDX + 0x8]          ; 00569e71
    FLD float ptr [EBP]                 ; 00569e74
    FLD float ptr [EBP + 0x4]           ; 00569e77
    FLD float ptr [EBP + 0x8]           ; 00569e7a
    FXCH ST2                            ; 00569e7d
    FADD float ptr [ESP + 0x24]         ; 00569e7f
    FXCH                                ; 00569e83
    FADD float ptr [ESP + 0x28]         ; 00569e85
    FXCH ST2                            ; 00569e89
    FADD float ptr [ESP + 0x2c]         ; 00569e8b
    FXCH                                ; 00569e8f
    FSTP float ptr [EBP]                ; 00569e91
    FXCH                                ; 00569e94
    FSTP float ptr [EBP + 0x4]          ; 00569e96
    FSTP float ptr [EBP + 0x8]          ; 00569e99
    ADD ESP,0x54                        ; 00569e9c
    POP EBP                             ; 00569e9f
    POP EDI                             ; 00569ea0
    POP ESI                             ; 00569ea1
    POP EBX                             ; 00569ea2
    RET                                 ; 00569ea3

