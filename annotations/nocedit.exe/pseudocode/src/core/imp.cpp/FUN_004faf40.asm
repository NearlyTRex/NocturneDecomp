; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_imp_cpp_FUN_004faf40(void)
;
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   int INT_02db89f4
;   int INT_02db8a08
;   int INT_02db8a0c
;   int INT_02db8a18
;   int INT_02db8a20
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faf40
        ;   Label: core_imp.cpp_FUN_004faf40
    PUSH ESI                            ; 004faf41
    PUSH EDI                            ; 004faf42
    SUB ESP,0x3c                        ; 004faf43
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004faf46
    MOV EDI,dword ptr [ESP + 0x50]      ; 004faf4a
    MOV EAX,dword ptr [ESI + 0xbef0]    ; 004faf4e
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x2298] ; 004faf54
    XOR EBX,EBX                         ; 004faf5b
    TEST EDX,EDX                        ; 004faf5d
    JNZ 0x004fb06c                      ; 004faf5f
        ;   XREF to: 004fb06c (CONDITIONAL_JUMP)  ; LAB_004fb06c
    MOV EAX,dword ptr [ESI + 0xbec8]    ; 004faf65
        ;   Label: LAB_004faf65
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004faf6b
    JZ 0x004fafb4                       ; 004faf73
        ;   XREF to: 004fafb4 (CONDITIONAL_JUMP)  ; LAB_004fafb4
    MOV EAX,[0x02db8a08]                ; 004faf75 | INT_02db8a08
    PUSH EAX                            ; 004faf7a
    LEA EAX,[ESP + 0x10]                ; 004faf7b
    PUSH EAX                            ; 004faf7f
    LEA EAX,[ESI + 0x158]               ; 004faf80
    PUSH EAX                            ; 004faf86
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004faf87
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004faf8c
    LEA EAX,[EBX*0x4 + 0x0]             ; 004faf8e
    SUB EAX,EBX                         ; 004faf95
    SHL EAX,0x2                         ; 004faf97
    ADD EAX,EDI                         ; 004faf9a
    ADD ESP,0xc                         ; 004faf9c
    CMP EAX,EDX                         ; 004faf9f
    JZ 0x004fafb3                       ; 004fafa1
        ;   XREF to: 004fafb3 (CONDITIONAL_JUMP)  ; LAB_004fafb3
    MOV ECX,dword ptr [EDX]             ; 004fafa3
    MOV dword ptr [EAX],ECX             ; 004fafa5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fafa7
    MOV dword ptr [EAX + 0x4],ECX       ; 004fafaa
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fafad
    MOV dword ptr [EAX + 0x8],ECX       ; 004fafb0
    INC EBX                             ; 004fafb3
        ;   Label: LAB_004fafb3
    MOV EAX,dword ptr [ESI + 0xbed0]    ; 004fafb4
        ;   Label: LAB_004fafb4
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004fafba
    JZ 0x004fb004                       ; 004fafc2
        ;   XREF to: 004fb004 (CONDITIONAL_JUMP)  ; LAB_004fb004
    MOV ECX,dword ptr [0x02db8a0c]      ; 004fafc4 | INT_02db8a0c
    PUSH ECX                            ; 004fafca
    LEA EAX,[ESP + 0x34]                ; 004fafcb
    PUSH EAX                            ; 004fafcf
    LEA EAX,[ESI + 0x158]               ; 004fafd0
    PUSH EAX                            ; 004fafd6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004fafd7
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004fafdc
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fafde
    SUB EAX,EBX                         ; 004fafe5
    SHL EAX,0x2                         ; 004fafe7
    ADD EAX,EDI                         ; 004fafea
    ADD ESP,0xc                         ; 004fafec
    CMP EAX,EDX                         ; 004fafef
    JZ 0x004fb003                       ; 004faff1
        ;   XREF to: 004fb003 (CONDITIONAL_JUMP)  ; LAB_004fb003
    MOV ECX,dword ptr [EDX]             ; 004faff3
    MOV dword ptr [EAX],ECX             ; 004faff5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004faff7
    MOV dword ptr [EAX + 0x4],ECX       ; 004faffa
    MOV ECX,dword ptr [EDX + 0x8]       ; 004faffd
    MOV dword ptr [EAX + 0x8],ECX       ; 004fb000
    INC EBX                             ; 004fb003
        ;   Label: LAB_004fb003
    MOV EAX,dword ptr [ESI + 0xbee8]    ; 004fb004
        ;   Label: LAB_004fb004
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004fb00a
    JZ 0x004fb053                       ; 004fb012
        ;   XREF to: 004fb053 (CONDITIONAL_JUMP)  ; LAB_004fb053
    MOV EAX,[0x02db8a18]                ; 004fb014 | INT_02db8a18
    PUSH EAX                            ; 004fb019
    LEA EAX,[ESP + 0x4]                 ; 004fb01a
    PUSH EAX                            ; 004fb01e
    LEA EAX,[ESI + 0x158]               ; 004fb01f
    PUSH EAX                            ; 004fb025
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004fb026
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004fb02b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fb02d
    SUB EAX,EBX                         ; 004fb034
    SHL EAX,0x2                         ; 004fb036
    ADD EAX,EDI                         ; 004fb039
    ADD ESP,0xc                         ; 004fb03b
    CMP EAX,EDX                         ; 004fb03e
    JZ 0x004fb052                       ; 004fb040
        ;   XREF to: 004fb052 (CONDITIONAL_JUMP)  ; LAB_004fb052
    MOV ECX,dword ptr [EDX]             ; 004fb042
    MOV dword ptr [EAX],ECX             ; 004fb044
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fb046
    MOV dword ptr [EAX + 0x4],ECX       ; 004fb049
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fb04c
    MOV dword ptr [EAX + 0x8],ECX       ; 004fb04f
    INC EBX                             ; 004fb052
        ;   Label: LAB_004fb052
    MOV EAX,dword ptr [ESI + 0xbeec]    ; 004fb053
        ;   Label: LAB_004fb053
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004fb059
    JNZ 0x004fb0a1                      ; 004fb061
        ;   XREF to: 004fb0a1 (CONDITIONAL_JUMP)  ; LAB_004fb0a1
    MOV EAX,EBX                         ; 004fb063
    ADD ESP,0x3c                        ; 004fb065
    POP EDI                             ; 004fb068
    POP ESI                             ; 004fb069
    POP EBX                             ; 004fb06a
    RET                                 ; 004fb06b
    MOV ECX,dword ptr [0x02db89f4]      ; 004fb06c | INT_02db89f4
        ;   Label: LAB_004fb06c
    PUSH ECX                            ; 004fb072
    LEA EAX,[ESP + 0x1c]                ; 004fb073
    PUSH EAX                            ; 004fb077
    LEA EAX,[ESI + 0x158]               ; 004fb078
    PUSH EAX                            ; 004fb07e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004fb07f
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004fb084
    CMP EDI,EAX                         ; 004fb087
    JZ 0x004fb09b                       ; 004fb089
        ;   XREF to: 004fb09b (CONDITIONAL_JUMP)  ; LAB_004fb09b
    MOV EDX,dword ptr [EAX]             ; 004fb08b
    MOV dword ptr [EDI],EDX             ; 004fb08d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fb08f
    MOV dword ptr [EDI + 0x4],EDX       ; 004fb092
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fb095
    MOV dword ptr [EDI + 0x8],EDX       ; 004fb098
    INC EBX                             ; 004fb09b
        ;   Label: LAB_004fb09b
    JMP 0x004faf65                      ; 004fb09c
        ;   XREF to: 004faf65 (UNCONDITIONAL_JUMP)  ; LAB_004faf65
    MOV ECX,dword ptr [0x02db8a20]      ; 004fb0a1 | INT_02db8a20
        ;   Label: LAB_004fb0a1
    PUSH ECX                            ; 004fb0a7
    LEA EAX,[ESP + 0x28]                ; 004fb0a8
    PUSH EAX                            ; 004fb0ac
    ADD ESI,0x158                       ; 004fb0ad
    PUSH ESI                            ; 004fb0b3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004fb0b4
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004fb0b9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fb0bb
    SUB EAX,EBX                         ; 004fb0c2
    SHL EAX,0x2                         ; 004fb0c4
    ADD EDI,EAX                         ; 004fb0c7
    ADD ESP,0xc                         ; 004fb0c9
    CMP EDI,EDX                         ; 004fb0cc
    JZ 0x004fb0e0                       ; 004fb0ce
        ;   XREF to: 004fb0e0 (CONDITIONAL_JUMP)  ; LAB_004fb0e0
    MOV EAX,dword ptr [EDX]             ; 004fb0d0
    MOV dword ptr [EDI],EAX             ; 004fb0d2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004fb0d4
    MOV dword ptr [EDI + 0x4],EAX       ; 004fb0d7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004fb0da
    MOV dword ptr [EDI + 0x8],EAX       ; 004fb0dd
    INC EBX                             ; 004fb0e0
        ;   Label: LAB_004fb0e0
    MOV EAX,EBX                         ; 004fb0e1
    ADD ESP,0x3c                        ; 004fb0e3
    POP EDI                             ; 004fb0e6
    POP ESI                             ; 004fb0e7
    POP EBX                             ; 004fb0e8
    RET                                 ; 004fb0e9

