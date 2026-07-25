; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonDepthWritePass_FUN_00406f30(int param_1)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 00408636
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 004084f3
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406f30
        ;   Label: engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30
    PUSH ESI                            ; 00406f31
    PUSH EBP                            ; 00406f32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406f33
    LEA ESI,[EBX + 0x18]                ; 00406f37
    LEA EAX,[EBX + 0x8]                 ; 00406f3a
    PUSH EAX                            ; 00406f3d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406f3e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00406f43
    TEST EAX,EAX                        ; 00406f46
    JZ 0x00406f8b                       ; 00406f48
        ;   XREF to: 00406f8b (CONDITIONAL_JUMP)  ; LAB_00406f8b
    CMP dword ptr [0x01c03948],0x0      ; 00406f4a | DAT_01c03948
    JNZ 0x00406fa6                      ; 00406f51
        ;   XREF to: 00406fa6 (CONDITIONAL_JUMP)  ; LAB_00406fa6
    CMP dword ptr [0x005b7624],0x20     ; 00406f53 | DAT_005b7624
    JNZ 0x00406f9a                      ; 00406f5a
        ;   XREF to: 00406f9a (CONDITIONAL_JUMP)  ; LAB_00406f9a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406f5c | DAT_01c00c7c
    PUSH EDI                            ; 00406f66
        ;   Label: LAB_00406f66
    MOV EDI,0x80                        ; 00406f67
    PUSH ESI                            ; 00406f6c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406f6d
    MOV EBP,0x1                         ; 00406f70
    PUSH EAX                            ; 00406f75
    MOV dword ptr [0x01c039a0],EDI      ; 00406f76 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00406f7c | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00406f82
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00406f87
    POP EDI                             ; 00406f8a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406f8b
        ;   Label: LAB_00406f8b
    ADD EBX,0x18                        ; 00406f8e
    SHL EAX,0x2                         ; 00406f91
    ADD EAX,EBX                         ; 00406f94
    POP EBP                             ; 00406f96
    POP ESI                             ; 00406f97
    POP EBX                             ; 00406f98
    RET                                 ; 00406f99
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406f9a | DAT_01c00c7c
        ;   Label: LAB_00406f9a
    JMP 0x00406f66                      ; 00406fa4
        ;   XREF to: 00406f66 (UNCONDITIONAL_JUMP)  ; LAB_00406f66
    CMP dword ptr [0x005b7624],0x20     ; 00406fa6 | DAT_005b7624
        ;   Label: LAB_00406fa6
    JNZ 0x00406fbb                      ; 00406fad
        ;   XREF to: 00406fbb (CONDITIONAL_JUMP)  ; LAB_00406fbb
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406faf | DAT_01c00c7c
    JMP 0x00406f66                      ; 00406fb9
        ;   XREF to: 00406f66 (UNCONDITIONAL_JUMP)  ; LAB_00406f66
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406fbb | DAT_01c00c7c
        ;   Label: LAB_00406fbb
    JMP 0x00406f66                      ; 00406fc5
        ;   XREF to: 00406f66 (UNCONDITIONAL_JUMP)  ; LAB_00406f66

