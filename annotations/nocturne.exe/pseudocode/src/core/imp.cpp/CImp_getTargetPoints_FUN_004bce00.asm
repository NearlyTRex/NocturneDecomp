; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_01cae30c
;   undefined4 DAT_01cae320
;   undefined4 DAT_01cae324
;   undefined4 DAT_01cae330
;   undefined4 DAT_01cae338
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bce00
        ;   Label: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
    PUSH ESI                            ; 004bce01
    PUSH EDI                            ; 004bce02
    SUB ESP,0x3c                        ; 004bce03
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004bce06
    MOV EDI,dword ptr [ESP + 0x50]      ; 004bce0a
    MOV EAX,dword ptr [ESI + 0xbd58]    ; 004bce0e
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x2290] ; 004bce14
    XOR EBX,EBX                         ; 004bce1b
    TEST EDX,EDX                        ; 004bce1d
    JNZ 0x004bcf2c                      ; 004bce1f
        ;   XREF to: 004bcf2c (CONDITIONAL_JUMP)  ; LAB_004bcf2c
    MOV EAX,dword ptr [ESI + 0xbd30]    ; 004bce25
        ;   Label: LAB_004bce25
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004bce2b
    JZ 0x004bce74                       ; 004bce33
        ;   XREF to: 004bce74 (CONDITIONAL_JUMP)  ; LAB_004bce74
    MOV EAX,[0x01cae320]                ; 004bce35 | DAT_01cae320
    PUSH EAX                            ; 004bce3a
    LEA EAX,[ESP + 0x10]                ; 004bce3b
    PUSH EAX                            ; 004bce3f
    LEA EAX,[ESI + 0x150]               ; 004bce40
    PUSH EAX                            ; 004bce46
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bce47
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    MOV EDX,EAX                         ; 004bce4c
    LEA EAX,[EBX*0x4 + 0x0]             ; 004bce4e
    SUB EAX,EBX                         ; 004bce55
    SHL EAX,0x2                         ; 004bce57
    ADD EAX,EDI                         ; 004bce5a
    ADD ESP,0xc                         ; 004bce5c
    CMP EAX,EDX                         ; 004bce5f
    JZ 0x004bce73                       ; 004bce61
        ;   XREF to: 004bce73 (CONDITIONAL_JUMP)  ; LAB_004bce73
    MOV ECX,dword ptr [EDX]             ; 004bce63
    MOV dword ptr [EAX],ECX             ; 004bce65
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bce67
    MOV dword ptr [EAX + 0x4],ECX       ; 004bce6a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bce6d
    MOV dword ptr [EAX + 0x8],ECX       ; 004bce70
    INC EBX                             ; 004bce73
        ;   Label: LAB_004bce73
    MOV EAX,dword ptr [ESI + 0xbd38]    ; 004bce74
        ;   Label: LAB_004bce74
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004bce7a
    JZ 0x004bcec4                       ; 004bce82
        ;   XREF to: 004bcec4 (CONDITIONAL_JUMP)  ; LAB_004bcec4
    MOV ECX,dword ptr [0x01cae324]      ; 004bce84 | DAT_01cae324
    PUSH ECX                            ; 004bce8a
    LEA EAX,[ESP + 0x34]                ; 004bce8b
    PUSH EAX                            ; 004bce8f
    LEA EAX,[ESI + 0x150]               ; 004bce90
    PUSH EAX                            ; 004bce96
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bce97
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    MOV EDX,EAX                         ; 004bce9c
    LEA EAX,[EBX*0x4 + 0x0]             ; 004bce9e
    SUB EAX,EBX                         ; 004bcea5
    SHL EAX,0x2                         ; 004bcea7
    ADD EAX,EDI                         ; 004bceaa
    ADD ESP,0xc                         ; 004bceac
    CMP EAX,EDX                         ; 004bceaf
    JZ 0x004bcec3                       ; 004bceb1
        ;   XREF to: 004bcec3 (CONDITIONAL_JUMP)  ; LAB_004bcec3
    MOV ECX,dword ptr [EDX]             ; 004bceb3
    MOV dword ptr [EAX],ECX             ; 004bceb5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bceb7
    MOV dword ptr [EAX + 0x4],ECX       ; 004bceba
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bcebd
    MOV dword ptr [EAX + 0x8],ECX       ; 004bcec0
    INC EBX                             ; 004bcec3
        ;   Label: LAB_004bcec3
    MOV EAX,dword ptr [ESI + 0xbd50]    ; 004bcec4
        ;   Label: LAB_004bcec4
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004bceca
    JZ 0x004bcf13                       ; 004bced2
        ;   XREF to: 004bcf13 (CONDITIONAL_JUMP)  ; LAB_004bcf13
    MOV EAX,[0x01cae330]                ; 004bced4 | DAT_01cae330
    PUSH EAX                            ; 004bced9
    LEA EAX,[ESP + 0x4]                 ; 004bceda
    PUSH EAX                            ; 004bcede
    LEA EAX,[ESI + 0x150]               ; 004bcedf
    PUSH EAX                            ; 004bcee5
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bcee6
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    MOV EDX,EAX                         ; 004bceeb
    LEA EAX,[EBX*0x4 + 0x0]             ; 004bceed
    SUB EAX,EBX                         ; 004bcef4
    SHL EAX,0x2                         ; 004bcef6
    ADD EAX,EDI                         ; 004bcef9
    ADD ESP,0xc                         ; 004bcefb
    CMP EAX,EDX                         ; 004bcefe
    JZ 0x004bcf12                       ; 004bcf00
        ;   XREF to: 004bcf12 (CONDITIONAL_JUMP)  ; LAB_004bcf12
    MOV ECX,dword ptr [EDX]             ; 004bcf02
    MOV dword ptr [EAX],ECX             ; 004bcf04
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bcf06
    MOV dword ptr [EAX + 0x4],ECX       ; 004bcf09
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bcf0c
    MOV dword ptr [EAX + 0x8],ECX       ; 004bcf0f
    INC EBX                             ; 004bcf12
        ;   Label: LAB_004bcf12
    MOV EAX,dword ptr [ESI + 0xbd54]    ; 004bcf13
        ;   Label: LAB_004bcf13
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004bcf19
    JNZ 0x004bcf61                      ; 004bcf21
        ;   XREF to: 004bcf61 (CONDITIONAL_JUMP)  ; LAB_004bcf61
    MOV EAX,EBX                         ; 004bcf23
    ADD ESP,0x3c                        ; 004bcf25
    POP EDI                             ; 004bcf28
    POP ESI                             ; 004bcf29
    POP EBX                             ; 004bcf2a
    RET                                 ; 004bcf2b
    MOV ECX,dword ptr [0x01cae30c]      ; 004bcf2c | DAT_01cae30c
        ;   Label: LAB_004bcf2c
    PUSH ECX                            ; 004bcf32
    LEA EAX,[ESP + 0x1c]                ; 004bcf33
    PUSH EAX                            ; 004bcf37
    LEA EAX,[ESI + 0x150]               ; 004bcf38
    PUSH EAX                            ; 004bcf3e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bcf3f
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004bcf44
    CMP EDI,EAX                         ; 004bcf47
    JZ 0x004bcf5b                       ; 004bcf49
        ;   XREF to: 004bcf5b (CONDITIONAL_JUMP)  ; LAB_004bcf5b
    MOV EDX,dword ptr [EAX]             ; 004bcf4b
    MOV dword ptr [EDI],EDX             ; 004bcf4d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bcf4f
    MOV dword ptr [EDI + 0x4],EDX       ; 004bcf52
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bcf55
    MOV dword ptr [EDI + 0x8],EDX       ; 004bcf58
    INC EBX                             ; 004bcf5b
        ;   Label: LAB_004bcf5b
    JMP 0x004bce25                      ; 004bcf5c
        ;   XREF to: 004bce25 (UNCONDITIONAL_JUMP)  ; LAB_004bce25
    MOV ECX,dword ptr [0x01cae338]      ; 004bcf61 | DAT_01cae338
        ;   Label: LAB_004bcf61
    PUSH ECX                            ; 004bcf67
    LEA EAX,[ESP + 0x28]                ; 004bcf68
    PUSH EAX                            ; 004bcf6c
    ADD ESI,0x150                       ; 004bcf6d
    PUSH ESI                            ; 004bcf73
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004bcf74
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    MOV EDX,EAX                         ; 004bcf79
    LEA EAX,[EBX*0x4 + 0x0]             ; 004bcf7b
    SUB EAX,EBX                         ; 004bcf82
    SHL EAX,0x2                         ; 004bcf84
    ADD EDI,EAX                         ; 004bcf87
    ADD ESP,0xc                         ; 004bcf89
    CMP EDI,EDX                         ; 004bcf8c
    JZ 0x004bcfa0                       ; 004bcf8e
        ;   XREF to: 004bcfa0 (CONDITIONAL_JUMP)  ; LAB_004bcfa0
    MOV EAX,dword ptr [EDX]             ; 004bcf90
    MOV dword ptr [EDI],EAX             ; 004bcf92
    MOV EAX,dword ptr [EDX + 0x4]       ; 004bcf94
    MOV dword ptr [EDI + 0x4],EAX       ; 004bcf97
    MOV EAX,dword ptr [EDX + 0x8]       ; 004bcf9a
    MOV dword ptr [EDI + 0x8],EAX       ; 004bcf9d
    INC EBX                             ; 004bcfa0
        ;   Label: LAB_004bcfa0
    MOV EAX,EBX                         ; 004bcfa1
    ADD ESP,0x3c                        ; 004bcfa3
    POP EDI                             ; 004bcfa6
    POP ESI                             ; 004bcfa7
    POP EBX                             ; 004bcfa8
    RET                                 ; 004bcfa9

