; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004f3440(int clamp_u,int clamp_v)
;
; Parameters:
; int              Stack[0x4]:4   clamp_u
; int              Stack[0x8]:4   clamp_v
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bcc8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcc8],0x0      ; 004f3440 | DAT_0264bcc8
        ;   Label: engine_mini3d.cpp_setTextureClamp_FUN_004f3440
    JZ 0x004f3452                       ; 004f3447
        ;   XREF to: 004f3452 (CONDITIONAL_JUMP)  ; LAB_004f3452
    CMP dword ptr [0x01c37788],0x0      ; 004f3449 | DAT_01c37788
    JNZ 0x004f3453                      ; 004f3450
        ;   XREF to: 004f3453 (CONDITIONAL_JUMP)  ; LAB_004f3453
    RET                                 ; 004f3452
        ;   Label: LAB_004f3452
    PUSH ESI                            ; 004f3453
        ;   Label: LAB_004f3453
    PUSH EBX                            ; 004f3454
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f3455
    PUSH EBX                            ; 004f3459
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f345a
    PUSH ESI                            ; 004f345e
    CALL dword ptr [0x0264bcc8]         ; 004f345f | DAT_0264bcc8
    ADD ESP,0x8                         ; 004f3465
    POP EBX                             ; 004f3468
    POP ESI                             ; 004f3469
    RET                                 ; 004f346a

