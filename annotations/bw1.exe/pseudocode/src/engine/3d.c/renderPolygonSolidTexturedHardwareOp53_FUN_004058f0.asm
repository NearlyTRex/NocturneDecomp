; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a6c
;   undefined4 DAT_00713a84
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004058f0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0
    PUSH ESI                            ; 004058f1
    PUSH EDI                            ; 004058f2
    PUSH EBP                            ; 004058f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004058f4
    MOV EDX,dword ptr [0x01c51d00]      ; 004058f8 | DAT_01c51d00
    LEA EBX,[ESI + 0x18]                ; 004058fe
    TEST EDX,EDX                        ; 00405901
    JNZ 0x00405964                      ; 00405903
        ;   XREF to: 00405964 (CONDITIONAL_JUMP)  ; LAB_00405964
    CMP dword ptr [0x0061b4a0],0x20     ; 00405905 | DAT_0061b4a0
    JNZ 0x00405958                      ; 0040590c
        ;   XREF to: 00405958 (CONDITIONAL_JUMP)  ; LAB_00405958
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040590e | DAT_01c4f02c
    MOV EDI,0x3                         ; 00405918
        ;   Label: LAB_00405918
    PUSH 0xffff                         ; 0040591d
    XOR EBP,EBP                         ; 00405922
    MOV dword ptr [0x01c51d14],EDI      ; 00405924 | DAT_01c51d14
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 0040592a
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    MOV EAX,[0x00713a6c]                ; 0040592f | DAT_00713a6c
    ADD ESP,0x4                         ; 00405934
    MOV dword ptr [0x01c51d18],EBP      ; 00405937 | DAT_01c51d18
    TEST EAX,EAX                        ; 0040593d
    JZ 0x00405985                       ; 0040593f
        ;   XREF to: 00405985 (CONDITIONAL_JUMP)  ; LAB_00405985
    MOV ECX,dword ptr [ESI + 0x4]       ; 00405941
    PUSH ECX                            ; 00405944
    PUSH EBX                            ; 00405945
    CALL engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80 ; 00405946
        ;   XREF to: 004c4d80 (UNCONDITIONAL_CALL)  ; undefined engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80()
    ADD ESP,0x8                         ; 0040594b
    MOV EAX,0x713a84                    ; 0040594e | DAT_00713a84
    POP EBP                             ; 00405953
    POP EDI                             ; 00405954
    POP ESI                             ; 00405955
    POP EBX                             ; 00405956
    RET                                 ; 00405957
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405958 | DAT_01c4f02c
        ;   Label: LAB_00405958
    JMP 0x00405918                      ; 00405962
        ;   XREF to: 00405918 (UNCONDITIONAL_JUMP)  ; LAB_00405918
    CMP dword ptr [0x0061b4a0],0x20     ; 00405964 | DAT_0061b4a0
        ;   Label: LAB_00405964
    JNZ 0x00405979                      ; 0040596b
        ;   XREF to: 00405979 (CONDITIONAL_JUMP)  ; LAB_00405979
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040596d | DAT_01c4f02c
    JMP 0x00405918                      ; 00405977
        ;   XREF to: 00405918 (UNCONDITIONAL_JUMP)  ; LAB_00405918
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405979 | DAT_01c4f02c
        ;   Label: LAB_00405979
    JMP 0x00405918                      ; 00405983
        ;   XREF to: 00405918 (UNCONDITIONAL_JUMP)  ; LAB_00405918
    PUSH EBX                            ; 00405985
        ;   Label: LAB_00405985
    MOV EDX,dword ptr [ESI + 0x4]       ; 00405986
    PUSH EDX                            ; 00405989
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040598a
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040598f
    MOV EAX,0x713a84                    ; 00405992 | DAT_00713a84
    POP EBP                             ; 00405997
    POP EDI                             ; 00405998
    POP ESI                             ; 00405999
    POP EBX                             ; 0040599a
    RET                                 ; 0040599b

