; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30(void)
;
;
; XREF[1]:
;   core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40 at 0049cb49
;
; Referenced Globals:
;   int g_ClipOutputVertexCount
;
; *****************************************************************************

section .text

    MOV EAX,[0x02ceea64]                ; 0049cb30 | int g_ClipOutputVertexCount
        ;   Label: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
    SUB EAX,0x2                         ; 0049cb35
    TEST EAX,EAX                        ; 0049cb38
    JL 0x0049cb3d                       ; 0049cb3a | LAB_0049cb3d
        ;   XREF to: 0049cb3d (CONDITIONAL_JUMP)
    RET                                 ; 0049cb3c
    XOR EAX,EAX                         ; 0049cb3d
        ;   Label: LAB_0049cb3d
    RET                                 ; 0049cb3f

