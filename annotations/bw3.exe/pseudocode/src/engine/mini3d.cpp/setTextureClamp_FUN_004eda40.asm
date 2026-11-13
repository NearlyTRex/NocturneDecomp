; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004eda40(int clamp_u,int clamp_v)
;
; Parameters:
; int              Stack[0x4]:4   clamp_u
; int              Stack[0x8]:4   clamp_v
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf60f4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf60f4],0x0      ; 004eda40 | DAT_02cf60f4
        ;   Label: engine_mini3d.cpp_setTextureClamp_FUN_004eda40
    JZ 0x004eda52                       ; 004eda47
        ;   XREF to: 004eda52 (CONDITIONAL_JUMP)  ; LAB_004eda52
    CMP dword ptr [0x01c6cee8],0x0      ; 004eda49 | DAT_01c6cee8
    JNZ 0x004eda53                      ; 004eda50
        ;   XREF to: 004eda53 (CONDITIONAL_JUMP)  ; LAB_004eda53
    RET                                 ; 004eda52
        ;   Label: LAB_004eda52
    PUSH ESI                            ; 004eda53
        ;   Label: LAB_004eda53
    PUSH EBX                            ; 004eda54
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eda55
    PUSH EBX                            ; 004eda59
    MOV ESI,dword ptr [ESP + 0x10]      ; 004eda5a
    PUSH ESI                            ; 004eda5e
    CALL dword ptr [0x02cf60f4]         ; 004eda5f | DAT_02cf60f4
    ADD ESP,0x8                         ; 004eda65
    POP EBX                             ; 004eda68
    POP ESI                             ; 004eda69
    RET                                 ; 004eda6a

