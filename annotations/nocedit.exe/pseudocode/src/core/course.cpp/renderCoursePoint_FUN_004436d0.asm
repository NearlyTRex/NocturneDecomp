; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_renderCoursePoint_FUN_004436d0(void)
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   uchar[32768] g_ColorCubeLookup
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_plotPixelWithDepth_FUN_00401290
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004436d0
        ;   Label: core_course.cpp_renderCoursePoint_FUN_004436d0
    MOV EBX,dword ptr [0x006703e8]      ; 004436d1 | g_CDemonRendererPtr1
    MOV EBX,dword ptr [EBX]             ; 004436d7 | g_CDemonRendererInstance
    TEST byte ptr [EBX + 0x13],0x80     ; 004436d9
    JNZ 0x00443754                      ; 004436dd
        ;   XREF to: 00443754 (CONDITIONAL_JUMP)  ; LAB_00443754
    MOV EAX,dword ptr [EBX + 0x8]       ; 004436df
    MOV EDX,EAX                         ; 004436e2
    SAR EDX,0x1f                        ; 004436e4
    SHL EDX,0x7                         ; 004436e7
    SBB EAX,EDX                         ; 004436ea
    SAR EAX,0x7                         ; 004436ec
    MOV EDX,0xff                        ; 004436ef
    SUB EDX,EAX                         ; 004436f4
    TEST EDX,EDX                        ; 004436f6
    JL 0x00443756                       ; 004436f8
        ;   XREF to: 00443756 (CONDITIONAL_JUMP)  ; LAB_00443756
    CMP EDX,0xff                        ; 004436fa
    JLE 0x00443707                      ; 00443700
        ;   XREF to: 00443707 (CONDITIONAL_JUMP)  ; LAB_00443707
    MOV EDX,0xff                        ; 00443702
    MOV EAX,EDX                         ; 00443707
        ;   Label: LAB_00443707
    SAR EDX,0x1f                        ; 00443709
    SHL EDX,0x3                         ; 0044370c
    SBB EAX,EDX                         ; 0044370f
    SAR EAX,0x3                         ; 00443711
    MOV EDX,EAX                         ; 00443714
    MOV ECX,EDX                         ; 00443716
    SHL EAX,0xa                         ; 00443718
    SHL ECX,0x5                         ; 0044371b
    ADD EAX,ECX                         ; 0044371e
    ADD EDX,EAX                         ; 00443720
    XOR EAX,EAX                         ; 00443722
    PUSH 0x1                            ; 00443724
    MOV AL,byte ptr [EDX + 0x2cf9020]   ; 00443726 | g_ColorCubeLookup
    PUSH EBX                            ; 0044372c
    MOV [0x02d02570],EAX                ; 0044372d | g_ActiveRenderColor
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 00443732
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00443737
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044373a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0044373d
    PUSH EDX                            ; 00443740
    SAR EAX,0x10                        ; 00443741
    PUSH EAX                            ; 00443744
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443745
    SAR EAX,0x10                        ; 00443748
    PUSH EAX                            ; 0044374b
    CALL engine_2d.c_plotPixelWithDepth_FUN_00401290 ; 0044374c
        ;   XREF to: 00401290 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
    ADD ESP,0xc                         ; 00443751
    POP EBX                             ; 00443754
        ;   Label: LAB_00443754
    RET                                 ; 00443755
    XOR EDX,EDX                         ; 00443756
        ;   Label: LAB_00443756
    JMP 0x00443707                      ; 00443758
        ;   XREF to: 00443707 (UNCONDITIONAL_JUMP)  ; LAB_00443707

