; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044c220(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c220
        ;   Label: core_curtain.cpp_CCurtain_renderOpaque_FUN_0044c220
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 0044c224
    JG 0x0044c233                       ; 0044c22e
        ;   XREF to: 0044c233 (CONDITIONAL_JUMP)  ; LAB_0044c233
    XOR EAX,EAX                         ; 0044c230
    RET                                 ; 0044c232
    PUSH EAX                            ; 0044c233
        ;   Label: LAB_0044c233
    CALL core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 ; 0044c234
        ;   XREF to: 0044bf20 (UNCONDITIONAL_CALL)  ; int core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0044c239
    RET                                 ; 0044c23c

