; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 at 0053b26c
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f53b0
        ;   Label: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0
    PUSH EDX                            ; 004f53b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f53b5
    PUSH ECX                            ; 004f53b9
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130 ; 004f53ba
        ;   XREF to: 004f5130 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004f53bf
    TEST EAX,EAX                        ; 004f53c2
    JNZ 0x004f53c7                      ; 004f53c4
        ;   XREF to: 004f53c7 (CONDITIONAL_JUMP)  ; LAB_004f53c7
    RET                                 ; 004f53c6
    PUSH EBX                            ; 004f53c7
        ;   Label: LAB_004f53c7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f53c8
    ADD EAX,0xe8                        ; 004f53cc
    PUSH EAX                            ; 004f53d1
    MOV EBX,dword ptr [0x005f2afc]      ; 004f53d2 | DAT_005f2afc
    PUSH EBX                            ; 004f53d8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 ; 004f53d9
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004f53de
    POP EBX                             ; 004f53e1
    RET                                 ; 004f53e2

