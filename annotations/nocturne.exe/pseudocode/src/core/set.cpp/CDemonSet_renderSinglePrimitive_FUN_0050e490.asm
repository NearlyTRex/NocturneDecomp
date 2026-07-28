; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_box.cpp_FUN_0041d050 at 0041d1c8
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;
; Called Functions:
;   core_mirror.cpp_FUN_004d7720
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 0050e490
        ;   Label: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
    MOV EAX,[0x005ae704]                ; 0050e494 | DAT_005ae704
    MOV EDX,dword ptr [EAX + 0x18]      ; 0050e499 | DAT_01b4d750
    TEST EDX,EDX                        ; 0050e49c
    JZ 0x0050e4b5                       ; 0050e49e
        ;   XREF to: 0050e4b5 (CONDITIONAL_JUMP)  ; LAB_0050e4b5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e4a0
    PUSH ECX                            ; 0050e4a4
    MOV EDX,dword ptr [EAX + 0x161268]  ; 0050e4a5
    PUSH EDX                            ; 0050e4ab
    CALL core_mirror.cpp_FUN_004d7720   ; 0050e4ac
        ;   XREF to: 004d7720 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004d7720()
    ADD ESP,0x8                         ; 0050e4b1
    RET                                 ; 0050e4b4
    PUSH ECX                            ; 0050e4b5
        ;   Label: LAB_0050e4b5
    PUSH EAX                            ; 0050e4b6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 0050e4b7
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0050e4bc
    RET                                 ; 0050e4bf

