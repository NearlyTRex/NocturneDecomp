; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_FUN_00519be0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_FUN_005558c0 at 005558dc
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_mirror.cpp_FUN_00519960
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00519be0
        ;   Label: core_mirror.cpp_FUN_00519be0
    PUSH EDX                            ; 00519be4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00519be5
    PUSH ECX                            ; 00519be9
    CALL core_mirror.cpp_FUN_00519960   ; 00519bea
        ;   XREF to: 00519960 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_00519960(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00519bef
    TEST EAX,EAX                        ; 00519bf2
    JNZ 0x00519bf7                      ; 00519bf4
        ;   XREF to: 00519bf7 (CONDITIONAL_JUMP)  ; LAB_00519bf7
    RET                                 ; 00519bf6
    PUSH EBX                            ; 00519bf7
        ;   Label: LAB_00519bf7
    MOV EAX,dword ptr [ESP + 0x8]       ; 00519bf8
    ADD EAX,0xe8                        ; 00519bfc
    PUSH EAX                            ; 00519c01
    MOV EBX,dword ptr [0x00612560]      ; 00519c02 | DAT_00612560
    PUSH EBX                            ; 00519c08 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 00519c09
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00519c0e
    POP EBX                             ; 00519c11
    RET                                 ; 00519c12

