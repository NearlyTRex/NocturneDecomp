; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_getClippedTriangleCount_FUN_0046e950(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   core_dtri.cpp_buildClipTriangleFan_FUN_0046e960 at 0046e969
;
; Referenced Globals:
;   undefined4 DAT_01bc9e04
;
; *****************************************************************************

section .text

    MOV EAX,[0x01bc9e04]                ; 0046e950 | DAT_01bc9e04
        ;   Label: core_dtri.cpp_getClippedTriangleCount_FUN_0046e950
    SUB EAX,0x2                         ; 0046e955
    TEST EAX,EAX                        ; 0046e958
    JL 0x0046e95d                       ; 0046e95a
        ;   XREF to: 0046e95d (CONDITIONAL_JUMP)  ; LAB_0046e95d
    RET                                 ; 0046e95c
    XOR EAX,EAX                         ; 0046e95d
        ;   Label: LAB_0046e95d
    RET                                 ; 0046e95f

