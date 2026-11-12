; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(int param_1,int param_2)
;
;
; XREF[7]:
;   core_dpart.cpp_FUN_0047ab00 at 0047ac1a
;   core_zombie.cpp_FUN_005bf120 at 005bf430
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0 at 00408051
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053f892
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e328
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080 at 0053f383
;   engine_zraster.c_rasterizePolygonCustom_FUN_005bf640 at 005bf8cb
;
; Referenced Globals:
;   undefined4 DAT_01c51d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dbc0
        ;   Label: engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
    PUSH ESI                            ; 0053dbc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053dbc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053dbc6
    MOV EDX,dword ptr [0x01c51d10]      ; 0053dbca | DAT_01c51d10
    TEST EDX,EDX                        ; 0053dbd0
    JZ 0x0053dbff                       ; 0053dbd2
        ;   XREF to: 0053dbff (CONDITIONAL_JUMP)  ; LAB_0053dbff
    XOR EDX,EDX                         ; 0053dbd4
    TEST EBX,EBX                        ; 0053dbd6
    JLE 0x0053dbf0                      ; 0053dbd8
        ;   XREF to: 0053dbf0 (CONDITIONAL_JUMP)  ; LAB_0053dbf0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053dbda
        ;   Label: LAB_0053dbda
    TEST ECX,ECX                        ; 0053dbdd
    JNZ 0x0053dbf3                      ; 0053dbdf
        ;   XREF to: 0053dbf3 (CONDITIONAL_JUMP)  ; LAB_0053dbf3
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0053dbe1
    INC EDX                             ; 0053dbe8
        ;   Label: LAB_0053dbe8
    ADD EAX,0x30                        ; 0053dbe9
    CMP EDX,EBX                         ; 0053dbec
    JL 0x0053dbda                       ; 0053dbee
        ;   XREF to: 0053dbda (CONDITIONAL_JUMP)  ; LAB_0053dbda
    POP ESI                             ; 0053dbf0
        ;   Label: LAB_0053dbf0
    POP EBX                             ; 0053dbf1
    RET                                 ; 0053dbf2
    MOV ESI,0x7fffffff                  ; 0053dbf3
        ;   Label: LAB_0053dbf3
    SUB ESI,ECX                         ; 0053dbf8
    MOV dword ptr [EAX + 0x8],ESI       ; 0053dbfa
    JMP 0x0053dbe8                      ; 0053dbfd
        ;   XREF to: 0053dbe8 (UNCONDITIONAL_JUMP)  ; LAB_0053dbe8
    TEST EBX,EBX                        ; 0053dbff
        ;   Label: LAB_0053dbff
    JLE 0x0053dbf0                      ; 0053dc01
        ;   XREF to: 0053dbf0 (CONDITIONAL_JUMP)  ; LAB_0053dbf0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053dc03
        ;   Label: LAB_0053dc03
    SAR ECX,0x4                         ; 0053dc06
    TEST ECX,ECX                        ; 0053dc09
    JNZ 0x0053dc1e                      ; 0053dc0b
        ;   XREF to: 0053dc1e (CONDITIONAL_JUMP)  ; LAB_0053dc1e
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0053dc0d
    INC EDX                             ; 0053dc14
    ADD EAX,0x30                        ; 0053dc15
    CMP EDX,EBX                         ; 0053dc18
    JGE 0x0053dbf0                      ; 0053dc1a
        ;   XREF to: 0053dbf0 (CONDITIONAL_JUMP)  ; LAB_0053dbf0
    JMP 0x0053dc03                      ; 0053dc1c
        ;   XREF to: 0053dc03 (UNCONDITIONAL_JUMP)  ; LAB_0053dc03
    MOV ECX,dword ptr [EAX + 0xc]       ; 0053dc1e
        ;   Label: LAB_0053dc1e
    MOV dword ptr [EAX + 0x8],ECX       ; 0053dc21
    INC EDX                             ; 0053dc24
    ADD EAX,0x30                        ; 0053dc25
    CMP EDX,EBX                         ; 0053dc28
    JGE 0x0053dbf0                      ; 0053dc2a
        ;   XREF to: 0053dbf0 (CONDITIONAL_JUMP)  ; LAB_0053dbf0
    JMP 0x0053dc03                      ; 0053dc2c
        ;   XREF to: 0053dc03 (UNCONDITIONAL_JUMP)  ; LAB_0053dc03

