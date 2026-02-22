; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
;   CDemonSet g_CDemonSetInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_0056d090
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422a50
        ;   Label: core_boxactor.cpp_CLightActor_process_FUN_00422a50
    PUSH EBP                            ; 00422a51
    SUB ESP,0xdc                        ; 00422a52
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00422a58
    PUSH dword ptr [ESP + 0xec]         ; 00422a5f
    PUSH EBX                            ; 00422a66
    CALL core_boxactor.cpp_CBoxActor_process_FUN_004219e0 ; 00422a67
        ;   XREF to: 004219e0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_004219e0(CBoxActor * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x66c]     ; 00422a6c
    ADD ESP,0x8                         ; 00422a72
    CMP EDX,0x2                         ; 00422a75
    JZ 0x00422a9d                       ; 00422a78
        ;   XREF to: 00422a9d (CONDITIONAL_JUMP)  ; LAB_00422a9d
    CMP dword ptr [EBX + 0x66c],0x3     ; 00422a7a
        ;   Label: LAB_00422a7a
    JZ 0x00422b17                       ; 00422a81
        ;   XREF to: 00422b17 (CONDITIONAL_JUMP)  ; LAB_00422b17
    CMP dword ptr [EBX + 0x2324],0x0    ; 00422a87
    JNZ 0x00422b85                      ; 00422a8e
        ;   XREF to: 00422b85 (CONDITIONAL_JUMP)  ; LAB_00422b85
    ADD ESP,0xdc                        ; 00422a94
    POP EBP                             ; 00422a9a
    POP EBX                             ; 00422a9b
    RET                                 ; 00422a9c
    FLD float ptr [EBX + 0x3634]        ; 00422a9d
        ;   Label: LAB_00422a9d
    FSUB float ptr [ESP + 0xec]         ; 00422aa3
    FST float ptr [EBX + 0x3634]        ; 00422aaa
    FLDZ                                ; 00422ab0
    FCOMPP                              ; 00422ab2
    FNSTSW AX                           ; 00422ab4
    SAHF                                ; 00422ab6
    JC 0x00422a7a                       ; 00422ab7
        ;   XREF to: 00422a7a (CONDITIONAL_JUMP)  ; LAB_00422a7a
    PUSH 0x0                            ; 00422ab9
    PUSH 0x0                            ; 00422abb
    PUSH 0x0                            ; 00422abd
    PUSH 0x7                            ; 00422abf
    PUSH 0x0                            ; 00422ac1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00422ac3
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV EDX,EAX                         ; 00422ac8
    SHL EAX,0x2                         ; 00422aca
    ADD EAX,EDX                         ; 00422acd
    SHL EAX,0x2                         ; 00422acf
    SUB EAX,EDX                         ; 00422ad2
    SHL EAX,0x2                         ; 00422ad4
    ADD ESP,0x8                         ; 00422ad7
    ADD EAX,0x8229ec                    ; 00422ada | CDemonFilter_ARRAY_008229ec
    PUSH EAX                            ; 00422adf
    LEA EAX,[EBX + 0x670]               ; 00422ae0
    PUSH EAX                            ; 00422ae6
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00422ae7
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00422aec
    PUSH 0x3e19999a                     ; 00422aef
    PUSH 0x0                            ; 00422af4
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00422af6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EAX,[EBX + 0x20]                ; 00422b17
        ;   Label: LAB_00422b17
    PUSH EAX                            ; 00422b1a
    ADD EBX,0x3638                      ; 00422b1b
    PUSH EBX                            ; 00422b21
    CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310 ; 00422b22
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
    ADD ESP,0x8                         ; 00422b27
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00422b2a
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00422b2f
    AND EDX,0x7fff                      ; 00422b31
    MOV EAX,EDX                         ; 00422b37
    MOV dword ptr [EBX + 0x3c],EDX      ; 00422b39
    SAR EDX,0x1f                        ; 00422b3c
    SHL EDX,0x8                         ; 00422b3f
    SBB EAX,EDX                         ; 00422b42
    SAR EAX,0x8                         ; 00422b44
    MOV EDX,EAX                         ; 00422b47
    SAR EDX,0x1f                        ; 00422b49
    SHL EDX,0x2                         ; 00422b4c
    SBB EAX,EDX                         ; 00422b4f
    SAR EAX,0x2                         ; 00422b51
    PUSH 0x40000000                     ; 00422b54
    PUSH EBX                            ; 00422b59
    MOV byte ptr [EBX + 0x1c],AL        ; 00422b5a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 00422b5d
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 00422b62
    PUSH EBX                            ; 00422b65
    MOV EBP,dword ptr [0x006810c8]      ; 00422b66 | g_CDemonSetPtr
    PUSH EBP                            ; 00422b6c | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 00422b6d
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110 ; 00422b74
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 00422b79
    ADD ESP,0xdc                        ; 00422b7c
    POP EBP                             ; 00422b82
    POP EBX                             ; 00422b83
    RET                                 ; 00422b84
    LEA EAX,[EBX + 0x361c]              ; 00422b85
        ;   Label: LAB_00422b85
    PUSH EAX                            ; 00422b8b
    LEA EAX,[ESP + 0xd0]                ; 00422b8c
    PUSH EAX                            ; 00422b93
    PUSH EBX                            ; 00422b94
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00422b95
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0xd8]                ; 00422b9a
    LEA EDX,[EBX + 0x674]               ; 00422ba1
    ADD ESP,0xc                         ; 00422ba7
    CMP EDX,EAX                         ; 00422baa
    JZ 0x00422bcb                       ; 00422bac
        ;   XREF to: 00422bcb (CONDITIONAL_JUMP)  ; LAB_00422bcb
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00422bae
    MOV dword ptr [EDX],EAX             ; 00422bb5
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00422bb7
    MOV dword ptr [EDX + 0x4],EAX       ; 00422bbe
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00422bc1
    MOV dword ptr [EDX + 0x8],EAX       ; 00422bc8
    PUSH EDI                            ; 00422bcb
        ;   Label: LAB_00422bcb
    PUSH ESI                            ; 00422bcc
    LEA EAX,[EBX + 0x3628]              ; 00422bcd
    PUSH EAX                            ; 00422bd3
    PUSH 0x3f87558                      ; 00422bd4 | g_ZeroVector
    LEA EAX,[ESP + 0xa0]                ; 00422bd9
    PUSH EAX                            ; 00422be0
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00422be1
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00422be6
    LEA EAX,[EBX + 0x30]                ; 00422be9
    PUSH EAX                            ; 00422bec
    PUSH 0x3f87558                      ; 00422bed | g_ZeroVector
    LEA EAX,[ESP + 0x40]                ; 00422bf2
    PUSH EAX                            ; 00422bf6
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00422bf7
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00422bfc
    LEA EAX,[ESP + 0x38]                ; 00422bff
    PUSH EAX                            ; 00422c03
    LEA EAX,[ESP + 0x9c]                ; 00422c04
    PUSH EAX                            ; 00422c0b
    LEA ESI,[ESP + 0x10]                ; 00422c0c
    LEA EDI,[ESP + 0x70]                ; 00422c10
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00422c14
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 00422c19
    LEA EAX,[ESP + 0xc8]                ; 00422c1c
    MOV ECX,0xc                         ; 00422c23
    PUSH EAX                            ; 00422c28
    LEA EAX,[ESP + 0x6c]                ; 00422c29
    LEA ESI,[ESP + 0xc]                 ; 00422c2d
    PUSH EAX                            ; 00422c31
    MOVSD.REP ES:EDI,ESI                ; 00422c32
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00422c34
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 00422c39
    LEA EAX,[ESP + 0xc8]                ; 00422c3c
    LEA ESI,[EBX + 0x670]               ; 00422c43
    PUSH EAX                            ; 00422c49
    ADD EBX,0x680                       ; 00422c4a
    PUSH EBX                            ; 00422c50
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00422c51
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00422c56
    PUSH ESI                            ; 00422c59
    MOV EDI,dword ptr [0x006810c8]      ; 00422c5a | g_CDemonSetPtr
    PUSH EDI                            ; 00422c60 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0056d090 ; 00422c61
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_0056d090(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00422c66
    POP ESI                             ; 00422c69
    POP EDI                             ; 00422c6a
    ADD ESP,0xdc                        ; 00422c6b
    POP EBP                             ; 00422c71
    POP EBX                             ; 00422c72
    RET                                 ; 00422c73

