; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0(CMirrorHack *this_ptr,SSurfaceInfo *surface_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SSurfaceInfo *   Stack[0x8]:4   surface_info
;
; Referenced Globals:
;   double DOUBLE_0063593d = -0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b2c0
        ;   Label: core_manpuz.cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b2c1
    PUSH EBX                            ; 0050b2c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050b2c6
    PUSH EDX                            ; 0050b2ca
    CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840 ; 0050b2cb
        ;   XREF to: 00409840 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
    FLD float ptr [EBX + 0x34]          ; 0050b2d0
    ADD ESP,0x8                         ; 0050b2d3
    FCOMP double ptr [0x0063593d]       ; 0050b2d6 | DOUBLE_0063593d
    FNSTSW AX                           ; 0050b2dc
    SAHF                                ; 0050b2de
    JA 0x0050b2e3                       ; 0050b2df
        ;   XREF to: 0050b2e3 (CONDITIONAL_JUMP)  ; LAB_0050b2e3
    POP EBX                             ; 0050b2e1
    RET                                 ; 0050b2e2
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 0050b2e3
        ;   Label: LAB_0050b2e3
    POP EBX                             ; 0050b2ea
    RET                                 ; 0050b2eb

