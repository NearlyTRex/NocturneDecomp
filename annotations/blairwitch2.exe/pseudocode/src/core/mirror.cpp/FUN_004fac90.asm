; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_FUN_004fac90(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_FUN_00534610 at 0053462c
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_mirror.cpp_FUN_004faa10
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fac90
        ;   Label: core_mirror.cpp_FUN_004fac90
    PUSH EDX                            ; 004fac94
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fac95
    PUSH ECX                            ; 004fac99
    CALL core_mirror.cpp_FUN_004faa10   ; 004fac9a
        ;   XREF to: 004faa10 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_004faa10(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004fac9f
    TEST EAX,EAX                        ; 004faca2
    JNZ 0x004faca7                      ; 004faca4
        ;   XREF to: 004faca7 (CONDITIONAL_JUMP)  ; LAB_004faca7
    RET                                 ; 004faca6
    PUSH EBX                            ; 004faca7
        ;   Label: LAB_004faca7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004faca8
    ADD EAX,0xe8                        ; 004facac
    PUSH EAX                            ; 004facb1
    MOV EBX,dword ptr [0x0060b280]      ; 004facb2 | DAT_0060b280
    PUSH EBX                            ; 004facb8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 004facb9
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004facbe
    POP EBX                             ; 004facc1
    RET                                 ; 004facc2

