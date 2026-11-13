; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_004f5370(float *vertex)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_004f3c40 at 004f3daa
;   engine_mini3d.cpp_polyListL_FUN_004f3ef0 at 004f3fad
;   engine_mini3d.cpp_polyList_FUN_004f3920 at 004f3b1a
;
; Referenced Globals:
;   undefined4 DAT_01d09868
;   undefined4 DAT_01d0990c
;   undefined4 DAT_01d12158
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f5370
        ;   Label: engine_mini3d.cpp_computeVertexFog_FUN_004f5370
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f5373
    MOV ECX,dword ptr [0x01d09868]      ; 004f5377 | DAT_01d09868
    TEST ECX,ECX                        ; 004f537d
    JZ 0x004f53c3                       ; 004f537f
        ;   XREF to: 004f53c3 (CONDITIONAL_JUMP)  ; LAB_004f53c3
    FLD float ptr [EDX + 0x8]           ; 004f5381
    FSUB float ptr [0x01d0990c]         ; 004f5384 | DAT_01d0990c
    FMUL float ptr [0x01d12158]         ; 004f538a | DAT_01d12158
    FLDZ                                ; 004f5390
    FXCH                                ; 004f5392
    FSTP float ptr [ESP]                ; 004f5394
    FCOMP float ptr [ESP]               ; 004f5397
    FNSTSW AX                           ; 004f539a
    SAHF                                ; 004f539c
    JA 0x004f53b9                       ; 004f539d
        ;   XREF to: 004f53b9 (CONDITIONAL_JUMP)  ; LAB_004f53b9
    CMP dword ptr [ESP],0x3f800000      ; 004f539f
    JLE 0x004f53af                      ; 004f53a6
        ;   XREF to: 004f53af (CONDITIONAL_JUMP)  ; LAB_004f53af
    MOV dword ptr [ESP],0x3f800000      ; 004f53a8
    MOV EAX,dword ptr [ESP]             ; 004f53af
        ;   Label: LAB_004f53af
    MOV dword ptr [EDX + 0x34],EAX      ; 004f53b2
    ADD ESP,0x4                         ; 004f53b5
    RET                                 ; 004f53b8
    PUSH EDI                            ; 004f53b9
        ;   Label: LAB_004f53b9
    XOR EDI,EDI                         ; 004f53ba
    MOV dword ptr [ESP + 0x4],EDI       ; 004f53bc
    POP EDI                             ; 004f53c0
    JMP 0x004f53af                      ; 004f53c1
        ;   XREF to: 004f53af (UNCONDITIONAL_JUMP)  ; LAB_004f53af
    MOV dword ptr [EDX + 0x34],ECX      ; 004f53c3
        ;   Label: LAB_004f53c3
    ADD ESP,0x4                         ; 004f53c6
    RET                                 ; 004f53c9

