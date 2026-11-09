; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
;
; XREF[12]:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0048f5b0 at 0048f5e9
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010 at 0048c145
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0048e7f0 at 0048e8fc
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0048f120 at 0048f1b2
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 at 0048cc09
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40 at 0048faf4
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920 at 0048f9d5
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300 at 0048c46c
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0048e9b0 at 0048ecc5
;   core_dtrace.cpp_FUN_0048b150 at 0048b595
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048afe0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
    PUSH EDI                            ; 0048afe1
    PUSH EBP                            ; 0048afe2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048afe3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048afe7
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048afeb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048afef
    TEST EAX,EAX                        ; 0048aff3
    JL 0x0048b012                       ; 0048aff5
        ;   XREF to: 0048b012 (CONDITIONAL_JUMP)  ; LAB_0048b012
    TEST ECX,ECX                        ; 0048aff7
    JL 0x0048b012                       ; 0048aff9
        ;   XREF to: 0048b012 (CONDITIONAL_JUMP)  ; LAB_0048b012
    TEST EBX,EBX                        ; 0048affb
    JL 0x0048b012                       ; 0048affd
        ;   XREF to: 0048b012 (CONDITIONAL_JUMP)  ; LAB_0048b012
    CMP EAX,dword ptr [EDX + 0x40]      ; 0048afff
    JGE 0x0048b012                      ; 0048b002
        ;   XREF to: 0048b012 (CONDITIONAL_JUMP)  ; LAB_0048b012
    MOV EDI,dword ptr [EDX + 0x44]      ; 0048b004
    CMP ECX,EDI                         ; 0048b007
    JGE 0x0048b012                      ; 0048b009
        ;   XREF to: 0048b012 (CONDITIONAL_JUMP)  ; LAB_0048b012
    MOV EBP,dword ptr [EDX + 0x48]      ; 0048b00b
    CMP EBX,EBP                         ; 0048b00e
    JL 0x0048b018                       ; 0048b010
        ;   XREF to: 0048b018 (CONDITIONAL_JUMP)  ; LAB_0048b018
    XOR EAX,EAX                         ; 0048b012
        ;   Label: LAB_0048b012
    POP EBP                             ; 0048b014
    POP EDI                             ; 0048b015
    POP EBX                             ; 0048b016
    RET                                 ; 0048b017
    IMUL EAX,EDI                        ; 0048b018
        ;   Label: LAB_0048b018
    IMUL ECX,EBP                        ; 0048b01b
    IMUL EAX,EBP                        ; 0048b01e
    ADD ECX,EBX                         ; 0048b021
    ADD ECX,EAX                         ; 0048b023
    LEA EAX,[ECX*0x4 + 0x0]             ; 0048b025
    SUB EAX,ECX                         ; 0048b02c
    SHL EAX,0x2                         ; 0048b02e
    ADD ECX,EAX                         ; 0048b031
    SHL ECX,0x2                         ; 0048b033
    MOV EAX,dword ptr [EDX + 0x50]      ; 0048b036
    ADD EAX,ECX                         ; 0048b039
    POP EBP                             ; 0048b03b
    POP EDI                             ; 0048b03c
    POP EBX                             ; 0048b03d
    RET                                 ; 0048b03e

