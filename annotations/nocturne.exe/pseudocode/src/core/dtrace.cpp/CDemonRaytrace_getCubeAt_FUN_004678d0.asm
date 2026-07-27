; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[12]:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0 at 0046bd29
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0 at 0046892c
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580 at 0046868d
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0 at 0046b0fc
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0 at 0046b962
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0 at 004683b7
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 at 00467dfd
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 at 004693f9
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0 at 00468c5c
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0 at 0046b491
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004678d0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
    PUSH EDI                            ; 004678d1
    PUSH EBP                            ; 004678d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004678d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004678d7
    MOV ECX,dword ptr [ESP + 0x18]      ; 004678db
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004678df
    TEST EAX,EAX                        ; 004678e3
    JL 0x00467902                       ; 004678e5
        ;   XREF to: 00467902 (CONDITIONAL_JUMP)  ; LAB_00467902
    TEST ECX,ECX                        ; 004678e7
    JL 0x00467902                       ; 004678e9
        ;   XREF to: 00467902 (CONDITIONAL_JUMP)  ; LAB_00467902
    TEST EBX,EBX                        ; 004678eb
    JL 0x00467902                       ; 004678ed
        ;   XREF to: 00467902 (CONDITIONAL_JUMP)  ; LAB_00467902
    CMP EAX,dword ptr [EDX + 0x40]      ; 004678ef
    JGE 0x00467902                      ; 004678f2
        ;   XREF to: 00467902 (CONDITIONAL_JUMP)  ; LAB_00467902
    MOV EDI,dword ptr [EDX + 0x44]      ; 004678f4
    CMP ECX,EDI                         ; 004678f7
    JGE 0x00467902                      ; 004678f9
        ;   XREF to: 00467902 (CONDITIONAL_JUMP)  ; LAB_00467902
    MOV EBP,dword ptr [EDX + 0x48]      ; 004678fb
    CMP EBX,EBP                         ; 004678fe
    JL 0x00467908                       ; 00467900
        ;   XREF to: 00467908 (CONDITIONAL_JUMP)  ; LAB_00467908
    XOR EAX,EAX                         ; 00467902
        ;   Label: LAB_00467902
    POP EBP                             ; 00467904
    POP EDI                             ; 00467905
    POP EBX                             ; 00467906
    RET                                 ; 00467907
    IMUL EAX,EDI                        ; 00467908
        ;   Label: LAB_00467908
    IMUL ECX,EBP                        ; 0046790b
    IMUL EAX,EBP                        ; 0046790e
    ADD ECX,EBX                         ; 00467911
    ADD ECX,EAX                         ; 00467913
    LEA EAX,[ECX*0x4 + 0x0]             ; 00467915
    SUB EAX,ECX                         ; 0046791c
    SHL EAX,0x2                         ; 0046791e
    ADD ECX,EAX                         ; 00467921
    SHL ECX,0x2                         ; 00467923
    MOV EAX,dword ptr [EDX + 0x50]      ; 00467926
    ADD EAX,ECX                         ; 00467929
    POP EBP                             ; 0046792b
    POP EDI                             ; 0046792c
    POP EBX                             ; 0046792d
    RET                                 ; 0046792e

