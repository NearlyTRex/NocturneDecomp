; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_computeVertexFog_FUN_005140c0(float *vertex)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_005129d0 at 00512b1c
;   engine_mini3d.cpp_polyListL_FUN_00512c60 at 00512d0f
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 005128ad
;
; Referenced Globals:
;   undefined4 DAT_01d224c8
;   undefined4 DAT_01d22570
;   undefined4 DAT_01d2adb8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005140c0
        ;   Label: engine_mini3d.cpp_computeVertexFog_FUN_005140c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005140c3
    MOV ECX,dword ptr [0x01d224c8]      ; 005140c7 | DAT_01d224c8
    TEST ECX,ECX                        ; 005140cd
    JZ 0x00514113                       ; 005140cf
        ;   XREF to: 00514113 (CONDITIONAL_JUMP)  ; LAB_00514113
    FLD float ptr [EDX + 0x8]           ; 005140d1
    FSUB float ptr [0x01d22570]         ; 005140d4 | DAT_01d22570
    FMUL float ptr [0x01d2adb8]         ; 005140da | DAT_01d2adb8
    FLDZ                                ; 005140e0
    FXCH                                ; 005140e2
    FSTP float ptr [ESP]                ; 005140e4
    FCOMP float ptr [ESP]               ; 005140e7
    FNSTSW AX                           ; 005140ea
    SAHF                                ; 005140ec
    JA 0x00514109                       ; 005140ed
        ;   XREF to: 00514109 (CONDITIONAL_JUMP)  ; LAB_00514109
    CMP dword ptr [ESP],0x3f800000      ; 005140ef
    JLE 0x005140ff                      ; 005140f6
        ;   XREF to: 005140ff (CONDITIONAL_JUMP)  ; LAB_005140ff
    MOV dword ptr [ESP],0x3f800000      ; 005140f8
    MOV EAX,dword ptr [ESP]             ; 005140ff
        ;   Label: LAB_005140ff
    MOV dword ptr [EDX + 0x34],EAX      ; 00514102
    ADD ESP,0x4                         ; 00514105
    RET                                 ; 00514108
    PUSH EDI                            ; 00514109
        ;   Label: LAB_00514109
    XOR EDI,EDI                         ; 0051410a
    MOV dword ptr [ESP + 0x4],EDI       ; 0051410c
    POP EDI                             ; 00514110
    JMP 0x005140ff                      ; 00514111
        ;   XREF to: 005140ff (UNCONDITIONAL_JUMP)  ; LAB_005140ff
    MOV dword ptr [EDX + 0x34],ECX      ; 00514113
        ;   Label: LAB_00514113
    ADD ESP,0x4                         ; 00514116
    RET                                 ; 00514119

