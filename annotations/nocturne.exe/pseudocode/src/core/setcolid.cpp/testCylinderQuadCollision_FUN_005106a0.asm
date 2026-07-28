; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005106a0
        ;   Label: core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0
    PUSH ESI                            ; 005106a1
    PUSH EDI                            ; 005106a2
    PUSH EBP                            ; 005106a3
    SUB ESP,0x38                        ; 005106a4
    MOV EDX,dword ptr [ESP + 0x58]      ; 005106a7
    PUSH EDX                            ; 005106ab
    MOV ECX,dword ptr [ESP + 0x58]      ; 005106ac
    PUSH ECX                            ; 005106b0
    MOV EBX,dword ptr [ESP + 0x58]      ; 005106b1
    PUSH EBX                            ; 005106b5
    LEA EAX,[ESP + 0xc]                 ; 005106b6
    PUSH EAX                            ; 005106ba
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 005106bb
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005106c0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005106c3
    PUSH ESI                            ; 005106c7
    LEA EAX,[ESP + 0x4]                 ; 005106c8
    PUSH EAX                            ; 005106cc
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0 ; 005106cd
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005106d2
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005106d5
    PUSH EDI                            ; 005106d9
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005106da
    PUSH EBP                            ; 005106de
    PUSH EBX                            ; 005106df
    LEA EAX,[ESP + 0xc]                 ; 005106e0
    PUSH EAX                            ; 005106e4
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 005106e5
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005106ea
    PUSH ESI                            ; 005106ed
    LEA EAX,[ESP + 0x4]                 ; 005106ee
    PUSH EAX                            ; 005106f2
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0 ; 005106f3
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005106f8
    ADD ESP,0x38                        ; 005106fb
    POP EBP                             ; 005106fe
    POP EDI                             ; 005106ff
    POP ESI                             ; 00510700
    POP EBX                             ; 00510701
    RET                                 ; 00510702

