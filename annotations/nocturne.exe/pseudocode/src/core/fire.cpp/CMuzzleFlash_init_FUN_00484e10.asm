; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 at 0048af5f
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484e10
        ;   Label: core_fire.cpp_CMuzzleFlash_init_FUN_00484e10
    PUSH ESI                            ; 00484e11
    PUSH EDI                            ; 00484e12
    SUB ESP,0x18                        ; 00484e13
    MOV EDI,dword ptr [ESP + 0x28]      ; 00484e16
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00484e1a
    PUSH ESI                            ; 00484e1e
    LEA EBX,[EDI + 0x1c]                ; 00484e1f
    PUSH EBX                            ; 00484e22
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 00484e23
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00484e28
    PUSH 0x41000000                     ; 00484e2b
    MOV dword ptr [EBX + 0x3c],0x8000   ; 00484e30
    PUSH EBX                            ; 00484e37
    MOV byte ptr [EBX + 0x1c],0x20      ; 00484e38
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 00484e3c
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 00484e41
    PUSH EBX                            ; 00484e44
    MOV EDX,dword ptr [0x005be368]      ; 00484e45 | DAT_005be368
    PUSH EDX                            ; 00484e4b | DAT_01e57284
    MOV dword ptr [EBX + 0x20],0x0      ; 00484e4c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 00484e53
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 00484e58
    XOR ECX,ECX                         ; 00484e5b
    LEA EAX,[EDI + 0x4]                 ; 00484e5d
    MOV dword ptr [ESP],ECX             ; 00484e60
    MOV dword ptr [ESP + 0x4],ECX       ; 00484e63
    MOV dword ptr [ESP + 0x8],ECX       ; 00484e67
    CMP EAX,ESI                         ; 00484e6b
    JZ 0x00484e7f                       ; 00484e6d
        ;   XREF to: 00484e7f (CONDITIONAL_JUMP)  ; LAB_00484e7f
    MOV EDX,dword ptr [ESI]             ; 00484e6f
    MOV dword ptr [EAX],EDX             ; 00484e71
    MOV EDX,dword ptr [ESI + 0x4]       ; 00484e73
    MOV dword ptr [EAX + 0x4],EDX       ; 00484e76
    MOV EDX,dword ptr [ESI + 0x8]       ; 00484e79
    MOV dword ptr [EAX + 0x8],EDX       ; 00484e7c
    LEA EAX,[ESP + 0xc]                 ; 00484e7f
        ;   Label: LAB_00484e7f
    PUSH EAX                            ; 00484e83
    MOV EAX,dword ptr [ESP + 0x34]      ; 00484e84
    PUSH EAX                            ; 00484e88
    LEA EBX,[EDI + 0x10]                ; 00484e89
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00484e8c
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00484e91
    CMP EBX,EAX                         ; 00484e94
    JNZ 0x00484ea5                      ; 00484e96
        ;   XREF to: 00484ea5 (CONDITIONAL_JUMP)  ; LAB_00484ea5
    MOV dword ptr [EDI],0x2             ; 00484e98
    ADD ESP,0x18                        ; 00484e9e
    POP EDI                             ; 00484ea1
    POP ESI                             ; 00484ea2
    POP EBX                             ; 00484ea3
    RET                                 ; 00484ea4
    MOV EDX,dword ptr [EAX]             ; 00484ea5
        ;   Label: LAB_00484ea5
    MOV dword ptr [EBX],EDX             ; 00484ea7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00484ea9
    MOV dword ptr [EBX + 0x4],EDX       ; 00484eac
    MOV EDX,dword ptr [EAX + 0x8]       ; 00484eaf
    MOV dword ptr [EBX + 0x8],EDX       ; 00484eb2
    MOV dword ptr [EDI],0x2             ; 00484eb5
    ADD ESP,0x18                        ; 00484ebb
    POP EDI                             ; 00484ebe
    POP ESI                             ; 00484ebf
    POP EBX                             ; 00484ec0
    RET                                 ; 00484ec1

