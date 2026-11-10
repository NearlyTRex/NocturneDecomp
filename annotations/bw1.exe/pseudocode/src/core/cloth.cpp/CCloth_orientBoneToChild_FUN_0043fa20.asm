; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043fa20(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043eea0 at 0043f4f8
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d6879
;   TerminatedCString s_Can_t_orient_bone_with_n_005d688b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fa20
        ;   Label: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20
    PUSH ESI                            ; 0043fa21
    PUSH EDI                            ; 0043fa22
    PUSH EBP                            ; 0043fa23
    MOV EBP,ESP                         ; 0043fa24
    SUB ESP,0x90                        ; 0043fa26
    SUB EBP,0x76                        ; 0043fa2c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0043fa2f
    PUSH EDX                            ; 0043fa35
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0043fa36
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0043fa3b
    MOV ESI,EAX                         ; 0043fa41
    MOV dword ptr [EBP + 0x6a],EAX      ; 0043fa43
    IMUL EAX,ECX,0xac                   ; 0043fa46
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0043fa4c
    ADD ESP,0x4                         ; 0043fa52
    ADD EBX,0x37b50                     ; 0043fa55
    PUSH 0x1                            ; 0043fa5b
    ADD EBX,EAX                         ; 0043fa5d
    PUSH EBX                            ; 0043fa5f
    PUSH ESI                            ; 0043fa60
    MOV EDI,0xffffffff                  ; 0043fa61
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0043fa66
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x44],0x0      ; 0043fa6b
    MOV dword ptr [EBP + 0x6e],EDI      ; 0043fa72
    MOV dword ptr [EBX + 0x40],EAX      ; 0043fa75
    XOR EDI,EDI                         ; 0043fa78
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0043fa7a
    ADD ESP,0xc                         ; 0043fa80
    TEST EAX,EAX                        ; 0043fa83
    JLE 0x0043fab7                      ; 0043fa85
        ;   XREF to: 0043fab7 (CONDITIONAL_JUMP)  ; LAB_0043fab7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0043fa87
    ADD EAX,0x58                        ; 0043fa8d
    MOV ECX,ESI                         ; 0043fa90
    MOV ESI,EAX                         ; 0043fa92
    MOV EDX,dword ptr [EBX + 0x40]      ; 0043fa94
        ;   Label: LAB_0043fa94
    CMP EDX,dword ptr [ECX + 0x1de9c]   ; 0043fa97
    JZ 0x0043fb8d                       ; 0043fa9d
        ;   XREF to: 0043fb8d (CONDITIONAL_JUMP)  ; LAB_0043fb8d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0043faa3
        ;   Label: LAB_0043faa3
    ADD ECX,0x24                        ; 0043faa6
    INC EDI                             ; 0043faa9
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0043faaa
    ADD ESI,0xc                         ; 0043fab0
    CMP EDI,EDX                         ; 0043fab3
    JL 0x0043fa94                       ; 0043fab5
        ;   XREF to: 0043fa94 (CONDITIONAL_JUMP)  ; LAB_0043fa94
    CMP dword ptr [EBP + 0x6e],0x0      ; 0043fab7
        ;   Label: LAB_0043fab7
    JGE 0x0043fae0                      ; 0043fabb
        ;   XREF to: 0043fae0 (CONDITIONAL_JUMP)  ; LAB_0043fae0
    MOV ESI,0x5d6879                    ; 0043fabd | = "..\\core\\cloth.cpp"
    MOV EDI,0x2bf                       ; 0043fac2
    PUSH 0x5d688b                       ; 0043fac7 | = "Can't orient bone with no children!"
    MOV dword ptr [0x01d1d400],ESI      ; 0043facc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0043fad2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043fad8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043fadd
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0043fae0
        ;   Label: LAB_0043fae0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043fae3
    SUB EAX,ECX                         ; 0043faea
    MOV ECX,dword ptr [EBP + 0x92]      ; 0043faec
    SHL EAX,0x2                         ; 0043faf2
    ADD ECX,0x58                        ; 0043faf5
    ADD EAX,ECX                         ; 0043faf8
    PUSH EAX                            ; 0043fafa
    LEA ESI,[EBP + 0x52]                ; 0043fafb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0043fafe
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 0043fb03
    LEA EAX,[EBP + 0x5e]                ; 0043fb06
    LEA EDI,[EBP + 0x5e]                ; 0043fb09
    PUSH EAX                            ; 0043fb0c
    XOR EAX,EAX                         ; 0043fb0d
    LEA ESI,[EBP + 0x52]                ; 0043fb0f
    MOV dword ptr [EBP + 0x46],EAX      ; 0043fb12
    MOV dword ptr [EBP + 0x4a],EAX      ; 0043fb15
    MOV dword ptr [EBP + 0x4e],EAX      ; 0043fb18
    LEA EAX,[EBP + 0x46]                ; 0043fb1b
    MOVSD ES:EDI,ESI                    ; 0043fb1e
    MOVSD ES:EDI,ESI                    ; 0043fb1f
    MOVSD ES:EDI,ESI                    ; 0043fb20
    PUSH EAX                            ; 0043fb21
    LEA ESI,[EBX + 0x48]                ; 0043fb22
    PUSH ESI                            ; 0043fb25
    CALL core_xform.cpp_FUN_005b5620    ; 0043fb26
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043fb2b
    LEA EAX,[EBX + 0x28]                ; 0043fb2e
    PUSH EAX                            ; 0043fb31
    LEA EAX,[EBX + 0x1c]                ; 0043fb32
    PUSH EAX                            ; 0043fb35
    LEA EAX,[EBP + -0x1a]               ; 0043fb36
    PUSH EAX                            ; 0043fb39
    CALL core_xform.cpp_FUN_005b5620    ; 0043fb3a
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043fb3f
    LEA EAX,[EBP + -0x1a]               ; 0043fb42
    PUSH EAX                            ; 0043fb45
    PUSH ESI                            ; 0043fb46
    LEA ESI,[EBP + 0x16]                ; 0043fb47
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0043fb4a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0043fb4f
    LEA ESI,[EBP + 0x16]                ; 0043fb54
    LEA EDI,[EBX + 0x48]                ; 0043fb57
    MOVSD.REP ES:EDI,ESI                ; 0043fb5a
    FLD float ptr [EBX + 0x14]          ; 0043fb5c
    FLD1                                ; 0043fb5f
    FDIVRP                              ; 0043fb61
    FLD float ptr [EBX + 0x18]          ; 0043fb63
    FLD1                                ; 0043fb66
    FDIVRP                              ; 0043fb68
    ADD ESP,0x8                         ; 0043fb6a
    FLD float ptr [EBX + 0x34]          ; 0043fb6d
    FLDZ                                ; 0043fb70
    FXCH ST3                            ; 0043fb72
    FSTP float ptr [EBX + 0x38]         ; 0043fb74
    FXCH                                ; 0043fb77
    FSTP float ptr [EBX + 0x3c]         ; 0043fb79
    FXCH                                ; 0043fb7c
    FCOMPP                              ; 0043fb7e
    FNSTSW AX                           ; 0043fb80
    SAHF                                ; 0043fb82
    JC 0x0043fbbe                       ; 0043fb83
        ;   XREF to: 0043fbbe (CONDITIONAL_JUMP)  ; LAB_0043fbbe
    LEA ESP,[EBP + 0x76]                ; 0043fb85
    POP EBP                             ; 0043fb88
    POP EDI                             ; 0043fb89
    POP ESI                             ; 0043fb8a
    POP EBX                             ; 0043fb8b
    RET                                 ; 0043fb8c
    FLD float ptr [ESI + 0x4]           ; 0043fb8d
        ;   Label: LAB_0043fb8d
    FMUL ST0                            ; 0043fb90
    FLD float ptr [ESI]                 ; 0043fb92
    FMUL ST0                            ; 0043fb94
    FADDP                               ; 0043fb96
    FLD float ptr [ESI + 0x8]           ; 0043fb98
    FMUL ST0                            ; 0043fb9b
    FADDP                               ; 0043fb9d
    FSQRT                               ; 0043fb9f
    FST float ptr [EBP + 0x72]          ; 0043fba1
    FCOMP float ptr [EBX + 0x44]        ; 0043fba4
    FNSTSW AX                           ; 0043fba7
    SAHF                                ; 0043fba9
    JBE 0x0043faa3                      ; 0043fbaa
        ;   XREF to: 0043faa3 (CONDITIONAL_JUMP)  ; LAB_0043faa3
    MOV EAX,dword ptr [EBP + 0x72]      ; 0043fbb0
    MOV dword ptr [EBP + 0x6e],EDI      ; 0043fbb3
    MOV dword ptr [EBX + 0x44],EAX      ; 0043fbb6
    JMP 0x0043faa3                      ; 0043fbb9
        ;   XREF to: 0043faa3 (UNCONDITIONAL_JUMP)  ; LAB_0043faa3
    MOV EAX,dword ptr [EBX + 0x34]      ; 0043fbbe
        ;   Label: LAB_0043fbbe
    MOV dword ptr [EBX + 0x44],EAX      ; 0043fbc1
    LEA ESP,[EBP + 0x76]                ; 0043fbc4
    POP EBP                             ; 0043fbc7
    POP EDI                             ; 0043fbc8
    POP ESI                             ; 0043fbc9
    POP EBX                             ; 0043fbca
    RET                                 ; 0043fbcb

