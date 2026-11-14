; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_004f4730(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[1]:
;   engine_mini3d.cpp_polyListSurface_FUN_004f7e00 at 004f7f0c
;
; Referenced Globals:
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d098c8
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d167ac
;   undefined4 DAT_01d167b0
;   undefined4 DAT_01d167bc
;   undefined4 DAT_01d167c0
;   undefined4 DAT_01d167cc
;   undefined4 DAT_01d167d0
;
; Called Functions:
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4730
        ;   Label: engine_mini3d.cpp_transformVertexOrtho_FUN_004f4730
    PUSH ESI                            ; 004f4731
    SUB ESP,0xc                         ; 004f4732
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f4735
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f4739
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f473d
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
    MOV EAX,[0x01d09918]                ; 004f4742 | DAT_01d09918
    FLD float ptr [ESI + 0x4]           ; 004f4747
    FSUB float ptr [EAX + 0x28]         ; 004f474a
    FLD ST0                             ; 004f474d
    FMUL float ptr [0x01d167bc]         ; 004f474f | DAT_01d167bc
    FLD float ptr [ESI]                 ; 004f4755
    FSUB float ptr [EAX + 0x24]         ; 004f4757
    FLD ST0                             ; 004f475a
    FMUL float ptr [0x01d167b0]         ; 004f475c | DAT_01d167b0
    FXCH                                ; 004f4762
    FMUL float ptr [0x01d167ac]         ; 004f4764 | DAT_01d167ac
    FXCH ST3                            ; 004f476a
    FMUL float ptr [0x01d167c0]         ; 004f476c | DAT_01d167c0
    FLD float ptr [ESI + 0x8]           ; 004f4772
    FXCH ST4                            ; 004f4775
    FADDP ST3,ST0                       ; 004f4777
    FXCH ST3                            ; 004f4779
    FSUB float ptr [EAX + 0x2c]         ; 004f477b
    FLD ST0                             ; 004f477e
    FMUL float ptr [0x01d167cc]         ; 004f4780 | DAT_01d167cc
    FXCH ST4                            ; 004f4786
    FADDP ST2,ST0                       ; 004f4788
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 004f478a
    FMUL float ptr [0x01d167d0]         ; 004f4791 | DAT_01d167d0
    MOV dword ptr [EBX + 0x10],0x0      ; 004f4797
    FXCH ST3                            ; 004f479e
    FADDP ST2,ST0                       ; 004f47a0
    FADDP ST2,ST0                       ; 004f47a2
    FST float ptr [EBX]                 ; 004f47a4
    FLD float ptr [0x01d098c8]          ; 004f47a6 | DAT_01d098c8
    FXCH                                ; 004f47ac
    FMUL ST1                            ; 004f47ae
    FXCH ST2                            ; 004f47b0
    FST float ptr [EBX + 0x4]           ; 004f47b2
    FMULP                               ; 004f47b5
    MOV dword ptr [EBX + 0xc],0x3f800000 ; 004f47b7
    FLD float ptr [0x01d09888]          ; 004f47be | DAT_01d09888
    FLD float ptr [0x01d09884]          ; 004f47c4 | DAT_01d09884
    FADDP ST3,ST0                       ; 004f47ca
    FADDP                               ; 004f47cc
    FXCH                                ; 004f47ce
    FSTP float ptr [EBX + 0x14]         ; 004f47d0
    FSTP float ptr [EBX + 0x18]         ; 004f47d3
    ADD ESP,0xc                         ; 004f47d6
    POP ESI                             ; 004f47d9
    POP EBX                             ; 004f47da
    RET                                 ; 004f47db

