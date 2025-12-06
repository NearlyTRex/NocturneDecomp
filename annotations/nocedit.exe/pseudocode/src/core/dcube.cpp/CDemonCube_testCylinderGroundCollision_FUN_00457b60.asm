; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, CVector3f * output_normal, uint * output_material)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   cylinder_position
; float            Stack[0xc]:4   cylinder_radius
; CVector3f *      Stack[0x10]:4   output_height
; CVector3f *      Stack[0x14]:4   output_normal
; uint *           Stack[0x18]:4   output_material
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950 at 00496ac1
;
; Referenced Globals:
;   CVector3f g_TempNormal0
;   undefined4 g_TempNormal0.y
;   undefined4 g_TempNormal0.z
;   CVector3f g_TempNormal1
;   undefined4 g_TempNormal1.y
;   undefined4 g_TempNormal1.z
;   CVector3f g_TempNormal2
;   undefined4 g_TempNormal2.y
;   undefined4 g_TempNormal2.z
;
; Called Functions:
;   core_dcube.cpp_triangleCylinderCollision_FUN_00456040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457b60
        ;   Label: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
    PUSH ESI                            ; 00457b61
    PUSH EDI                            ; 00457b62
    PUSH EBP                            ; 00457b63
    SUB ESP,0xc                         ; 00457b64
    MOV EDI,dword ptr [ESP + 0x20]      ; 00457b67
    MOV EBP,0xffffffff                  ; 00457b6b
    MOV EDX,dword ptr [EDI + 0x28]      ; 00457b70
    XOR EBX,EBX                         ; 00457b73
    TEST EDX,EDX                        ; 00457b75
    JLE 0x00457ba8                      ; 00457b77 | LAB_00457ba8
        ;   XREF to: 00457ba8 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00457b79
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00457b7b
        ;   Label: LAB_00457b7b
    PUSH EAX                            ; 00457b7f
    MOV EDX,dword ptr [ESP + 0x28]      ; 00457b80
    PUSH dword ptr [ESP + 0x2c]         ; 00457b84
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457b88
    PUSH EDX                            ; 00457b8b
    ADD EAX,ESI                         ; 00457b8c
    PUSH EAX                            ; 00457b8e
    CALL core_dcube.cpp_triangleCylinderCollision_FUN_00456040 ; 00457b8f | uint core_dcube.cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)
        ;   XREF to: 00456040 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00457b94
    TEST EAX,EAX                        ; 00457b97
    JZ 0x00457b9d                       ; 00457b99 | LAB_00457b9d
        ;   XREF to: 00457b9d (CONDITIONAL_JUMP)
    MOV EBP,EBX                         ; 00457b9b
    INC EBX                             ; 00457b9d
        ;   Label: LAB_00457b9d
    MOV ECX,dword ptr [EDI + 0x28]      ; 00457b9e
    ADD ESI,0x20                        ; 00457ba1
    CMP EBX,ECX                         ; 00457ba4
    JL 0x00457b7b                       ; 00457ba6 | LAB_00457b7b
        ;   XREF to: 00457b7b (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 00457ba8
        ;   Label: LAB_00457ba8
    JL 0x00457c94                       ; 00457baa | LAB_00457c94
        ;   XREF to: 00457c94 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 00457bb0
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457bb2
    SHL EBX,0x5                         ; 00457bb5
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00457bb8
    CMP EAX,0x15c4800                   ; 00457bbb | CVector3f g_TempNormal0
    JZ 0x00457bdc                       ; 00457bc0 | LAB_00457bdc
        ;   XREF to: 00457bdc (CONDITIONAL_JUMP)
    FLD float ptr [EAX]                 ; 00457bc2
    FLD float ptr [EAX + 0x8]           ; 00457bc4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457bc7
    MOV dword ptr [0x015c4804],EDX      ; 00457bca | g_TempNormal0.y
    FSTP float ptr [0x015c4808]         ; 00457bd0 | g_TempNormal0.z
    FSTP float ptr [0x015c4800]         ; 00457bd6 | CVector3f g_TempNormal0
    MOV EAX,EBP                         ; 00457bdc
        ;   Label: LAB_00457bdc
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00457bde
    SHL EAX,0x5                         ; 00457be1
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00457be4
    CMP EAX,0x15c480c                   ; 00457be8 | CVector3f g_TempNormal1
    JZ 0x00457c09                       ; 00457bed | LAB_00457c09
        ;   XREF to: 00457c09 (CONDITIONAL_JUMP)
    FLD float ptr [EAX]                 ; 00457bef
    FLD float ptr [EAX + 0x8]           ; 00457bf1
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457bf4
    MOV dword ptr [0x015c4810],EDX      ; 00457bf7 | g_TempNormal1.y
    FSTP float ptr [0x015c4814]         ; 00457bfd | g_TempNormal1.z
    FSTP float ptr [0x015c480c]         ; 00457c03 | CVector3f g_TempNormal1
    MOV EBX,EBP                         ; 00457c09
        ;   Label: LAB_00457c09
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457c0b
    SHL EBX,0x5                         ; 00457c0e
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00457c11
    CMP EAX,0x15c4818                   ; 00457c15 | CVector3f g_TempNormal2
    JZ 0x00457c36                       ; 00457c1a | LAB_00457c36
        ;   XREF to: 00457c36 (CONDITIONAL_JUMP)
    FLD float ptr [EAX]                 ; 00457c1c
    FLD float ptr [EAX + 0x8]           ; 00457c1e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457c21
    MOV dword ptr [0x015c481c],EDX      ; 00457c24 | g_TempNormal2.y
    FSTP float ptr [0x015c4820]         ; 00457c2a | g_TempNormal2.z
    FSTP float ptr [0x015c4818]         ; 00457c30 | CVector3f g_TempNormal2
    MOV EAX,dword ptr [EDI + 0x30]      ; 00457c36
        ;   Label: LAB_00457c36
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 00457c39
    MOV EBX,dword ptr [ESP + 0x34]      ; 00457c3c
    AND EAX,0xff                        ; 00457c40
    MOV dword ptr [EBX],EAX             ; 00457c45
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457c47
    SHL EBP,0x5                         ; 00457c4a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00457c4d
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 00457c51
    FCHS                                ; 00457c55
    FSTP float ptr [ESP]                ; 00457c57
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 00457c5a
    FCHS                                ; 00457c5e
    FSTP float ptr [ESP + 0x4]          ; 00457c60
    FLD float ptr [EAX + EBP*0x1 + 0x14] ; 00457c64
    FCHS                                ; 00457c68
    MOV EAX,ESP                         ; 00457c6a
    FSTP float ptr [ESP + 0x8]          ; 00457c6c
    CMP EAX,EBX                         ; 00457c70
    JZ 0x00457c87                       ; 00457c72 | LAB_00457c87
        ;   XREF to: 00457c87 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00457c74
    MOV dword ptr [EBX],EAX             ; 00457c77
    MOV EAX,dword ptr [ESP + 0x4]       ; 00457c79
    MOV dword ptr [EBX + 0x4],EAX       ; 00457c7d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00457c80
    MOV dword ptr [EBX + 0x8],EAX       ; 00457c84
    MOV EAX,0x1                         ; 00457c87
        ;   Label: LAB_00457c87
    ADD ESP,0xc                         ; 00457c8c
    POP EBP                             ; 00457c8f
    POP EDI                             ; 00457c90
    POP ESI                             ; 00457c91
    POP EBX                             ; 00457c92
    RET                                 ; 00457c93
    XOR EAX,EAX                         ; 00457c94
        ;   Label: LAB_00457c94
    ADD ESP,0xc                         ; 00457c96
    POP EBP                             ; 00457c99
    POP EDI                             ; 00457c9a
    POP ESI                             ; 00457c9b
    POP EBX                             ; 00457c9c
    RET                                 ; 00457c9d

