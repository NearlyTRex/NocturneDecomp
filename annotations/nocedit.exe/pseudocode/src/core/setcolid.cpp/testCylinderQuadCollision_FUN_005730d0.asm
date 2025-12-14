; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
; CVector3f *      Stack[0x14]:4   vertex4
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005730d0
        ;   Label: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
    PUSH ESI                            ; 005730d1
    PUSH EDI                            ; 005730d2
    PUSH EBP                            ; 005730d3
    SUB ESP,0x38                        ; 005730d4
    MOV EDX,dword ptr [ESP + 0x58]      ; 005730d7
    PUSH EDX                            ; 005730db
    MOV ECX,dword ptr [ESP + 0x58]      ; 005730dc
    PUSH ECX                            ; 005730e0
    MOV EBX,dword ptr [ESP + 0x58]      ; 005730e1
    PUSH EBX                            ; 005730e5
    LEA EAX,[ESP + 0xc]                 ; 005730e6
    PUSH EAX                            ; 005730ea
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005730eb
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005730f0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005730f3
    PUSH ESI                            ; 005730f7
    LEA EAX,[ESP + 0x4]                 ; 005730f8
    PUSH EAX                            ; 005730fc
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005730fd
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573102
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00573105
    PUSH EDI                            ; 00573109
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0057310a
    PUSH EBP                            ; 0057310e
    PUSH EBX                            ; 0057310f
    LEA EAX,[ESP + 0xc]                 ; 00573110
    PUSH EAX                            ; 00573114
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573115
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0057311a
    PUSH ESI                            ; 0057311d
    LEA EAX,[ESP + 0x4]                 ; 0057311e
    PUSH EAX                            ; 00573122
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573123
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573128
    ADD ESP,0x38                        ; 0057312b
    POP EBP                             ; 0057312e
    POP EDI                             ; 0057312f
    POP ESI                             ; 00573130
    POP EBX                             ; 00573131
    RET                                 ; 00573132

