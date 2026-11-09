; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_00448360(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448360
        ;   Label: core_curtain.cpp_CCurtain_renderOpaque_FUN_00448360
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 00448364
    JG 0x00448373                       ; 0044836e
        ;   XREF to: 00448373 (CONDITIONAL_JUMP)  ; LAB_00448373
    XOR EAX,EAX                         ; 00448370
    RET                                 ; 00448372
    PUSH EAX                            ; 00448373
        ;   Label: LAB_00448373
    CALL core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 ; 00448374
        ;   XREF to: 00448060 (UNCONDITIONAL_CALL)  ; int core_curtain.cpp_CCurtain_renderMesh_FUN_00448060(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 00448379
    RET                                 ; 0044837c

