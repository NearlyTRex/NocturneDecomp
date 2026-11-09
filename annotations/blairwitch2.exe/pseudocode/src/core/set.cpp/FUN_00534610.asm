; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_FUN_00534610(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[3]:
;   core_box.cpp_FUN_0041aa20 at 0041abc0
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0 at 00443b96
;   core_dlight.cpp_CDemonLight_testVisibility_FUN_0044d9f0 at 0044da4e
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c68
;
; Called Functions:
;   core_mirror.cpp_FUN_004fac90
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 00534610
        ;   Label: core_set.cpp_FUN_00534610
    MOV EAX,[0x0060b280]                ; 00534614 | DAT_0060b280
    MOV EDX,dword ptr [EAX + 0x18]      ; 00534619 | DAT_01ba5c68
    TEST EDX,EDX                        ; 0053461c
    JZ 0x00534635                       ; 0053461e
        ;   XREF to: 00534635 (CONDITIONAL_JUMP)  ; LAB_00534635
    MOV EAX,dword ptr [ESP + 0x4]       ; 00534620
    PUSH ECX                            ; 00534624
    MOV EDX,dword ptr [EAX + 0x161664]  ; 00534625
    PUSH EDX                            ; 0053462b
    CALL core_mirror.cpp_FUN_004fac90   ; 0053462c
        ;   XREF to: 004fac90 (UNCONDITIONAL_CALL)  ; int core_mirror.cpp_FUN_004fac90(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00534631
    RET                                 ; 00534634
    PUSH ECX                            ; 00534635
        ;   Label: LAB_00534635
    PUSH EAX                            ; 00534636 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00534637
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0053463c
    RET                                 ; 0053463f

