; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00407740(SMRGLHeaderPrimitive *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407740
        ;   Label: engine_3d.c_renderPolygonTexturedDepthLitOp49_FUN_00407740
    PUSH ESI                            ; 00407741
    PUSH EBP                            ; 00407742
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407743
    LEA ESI,[EBX + 0x18]                ; 00407747
    LEA EAX,[EBX + 0x8]                 ; 0040774a
    PUSH EAX                            ; 0040774d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040774e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407753
    TEST EAX,EAX                        ; 00407756
    JZ 0x004077a4                       ; 00407758
        ;   XREF to: 004077a4 (CONDITIONAL_JUMP)  ; LAB_004077a4
    CMP dword ptr [0x01c03948],0x0      ; 0040775a | DAT_01c03948
    JNZ 0x004077bf                      ; 00407761
        ;   XREF to: 004077bf (CONDITIONAL_JUMP)  ; LAB_004077bf
    CMP dword ptr [0x005b7624],0x20     ; 00407763 | DAT_005b7624
    JNZ 0x004077b3                      ; 0040776a
        ;   XREF to: 004077b3 (CONDITIONAL_JUMP)  ; LAB_004077b3
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040776c | DAT_01c00c7c
    PUSH EDI                            ; 00407776
        ;   Label: LAB_00407776
    MOV EDI,0xc1                        ; 00407777
    MOV EBP,0x1                         ; 0040777c
    PUSH EBX                            ; 00407781
    MOV dword ptr [0x01c039a0],EDI      ; 00407782 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00407788 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040778e
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00407793
    PUSH ESI                            ; 00407796
    MOV EAX,dword ptr [EBX + 0x4]       ; 00407797
    PUSH EAX                            ; 0040779a
    CALL engine_clipper.c_FUN_00432cd0  ; 0040779b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 004077a0
    POP EDI                             ; 004077a3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004077a4
        ;   Label: LAB_004077a4
    ADD EBX,0x18                        ; 004077a7
    SHL EAX,0x2                         ; 004077aa
    ADD EAX,EBX                         ; 004077ad
    POP EBP                             ; 004077af
    POP ESI                             ; 004077b0
    POP EBX                             ; 004077b1
    RET                                 ; 004077b2
    MOV dword ptr [0x01c00c7c],0x530322 ; 004077b3 | DAT_01c00c7c
        ;   Label: LAB_004077b3
    JMP 0x00407776                      ; 004077bd
        ;   XREF to: 00407776 (UNCONDITIONAL_JUMP)  ; LAB_00407776
    CMP dword ptr [0x005b7624],0x20     ; 004077bf | DAT_005b7624
        ;   Label: LAB_004077bf
    JNZ 0x004077d4                      ; 004077c6
        ;   XREF to: 004077d4 (CONDITIONAL_JUMP)  ; LAB_004077d4
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004077c8 | DAT_01c00c7c
    JMP 0x00407776                      ; 004077d2
        ;   XREF to: 00407776 (UNCONDITIONAL_JUMP)  ; LAB_00407776
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004077d4 | DAT_01c00c7c
        ;   Label: LAB_004077d4
    JMP 0x00407776                      ; 004077de
        ;   XREF to: 00407776 (UNCONDITIONAL_JUMP)  ; LAB_00407776

