; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clampClippedPolygon_FUN_004f67b0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   engine_mini3d.cpp_clipAndFillPolygon_FUN_004f6be0 at 004f6c75
;   engine_mini3d.cpp_clipBatchTriangle_FUN_004f6a70 at 004f6b32
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f8330 at 004f8423
;
; Referenced Globals:
;   undefined4 DAT_01d09b94
;   undefined4 DAT_01d0bb98
;   undefined4 DAT_01d0bba0
;   undefined4 DAT_01d0bbd8
;   undefined4 DAT_01d0bbdc
;   undefined4 DAT_01d0bbe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f67b0
        ;   Label: engine_mini3d.cpp_clampClippedPolygon_FUN_004f67b0
    SUB ESP,0x4                         ; 004f67b1
    MOV EBX,dword ptr [0x01d09b94]      ; 004f67b4 | DAT_01d09b94
    MOV EDX,0x1d0bb98                   ; 004f67ba
    XOR ECX,ECX                         ; 004f67bf
    TEST EBX,EBX                        ; 004f67c1
    JLE 0x004f67e5                      ; 004f67c3
        ;   XREF to: 004f67e5 (CONDITIONAL_JUMP)  ; LAB_004f67e5
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 004f67c5 | DAT_01d0bba0 | DAT_01d0bbe0
        ;   Label: LAB_004f67c5
    JZ 0x004f67f0                       ; 004f67cc
        ;   XREF to: 004f67f0 (CONDITIONAL_JUMP)  ; LAB_004f67f0
    FLD float ptr [EDX]                 ; 004f67ce | DAT_01d0bb98 | DAT_01d0bbd8
    FCOMP float ptr [EDX + 0x8]         ; 004f67d0 | DAT_01d0bba0 | DAT_01d0bbe0
    FNSTSW AX                           ; 004f67d3
    SAHF                                ; 004f67d5
    JBE 0x004f6806                      ; 004f67d6
        ;   XREF to: 004f6806 (CONDITIONAL_JUMP)  ; LAB_004f6806
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f67d8 | DAT_01d0bba0 | DAT_01d0bbe0
    MOV dword ptr [EDX],EAX             ; 004f67db | DAT_01d0bb98 | DAT_01d0bbd8
        ;   Label: LAB_004f67db
    INC ECX                             ; 004f67dd
        ;   Label: LAB_004f67dd
    ADD EDX,0x40                        ; 004f67de
    CMP ECX,EBX                         ; 004f67e1
    JL 0x004f67c5                       ; 004f67e3
        ;   XREF to: 004f67c5 (CONDITIONAL_JUMP)  ; LAB_004f67c5
    MOV dword ptr [0x01d09b94],EBX      ; 004f67e5 | DAT_01d09b94
        ;   Label: LAB_004f67e5
    ADD ESP,0x4                         ; 004f67eb
    POP EBX                             ; 004f67ee
    RET                                 ; 004f67ef
    MOV dword ptr [EDX],0x0             ; 004f67f0 | DAT_01d0bbd8
        ;   Label: LAB_004f67f0
    MOV dword ptr [EDX + 0x4],0x0       ; 004f67f6 | DAT_01d0bbdc
    MOV dword ptr [EDX + 0x8],0x3f800000 ; 004f67fd | DAT_01d0bbe0
    JMP 0x004f67dd                      ; 004f6804
        ;   XREF to: 004f67dd (UNCONDITIONAL_JUMP)  ; LAB_004f67dd
    FLD float ptr [EDX]                 ; 004f6806 | DAT_01d0bbd8
        ;   Label: LAB_004f6806
    FLD float ptr [EDX + 0x8]           ; 004f6808 | DAT_01d0bbe0
    FCHS                                ; 004f680b
    FSTP float ptr [ESP]                ; 004f680d
    FCOMP float ptr [ESP]               ; 004f6810
    FNSTSW AX                           ; 004f6813
    SAHF                                ; 004f6815
    JNC 0x004f681d                      ; 004f6816
        ;   XREF to: 004f681d (CONDITIONAL_JUMP)  ; LAB_004f681d
    MOV EAX,dword ptr [ESP]             ; 004f6818
    JMP 0x004f67db                      ; 004f681b
        ;   XREF to: 004f67db (UNCONDITIONAL_JUMP)  ; LAB_004f67db
    FLD float ptr [EDX + 0x4]           ; 004f681d | DAT_01d0bbdc
        ;   Label: LAB_004f681d
    FCOMP float ptr [EDX + 0x8]         ; 004f6820 | DAT_01d0bbe0
    FNSTSW AX                           ; 004f6823
    SAHF                                ; 004f6825
    JBE 0x004f6830                      ; 004f6826
        ;   XREF to: 004f6830 (CONDITIONAL_JUMP)  ; LAB_004f6830
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f6828 | DAT_01d0bbe0
    MOV dword ptr [EDX + 0x4],EAX       ; 004f682b | DAT_01d0bbdc
    JMP 0x004f67dd                      ; 004f682e
        ;   XREF to: 004f67dd (UNCONDITIONAL_JUMP)  ; LAB_004f67dd
    FLD float ptr [EDX + 0x4]           ; 004f6830 | DAT_01d0bbdc
        ;   Label: LAB_004f6830
    FCOMP float ptr [ESP]               ; 004f6833
    FNSTSW AX                           ; 004f6836
    SAHF                                ; 004f6838
    JNC 0x004f67dd                      ; 004f6839
        ;   XREF to: 004f67dd (CONDITIONAL_JUMP)  ; LAB_004f67dd
    MOV EAX,dword ptr [ESP]             ; 004f683b
    MOV dword ptr [EDX + 0x4],EAX       ; 004f683e | DAT_01d0bbdc
    JMP 0x004f67dd                      ; 004f6841
        ;   XREF to: 004f67dd (UNCONDITIONAL_JUMP)  ; LAB_004f67dd

