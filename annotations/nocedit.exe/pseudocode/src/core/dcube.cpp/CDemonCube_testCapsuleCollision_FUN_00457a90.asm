; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube * this_ptr, SIntersectXZCylinder * capsule_data)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   capsule_data
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60 at 00496dda
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
;   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457a90
        ;   Label: core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
    PUSH ESI                            ; 00457a91
    PUSH EDI                            ; 00457a92
    PUSH EBP                            ; 00457a93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00457a94
    MOV EBP,0xffffffff                  ; 00457a98
    MOV EDX,dword ptr [EDI + 0x28]      ; 00457a9d
    XOR EBX,EBX                         ; 00457aa0
    TEST EDX,EDX                        ; 00457aa2
    JLE 0x00457acc                      ; 00457aa4
        ;   XREF to: 00457acc (CONDITIONAL_JUMP)  ; LAB_00457acc
    XOR ESI,ESI                         ; 00457aa6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00457aa8
        ;   Label: LAB_00457aa8
    PUSH EAX                            ; 00457aac
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457aad
    ADD EAX,ESI                         ; 00457ab0
    PUSH EAX                            ; 00457ab2
    CALL core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30 ; 00457ab3
        ;   XREF to: 00455a30 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30(CVector3f * * triangle_vertices, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00457ab8
    TEST EAX,EAX                        ; 00457abb
    JZ 0x00457ac1                       ; 00457abd
        ;   XREF to: 00457ac1 (CONDITIONAL_JUMP)  ; LAB_00457ac1
    MOV EBP,EBX                         ; 00457abf
    INC EBX                             ; 00457ac1
        ;   Label: LAB_00457ac1
    MOV ECX,dword ptr [EDI + 0x28]      ; 00457ac2
    ADD ESI,0x20                        ; 00457ac5
    CMP EBX,ECX                         ; 00457ac8
    JL 0x00457aa8                       ; 00457aca
        ;   XREF to: 00457aa8 (CONDITIONAL_JUMP)  ; LAB_00457aa8
    TEST EBP,EBP                        ; 00457acc
        ;   Label: LAB_00457acc
    JL 0x00457b20                       ; 00457ace
        ;   XREF to: 00457b20 (CONDITIONAL_JUMP)  ; LAB_00457b20
    MOV EBX,EBP                         ; 00457ad0
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457ad2
    SHL EBX,0x5                         ; 00457ad5
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00457ad8
    CMP EAX,0x15c4800                   ; 00457adb | g_TempNormal0
    JNZ 0x00457b25                      ; 00457ae0
        ;   XREF to: 00457b25 (CONDITIONAL_JUMP)  ; LAB_00457b25
    MOV EBX,EBP                         ; 00457ae2
        ;   Label: LAB_00457ae2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457ae4
    SHL EBX,0x5                         ; 00457ae7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00457aea
    CMP EAX,0x15c480c                   ; 00457aee | g_TempNormal1
    JZ 0x00457b0f                       ; 00457af3
        ;   XREF to: 00457b0f (CONDITIONAL_JUMP)  ; LAB_00457b0f
    FLD float ptr [EAX]                 ; 00457af5
    FLD float ptr [EAX + 0x8]           ; 00457af7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457afa
    MOV dword ptr [0x015c4810],EDX      ; 00457afd | g_TempNormal1.y
    FSTP float ptr [0x015c4814]         ; 00457b03 | g_TempNormal1.z
    FSTP float ptr [0x015c480c]         ; 00457b09 | g_TempNormal1
    SHL EBP,0x5                         ; 00457b0f
        ;   Label: LAB_00457b0f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457b12
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8] ; 00457b15
    CMP EAX,0x15c4818                   ; 00457b19 | g_TempNormal2
    JNZ 0x00457b41                      ; 00457b1e
        ;   XREF to: 00457b41 (CONDITIONAL_JUMP)  ; LAB_00457b41
    POP EBP                             ; 00457b20
        ;   Label: LAB_00457b20
    POP EDI                             ; 00457b21
    POP ESI                             ; 00457b22
    POP EBX                             ; 00457b23
    RET                                 ; 00457b24
    FLD float ptr [EAX]                 ; 00457b25
        ;   Label: LAB_00457b25
    FLD float ptr [EAX + 0x8]           ; 00457b27
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457b2a
    MOV dword ptr [0x015c4804],EDX      ; 00457b2d | g_TempNormal0.y
    FSTP float ptr [0x015c4808]         ; 00457b33 | g_TempNormal0.z
    FSTP float ptr [0x015c4800]         ; 00457b39 | g_TempNormal0
    JMP 0x00457ae2                      ; 00457b3f
        ;   XREF to: 00457ae2 (UNCONDITIONAL_JUMP)  ; LAB_00457ae2
    FLD float ptr [EAX]                 ; 00457b41
        ;   Label: LAB_00457b41
    FLD float ptr [EAX + 0x8]           ; 00457b43
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457b46
    MOV dword ptr [0x015c481c],EDX      ; 00457b49 | g_TempNormal2.y
    FSTP float ptr [0x015c4820]         ; 00457b4f | g_TempNormal2.z
    FSTP float ptr [0x015c4818]         ; 00457b55 | g_TempNormal2
    POP EBP                             ; 00457b5b
    POP EDI                             ; 00457b5c
    POP ESI                             ; 00457b5d
    POP EBX                             ; 00457b5e
    RET                                 ; 00457b5f

