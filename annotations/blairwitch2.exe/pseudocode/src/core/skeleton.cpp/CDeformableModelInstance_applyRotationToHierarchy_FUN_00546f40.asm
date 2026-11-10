; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   rotation_quat
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[9]:
;   core_doc.cpp_FUN_00453d80 at 00453fe2
;   core_doc.cpp_FUN_00455170 at 00455234
;   core_doc.cpp_FUN_004555c0 at 00455a50
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004b0143
;   core_icepick.cpp_FUN_004d5470 at 004d556e
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_004fef30 at 004ff234
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880 at 00567d50
;   core_stranger.cpp_FUN_00565ff0 at 00566246
;   core_stranger.cpp_FUN_00567430 at 005674f4
;
; Referenced Globals:
;   undefined4 DAT_005e7337
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAxisAngle_FUN_00594060
;   core_xform.cpp_quaternionToAxisAngle_FUN_00593d50
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   core_xform.cpp_transformVector3x4InPlace_FUN_005915b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546f40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
    PUSH ESI                            ; 00546f41
    PUSH EDI                            ; 00546f42
    PUSH EBP                            ; 00546f43
    MOV EBP,ESP                         ; 00546f44
    SUB ESP,0xd4                        ; 00546f46
    AND ESP,0xfffffff8                  ; 00546f4c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00546f4f
    PUSH EDX                            ; 00546f52
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00546f53
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546f58
    MOV ESI,EAX                         ; 00546f5b
    MOV dword ptr [ESP + 0xc4],EAX      ; 00546f5d
    LEA EAX,[ESP + 0xb4]                ; 00546f64
    PUSH EAX                            ; 00546f6b
    LEA EAX,[ESP + 0xc4]                ; 00546f6c
    PUSH EAX                            ; 00546f73
    MOV ECX,dword ptr [EBP + 0x18]      ; 00546f74
    PUSH ECX                            ; 00546f77
    XOR EBX,EBX                         ; 00546f78
    CALL core_xform.cpp_quaternionToAxisAngle_FUN_00593d50 ; 00546f7a
        ;   XREF to: 00593d50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToAxisAngle_FUN_00593d50()
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00546f7f
    ADD ESP,0xc                         ; 00546f85
    TEST EDI,EDI                        ; 00546f88
    JLE 0x00546ff2                      ; 00546f8a
        ;   XREF to: 00546ff2 (CONDITIONAL_JUMP)  ; LAB_00546ff2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00546f8c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00546f8f
    ADD EAX,0x6b0                       ; 00546f92
    MOV dword ptr [ESP + 0xc8],ESI      ; 00546f97
    MOV dword ptr [ESP + 0xcc],EAX      ; 00546f9e
    MOV ESI,dword ptr [EBP + 0x20]      ; 00546fa5
        ;   Label: LAB_00546fa5
    PUSH ESI                            ; 00546fa8
    PUSH EBX                            ; 00546fa9
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00546faa
    PUSH EDI                            ; 00546fb1
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 00546fb2
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00546fb7
    TEST EAX,EAX                        ; 00546fba
    JGE 0x00547003                      ; 00546fbc
        ;   XREF to: 00547003 (CONDITIONAL_JUMP)  ; LAB_00547003
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00546fbe
        ;   Label: LAB_00546fbe
    ADD EAX,0x10                        ; 00546fc5
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00546fc8
    MOV dword ptr [ESP + 0xc8],EAX      ; 00546fcf
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00546fd6
    INC EBX                             ; 00546fdd
    ADD EDX,0x10                        ; 00546fde
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 00546fe1
    MOV dword ptr [ESP + 0xcc],EDX      ; 00546fe7
    CMP EBX,ECX                         ; 00546fee
    JL 0x00546fa5                       ; 00546ff0
        ;   XREF to: 00546fa5 (CONDITIONAL_JUMP)  ; LAB_00546fa5
    CMP dword ptr [EBP + 0x20],0x0      ; 00546ff2
        ;   Label: LAB_00546ff2
    JL 0x0054709b                       ; 00546ff6
        ;   XREF to: 0054709b (CONDITIONAL_JUMP)  ; LAB_0054709b
    MOV ESP,EBP                         ; 00546ffc
    POP EBP                             ; 00546ffe
    POP EDI                             ; 00546fff
    POP ESI                             ; 00547000
    POP EBX                             ; 00547001
    RET                                 ; 00547002
    MOV EDX,dword ptr [EBP + 0x14]      ; 00547003
        ;   Label: LAB_00547003
    PUSH EDX                            ; 00547006
    PUSH EAX                            ; 00547007
    PUSH dword ptr [EBP + 0x1c]         ; 00547008
    PUSH ESI                            ; 0054700b
    PUSH EBX                            ; 0054700c
    CALL dword ptr [EBP + 0x24]         ; 0054700d
    MOV dword ptr [ESP + 0xe4],EAX      ; 00547010
    FLD float ptr [ESP + 0xe4]          ; 00547017
    ADD ESP,0x14                        ; 0054701e
    FMUL float ptr [ESP + 0xc0]         ; 00547021
    FST float ptr [ESP]                 ; 00547028
    FABS                                ; 0054702b
    FCOMP double ptr [0x005e7337]       ; 0054702d | DAT_005e7337
    FNSTSW AX                           ; 00547033
    SAHF                                ; 00547035
    JBE 0x00546fbe                      ; 00547036
        ;   XREF to: 00546fbe (CONDITIONAL_JUMP)  ; LAB_00546fbe
    LEA EAX,[ESP + 0xb4]                ; 00547038
    PUSH EAX                            ; 0054703f
    LEA ESI,[ESP + 0xa8]                ; 00547040
    PUSH dword ptr [ESP + 0x4]          ; 00547047
    LEA EDI,[ESP + 0x8c]                ; 0054704b
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_00594060 ; 00547052
        ;   XREF to: 00594060 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAxisAngle_FUN_00594060()
    LEA ESI,[ESP + 0xac]                ; 00547057
    ADD ESP,0x8                         ; 0054705e
    LEA EAX,[ESP + 0x84]                ; 00547061
    MOVSD ES:EDI,ESI                    ; 00547068
    MOVSD ES:EDI,ESI                    ; 00547069
    MOVSD ES:EDI,ESI                    ; 0054706a
    MOVSD ES:EDI,ESI                    ; 0054706b
    PUSH EAX                            ; 0054706c
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0054706d
    PUSH ESI                            ; 00547074
    LEA ESI,[ESP + 0x6c]                ; 00547075
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00547079
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 0054707e
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00547081
    LEA ESI,[ESP + 0x64]                ; 00547088
    LEA EDI,[EDI + 0x6b0]               ; 0054708c
    MOVSD ES:EDI,ESI                    ; 00547092
    MOVSD ES:EDI,ESI                    ; 00547093
    MOVSD ES:EDI,ESI                    ; 00547094
    MOVSD ES:EDI,ESI                    ; 00547095
    JMP 0x00546fbe                      ; 00547096
        ;   XREF to: 00546fbe (UNCONDITIONAL_JUMP)  ; LAB_00546fbe
    FLD float ptr [ESP + 0xc0]          ; 0054709b
        ;   Label: LAB_0054709b
    LEA EAX,[ESP + 0xb4]                ; 005470a2
    FMUL float ptr [EBP + 0x1c]         ; 005470a9
    PUSH EAX                            ; 005470ac
    LEA ESI,[ESP + 0x78]                ; 005470ad
    SUB ESP,0x4                         ; 005470b1
    LEA EDI,[ESP + 0x9c]                ; 005470b4
    FSTP float ptr [ESP]                ; 005470bb
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_00594060 ; 005470be
        ;   XREF to: 00594060 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAxisAngle_FUN_00594060()
    LEA ESI,[ESP + 0x7c]                ; 005470c3
    ADD ESP,0x8                         ; 005470c7
    LEA EAX,[ESP + 0x94]                ; 005470ca
    MOVSD ES:EDI,ESI                    ; 005470d1
    MOVSD ES:EDI,ESI                    ; 005470d2
    MOVSD ES:EDI,ESI                    ; 005470d3
    MOVSD ES:EDI,ESI                    ; 005470d4
    PUSH EAX                            ; 005470d5
    LEA ESI,[ESP + 0x38]                ; 005470d6
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005470da
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    ADD ESP,0x4                         ; 005470df
    LEA EAX,[ESP + 0x4]                 ; 005470e2
    LEA EDI,[ESP + 0x4]                 ; 005470e6
    PUSH EAX                            ; 005470ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 005470eb
    MOV ECX,0xc                         ; 005470ee
    ADD EAX,0x6a4                       ; 005470f3
    LEA ESI,[ESP + 0x38]                ; 005470f8
    PUSH EAX                            ; 005470fc
    MOVSD.REP ES:EDI,ESI                ; 005470fd
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005915b0 ; 005470ff
        ;   XREF to: 005915b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005915b0()
    ADD ESP,0x8                         ; 00547104
    MOV ESP,EBP                         ; 00547107
    POP EBP                             ; 00547109
    POP EDI                             ; 0054710a
    POP ESI                             ; 0054710b
    POP EBX                             ; 0054710c
    RET                                 ; 0054710d

