; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_00512270(int clamp_u,int clamp_v)
;
; Parameters:
; int              Stack[0x4]:4   clamp_u
; int              Stack[0x8]:4   clamp_v
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83498
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83498],0x0      ; 00512270 | DAT_02c83498
        ;   Label: engine_mini3d.cpp_setTextureClamp_FUN_00512270
    JZ 0x00512282                       ; 00512277
        ;   XREF to: 00512282 (CONDITIONAL_JUMP)  ; LAB_00512282
    CMP dword ptr [0x01c50948],0x0      ; 00512279 | DAT_01c50948
    JNZ 0x00512283                      ; 00512280
        ;   XREF to: 00512283 (CONDITIONAL_JUMP)  ; LAB_00512283
    RET                                 ; 00512282
        ;   Label: LAB_00512282
    PUSH ESI                            ; 00512283
        ;   Label: LAB_00512283
    PUSH EBX                            ; 00512284
    MOV EBX,dword ptr [ESP + 0x10]      ; 00512285
    PUSH EBX                            ; 00512289
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051228a
    PUSH ESI                            ; 0051228e
    CALL dword ptr [0x02c83498]         ; 0051228f | DAT_02c83498
    ADD ESP,0x8                         ; 00512295
    POP EBX                             ; 00512298
    POP ESI                             ; 00512299
    RET                                 ; 0051229a

