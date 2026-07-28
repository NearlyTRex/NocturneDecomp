; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_setcolid_cpp_rayTestQuadFloor_FUN_0050eba0(CVector3f *param_1,float param_2,float *param_3,CVector3f *param_4,CVector3f *param_5,CVector3f *param_6,CVector3f *param_7,float *param_8)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050eba0
        ;   Label: core_setcolid.cpp_rayTestQuadFloor_FUN_0050eba0
    PUSH ESI                            ; 0050eba1
    PUSH EDI                            ; 0050eba2
    PUSH EBP                            ; 0050eba3
    SUB ESP,0x44                        ; 0050eba4
    MOV ESI,dword ptr [ESP + 0x74]      ; 0050eba7
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0050ebab
    PUSH EDX                            ; 0050ebaf
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0050ebb0
    PUSH ECX                            ; 0050ebb4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0050ebb5
    PUSH EBX                            ; 0050ebb9
    LEA EAX,[ESP + 0xc]                 ; 0050ebba
    PUSH EAX                            ; 0050ebbe
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0050ebbf
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0050ebc4
    MOV EDI,dword ptr [ESP + 0x60]      ; 0050ebc7
    PUSH EDI                            ; 0050ebcb
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0050ebcc
    PUSH dword ptr [ESP + 0x60]         ; 0050ebd0
    PUSH EBP                            ; 0050ebd4
    LEA EAX,[ESP + 0xc]                 ; 0050ebd5
    PUSH EAX                            ; 0050ebd9
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110 ; 0050ebda
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0050ebdf
    MOV EBX,EAX                         ; 0050ebe2
    MOV EAX,dword ptr [ESP + 0x70]      ; 0050ebe4
    PUSH EAX                            ; 0050ebe8
    MOV EDX,dword ptr [ESP + 0x70]      ; 0050ebe9
    PUSH EDX                            ; 0050ebed
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0050ebee
    PUSH ECX                            ; 0050ebf2
    LEA EAX,[ESP + 0xc]                 ; 0050ebf3
    PUSH EAX                            ; 0050ebf7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0050ebf8
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0050ebfd
    PUSH EDI                            ; 0050ec00
    PUSH dword ptr [ESP + 0x60]         ; 0050ec01
    PUSH EBP                            ; 0050ec05
    LEA EAX,[ESP + 0xc]                 ; 0050ec06
    PUSH EAX                            ; 0050ec0a
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110 ; 0050ec0b
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    MOV EDX,EBX                         ; 0050ec10
    ADD ESP,0x10                        ; 0050ec12
    OR EDX,EAX                          ; 0050ec15
    JZ 0x0050ec49                       ; 0050ec17
        ;   XREF to: 0050ec49 (CONDITIONAL_JUMP)  ; LAB_0050ec49
    FLD float ptr [ESP + 0x24]          ; 0050ec19
    FLD float ptr [ESP + 0x28]          ; 0050ec1d
    FLD float ptr [ESP + 0x2c]          ; 0050ec21
    LEA EAX,[ESP + 0x38]                ; 0050ec25
    FXCH ST2                            ; 0050ec29
    FCHS                                ; 0050ec2b
    FXCH                                ; 0050ec2d
    FCHS                                ; 0050ec2f
    FXCH ST2                            ; 0050ec31
    FCHS                                ; 0050ec33
    FXCH ST2                            ; 0050ec35
    FSTP float ptr [ESP + 0x3c]         ; 0050ec37
    FXCH                                ; 0050ec3b
    FSTP float ptr [ESP + 0x40]         ; 0050ec3d
    FSTP float ptr [ESP + 0x38]         ; 0050ec41
    CMP ESI,EAX                         ; 0050ec45
    JNZ 0x0050ec53                      ; 0050ec47
        ;   XREF to: 0050ec53 (CONDITIONAL_JUMP)  ; LAB_0050ec53
    MOV EAX,EDX                         ; 0050ec49
        ;   Label: LAB_0050ec49
    ADD ESP,0x44                        ; 0050ec4b
    POP EBP                             ; 0050ec4e
    POP EDI                             ; 0050ec4f
    POP ESI                             ; 0050ec50
    POP EBX                             ; 0050ec51
    RET                                 ; 0050ec52
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050ec53
        ;   Label: LAB_0050ec53
    MOV dword ptr [ESI],EAX             ; 0050ec57
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050ec59
    MOV dword ptr [ESI + 0x4],EAX       ; 0050ec5d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050ec60
    MOV dword ptr [ESI + 0x8],EAX       ; 0050ec64
    MOV EAX,EDX                         ; 0050ec67
    ADD ESP,0x44                        ; 0050ec69
    POP EBP                             ; 0050ec6c
    POP EDI                             ; 0050ec6d
    POP ESI                             ; 0050ec6e
    POP EBX                             ; 0050ec6f
    RET                                 ; 0050ec70

