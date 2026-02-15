; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
;
; XREF[12]:
;   core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70 at 00499ea9
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950 at 00496a9c
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 at 004967fd
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170 at 0049927c
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50 at 00499ae2
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 at 00496527
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 at 00495f6d
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 at 00497569
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 at 0049a215
;   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60 at 00496dcc
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004952b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
    PUSH EDI                            ; 004952b1
    PUSH EBP                            ; 004952b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004952b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004952b7
    MOV ECX,dword ptr [ESP + 0x18]      ; 004952bb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004952bf
    TEST EAX,EAX                        ; 004952c3
    JL 0x004952e2                       ; 004952c5
        ;   XREF to: 004952e2 (CONDITIONAL_JUMP)  ; LAB_004952e2
    TEST ECX,ECX                        ; 004952c7
    JL 0x004952e2                       ; 004952c9
        ;   XREF to: 004952e2 (CONDITIONAL_JUMP)  ; LAB_004952e2
    TEST EBX,EBX                        ; 004952cb
    JL 0x004952e2                       ; 004952cd
        ;   XREF to: 004952e2 (CONDITIONAL_JUMP)  ; LAB_004952e2
    CMP EAX,dword ptr [EDX + 0x40]      ; 004952cf
    JGE 0x004952e2                      ; 004952d2
        ;   XREF to: 004952e2 (CONDITIONAL_JUMP)  ; LAB_004952e2
    MOV EDI,dword ptr [EDX + 0x44]      ; 004952d4
    CMP ECX,EDI                         ; 004952d7
    JGE 0x004952e2                      ; 004952d9
        ;   XREF to: 004952e2 (CONDITIONAL_JUMP)  ; LAB_004952e2
    MOV EBP,dword ptr [EDX + 0x48]      ; 004952db
    CMP EBX,EBP                         ; 004952de
    JL 0x004952e8                       ; 004952e0
        ;   XREF to: 004952e8 (CONDITIONAL_JUMP)  ; LAB_004952e8
    XOR EAX,EAX                         ; 004952e2
        ;   Label: LAB_004952e2
    POP EBP                             ; 004952e4
    POP EDI                             ; 004952e5
    POP EBX                             ; 004952e6
    RET                                 ; 004952e7
    IMUL EAX,EDI                        ; 004952e8
        ;   Label: LAB_004952e8
    IMUL ECX,EBP                        ; 004952eb
    IMUL EAX,EBP                        ; 004952ee
    ADD ECX,EBX                         ; 004952f1
    ADD ECX,EAX                         ; 004952f3
    LEA EAX,[ECX*0x4 + 0x0]             ; 004952f5
    SUB EAX,ECX                         ; 004952fc
    SHL EAX,0x2                         ; 004952fe
    ADD ECX,EAX                         ; 00495301
    SHL ECX,0x2                         ; 00495303
    MOV EAX,dword ptr [EDX + 0x50]      ; 00495306
    ADD EAX,ECX                         ; 00495309
    POP EBP                             ; 0049530b
    POP EDI                             ; 0049530c
    POP EBX                             ; 0049530d
    RET                                 ; 0049530e

