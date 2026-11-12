; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_FUN_0053da90(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)
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
; XREF[1]:
;   core_setcolid.cpp_FUN_0053de10 at 0053e2f5
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_0041d8b0
;   core_dirmat.cpp_FUN_0045b800
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;   core_dtri.cpp_cylinderTriangleTest_FUN_00479050
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053da90
        ;   Label: core_setcolid.cpp_FUN_0053da90
    PUSH ESI                            ; 0053da91
    PUSH EDI                            ; 0053da92
    PUSH EBP                            ; 0053da93
    SUB ESP,0x1fc                       ; 0053da94
    PUSH 0x5db0f0                       ; 0053da9a | g_CVectorTypeInfo
    PUSH 0x8                            ; 0053da9f
    LEA EAX,[ESP + 0x8]                 ; 0053daa1
    PUSH EAX                            ; 0053daa5
    LEA EBX,[ESP + 0xc]                 ; 0053daa6
    XOR EBP,EBP                         ; 0053daaa
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0053daac
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053dab1
    PUSH EBP                            ; 0053dab4
        ;   Label: LAB_0053dab4
    MOV EDX,dword ptr [ESP + 0x21c]     ; 0053dab5
    PUSH EDX                            ; 0053dabc
    LEA ESI,[ESP + 0x1dc]               ; 0053dabd
    LEA EDI,[ESP + 0x1e8]               ; 0053dac4
    CALL core_box.cpp_FUN_0041d8b0      ; 0053dacb
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x1dc]               ; 0053dad0
    ADD ESP,0x8                         ; 0053dad7
    LEA EAX,[ESP + 0x1e0]               ; 0053dada
    MOV ECX,dword ptr [ESP + 0x220]     ; 0053dae1
    PUSH EAX                            ; 0053dae8
    MOVSD ES:EDI,ESI                    ; 0053dae9
    MOVSD ES:EDI,ESI                    ; 0053daea
    MOVSD ES:EDI,ESI                    ; 0053daeb
    PUSH ECX                            ; 0053daec
    LEA ESI,[ESP + 0x1b8]               ; 0053daed
    LEA EDI,[ESP + 0x1d0]               ; 0053daf4
    CALL core_dirmat.cpp_FUN_0045b800   ; 0053dafb
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x1b8]               ; 0053db00
    ADD ESP,0x8                         ; 0053db07
    MOVSD ES:EDI,ESI                    ; 0053db0a
    MOVSD ES:EDI,ESI                    ; 0053db0b
    MOVSD ES:EDI,ESI                    ; 0053db0c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0053db0d
    FLD float ptr [ESP + 0x1c8]         ; 0053db14
    FLD float ptr [ESP + 0x1cc]         ; 0053db1b
    FLD float ptr [ESP + 0x1d0]         ; 0053db22
    LEA EDI,[ESP + 0x1bc]               ; 0053db29
    LEA ESI,[ESP + 0x1ec]               ; 0053db30
    FXCH ST2                            ; 0053db37
    FADD float ptr [EAX]                ; 0053db39
    FXCH                                ; 0053db3b
    FADD float ptr [EAX + 0x4]          ; 0053db3d
    FXCH ST2                            ; 0053db40
    FADD float ptr [EAX + 0x8]          ; 0053db42
    FXCH                                ; 0053db45
    FSTP float ptr [ESP + 0x1ec]        ; 0053db47
    FXCH                                ; 0053db4e
    FSTP float ptr [ESP + 0x1f0]        ; 0053db50
    FSTP float ptr [ESP + 0x1f4]        ; 0053db57
    LEA EAX,[ESP + 0x1bc]               ; 0053db5e
    MOVSD ES:EDI,ESI                    ; 0053db65
    MOVSD ES:EDI,ESI                    ; 0053db66
    MOVSD ES:EDI,ESI                    ; 0053db67
    CMP EBX,EAX                         ; 0053db68
    JNZ 0x0053dde7                      ; 0053db6a
        ;   XREF to: 0053dde7 (CONDITIONAL_JUMP)  ; LAB_0053dde7
    INC EBP                             ; 0053db70
        ;   Label: LAB_0053db70
    ADD EBX,0xc                         ; 0053db71
    CMP EBP,0x8                         ; 0053db74
    JL 0x0053dab4                       ; 0053db77
        ;   XREF to: 0053dab4 (CONDITIONAL_JUMP)  ; LAB_0053dab4
    MOV EAX,dword ptr [ESP + 0x214]     ; 0053db7d
    MOV EAX,dword ptr [EAX]             ; 0053db84
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0053db86
    LEA EAX,[ESP + 0x48]                ; 0053db8d
    PUSH EAX                            ; 0053db91
    LEA EAX,[ESP + 0x34]                ; 0053db92
    PUSH EAX                            ; 0053db96
    LEA EAX,[ESP + 0x8]                 ; 0053db97
    PUSH EAX                            ; 0053db9b
    LEA EAX,[ESP + 0x14c]               ; 0053db9c
    PUSH EAX                            ; 0053dba3
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dba4
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dba9
    MOV EBX,dword ptr [ESP + 0x214]     ; 0053dbac
    PUSH EBX                            ; 0053dbb3
    LEA EAX,[ESP + 0x144]               ; 0053dbb4
    PUSH EAX                            ; 0053dbbb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dbbc
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dbc1
    LEA EAX,[ESP + 0x18]                ; 0053dbc4
    PUSH EAX                            ; 0053dbc8
    LEA EAX,[ESP + 0x4c]                ; 0053dbc9
    PUSH EAX                            ; 0053dbcd
    LEA EAX,[ESP + 0x8]                 ; 0053dbce
    PUSH EAX                            ; 0053dbd2
    LEA EAX,[ESP + 0x14c]               ; 0053dbd3
    PUSH EAX                            ; 0053dbda
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dbdb
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dbe0
    PUSH EBX                            ; 0053dbe3
    LEA EAX,[ESP + 0x144]               ; 0053dbe4
    PUSH EAX                            ; 0053dbeb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dbec
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dbf1
    LEA EAX,[ESP + 0x54]                ; 0053dbf4
    PUSH EAX                            ; 0053dbf8
    LEA EAX,[ESP + 0x28]                ; 0053dbf9
    PUSH EAX                            ; 0053dbfd
    LEA EAX,[ESP + 0x14]                ; 0053dbfe
    PUSH EAX                            ; 0053dc02
    LEA EAX,[ESP + 0x114]               ; 0053dc03
    PUSH EAX                            ; 0053dc0a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dc0b
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dc10
    PUSH EBX                            ; 0053dc13
    LEA EAX,[ESP + 0x10c]               ; 0053dc14
    PUSH EAX                            ; 0053dc1b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dc1c
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dc21
    LEA EAX,[ESP + 0x3c]                ; 0053dc24
    PUSH EAX                            ; 0053dc28
    LEA EAX,[ESP + 0x58]                ; 0053dc29
    PUSH EAX                            ; 0053dc2d
    LEA EAX,[ESP + 0x14]                ; 0053dc2e
    PUSH EAX                            ; 0053dc32
    LEA EAX,[ESP + 0x114]               ; 0053dc33
    PUSH EAX                            ; 0053dc3a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dc3b
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dc40
    PUSH EBX                            ; 0053dc43
    LEA EAX,[ESP + 0x10c]               ; 0053dc44
    PUSH EAX                            ; 0053dc4b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dc4c
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dc51
    LEA EAX,[ESP + 0x3c]                ; 0053dc54
    PUSH EAX                            ; 0053dc58
    LEA EAX,[ESP + 0x10]                ; 0053dc59
    PUSH EAX                            ; 0053dc5d
    LEA EAX,[ESP + 0x8]                 ; 0053dc5e
    PUSH EAX                            ; 0053dc62
    LEA EAX,[ESP + 0xdc]                ; 0053dc63
    PUSH EAX                            ; 0053dc6a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dc6b
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dc70
    PUSH EBX                            ; 0053dc73
    LEA EAX,[ESP + 0xd4]                ; 0053dc74
    PUSH EAX                            ; 0053dc7b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dc7c
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dc81
    LEA EAX,[ESP + 0x30]                ; 0053dc84
    PUSH EAX                            ; 0053dc88
    LEA EAX,[ESP + 0x40]                ; 0053dc89
    PUSH EAX                            ; 0053dc8d
    LEA EAX,[ESP + 0x8]                 ; 0053dc8e
    PUSH EAX                            ; 0053dc92
    LEA EAX,[ESP + 0xdc]                ; 0053dc93
    PUSH EAX                            ; 0053dc9a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dc9b
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dca0
    PUSH EBX                            ; 0053dca3
    LEA EAX,[ESP + 0xd4]                ; 0053dca4
    PUSH EAX                            ; 0053dcab
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dcac
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dcb1
    LEA EAX,[ESP + 0x54]                ; 0053dcb4
    PUSH EAX                            ; 0053dcb8
    LEA EAX,[ESP + 0x4c]                ; 0053dcb9
    PUSH EAX                            ; 0053dcbd
    LEA EAX,[ESP + 0x20]                ; 0053dcbe
    PUSH EAX                            ; 0053dcc2
    LEA EAX,[ESP + 0x6c]                ; 0053dcc3
    PUSH EAX                            ; 0053dcc7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dcc8
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dccd
    PUSH EBX                            ; 0053dcd0
    LEA EAX,[ESP + 0x64]                ; 0053dcd1
    PUSH EAX                            ; 0053dcd5
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dcd6
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dcdb
    LEA EAX,[ESP + 0x24]                ; 0053dcde
    PUSH EAX                            ; 0053dce2
    LEA EAX,[ESP + 0x58]                ; 0053dce3
    PUSH EAX                            ; 0053dce7
    LEA EAX,[ESP + 0x20]                ; 0053dce8
    PUSH EAX                            ; 0053dcec
    LEA EAX,[ESP + 0x6c]                ; 0053dced
    PUSH EAX                            ; 0053dcf1
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dcf2
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dcf7
    PUSH EBX                            ; 0053dcfa
    LEA EAX,[ESP + 0x64]                ; 0053dcfb
    PUSH EAX                            ; 0053dcff
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dd00
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dd05
    LEA EAX,[ESP + 0x24]                ; 0053dd08
    PUSH EAX                            ; 0053dd0c
    LEA EAX,[ESP + 0x1c]                ; 0053dd0d
    PUSH EAX                            ; 0053dd11
    LEA EAX,[ESP + 0x8]                 ; 0053dd12
    PUSH EAX                            ; 0053dd16
    LEA EAX,[ESP + 0xa4]                ; 0053dd17
    PUSH EAX                            ; 0053dd1e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dd1f
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dd24
    PUSH EBX                            ; 0053dd27
    LEA EAX,[ESP + 0x9c]                ; 0053dd28
    PUSH EAX                            ; 0053dd2f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dd30
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dd35
    LEA EAX,[ESP + 0xc]                 ; 0053dd38
    PUSH EAX                            ; 0053dd3c
    LEA EAX,[ESP + 0x28]                ; 0053dd3d
    PUSH EAX                            ; 0053dd41
    LEA EAX,[ESP + 0x8]                 ; 0053dd42
    PUSH EAX                            ; 0053dd46
    LEA EAX,[ESP + 0xa4]                ; 0053dd47
    PUSH EAX                            ; 0053dd4e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dd4f
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dd54
    PUSH EBX                            ; 0053dd57
    LEA EAX,[ESP + 0x9c]                ; 0053dd58
    PUSH EAX                            ; 0053dd5f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dd60
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dd65
    LEA EAX,[ESP + 0x54]                ; 0053dd68
    PUSH EAX                            ; 0053dd6c
    LEA EAX,[ESP + 0x40]                ; 0053dd6d
    PUSH EAX                            ; 0053dd71
    LEA EAX,[ESP + 0x38]                ; 0053dd72
    PUSH EAX                            ; 0053dd76
    LEA EAX,[ESP + 0x184]               ; 0053dd77
    PUSH EAX                            ; 0053dd7e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053dd7f
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053dd84
    PUSH EBX                            ; 0053dd87
    LEA EAX,[ESP + 0x17c]               ; 0053dd88
    PUSH EAX                            ; 0053dd8f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053dd90
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053dd95
    LEA EAX,[ESP + 0x48]                ; 0053dd98
    PUSH EAX                            ; 0053dd9c
    LEA EAX,[ESP + 0x58]                ; 0053dd9d
    PUSH EAX                            ; 0053dda1
    LEA EAX,[ESP + 0x38]                ; 0053dda2
    PUSH EAX                            ; 0053dda6
    LEA EAX,[ESP + 0x184]               ; 0053dda7
    PUSH EAX                            ; 0053ddae
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053ddaf
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053ddb4
    PUSH EBX                            ; 0053ddb7
    LEA EAX,[ESP + 0x17c]               ; 0053ddb8
    PUSH EAX                            ; 0053ddbf
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 0053ddc0
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053ddc5
    FLD float ptr [EBX]                 ; 0053ddc8
    FCOMP float ptr [ESP + 0x1f8]       ; 0053ddca
    FNSTSW AX                           ; 0053ddd1
    SAHF                                ; 0053ddd3
    SETC AL                             ; 0053ddd4
    AND EAX,0xff                        ; 0053ddd7
    ADD ESP,0x1fc                       ; 0053dddc
    POP EBP                             ; 0053dde2
    POP EDI                             ; 0053dde3
    POP ESI                             ; 0053dde4
    POP EBX                             ; 0053dde5
    RET                                 ; 0053dde6
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0053dde7
        ;   Label: LAB_0053dde7
    MOV dword ptr [EBX],EAX             ; 0053ddee
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0053ddf0
    MOV dword ptr [EBX + 0x4],EAX       ; 0053ddf7
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0053ddfa
    MOV dword ptr [EBX + 0x8],EAX       ; 0053de01
    JMP 0x0053db70                      ; 0053de04
        ;   XREF to: 0053db70 (UNCONDITIONAL_JUMP)  ; LAB_0053db70

