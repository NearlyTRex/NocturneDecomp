; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter *this_ptr,int bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[35]:
;   core_basicene.cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0 at 0059e85b
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411c80
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004131d1
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 004150be
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418a92
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041dd88
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_00436420 at 00436463
;   core_construc.cpp_CConstruct_process_FUN_00436e80 at 0043732e
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 00439524
;   core_doc.cpp_FUN_00453250 at 00453c12
;   ... and 25 more
;
; Referenced Globals:
;   undefined4 s_Bip01_L_Foot_005cd275+1
;   TerminatedCString s_Bip01_R_Foot_005cd283
;   TerminatedCString s_Bip01_L_Foot_005cd290
;   TerminatedCString s_Bip01_R_Foot_005cd29d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   core_skeleton.cpp_FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042aa00
        ;   Label: core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
    PUSH ESI                            ; 0042aa01
    PUSH EDI                            ; 0042aa02
    PUSH EBP                            ; 0042aa03
    SUB ESP,0x60                        ; 0042aa04
    MOV EBX,dword ptr [ESP + 0x74]      ; 0042aa07
    MOV EAX,dword ptr [ESP + 0x78]      ; 0042aa0b
    LEA ESI,[EBX + 0x2b4]               ; 0042aa0f
    CMP EAX,0x7                         ; 0042aa15
    JNC 0x0042abb7                      ; 0042aa18
        ;   XREF to: 0042abb7 (CONDITIONAL_JUMP)  ; LAB_0042abb7
    CMP EAX,0x1                         ; 0042aa1e
    JNZ 0x0042aa2c                      ; 0042aa21
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    CMP dword ptr [EBX + 0x2570],0x0    ; 0042aa23
    JNZ 0x0042aa34                      ; 0042aa2a
        ;   XREF to: 0042aa34 (CONDITIONAL_JUMP)  ; LAB_0042aa34
    ADD ESP,0x60                        ; 0042aa2c
        ;   Label: LAB_0042aa2c
    POP EBP                             ; 0042aa2f
    POP EDI                             ; 0042aa30
    POP ESI                             ; 0042aa31
    POP EBX                             ; 0042aa32
    RET                                 ; 0042aa33
    PUSH 0x0                            ; 0042aa34
        ;   Label: LAB_0042aa34
    PUSH 0x5cd276                       ; 0042aa36 | s_Bip01_L_Foot_005cd275+1
    PUSH ESI                            ; 0042aa3b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042aa3c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042aa41
    PUSH EAX                            ; 0042aa44
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042aa45
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042aa4a
    TEST EAX,EAX                        ; 0042aa4d
    JL 0x0042aa2c                       ; 0042aa4f
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x3f800000                     ; 0042aa51
    PUSH EAX                            ; 0042aa56
    PUSH ESI                            ; 0042aa57
    LEA ESI,[ESP + 0x48]                ; 0042aa58
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 0042aa5c
    CALL core_skeleton.cpp_FUN_005469a0 ; 0042aa62
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0042aa67
    LEA EAX,[ESP + 0x28]                ; 0042aa6a
    PUSH EAX                            ; 0042aa6e
    LEA EDI,[ESP + 0x2c]                ; 0042aa6f
    LEA ESI,[ESP + 0x44]                ; 0042aa73
    PUSH EBX                            ; 0042aa77
    MOVSD ES:EDI,ESI                    ; 0042aa78
    MOVSD ES:EDI,ESI                    ; 0042aa79
    MOVSD ES:EDI,ESI                    ; 0042aa7a
    CALL dword ptr [EBP + 0x2c]         ; 0042aa7b
    ADD ESP,0xc                         ; 0042aa7e
    ADD ESP,0x60                        ; 0042aa81
    POP EBP                             ; 0042aa84
    POP EDI                             ; 0042aa85
    POP ESI                             ; 0042aa86
    POP EBX                             ; 0042aa87
    RET                                 ; 0042aa88
    CMP dword ptr [EBX + 0x2570],0x0    ; 0042aa89
        ;   Label: LAB_0042aa89
    JZ 0x0042aa2c                       ; 0042aa90
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x0                            ; 0042aa92
    PUSH 0x5cd283                       ; 0042aa94 | = "Bip01 R Foot"
    PUSH ESI                            ; 0042aa99
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042aa9a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042aa9f
    PUSH EAX                            ; 0042aaa2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042aaa3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042aaa8
    TEST EAX,EAX                        ; 0042aaab
    JL 0x0042aa2c                       ; 0042aaad
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x3f800000                     ; 0042aab3
    PUSH EAX                            ; 0042aab8
    PUSH ESI                            ; 0042aab9
    LEA ESI,[ESP + 0xc]                 ; 0042aaba
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 0042aabe
    CALL core_skeleton.cpp_FUN_005469a0 ; 0042aac4
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0042aac9
    LEA EAX,[ESP + 0x58]                ; 0042aacc
    PUSH EAX                            ; 0042aad0
    LEA EDI,[ESP + 0x5c]                ; 0042aad1
    LEA ESI,[ESP + 0x8]                 ; 0042aad5
    PUSH EBX                            ; 0042aad9
    MOVSD ES:EDI,ESI                    ; 0042aada
    MOVSD ES:EDI,ESI                    ; 0042aadb
    MOVSD ES:EDI,ESI                    ; 0042aadc
    CALL dword ptr [EBP + 0x2c]         ; 0042aadd
    ADD ESP,0xc                         ; 0042aae0
    ADD ESP,0x60                        ; 0042aae3
    POP EBP                             ; 0042aae6
    POP EDI                             ; 0042aae7
    POP ESI                             ; 0042aae8
    POP EBX                             ; 0042aae9
    RET                                 ; 0042aaea
    CMP dword ptr [EBX + 0x2570],0x0    ; 0042aaeb
        ;   Label: LAB_0042aaeb
    JZ 0x0042aa2c                       ; 0042aaf2
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x0                            ; 0042aaf8
    PUSH 0x5cd290                       ; 0042aafa | = "Bip01 L Foot"
    PUSH ESI                            ; 0042aaff
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042ab00
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ab05
    PUSH EAX                            ; 0042ab08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042ab09
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042ab0e
    TEST EAX,EAX                        ; 0042ab11
    JL 0x0042aa2c                       ; 0042ab13
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x3fd9999a                     ; 0042ab19
    PUSH EAX                            ; 0042ab1e
    PUSH ESI                            ; 0042ab1f
    LEA ESI,[ESP + 0x3c]                ; 0042ab20
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 0042ab24
    CALL core_skeleton.cpp_FUN_005469a0 ; 0042ab2a
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0042ab2f
    LEA EAX,[ESP + 0x1c]                ; 0042ab32
    PUSH EAX                            ; 0042ab36
    LEA EDI,[ESP + 0x20]                ; 0042ab37
    LEA ESI,[ESP + 0x38]                ; 0042ab3b
    PUSH EBX                            ; 0042ab3f
    MOVSD ES:EDI,ESI                    ; 0042ab40
    MOVSD ES:EDI,ESI                    ; 0042ab41
    MOVSD ES:EDI,ESI                    ; 0042ab42
    CALL dword ptr [EBP + 0x2c]         ; 0042ab43
    ADD ESP,0xc                         ; 0042ab46
    ADD ESP,0x60                        ; 0042ab49
    POP EBP                             ; 0042ab4c
    POP EDI                             ; 0042ab4d
    POP ESI                             ; 0042ab4e
    POP EBX                             ; 0042ab4f
    RET                                 ; 0042ab50
    CMP dword ptr [EBX + 0x2570],0x0    ; 0042ab51
        ;   Label: LAB_0042ab51
    JZ 0x0042aa2c                       ; 0042ab58
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x0                            ; 0042ab5e
    PUSH 0x5cd29d                       ; 0042ab60 | = "Bip01 R Foot"
    PUSH ESI                            ; 0042ab65
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042ab66
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ab6b
    PUSH EAX                            ; 0042ab6e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042ab6f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042ab74
    TEST EAX,EAX                        ; 0042ab77
    JL 0x0042aa2c                       ; 0042ab79
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    PUSH 0x3fd9999a                     ; 0042ab7f
    PUSH EAX                            ; 0042ab84
    PUSH ESI                            ; 0042ab85
    LEA ESI,[ESP + 0x18]                ; 0042ab86
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 0042ab8a
    CALL core_skeleton.cpp_FUN_005469a0 ; 0042ab90
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0042ab95
    LEA EAX,[ESP + 0x4c]                ; 0042ab98
    PUSH EAX                            ; 0042ab9c
    LEA EDI,[ESP + 0x50]                ; 0042ab9d
    LEA ESI,[ESP + 0x14]                ; 0042aba1
    PUSH EBX                            ; 0042aba5
    MOVSD ES:EDI,ESI                    ; 0042aba6
    MOVSD ES:EDI,ESI                    ; 0042aba7
    MOVSD ES:EDI,ESI                    ; 0042aba8
    CALL dword ptr [EBP + 0x2c]         ; 0042aba9
    ADD ESP,0xc                         ; 0042abac
    ADD ESP,0x60                        ; 0042abaf
    POP EBP                             ; 0042abb2
    POP EDI                             ; 0042abb3
    POP ESI                             ; 0042abb4
    POP EBX                             ; 0042abb5
    RET                                 ; 0042abb6
    JBE 0x0042aa89                      ; 0042abb7
        ;   XREF to: 0042aa89 (CONDITIONAL_JUMP)  ; LAB_0042aa89
        ;   Label: LAB_0042abb7
    CMP EAX,0x1f                        ; 0042abbd
    JC 0x0042aa2c                       ; 0042abc0
        ;   XREF to: 0042aa2c (CONDITIONAL_JUMP)  ; LAB_0042aa2c
    JBE 0x0042aaeb                      ; 0042abc6
        ;   XREF to: 0042aaeb (CONDITIONAL_JUMP)  ; LAB_0042aaeb
    CMP EAX,0x25                        ; 0042abcc
    JZ 0x0042ab51                       ; 0042abcf
        ;   XREF to: 0042ab51 (CONDITIONAL_JUMP)  ; LAB_0042ab51
    ADD ESP,0x60                        ; 0042abd1
    POP EBP                             ; 0042abd4
    POP EDI                             ; 0042abd5
    POP ESI                             ; 0042abd6
    POP EBX                             ; 0042abd7
    RET                                 ; 0042abd8

