; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004ab830(CGhoul *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_004ab814 = 004ab89d
;   double DOUBLE_00584e95 = 0.5
;   double DOUBLE_00584e9d = 0.700000000000000
;   double DOUBLE_00584ea5 = 0.300000000000000
;   undefined4 DAT_01c78c14
;   undefined4 DAT_01c78c28
;   undefined4 DAT_01c78c2c
;   undefined4 DAT_01c78c38
;   undefined4 DAT_01c78c3c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab830
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004ab830
    PUSH ESI                            ; 004ab831
    PUSH EDI                            ; 004ab832
    PUSH EBP                            ; 004ab833
    MOV EBP,ESP                         ; 004ab834
    SUB ESP,0x4c                        ; 004ab836
    AND ESP,0xfffffff8                  ; 004ab839
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ab83c
    MOV EDX,dword ptr [0x01c78c38]      ; 004ab83f | DAT_01c78c38
    PUSH EDX                            ; 004ab845
    LEA EAX,[ESP + 0x34]                ; 004ab846
    PUSH EAX                            ; 004ab84a
    LEA EAX,[ESI + 0x150]               ; 004ab84b
    PUSH EAX                            ; 004ab851
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab852
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004ab857
    LEA EAX,[ESP + 0x30]                ; 004ab85a
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ab85e
    CMP EAX,ECX                         ; 004ab861
    JNZ 0x004ab95a                      ; 004ab863
        ;   XREF to: 004ab95a (CONDITIONAL_JUMP)  ; LAB_004ab95a
    XOR EDI,EDI                         ; 004ab869
        ;   Label: LAB_004ab869
    MOV EBX,0x1                         ; 004ab86b
    MOV dword ptr [ESP + 0x48],EDI      ; 004ab870
    LEA EDI,[ESI + 0x150]               ; 004ab874
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ab87a
        ;   Label: LAB_004ab87a
    ADD EDX,dword ptr [ESI + 0x6c]      ; 004ab87e
    MOV ECX,0x4                         ; 004ab881
    MOV EAX,EDX                         ; 004ab886
    SAR EDX,0x1f                        ; 004ab888
    IDIV ECX                            ; 004ab88b
    CMP EDX,0x3                         ; 004ab88d
    JA 0x004ab93f                       ; 004ab890
        ;   XREF to: 004ab93f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4ab814]  ; 004ab896 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0xbd48]    ; 004ab89d
        ;   Label: caseD_0
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004ab8a3
    JZ 0x004ab93f                       ; 004ab8ab
        ;   XREF to: 004ab93f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x01c78c28]      ; 004ab8b1 | DAT_01c78c28
    PUSH ECX                            ; 004ab8b7
    LEA EAX,[ESP + 0x40]                ; 004ab8b8
    PUSH EAX                            ; 004ab8bc
        ;   Label: LAB_004ab8bc
    PUSH EDI                            ; 004ab8bd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab8be
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004ab8c3
    LEA EAX,[ESP + 0x24]                ; 004ab8c5
    ADD ESP,0xc                         ; 004ab8c9
    CMP EAX,EDX                         ; 004ab8cc
    JZ 0x004ab8e4                       ; 004ab8ce
        ;   XREF to: 004ab8e4 (CONDITIONAL_JUMP)  ; LAB_004ab8e4
    MOV EAX,dword ptr [EDX]             ; 004ab8d0
    MOV dword ptr [ESP + 0x18],EAX      ; 004ab8d2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ab8d6
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ab8d9
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ab8dd
    MOV dword ptr [ESP + 0x20],EAX      ; 004ab8e0
    IMUL EDX,EBX,0xc                    ; 004ab8e4
        ;   Label: LAB_004ab8e4
    FLD double ptr [0x00584e95]         ; 004ab8e7 | DOUBLE_00584e95
    FLD float ptr [ESP + 0x18]          ; 004ab8ed
    FMUL ST1                            ; 004ab8f1
    FLD float ptr [ESP + 0x1c]          ; 004ab8f3
    FMUL double ptr [0x00584e9d]        ; 004ab8f7 | DOUBLE_00584e9d
    FLD float ptr [ESP + 0x30]          ; 004ab8fd
    FMULP ST3                           ; 004ab901
    FLD float ptr [ESP + 0x34]          ; 004ab903
    FMUL double ptr [0x00584ea5]        ; 004ab907 | DOUBLE_00584ea5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ab90d
    FADDP                               ; 004ab910
    FXCH ST2                            ; 004ab912
    FADDP                               ; 004ab914
    FXCH                                ; 004ab916
    FSTP float ptr [ESP + 0x1c]         ; 004ab918
    ADD EDX,EAX                         ; 004ab91c
    LEA EAX,[ESP + 0x18]                ; 004ab91e
    FSTP float ptr [ESP + 0x18]         ; 004ab922
    CMP EDX,EAX                         ; 004ab926
    JZ 0x004ab93e                       ; 004ab928
        ;   XREF to: 004ab93e (CONDITIONAL_JUMP)  ; LAB_004ab93e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ab92a
    MOV dword ptr [EDX],EAX             ; 004ab92e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ab930
    MOV dword ptr [EDX + 0x4],EAX       ; 004ab934
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ab937
    MOV dword ptr [EDX + 0x8],EAX       ; 004ab93b
    INC EBX                             ; 004ab93e
        ;   Label: LAB_004ab93e
    MOV EDX,dword ptr [ESP + 0x48]      ; 004ab93f
        ;   Label: default
    INC EDX                             ; 004ab943
    MOV dword ptr [ESP + 0x48],EDX      ; 004ab944
    CMP EDX,0x4                         ; 004ab948
    JL 0x004ab87a                       ; 004ab94b
        ;   XREF to: 004ab87a (CONDITIONAL_JUMP)  ; LAB_004ab87a
    MOV EAX,EBX                         ; 004ab951
    MOV ESP,EBP                         ; 004ab953
    POP EBP                             ; 004ab955
    POP EDI                             ; 004ab956
    POP ESI                             ; 004ab957
    POP EBX                             ; 004ab958
    RET                                 ; 004ab959
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ab95a
        ;   Label: LAB_004ab95a
    MOV dword ptr [ECX],EAX             ; 004ab95e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ab960
    MOV dword ptr [ECX + 0x4],EAX       ; 004ab964
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ab967
    MOV dword ptr [ECX + 0x8],EAX       ; 004ab96b
    JMP 0x004ab869                      ; 004ab96e
        ;   XREF to: 004ab869 (UNCONDITIONAL_JUMP)  ; LAB_004ab869
    MOV EAX,dword ptr [ESI + 0xbd50]    ; 004ab973
        ;   Label: caseD_1
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004ab979
    JZ 0x004ab93f                       ; 004ab981
        ;   XREF to: 004ab93f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x01c78c2c]      ; 004ab983 | DAT_01c78c2c
    PUSH ECX                            ; 004ab989
    LEA EAX,[ESP + 0x10]                ; 004ab98a
    JMP 0x004ab8bc                      ; 004ab98e
        ;   XREF to: 004ab8bc (UNCONDITIONAL_JUMP)  ; LAB_004ab8bc
    MOV EAX,dword ptr [ESI + 0xbd70]    ; 004ab993
        ;   Label: caseD_2
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004ab999
    JZ 0x004ab93f                       ; 004ab9a1
        ;   XREF to: 004ab93f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x01c78c14]      ; 004ab9a3 | DAT_01c78c14
    PUSH ECX                            ; 004ab9a9
    LEA EAX,[ESP + 0x28]                ; 004ab9aa
    PUSH EAX                            ; 004ab9ae
    PUSH EDI                            ; 004ab9af
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab9b0
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,EBX,0xc                    ; 004ab9b5
    ADD ESP,0xc                         ; 004ab9b8
    ADD EDX,dword ptr [EBP + 0x18]      ; 004ab9bb
    CMP EDX,EAX                         ; 004ab9be
    JZ 0x004ab93e                       ; 004ab9c0
        ;   XREF to: 004ab93e (CONDITIONAL_JUMP)  ; LAB_004ab93e
    MOV ECX,dword ptr [EAX]             ; 004ab9c6
    MOV dword ptr [EDX],ECX             ; 004ab9c8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ab9ca
    MOV dword ptr [EDX + 0x4],ECX       ; 004ab9cd
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ab9d0
    MOV dword ptr [EDX + 0x8],ECX       ; 004ab9d3
    JMP 0x004ab93e                      ; 004ab9d6
        ;   XREF to: 004ab93e (UNCONDITIONAL_JUMP)  ; LAB_004ab93e
    MOV EAX,dword ptr [ESI + 0xbd6c]    ; 004ab9db
        ;   Label: caseD_3
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004ab9e1
    JZ 0x004ab93f                       ; 004ab9e9
        ;   XREF to: 004ab93f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x01c78c3c]      ; 004ab9ef | DAT_01c78c3c
    PUSH ECX                            ; 004ab9f5
    LEA EAX,[ESP + 0x4]                 ; 004ab9f6
    PUSH EAX                            ; 004ab9fa
    PUSH EDI                            ; 004ab9fb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab9fc
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,EBX,0xc                    ; 004aba01
    ADD ESP,0xc                         ; 004aba04
    ADD EDX,dword ptr [EBP + 0x18]      ; 004aba07
    CMP EDX,EAX                         ; 004aba0a
    JZ 0x004ab93e                       ; 004aba0c
        ;   XREF to: 004ab93e (CONDITIONAL_JUMP)  ; LAB_004ab93e
    MOV ECX,dword ptr [EAX]             ; 004aba12
    MOV dword ptr [EDX],ECX             ; 004aba14
    MOV ECX,dword ptr [EAX + 0x4]       ; 004aba16
    MOV dword ptr [EDX + 0x4],ECX       ; 004aba19
    MOV ECX,dword ptr [EAX + 0x8]       ; 004aba1c
    MOV dword ptr [EDX + 0x8],ECX       ; 004aba1f
    JMP 0x004ab93e                      ; 004aba22
        ;   XREF to: 004ab93e (UNCONDITIONAL_JUMP)  ; LAB_004ab93e

