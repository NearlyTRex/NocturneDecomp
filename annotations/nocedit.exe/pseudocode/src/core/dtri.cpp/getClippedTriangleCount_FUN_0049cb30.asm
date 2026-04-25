; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0049cb30(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40 at 0049cb49
;
; Referenced Globals:
;   int g_ClipOutputVertexCount
;
; *****************************************************************************

section .text

    MOV EAX,[0x02ceea64]                ; 0049cb30 | g_ClipOutputVertexCount
        ;   Label: core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
    SUB EAX,0x2                         ; 0049cb35
    TEST EAX,EAX                        ; 0049cb38
    JL 0x0049cb3d                       ; 0049cb3a
        ;   XREF to: 0049cb3d (CONDITIONAL_JUMP)  ; LAB_0049cb3d
    RET                                 ; 0049cb3c
    XOR EAX,EAX                         ; 0049cb3d
        ;   Label: LAB_0049cb3d
    RET                                 ; 0049cb3f

