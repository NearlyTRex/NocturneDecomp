; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0(float x,float z,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal)
;
; Parameters:
; float            Stack[0x4]:4   x
; float            Stack[0x8]:4   z
; CVector3f *      Stack[0xc]:4   out_height
; CVector3f *      Stack[0x10]:4   vertex1
; CVector3f *      Stack[0x14]:4   vertex2
; CVector3f *      Stack[0x18]:4   vertex3
; CVector3f *      Stack[0x1c]:4   vertex4
; CVector3f *      Stack[0x20]:4   out_transformed_normal
; Local Variables:
; CDemonTriangle   Stack[-0x54]:56  local_54
; CVector3f        Stack[-0x1c]:12  local_1c
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005715d0
        ;   Label: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
    PUSH ESI                            ; 005715d1
    PUSH EDI                            ; 005715d2
    PUSH EBP                            ; 005715d3
    SUB ESP,0x44                        ; 005715d4
    MOV ESI,dword ptr [ESP + 0x74]      ; 005715d7
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005715db
    PUSH EDX                            ; 005715df
    MOV ECX,dword ptr [ESP + 0x6c]      ; 005715e0
    PUSH ECX                            ; 005715e4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005715e5
    PUSH EBX                            ; 005715e9
    LEA EAX,[ESP + 0xc]                 ; 005715ea
    PUSH EAX                            ; 005715ee
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005715ef
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005715f4
    MOV EDI,dword ptr [ESP + 0x60]      ; 005715f7
    PUSH EDI                            ; 005715fb
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005715fc
    PUSH dword ptr [ESP + 0x60]         ; 00571600
    PUSH EBP                            ; 00571604
    LEA EAX,[ESP + 0xc]                 ; 00571605
    PUSH EAX                            ; 00571609
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 0057160a
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0057160f
    MOV EBX,EAX                         ; 00571612
    MOV EAX,dword ptr [ESP + 0x70]      ; 00571614
    PUSH EAX                            ; 00571618
    MOV EDX,dword ptr [ESP + 0x70]      ; 00571619
    PUSH EDX                            ; 0057161d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0057161e
    PUSH ECX                            ; 00571622
    LEA EAX,[ESP + 0xc]                 ; 00571623
    PUSH EAX                            ; 00571627
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571628
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0057162d
    PUSH EDI                            ; 00571630
    PUSH dword ptr [ESP + 0x60]         ; 00571631
    PUSH EBP                            ; 00571635
    LEA EAX,[ESP + 0xc]                 ; 00571636
    PUSH EAX                            ; 0057163a
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 0057163b
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    MOV EDX,EBX                         ; 00571640
    ADD ESP,0x10                        ; 00571642
    OR EDX,EAX                          ; 00571645
    JZ 0x00571679                       ; 00571647
        ;   XREF to: 00571679 (CONDITIONAL_JUMP)  ; LAB_00571679
    FLD float ptr [ESP + 0x24]          ; 00571649
    FLD float ptr [ESP + 0x28]          ; 0057164d
    FLD float ptr [ESP + 0x2c]          ; 00571651
    LEA EAX,[ESP + 0x38]                ; 00571655
    FXCH ST2                            ; 00571659
    FCHS                                ; 0057165b
    FXCH                                ; 0057165d
    FCHS                                ; 0057165f
    FXCH ST2                            ; 00571661
    FCHS                                ; 00571663
    FXCH ST2                            ; 00571665
    FSTP float ptr [ESP + 0x3c]         ; 00571667
    FXCH                                ; 0057166b
    FSTP float ptr [ESP + 0x40]         ; 0057166d
    FSTP float ptr [ESP + 0x38]         ; 00571671
    CMP ESI,EAX                         ; 00571675
    JNZ 0x00571683                      ; 00571677
        ;   XREF to: 00571683 (CONDITIONAL_JUMP)  ; LAB_00571683
    MOV EAX,EDX                         ; 00571679
        ;   Label: LAB_00571679
    ADD ESP,0x44                        ; 0057167b
    POP EBP                             ; 0057167e
    POP EDI                             ; 0057167f
    POP ESI                             ; 00571680
    POP EBX                             ; 00571681
    RET                                 ; 00571682
    MOV EAX,dword ptr [ESP + 0x38]      ; 00571683
        ;   Label: LAB_00571683
    MOV dword ptr [ESI],EAX             ; 00571687
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00571689
    MOV dword ptr [ESI + 0x4],EAX       ; 0057168d
    MOV EAX,dword ptr [ESP + 0x40]      ; 00571690
    MOV dword ptr [ESI + 0x8],EAX       ; 00571694
    MOV EAX,EDX                         ; 00571697
    ADD ESP,0x44                        ; 00571699
    POP EBP                             ; 0057169c
    POP EDI                             ; 0057169d
    POP ESI                             ; 0057169e
    POP EBX                             ; 0057169f
    RET                                 ; 005716a0

