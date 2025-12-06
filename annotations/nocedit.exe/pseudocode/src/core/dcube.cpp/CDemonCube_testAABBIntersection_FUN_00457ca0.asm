; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0(CDemonCube * this_ptr, CVector3f * aabb_min, CVector3f * aabb_max)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   aabb_min
; CVector3f *      Stack[0xc]:4   aabb_max
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0 at 00457df7
;
; Called Functions:
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457ca0
        ;   Label: core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
    PUSH ESI                            ; 00457ca1
    PUSH EDI                            ; 00457ca2
    PUSH EBP                            ; 00457ca3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00457ca4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00457ca8
    MOV EDX,dword ptr [EDI + 0x28]      ; 00457cac
    XOR ESI,ESI                         ; 00457caf
    TEST EDX,EDX                        ; 00457cb1
    JLE 0x00457cda                      ; 00457cb3 | LAB_00457cda
        ;   XREF to: 00457cda (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00457cb5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00457cb7
        ;   Label: LAB_00457cb7
    PUSH EAX                            ; 00457cbb
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457cbc
    PUSH EBP                            ; 00457cbf
    ADD EAX,EBX                         ; 00457cc0
    PUSH EAX                            ; 00457cc2
    CALL core_dcube.cpp_clipTriangleToAABB_FUN_00456400 ; 00457cc3 | uint core_dcube.cpp_clipTriangleToAABB_FUN_00456400(CVector3f * * triangle_vertices, CVector3f * aabb_min, CVector3f * aabb_max)
        ;   XREF to: 00456400 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00457cc8
    TEST EAX,EAX                        ; 00457ccb
    JNZ 0x00457ce1                      ; 00457ccd | LAB_00457ce1
        ;   XREF to: 00457ce1 (CONDITIONAL_JUMP)
    INC ESI                             ; 00457ccf
    MOV ECX,dword ptr [EDI + 0x28]      ; 00457cd0
    ADD EBX,0x20                        ; 00457cd3
    CMP ESI,ECX                         ; 00457cd6
    JL 0x00457cb7                       ; 00457cd8 | LAB_00457cb7
        ;   XREF to: 00457cb7 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00457cda
        ;   Label: LAB_00457cda
    POP EBP                             ; 00457cdc
    POP EDI                             ; 00457cdd
    POP ESI                             ; 00457cde
    POP EBX                             ; 00457cdf
    RET                                 ; 00457ce0
    MOV EAX,0x1                         ; 00457ce1
        ;   Label: LAB_00457ce1
    POP EBP                             ; 00457ce6
    POP EDI                             ; 00457ce7
    POP ESI                             ; 00457ce8
    POP EBX                             ; 00457ce9
    RET                                 ; 00457cea

