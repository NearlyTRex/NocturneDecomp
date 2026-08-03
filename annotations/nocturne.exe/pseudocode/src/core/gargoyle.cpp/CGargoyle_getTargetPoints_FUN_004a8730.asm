; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(CGargoyle *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_01c78b18
;   undefined4 DAT_01c78b2c
;   undefined4 DAT_01c78b30
;   undefined4 DAT_01c78b3c
;   undefined4 DAT_01c78b44
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8730
        ;   Label: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004a8730
    PUSH ESI                            ; 004a8731
    PUSH EDI                            ; 004a8732
    PUSH EBP                            ; 004a8733
    SUB ESP,0x3c                        ; 004a8734
    MOV ESI,dword ptr [ESP + 0x50]      ; 004a8737
    MOV EDI,dword ptr [ESP + 0x54]      ; 004a873b
    MOV EDX,dword ptr [0x01c78b18]      ; 004a873f | DAT_01c78b18
    PUSH EDX                            ; 004a8745
    LEA EAX,[ESP + 0x4]                 ; 004a8746
    PUSH EAX                            ; 004a874a
    LEA EAX,[ESI + 0x150]               ; 004a874b
    PUSH EAX                            ; 004a8751
    MOV EBX,0x1                         ; 004a8752
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004a8757
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004a875c
    CMP EDI,EAX                         ; 004a875f
    JNZ 0x004a8870                      ; 004a8761
        ;   XREF to: 004a8870 (CONDITIONAL_JUMP)  ; LAB_004a8870
    MOV EAX,dword ptr [ESI + 0xbd24]    ; 004a8767
        ;   Label: LAB_004a8767
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004a876d
    JZ 0x004a87b7                       ; 004a8775
        ;   XREF to: 004a87b7 (CONDITIONAL_JUMP)  ; LAB_004a87b7
    MOV EBP,dword ptr [0x01c78b2c]      ; 004a8777 | DAT_01c78b2c
    PUSH EBP                            ; 004a877d
    LEA EAX,[ESP + 0x10]                ; 004a877e
    PUSH EAX                            ; 004a8782
    LEA EAX,[ESI + 0x150]               ; 004a8783
    PUSH EAX                            ; 004a8789
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004a878a
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004a878f
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a8791
    SUB EAX,EBX                         ; 004a8798
    SHL EAX,0x2                         ; 004a879a
    ADD EAX,EDI                         ; 004a879d
    ADD ESP,0xc                         ; 004a879f
    CMP EAX,EDX                         ; 004a87a2
    JZ 0x004a87b6                       ; 004a87a4
        ;   XREF to: 004a87b6 (CONDITIONAL_JUMP)  ; LAB_004a87b6
    MOV ECX,dword ptr [EDX]             ; 004a87a6
    MOV dword ptr [EAX],ECX             ; 004a87a8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a87aa
    MOV dword ptr [EAX + 0x4],ECX       ; 004a87ad
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a87b0
    MOV dword ptr [EAX + 0x8],ECX       ; 004a87b3
    INC EBX                             ; 004a87b6
        ;   Label: LAB_004a87b6
    MOV EAX,dword ptr [ESI + 0xbd2c]    ; 004a87b7
        ;   Label: LAB_004a87b7
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004a87bd
    JZ 0x004a8807                       ; 004a87c5
        ;   XREF to: 004a8807 (CONDITIONAL_JUMP)  ; LAB_004a8807
    MOV ECX,dword ptr [0x01c78b30]      ; 004a87c7 | DAT_01c78b30
    PUSH ECX                            ; 004a87cd
    LEA EAX,[ESP + 0x1c]                ; 004a87ce
    PUSH EAX                            ; 004a87d2
    LEA EAX,[ESI + 0x150]               ; 004a87d3
    PUSH EAX                            ; 004a87d9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004a87da
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004a87df
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a87e1
    SUB EAX,EBX                         ; 004a87e8
    SHL EAX,0x2                         ; 004a87ea
    ADD EAX,EDI                         ; 004a87ed
    ADD ESP,0xc                         ; 004a87ef
    CMP EAX,EDX                         ; 004a87f2
    JZ 0x004a8806                       ; 004a87f4
        ;   XREF to: 004a8806 (CONDITIONAL_JUMP)  ; LAB_004a8806
    MOV ECX,dword ptr [EDX]             ; 004a87f6
    MOV dword ptr [EAX],ECX             ; 004a87f8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a87fa
    MOV dword ptr [EAX + 0x4],ECX       ; 004a87fd
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a8800
    MOV dword ptr [EAX + 0x8],ECX       ; 004a8803
    INC EBX                             ; 004a8806
        ;   Label: LAB_004a8806
    MOV EAX,dword ptr [ESI + 0xbd44]    ; 004a8807
        ;   Label: LAB_004a8807
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004a880d
    JZ 0x004a8856                       ; 004a8815
        ;   XREF to: 004a8856 (CONDITIONAL_JUMP)  ; LAB_004a8856
    MOV EAX,[0x01c78b3c]                ; 004a8817 | DAT_01c78b3c
    PUSH EAX                            ; 004a881c
    LEA EAX,[ESP + 0x34]                ; 004a881d
    PUSH EAX                            ; 004a8821
    LEA EAX,[ESI + 0x150]               ; 004a8822
    PUSH EAX                            ; 004a8828
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004a8829
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004a882e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a8830
    SUB EAX,EBX                         ; 004a8837
    SHL EAX,0x2                         ; 004a8839
    ADD EAX,EDI                         ; 004a883c
    ADD ESP,0xc                         ; 004a883e
    CMP EAX,EDX                         ; 004a8841
    JZ 0x004a8855                       ; 004a8843
        ;   XREF to: 004a8855 (CONDITIONAL_JUMP)  ; LAB_004a8855
    MOV ECX,dword ptr [EDX]             ; 004a8845
    MOV dword ptr [EAX],ECX             ; 004a8847
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a8849
    MOV dword ptr [EAX + 0x4],ECX       ; 004a884c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a884f
    MOV dword ptr [EAX + 0x8],ECX       ; 004a8852
    INC EBX                             ; 004a8855
        ;   Label: LAB_004a8855
    MOV EAX,dword ptr [ESI + 0xbd48]    ; 004a8856
        ;   Label: LAB_004a8856
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004a885c
    JNZ 0x004a8885                      ; 004a8864
        ;   XREF to: 004a8885 (CONDITIONAL_JUMP)  ; LAB_004a8885
    MOV EAX,EBX                         ; 004a8866
    ADD ESP,0x3c                        ; 004a8868
    POP EBP                             ; 004a886b
    POP EDI                             ; 004a886c
    POP ESI                             ; 004a886d
    POP EBX                             ; 004a886e
    RET                                 ; 004a886f
    MOV EDX,dword ptr [EAX]             ; 004a8870
        ;   Label: LAB_004a8870
    MOV dword ptr [EDI],EDX             ; 004a8872
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a8874
    MOV dword ptr [EDI + 0x4],EDX       ; 004a8877
    MOV EDX,dword ptr [EAX + 0x8]       ; 004a887a
    MOV dword ptr [EDI + 0x8],EDX       ; 004a887d
    JMP 0x004a8767                      ; 004a8880
        ;   XREF to: 004a8767 (UNCONDITIONAL_JUMP)  ; LAB_004a8767
    MOV ECX,dword ptr [0x01c78b44]      ; 004a8885 | DAT_01c78b44
        ;   Label: LAB_004a8885
    PUSH ECX                            ; 004a888b
    LEA EAX,[ESP + 0x28]                ; 004a888c
    PUSH EAX                            ; 004a8890
    ADD ESI,0x150                       ; 004a8891
    PUSH ESI                            ; 004a8897
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004a8898
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ESI,EAX                         ; 004a889d
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a889f
    SUB EAX,EBX                         ; 004a88a6
    SHL EAX,0x2                         ; 004a88a8
    ADD EDI,EAX                         ; 004a88ab
    ADD ESP,0xc                         ; 004a88ad
    CMP EDI,ESI                         ; 004a88b0
    JZ 0x004a88c4                       ; 004a88b2
        ;   XREF to: 004a88c4 (CONDITIONAL_JUMP)  ; LAB_004a88c4
    MOV EAX,dword ptr [ESI]             ; 004a88b4
    MOV dword ptr [EDI],EAX             ; 004a88b6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a88b8
    MOV dword ptr [EDI + 0x4],EAX       ; 004a88bb
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a88be
    MOV dword ptr [EDI + 0x8],EAX       ; 004a88c1
    INC EBX                             ; 004a88c4
        ;   Label: LAB_004a88c4
    MOV EAX,EBX                         ; 004a88c5
    ADD ESP,0x3c                        ; 004a88c7
    POP EBP                             ; 004a88ca
    POP EDI                             ; 004a88cb
    POP ESI                             ; 004a88cc
    POP EBX                             ; 004a88cd
    RET                                 ; 004a88ce

