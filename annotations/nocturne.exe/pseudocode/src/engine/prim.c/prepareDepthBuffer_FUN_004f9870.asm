; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_prepareDepthBuffer_FUN_004f9870(int param_1,int param_2)
;
;
; XREF[7]:
;   FUN_00409590 at 004097f1
;   FUN_004f9dd0 at 004f9fc4
;   engine_3d.c_rasterizePolygonCustom_FUN_00562de0 at 0056306b
;   engine_3d.c_rasterizeTriangle_FUN_005628c0 at 00562bd0
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080 at 0045819a
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb50e
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00 at 004faff3
;
; Referenced Globals:
;   undefined4 DAT_01c0399c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9870
        ;   Label: engine_prim.c_prepareDepthBuffer_FUN_004f9870
    PUSH ESI                            ; 004f9871
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f9872
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f9876
    MOV EDX,dword ptr [0x01c0399c]      ; 004f987a | DAT_01c0399c
    TEST EDX,EDX                        ; 004f9880
    JZ 0x004f98af                       ; 004f9882
        ;   XREF to: 004f98af (CONDITIONAL_JUMP)  ; LAB_004f98af
    XOR EDX,EDX                         ; 004f9884
    TEST EBX,EBX                        ; 004f9886
    JLE 0x004f98a0                      ; 004f9888
        ;   XREF to: 004f98a0 (CONDITIONAL_JUMP)  ; LAB_004f98a0
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f988a
        ;   Label: LAB_004f988a
    TEST ECX,ECX                        ; 004f988d
    JNZ 0x004f98a3                      ; 004f988f
        ;   XREF to: 004f98a3 (CONDITIONAL_JUMP)  ; LAB_004f98a3
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 004f9891
    INC EDX                             ; 004f9898
        ;   Label: LAB_004f9898
    ADD EAX,0x30                        ; 004f9899
    CMP EDX,EBX                         ; 004f989c
    JL 0x004f988a                       ; 004f989e
        ;   XREF to: 004f988a (CONDITIONAL_JUMP)  ; LAB_004f988a
    POP ESI                             ; 004f98a0
        ;   Label: LAB_004f98a0
    POP EBX                             ; 004f98a1
    RET                                 ; 004f98a2
    MOV ESI,0x7fffffff                  ; 004f98a3
        ;   Label: LAB_004f98a3
    SUB ESI,ECX                         ; 004f98a8
    MOV dword ptr [EAX + 0x8],ESI       ; 004f98aa
    JMP 0x004f9898                      ; 004f98ad
        ;   XREF to: 004f9898 (UNCONDITIONAL_JUMP)  ; LAB_004f9898
    TEST EBX,EBX                        ; 004f98af
        ;   Label: LAB_004f98af
    JLE 0x004f98a0                      ; 004f98b1
        ;   XREF to: 004f98a0 (CONDITIONAL_JUMP)  ; LAB_004f98a0
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f98b3
        ;   Label: LAB_004f98b3
    SAR ECX,0x4                         ; 004f98b6
    TEST ECX,ECX                        ; 004f98b9
    JNZ 0x004f98ce                      ; 004f98bb
        ;   XREF to: 004f98ce (CONDITIONAL_JUMP)  ; LAB_004f98ce
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 004f98bd
    INC EDX                             ; 004f98c4
    ADD EAX,0x30                        ; 004f98c5
    CMP EDX,EBX                         ; 004f98c8
    JGE 0x004f98a0                      ; 004f98ca
        ;   XREF to: 004f98a0 (CONDITIONAL_JUMP)  ; LAB_004f98a0
    JMP 0x004f98b3                      ; 004f98cc
        ;   XREF to: 004f98b3 (UNCONDITIONAL_JUMP)  ; LAB_004f98b3
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f98ce
        ;   Label: LAB_004f98ce
    MOV dword ptr [EAX + 0x8],ECX       ; 004f98d1
    INC EDX                             ; 004f98d4
    ADD EAX,0x30                        ; 004f98d5
    CMP EDX,EBX                         ; 004f98d8
    JGE 0x004f98a0                      ; 004f98da
        ;   XREF to: 004f98a0 (CONDITIONAL_JUMP)  ; LAB_004f98a0
    JMP 0x004f98b3                      ; 004f98dc
        ;   XREF to: 004f98b3 (UNCONDITIONAL_JUMP)  ; LAB_004f98b3

