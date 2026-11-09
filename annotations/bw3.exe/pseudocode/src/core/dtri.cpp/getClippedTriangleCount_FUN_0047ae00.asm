; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0047ae00(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   core_dtri.cpp_buildClipTriangleFan_FUN_0047ae10 at 0047ae19
;
; Referenced Globals:
;   undefined4 DAT_01c59e74
;
; *****************************************************************************

section .text

    MOV EAX,[0x01c59e74]                ; 0047ae00 | DAT_01c59e74
        ;   Label: core_dtri.cpp_getClippedTriangleCount_FUN_0047ae00
    SUB EAX,0x2                         ; 0047ae05
    TEST EAX,EAX                        ; 0047ae08
    JL 0x0047ae0d                       ; 0047ae0a
        ;   XREF to: 0047ae0d (CONDITIONAL_JUMP)  ; LAB_0047ae0d
    RET                                 ; 0047ae0c
    XOR EAX,EAX                         ; 0047ae0d
        ;   Label: LAB_0047ae0d
    RET                                 ; 0047ae0f

