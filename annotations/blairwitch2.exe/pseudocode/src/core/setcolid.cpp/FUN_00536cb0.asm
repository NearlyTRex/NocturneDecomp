; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_FUN_00536cb0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; CBoundingBox3D * Stack[0xc]:4   bounding_box
; CVector3f *      Stack[0x10]:4   position
; CMatrix3x3f *    Stack[0x14]:4   orientation_matrix
; Local Variables:
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined        Stack[-0x1e8]:1  local_1e8
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_manpuz.cpp_FUN_004e5e70 at 004e5ed6
;   core_setcolid.cpp_FUN_00537030 at 00537515
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_0041a600
;   core_dirmat.cpp_FUN_00449530
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0
;   core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536cb0
        ;   Label: core_setcolid.cpp_FUN_00536cb0
    PUSH ESI                            ; 00536cb1
    PUSH EDI                            ; 00536cb2
    PUSH EBP                            ; 00536cb3
    SUB ESP,0x1fc                       ; 00536cb4
    PUSH 0x5f22b0                       ; 00536cba | g_CVectorTypeInfo
    PUSH 0x8                            ; 00536cbf
    LEA EAX,[ESP + 0x8]                 ; 00536cc1
    PUSH EAX                            ; 00536cc5
    LEA EBX,[ESP + 0xc]                 ; 00536cc6
    XOR EBP,EBP                         ; 00536cca
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00536ccc
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00536cd1
    PUSH EBP                            ; 00536cd4
        ;   Label: LAB_00536cd4
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00536cd5
    PUSH EDX                            ; 00536cdc
    LEA ESI,[ESP + 0x1dc]               ; 00536cdd
    LEA EDI,[ESP + 0x1e8]               ; 00536ce4
    CALL core_box.cpp_FUN_0041a600      ; 00536ceb
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a600()
    LEA ESI,[ESP + 0x1dc]               ; 00536cf0
    ADD ESP,0x8                         ; 00536cf7
    LEA EAX,[ESP + 0x1e0]               ; 00536cfa
    MOV ECX,dword ptr [ESP + 0x220]     ; 00536d01
    PUSH EAX                            ; 00536d08
    MOVSD ES:EDI,ESI                    ; 00536d09
    MOVSD ES:EDI,ESI                    ; 00536d0a
    MOVSD ES:EDI,ESI                    ; 00536d0b
    PUSH ECX                            ; 00536d0c
    LEA ESI,[ESP + 0x1b8]               ; 00536d0d
    LEA EDI,[ESP + 0x1d0]               ; 00536d14
    CALL core_dirmat.cpp_FUN_00449530   ; 00536d1b
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x1b8]               ; 00536d20
    ADD ESP,0x8                         ; 00536d27
    MOVSD ES:EDI,ESI                    ; 00536d2a
    MOVSD ES:EDI,ESI                    ; 00536d2b
    MOVSD ES:EDI,ESI                    ; 00536d2c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00536d2d
    FLD float ptr [ESP + 0x1c8]         ; 00536d34
    FLD float ptr [ESP + 0x1cc]         ; 00536d3b
    FLD float ptr [ESP + 0x1d0]         ; 00536d42
    LEA EDI,[ESP + 0x1bc]               ; 00536d49
    LEA ESI,[ESP + 0x1ec]               ; 00536d50
    FXCH ST2                            ; 00536d57
    FADD float ptr [EAX]                ; 00536d59
    FXCH                                ; 00536d5b
    FADD float ptr [EAX + 0x4]          ; 00536d5d
    FXCH ST2                            ; 00536d60
    FADD float ptr [EAX + 0x8]          ; 00536d62
    FXCH                                ; 00536d65
    FSTP float ptr [ESP + 0x1ec]        ; 00536d67
    FXCH                                ; 00536d6e
    FSTP float ptr [ESP + 0x1f0]        ; 00536d70
    FSTP float ptr [ESP + 0x1f4]        ; 00536d77
    LEA EAX,[ESP + 0x1bc]               ; 00536d7e
    MOVSD ES:EDI,ESI                    ; 00536d85
    MOVSD ES:EDI,ESI                    ; 00536d86
    MOVSD ES:EDI,ESI                    ; 00536d87
    CMP EBX,EAX                         ; 00536d88
    JNZ 0x00537007                      ; 00536d8a
        ;   XREF to: 00537007 (CONDITIONAL_JUMP)  ; LAB_00537007
    INC EBP                             ; 00536d90
        ;   Label: LAB_00536d90
    ADD EBX,0xc                         ; 00536d91
    CMP EBP,0x8                         ; 00536d94
    JL 0x00536cd4                       ; 00536d97
        ;   XREF to: 00536cd4 (CONDITIONAL_JUMP)  ; LAB_00536cd4
    MOV EAX,dword ptr [ESP + 0x214]     ; 00536d9d
    MOV EAX,dword ptr [EAX]             ; 00536da4
    MOV dword ptr [ESP + 0x1f8],EAX     ; 00536da6
    LEA EAX,[ESP + 0x48]                ; 00536dad
    PUSH EAX                            ; 00536db1
    LEA EAX,[ESP + 0x34]                ; 00536db2
    PUSH EAX                            ; 00536db6
    LEA EAX,[ESP + 0x8]                 ; 00536db7
    PUSH EAX                            ; 00536dbb
    LEA EAX,[ESP + 0x14c]               ; 00536dbc
    PUSH EAX                            ; 00536dc3
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536dc4
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536dc9
    MOV EBX,dword ptr [ESP + 0x214]     ; 00536dcc
    PUSH EBX                            ; 00536dd3
    LEA EAX,[ESP + 0x144]               ; 00536dd4
    PUSH EAX                            ; 00536ddb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536ddc
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536de1
    LEA EAX,[ESP + 0x18]                ; 00536de4
    PUSH EAX                            ; 00536de8
    LEA EAX,[ESP + 0x4c]                ; 00536de9
    PUSH EAX                            ; 00536ded
    LEA EAX,[ESP + 0x8]                 ; 00536dee
    PUSH EAX                            ; 00536df2
    LEA EAX,[ESP + 0x14c]               ; 00536df3
    PUSH EAX                            ; 00536dfa
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536dfb
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536e00
    PUSH EBX                            ; 00536e03
    LEA EAX,[ESP + 0x144]               ; 00536e04
    PUSH EAX                            ; 00536e0b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536e0c
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536e11
    LEA EAX,[ESP + 0x54]                ; 00536e14
    PUSH EAX                            ; 00536e18
    LEA EAX,[ESP + 0x28]                ; 00536e19
    PUSH EAX                            ; 00536e1d
    LEA EAX,[ESP + 0x14]                ; 00536e1e
    PUSH EAX                            ; 00536e22
    LEA EAX,[ESP + 0x114]               ; 00536e23
    PUSH EAX                            ; 00536e2a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536e2b
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536e30
    PUSH EBX                            ; 00536e33
    LEA EAX,[ESP + 0x10c]               ; 00536e34
    PUSH EAX                            ; 00536e3b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536e3c
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536e41
    LEA EAX,[ESP + 0x3c]                ; 00536e44
    PUSH EAX                            ; 00536e48
    LEA EAX,[ESP + 0x58]                ; 00536e49
    PUSH EAX                            ; 00536e4d
    LEA EAX,[ESP + 0x14]                ; 00536e4e
    PUSH EAX                            ; 00536e52
    LEA EAX,[ESP + 0x114]               ; 00536e53
    PUSH EAX                            ; 00536e5a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536e5b
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536e60
    PUSH EBX                            ; 00536e63
    LEA EAX,[ESP + 0x10c]               ; 00536e64
    PUSH EAX                            ; 00536e6b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536e6c
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536e71
    LEA EAX,[ESP + 0x3c]                ; 00536e74
    PUSH EAX                            ; 00536e78
    LEA EAX,[ESP + 0x10]                ; 00536e79
    PUSH EAX                            ; 00536e7d
    LEA EAX,[ESP + 0x8]                 ; 00536e7e
    PUSH EAX                            ; 00536e82
    LEA EAX,[ESP + 0xdc]                ; 00536e83
    PUSH EAX                            ; 00536e8a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536e8b
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536e90
    PUSH EBX                            ; 00536e93
    LEA EAX,[ESP + 0xd4]                ; 00536e94
    PUSH EAX                            ; 00536e9b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536e9c
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536ea1
    LEA EAX,[ESP + 0x30]                ; 00536ea4
    PUSH EAX                            ; 00536ea8
    LEA EAX,[ESP + 0x40]                ; 00536ea9
    PUSH EAX                            ; 00536ead
    LEA EAX,[ESP + 0x8]                 ; 00536eae
    PUSH EAX                            ; 00536eb2
    LEA EAX,[ESP + 0xdc]                ; 00536eb3
    PUSH EAX                            ; 00536eba
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536ebb
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536ec0
    PUSH EBX                            ; 00536ec3
    LEA EAX,[ESP + 0xd4]                ; 00536ec4
    PUSH EAX                            ; 00536ecb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536ecc
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536ed1
    LEA EAX,[ESP + 0x54]                ; 00536ed4
    PUSH EAX                            ; 00536ed8
    LEA EAX,[ESP + 0x4c]                ; 00536ed9
    PUSH EAX                            ; 00536edd
    LEA EAX,[ESP + 0x20]                ; 00536ede
    PUSH EAX                            ; 00536ee2
    LEA EAX,[ESP + 0x6c]                ; 00536ee3
    PUSH EAX                            ; 00536ee7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536ee8
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536eed
    PUSH EBX                            ; 00536ef0
    LEA EAX,[ESP + 0x64]                ; 00536ef1
    PUSH EAX                            ; 00536ef5
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536ef6
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536efb
    LEA EAX,[ESP + 0x24]                ; 00536efe
    PUSH EAX                            ; 00536f02
    LEA EAX,[ESP + 0x58]                ; 00536f03
    PUSH EAX                            ; 00536f07
    LEA EAX,[ESP + 0x20]                ; 00536f08
    PUSH EAX                            ; 00536f0c
    LEA EAX,[ESP + 0x6c]                ; 00536f0d
    PUSH EAX                            ; 00536f11
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536f12
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536f17
    PUSH EBX                            ; 00536f1a
    LEA EAX,[ESP + 0x64]                ; 00536f1b
    PUSH EAX                            ; 00536f1f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536f20
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536f25
    LEA EAX,[ESP + 0x24]                ; 00536f28
    PUSH EAX                            ; 00536f2c
    LEA EAX,[ESP + 0x1c]                ; 00536f2d
    PUSH EAX                            ; 00536f31
    LEA EAX,[ESP + 0x8]                 ; 00536f32
    PUSH EAX                            ; 00536f36
    LEA EAX,[ESP + 0xa4]                ; 00536f37
    PUSH EAX                            ; 00536f3e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536f3f
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536f44
    PUSH EBX                            ; 00536f47
    LEA EAX,[ESP + 0x9c]                ; 00536f48
    PUSH EAX                            ; 00536f4f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536f50
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536f55
    LEA EAX,[ESP + 0xc]                 ; 00536f58
    PUSH EAX                            ; 00536f5c
    LEA EAX,[ESP + 0x28]                ; 00536f5d
    PUSH EAX                            ; 00536f61
    LEA EAX,[ESP + 0x8]                 ; 00536f62
    PUSH EAX                            ; 00536f66
    LEA EAX,[ESP + 0xa4]                ; 00536f67
    PUSH EAX                            ; 00536f6e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536f6f
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536f74
    PUSH EBX                            ; 00536f77
    LEA EAX,[ESP + 0x9c]                ; 00536f78
    PUSH EAX                            ; 00536f7f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536f80
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536f85
    LEA EAX,[ESP + 0x54]                ; 00536f88
    PUSH EAX                            ; 00536f8c
    LEA EAX,[ESP + 0x40]                ; 00536f8d
    PUSH EAX                            ; 00536f91
    LEA EAX,[ESP + 0x38]                ; 00536f92
    PUSH EAX                            ; 00536f96
    LEA EAX,[ESP + 0x184]               ; 00536f97
    PUSH EAX                            ; 00536f9e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536f9f
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536fa4
    PUSH EBX                            ; 00536fa7
    LEA EAX,[ESP + 0x17c]               ; 00536fa8
    PUSH EAX                            ; 00536faf
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536fb0
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536fb5
    LEA EAX,[ESP + 0x48]                ; 00536fb8
    PUSH EAX                            ; 00536fbc
    LEA EAX,[ESP + 0x58]                ; 00536fbd
    PUSH EAX                            ; 00536fc1
    LEA EAX,[ESP + 0x38]                ; 00536fc2
    PUSH EAX                            ; 00536fc6
    LEA EAX,[ESP + 0x184]               ; 00536fc7
    PUSH EAX                            ; 00536fce
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 00536fcf
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00536fd4
    PUSH EBX                            ; 00536fd7
    LEA EAX,[ESP + 0x17c]               ; 00536fd8
    PUSH EAX                            ; 00536fdf
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 00536fe0
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 00536fe5
    FLD float ptr [EBX]                 ; 00536fe8
    FCOMP float ptr [ESP + 0x1f8]       ; 00536fea
    FNSTSW AX                           ; 00536ff1
    SAHF                                ; 00536ff3
    SETC AL                             ; 00536ff4
    AND EAX,0xff                        ; 00536ff7
    ADD ESP,0x1fc                       ; 00536ffc
    POP EBP                             ; 00537002
    POP EDI                             ; 00537003
    POP ESI                             ; 00537004
    POP EBX                             ; 00537005
    RET                                 ; 00537006
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00537007
        ;   Label: LAB_00537007
    MOV dword ptr [EBX],EAX             ; 0053700e
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00537010
    MOV dword ptr [EBX + 0x4],EAX       ; 00537017
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0053701a
    MOV dword ptr [EBX + 0x8],EAX       ; 00537021
    JMP 0x00536d90                      ; 00537024
        ;   XREF to: 00536d90 (UNCONDITIONAL_JUMP)  ; LAB_00536d90

