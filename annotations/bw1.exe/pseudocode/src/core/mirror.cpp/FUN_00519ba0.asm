; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_00519ba0(CMirror *param_1,SMRGLHeaderPrimitive *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360 at 0055539d
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_mirror.cpp_FUN_00519960
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00519ba0
        ;   Label: core_mirror.cpp_FUN_00519ba0
    PUSH EDX                            ; 00519ba4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00519ba5
    PUSH ECX                            ; 00519ba9
    CALL core_mirror.cpp_FUN_00519960   ; 00519baa
        ;   XREF to: 00519960 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_00519960(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00519baf
    TEST EAX,EAX                        ; 00519bb2
    JNZ 0x00519bb7                      ; 00519bb4
        ;   XREF to: 00519bb7 (CONDITIONAL_JUMP)  ; LAB_00519bb7
    RET                                 ; 00519bb6
    PUSH EBX                            ; 00519bb7
        ;   Label: LAB_00519bb7
    MOV EAX,dword ptr [ESP + 0x8]       ; 00519bb8
    ADD EAX,0xe8                        ; 00519bbc
    PUSH EAX                            ; 00519bc1
    MOV EBX,dword ptr [0x00612560]      ; 00519bc2 | DAT_00612560
    PUSH EBX                            ; 00519bc8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00519bc9
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00519bce
    POP EBX                             ; 00519bd1
    RET                                 ; 00519bd2

