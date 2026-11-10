; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lantern_cpp_CLantern_renderTransparent_FUN_0059d040(CLantern *this_ptr)
;
; Parameters:
; CLantern *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ef7d1
;   undefined4 DAT_005ef7d9
;
; Called Functions:
;   core_dlight.cpp_renderConeLightGeometry_FUN_0044d060
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059d040
        ;   Label: core_lantern.cpp_CLantern_renderTransparent_FUN_0059d040
    FLD float ptr [EDX + 0x700]         ; 0059d044
    FLDZ                                ; 0059d04a
    FCOMPP                              ; 0059d04c
    FNSTSW AX                           ; 0059d04e
    SAHF                                ; 0059d050
    JC 0x0059d056                       ; 0059d051
        ;   XREF to: 0059d056 (CONDITIONAL_JUMP)  ; LAB_0059d056
    XOR EAX,EAX                         ; 0059d053
    RET                                 ; 0059d055
    FLD float ptr [EDX + 0x6f0]         ; 0059d056
        ;   Label: LAB_0059d056
    FMUL double ptr [0x005ef7d9]        ; 0059d05c | DAT_005ef7d9
    SUB ESP,0x4                         ; 0059d062
    FLD float ptr [EDX + 0x6e8]         ; 0059d065
    FADD float ptr [0x005ef7d1]         ; 0059d06b | DAT_005ef7d1
    LEA EAX,[EDX + 0x6e4]               ; 0059d071
    FSTP float ptr [EDX + 0x6e8]        ; 0059d077
    FSTP float ptr [ESP]                ; 0059d07d
    PUSH dword ptr [EDX + 0x6f4]        ; 0059d080
    PUSH EAX                            ; 0059d086
    ADD EDX,0x6d8                       ; 0059d087
    PUSH EDX                            ; 0059d08d
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_0044d060 ; 0059d08e
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_0044d060(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    MOV EAX,0x1                         ; 0059d093
    ADD ESP,0x10                        ; 0059d098
    LEA EAX,[EAX]                       ; 0059d09b
    MOV ECX,ECX                         ; 0059d09e

