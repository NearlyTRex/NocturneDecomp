; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004e5930 (CGargoyle *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   int INT_02d83200
;   int INT_02d83214
;   int INT_02d83218
;   int INT_02d83224
;   int INT_02d8322c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5930
        ;   Label: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004e5930
    PUSH ESI                            ; 004e5931
    PUSH EDI                            ; 004e5932
    PUSH EBP                            ; 004e5933
    SUB ESP,0x3c                        ; 004e5934
    MOV ESI,dword ptr [ESP + 0x50]      ; 004e5937
    MOV EDI,dword ptr [ESP + 0x54]      ; 004e593b
    MOV EDX,dword ptr [0x02d83200]      ; 004e593f | INT_02d83200
    PUSH EDX                            ; 004e5945
    LEA EAX,[ESP + 0x4]                 ; 004e5946
    PUSH EAX                            ; 004e594a
    LEA EAX,[ESI + 0x158]               ; 004e594b
    PUSH EAX                            ; 004e5951
    MOV EBX,0x1                         ; 004e5952
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e5957
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e595c
    CMP EDI,EAX                         ; 004e595f
    JNZ 0x004e5a70                      ; 004e5961
        ;   XREF to: 004e5a70 (CONDITIONAL_JUMP)  ; LAB_004e5a70
    MOV EAX,dword ptr [ESI + 0xbebc]    ; 004e5967
        ;   Label: LAB_004e5967
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e596d
    JZ 0x004e59b7                       ; 004e5975
        ;   XREF to: 004e59b7 (CONDITIONAL_JUMP)  ; LAB_004e59b7
    MOV EBP,dword ptr [0x02d83214]      ; 004e5977 | INT_02d83214
    PUSH EBP                            ; 004e597d
    LEA EAX,[ESP + 0x10]                ; 004e597e
    PUSH EAX                            ; 004e5982
    LEA EAX,[ESI + 0x158]               ; 004e5983
    PUSH EAX                            ; 004e5989
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e598a
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004e598f
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e5991
    SUB EAX,EBX                         ; 004e5998
    SHL EAX,0x2                         ; 004e599a
    ADD EAX,EDI                         ; 004e599d
    ADD ESP,0xc                         ; 004e599f
    CMP EAX,EDX                         ; 004e59a2
    JZ 0x004e59b6                       ; 004e59a4
        ;   XREF to: 004e59b6 (CONDITIONAL_JUMP)  ; LAB_004e59b6
    MOV ECX,dword ptr [EDX]             ; 004e59a6
    MOV dword ptr [EAX],ECX             ; 004e59a8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e59aa
    MOV dword ptr [EAX + 0x4],ECX       ; 004e59ad
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e59b0
    MOV dword ptr [EAX + 0x8],ECX       ; 004e59b3
    INC EBX                             ; 004e59b6
        ;   Label: LAB_004e59b6
    MOV EAX,dword ptr [ESI + 0xbec4]    ; 004e59b7
        ;   Label: LAB_004e59b7
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e59bd
    JZ 0x004e5a07                       ; 004e59c5
        ;   XREF to: 004e5a07 (CONDITIONAL_JUMP)  ; LAB_004e5a07
    MOV ECX,dword ptr [0x02d83218]      ; 004e59c7 | INT_02d83218
    PUSH ECX                            ; 004e59cd
    LEA EAX,[ESP + 0x1c]                ; 004e59ce
    PUSH EAX                            ; 004e59d2
    LEA EAX,[ESI + 0x158]               ; 004e59d3
    PUSH EAX                            ; 004e59d9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e59da
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004e59df
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e59e1
    SUB EAX,EBX                         ; 004e59e8
    SHL EAX,0x2                         ; 004e59ea
    ADD EAX,EDI                         ; 004e59ed
    ADD ESP,0xc                         ; 004e59ef
    CMP EAX,EDX                         ; 004e59f2
    JZ 0x004e5a06                       ; 004e59f4
        ;   XREF to: 004e5a06 (CONDITIONAL_JUMP)  ; LAB_004e5a06
    MOV ECX,dword ptr [EDX]             ; 004e59f6
    MOV dword ptr [EAX],ECX             ; 004e59f8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e59fa
    MOV dword ptr [EAX + 0x4],ECX       ; 004e59fd
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e5a00
    MOV dword ptr [EAX + 0x8],ECX       ; 004e5a03
    INC EBX                             ; 004e5a06
        ;   Label: LAB_004e5a06
    MOV EAX,dword ptr [ESI + 0xbedc]    ; 004e5a07
        ;   Label: LAB_004e5a07
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e5a0d
    JZ 0x004e5a56                       ; 004e5a15
        ;   XREF to: 004e5a56 (CONDITIONAL_JUMP)  ; LAB_004e5a56
    MOV EAX,[0x02d83224]                ; 004e5a17 | INT_02d83224
    PUSH EAX                            ; 004e5a1c
    LEA EAX,[ESP + 0x34]                ; 004e5a1d
    PUSH EAX                            ; 004e5a21
    LEA EAX,[ESI + 0x158]               ; 004e5a22
    PUSH EAX                            ; 004e5a28
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e5a29
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004e5a2e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e5a30
    SUB EAX,EBX                         ; 004e5a37
    SHL EAX,0x2                         ; 004e5a39
    ADD EAX,EDI                         ; 004e5a3c
    ADD ESP,0xc                         ; 004e5a3e
    CMP EAX,EDX                         ; 004e5a41
    JZ 0x004e5a55                       ; 004e5a43
        ;   XREF to: 004e5a55 (CONDITIONAL_JUMP)  ; LAB_004e5a55
    MOV ECX,dword ptr [EDX]             ; 004e5a45
    MOV dword ptr [EAX],ECX             ; 004e5a47
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e5a49
    MOV dword ptr [EAX + 0x4],ECX       ; 004e5a4c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e5a4f
    MOV dword ptr [EAX + 0x8],ECX       ; 004e5a52
    INC EBX                             ; 004e5a55
        ;   Label: LAB_004e5a55
    MOV EAX,dword ptr [ESI + 0xbee0]    ; 004e5a56
        ;   Label: LAB_004e5a56
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e5a5c
    JNZ 0x004e5a85                      ; 004e5a64
        ;   XREF to: 004e5a85 (CONDITIONAL_JUMP)  ; LAB_004e5a85
    MOV EAX,EBX                         ; 004e5a66
    ADD ESP,0x3c                        ; 004e5a68
    POP EBP                             ; 004e5a6b
    POP EDI                             ; 004e5a6c
    POP ESI                             ; 004e5a6d
    POP EBX                             ; 004e5a6e
    RET                                 ; 004e5a6f
    MOV EDX,dword ptr [EAX]             ; 004e5a70
        ;   Label: LAB_004e5a70
    MOV dword ptr [EDI],EDX             ; 004e5a72
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e5a74
    MOV dword ptr [EDI + 0x4],EDX       ; 004e5a77
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e5a7a
    MOV dword ptr [EDI + 0x8],EDX       ; 004e5a7d
    JMP 0x004e5967                      ; 004e5a80
        ;   XREF to: 004e5967 (UNCONDITIONAL_JUMP)  ; LAB_004e5967
    MOV ECX,dword ptr [0x02d8322c]      ; 004e5a85 | INT_02d8322c
        ;   Label: LAB_004e5a85
    PUSH ECX                            ; 004e5a8b
    LEA EAX,[ESP + 0x28]                ; 004e5a8c
    PUSH EAX                            ; 004e5a90
    ADD ESI,0x158                       ; 004e5a91
    PUSH ESI                            ; 004e5a97
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e5a98
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ESI,EAX                         ; 004e5a9d
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e5a9f
    SUB EAX,EBX                         ; 004e5aa6
    SHL EAX,0x2                         ; 004e5aa8
    ADD EDI,EAX                         ; 004e5aab
    ADD ESP,0xc                         ; 004e5aad
    CMP EDI,ESI                         ; 004e5ab0
    JZ 0x004e5ac4                       ; 004e5ab2
        ;   XREF to: 004e5ac4 (CONDITIONAL_JUMP)  ; LAB_004e5ac4
    MOV EAX,dword ptr [ESI]             ; 004e5ab4
    MOV dword ptr [EDI],EAX             ; 004e5ab6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e5ab8
    MOV dword ptr [EDI + 0x4],EAX       ; 004e5abb
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e5abe
    MOV dword ptr [EDI + 0x8],EAX       ; 004e5ac1
    INC EBX                             ; 004e5ac4
        ;   Label: LAB_004e5ac4
    MOV EAX,EBX                         ; 004e5ac5
    ADD ESP,0x3c                        ; 004e5ac7
    POP EBP                             ; 004e5aca
    POP EDI                             ; 004e5acb
    POP ESI                             ; 004e5acc
    POP EBX                             ; 004e5acd
    RET                                 ; 004e5ace

