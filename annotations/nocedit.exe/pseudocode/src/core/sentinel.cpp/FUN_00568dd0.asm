; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_sentinel.cpp_FUN_00568dd0()
;
; Local Variables:
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_0311420c
;   undefined4 DAT_03114220
;   undefined4 DAT_03114224
;   undefined4 DAT_03114230
;   undefined4 DAT_03114238
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568dd0
        ;   Label: core_sentinel.cpp_FUN_00568dd0
    PUSH ESI                            ; 00568dd1
    PUSH EDI                            ; 00568dd2
    PUSH EBP                            ; 00568dd3
    SUB ESP,0x3c                        ; 00568dd4
    MOV ESI,dword ptr [ESP + 0x50]      ; 00568dd7
    MOV EBX,dword ptr [ESP + 0x54]      ; 00568ddb
    MOV EDX,dword ptr [0x0311420c]      ; 00568ddf | DAT_0311420c
    PUSH EDX                            ; 00568de5
    LEA EAX,[ESP + 0x1c]                ; 00568de6
    PUSH EAX                            ; 00568dea
    LEA EAX,[ESI + 0x158]               ; 00568deb
    PUSH EAX                            ; 00568df1
    MOV EDI,0x5                         ; 00568df2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00568df7
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00568dfc
    CMP EBX,EAX                         ; 00568dff
    JZ 0x00568e13                       ; 00568e01
        ;   XREF to: 00568e13 (CONDITIONAL_JUMP)  ; LAB_00568e13
    MOV EDX,dword ptr [EAX]             ; 00568e03
    MOV dword ptr [EBX],EDX             ; 00568e05
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568e07
    MOV dword ptr [EBX + 0x4],EDX       ; 00568e0a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00568e0d
    MOV dword ptr [EBX + 0x8],EDX       ; 00568e10
    MOV ECX,dword ptr [0x03114220]      ; 00568e13 | DAT_03114220
        ;   Label: LAB_00568e13
    PUSH ECX                            ; 00568e19
    LEA EAX,[ESP + 0x28]                ; 00568e1a
    PUSH EAX                            ; 00568e1e
    LEA EAX,[ESI + 0x158]               ; 00568e1f
    PUSH EAX                            ; 00568e25
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00568e26
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0xc]                 ; 00568e2b
    ADD ESP,0xc                         ; 00568e2e
    CMP EDX,EAX                         ; 00568e31
    JZ 0x00568e45                       ; 00568e33
        ;   XREF to: 00568e45 (CONDITIONAL_JUMP)  ; LAB_00568e45
    MOV ECX,dword ptr [EAX]             ; 00568e35
    MOV dword ptr [EDX],ECX             ; 00568e37
    MOV ECX,dword ptr [EAX + 0x4]       ; 00568e39
    MOV dword ptr [EDX + 0x4],ECX       ; 00568e3c
    MOV ECX,dword ptr [EAX + 0x8]       ; 00568e3f
    MOV dword ptr [EDX + 0x8],ECX       ; 00568e42
    MOV EBP,dword ptr [0x03114224]      ; 00568e45 | DAT_03114224
        ;   Label: LAB_00568e45
    PUSH EBP                            ; 00568e4b
    LEA EAX,[ESP + 0x34]                ; 00568e4c
    PUSH EAX                            ; 00568e50
    LEA EAX,[ESI + 0x158]               ; 00568e51
    PUSH EAX                            ; 00568e57
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00568e58
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x18]                ; 00568e5d
    ADD ESP,0xc                         ; 00568e60
    CMP EDX,EAX                         ; 00568e63
    JZ 0x00568e77                       ; 00568e65
        ;   XREF to: 00568e77 (CONDITIONAL_JUMP)  ; LAB_00568e77
    MOV ECX,dword ptr [EAX]             ; 00568e67
    MOV dword ptr [EDX],ECX             ; 00568e69
    MOV ECX,dword ptr [EAX + 0x4]       ; 00568e6b
    MOV dword ptr [EDX + 0x4],ECX       ; 00568e6e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00568e71
    MOV dword ptr [EDX + 0x8],ECX       ; 00568e74
    MOV EAX,[0x03114230]                ; 00568e77 | DAT_03114230
        ;   Label: LAB_00568e77
    PUSH EAX                            ; 00568e7c
    LEA EAX,[ESP + 0x10]                ; 00568e7d
    PUSH EAX                            ; 00568e81
    LEA EAX,[ESI + 0x158]               ; 00568e82
    PUSH EAX                            ; 00568e88
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00568e89
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x24]                ; 00568e8e
    ADD ESP,0xc                         ; 00568e91
    CMP EDX,EAX                         ; 00568e94
    JZ 0x00568ea8                       ; 00568e96
        ;   XREF to: 00568ea8 (CONDITIONAL_JUMP)  ; LAB_00568ea8
    MOV ECX,dword ptr [EAX]             ; 00568e98
    MOV dword ptr [EDX],ECX             ; 00568e9a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00568e9c
    MOV dword ptr [EDX + 0x4],ECX       ; 00568e9f
    MOV ECX,dword ptr [EAX + 0x8]       ; 00568ea2
    MOV dword ptr [EDX + 0x8],ECX       ; 00568ea5
    MOV EDX,dword ptr [0x03114238]      ; 00568ea8 | DAT_03114238
        ;   Label: LAB_00568ea8
    PUSH EDX                            ; 00568eae
    LEA EAX,[ESP + 0x4]                 ; 00568eaf
    PUSH EAX                            ; 00568eb3
    ADD ESI,0x158                       ; 00568eb4
    PUSH ESI                            ; 00568eba
    ADD EBX,0x30                        ; 00568ebb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00568ebe
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00568ec3
    CMP EBX,EAX                         ; 00568ec6
    JNZ 0x00568ed4                      ; 00568ec8
        ;   XREF to: 00568ed4 (CONDITIONAL_JUMP)  ; LAB_00568ed4
    MOV EAX,EDI                         ; 00568eca
    ADD ESP,0x3c                        ; 00568ecc
    POP EBP                             ; 00568ecf
    POP EDI                             ; 00568ed0
    POP ESI                             ; 00568ed1
    POP EBX                             ; 00568ed2
    RET                                 ; 00568ed3
    MOV EDX,dword ptr [EAX]             ; 00568ed4
        ;   Label: LAB_00568ed4
    MOV dword ptr [EBX],EDX             ; 00568ed6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568ed8
    MOV dword ptr [EBX + 0x4],EDX       ; 00568edb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00568ede
    MOV dword ptr [EBX + 0x8],EDX       ; 00568ee1
    MOV EAX,EDI                         ; 00568ee4
    ADD ESP,0x3c                        ; 00568ee6
    POP EBP                             ; 00568ee9
    POP EDI                             ; 00568eea
    POP ESI                             ; 00568eeb
    POP EBX                             ; 00568eec
    RET                                 ; 00568eed

