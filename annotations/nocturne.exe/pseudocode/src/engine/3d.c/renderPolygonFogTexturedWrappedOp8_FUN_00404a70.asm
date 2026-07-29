; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
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

    PUSH EBX                            ; 00404a70
        ;   Label: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70
    PUSH ESI                            ; 00404a71
    PUSH EBP                            ; 00404a72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404a73
    LEA ESI,[EBX + 0x18]                ; 00404a77
    LEA EAX,[EBX + 0x8]                 ; 00404a7a
    PUSH EAX                            ; 00404a7d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00404a7e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404a83
    TEST EAX,EAX                        ; 00404a86
    JZ 0x00404acb                       ; 00404a88
        ;   XREF to: 00404acb (CONDITIONAL_JUMP)  ; LAB_00404acb
    CMP dword ptr [0x01c03948],0x0      ; 00404a8a | DAT_01c03948
    JNZ 0x00404ae6                      ; 00404a91
        ;   XREF to: 00404ae6 (CONDITIONAL_JUMP)  ; LAB_00404ae6
    CMP dword ptr [0x005b7624],0x20     ; 00404a93 | DAT_005b7624
    JNZ 0x00404ada                      ; 00404a9a
        ;   XREF to: 00404ada (CONDITIONAL_JUMP)  ; LAB_00404ada
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00404a9c | DAT_01c00c7c
    PUSH EDI                            ; 00404aa6
        ;   Label: LAB_00404aa6
    MOV EDI,0x5                         ; 00404aa7
    PUSH ESI                            ; 00404aac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404aad
    MOV EBP,0x4                         ; 00404ab0
    PUSH EAX                            ; 00404ab5
    MOV dword ptr [0x01c039a0],EDI      ; 00404ab6 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00404abc | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00404ac2
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00404ac7
    POP EDI                             ; 00404aca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404acb
        ;   Label: LAB_00404acb
    ADD EBX,0x18                        ; 00404ace
    SHL EAX,0x2                         ; 00404ad1
    ADD EAX,EBX                         ; 00404ad4
    POP EBP                             ; 00404ad6
    POP ESI                             ; 00404ad7
    POP EBX                             ; 00404ad8
    RET                                 ; 00404ad9
    MOV dword ptr [0x01c00c7c],0x530322 ; 00404ada | DAT_01c00c7c
        ;   Label: LAB_00404ada
    JMP 0x00404aa6                      ; 00404ae4
        ;   XREF to: 00404aa6 (UNCONDITIONAL_JUMP)  ; LAB_00404aa6
    CMP dword ptr [0x005b7624],0x20     ; 00404ae6 | DAT_005b7624
        ;   Label: LAB_00404ae6
    JNZ 0x00404afb                      ; 00404aed
        ;   XREF to: 00404afb (CONDITIONAL_JUMP)  ; LAB_00404afb
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00404aef | DAT_01c00c7c
    JMP 0x00404aa6                      ; 00404af9
        ;   XREF to: 00404aa6 (UNCONDITIONAL_JUMP)  ; LAB_00404aa6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00404afb | DAT_01c00c7c
        ;   Label: LAB_00404afb
    JMP 0x00404aa6                      ; 00404b05
        ;   XREF to: 00404aa6 (UNCONDITIONAL_JUMP)  ; LAB_00404aa6

