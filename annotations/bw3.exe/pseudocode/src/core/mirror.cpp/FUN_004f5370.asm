; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_004f5370(CMirror *param_1,SMRGLHeaderPrimitive *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0 at 0053ad2d
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_mirror.cpp_FUN_004f5130
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f5370
        ;   Label: core_mirror.cpp_FUN_004f5370
    PUSH EDX                            ; 004f5374
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f5375
    PUSH ECX                            ; 004f5379
    CALL core_mirror.cpp_FUN_004f5130   ; 004f537a
        ;   XREF to: 004f5130 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_004f5130(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004f537f
    TEST EAX,EAX                        ; 004f5382
    JNZ 0x004f5387                      ; 004f5384
        ;   XREF to: 004f5387 (CONDITIONAL_JUMP)  ; LAB_004f5387
    RET                                 ; 004f5386
    PUSH EBX                            ; 004f5387
        ;   Label: LAB_004f5387
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5388
    ADD EAX,0xe8                        ; 004f538c
    PUSH EAX                            ; 004f5391
    MOV EBX,dword ptr [0x005f2afc]      ; 004f5392 | DAT_005f2afc
    PUSH EBX                            ; 004f5398 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 004f5399
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004f539e
    POP EBX                             ; 004f53a1
    RET                                 ; 004f53a2

