; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00407370(int param_1)
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
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407370
        ;   Label: engine_3d.c_renderPolygonTexturedDepthWriteOp43_FUN_00407370
    PUSH ESI                            ; 00407371
    PUSH EBP                            ; 00407372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407373
    LEA ESI,[EBX + 0x18]                ; 00407377
    LEA EAX,[EBX + 0x8]                 ; 0040737a
    PUSH EAX                            ; 0040737d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040737e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00407383
    TEST EAX,EAX                        ; 00407386
    JZ 0x004073cb                       ; 00407388
        ;   XREF to: 004073cb (CONDITIONAL_JUMP)  ; LAB_004073cb
    CMP dword ptr [0x01c03948],0x0      ; 0040738a | DAT_01c03948
    JNZ 0x004073e6                      ; 00407391
        ;   XREF to: 004073e6 (CONDITIONAL_JUMP)  ; LAB_004073e6
    CMP dword ptr [0x005b7624],0x20     ; 00407393 | DAT_005b7624
    JNZ 0x004073da                      ; 0040739a
        ;   XREF to: 004073da (CONDITIONAL_JUMP)  ; LAB_004073da
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040739c | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 004073a6
        ;   Label: LAB_004073a6
    MOV EDI,0x81                        ; 004073a7
    PUSH ESI                            ; 004073ac
    MOV EAX,dword ptr [EBX + 0x4]       ; 004073ad
    MOV EBP,0x1                         ; 004073b0
    PUSH EAX                            ; 004073b5
    MOV dword ptr [0x01c039a0],EDI      ; 004073b6 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 004073bc | DAT_01c039a4
    CALL FUN_00432cd0                   ; 004073c2
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 004073c7
    POP EDI                             ; 004073ca
    MOV EAX,dword ptr [EBX + 0x4]       ; 004073cb
        ;   Label: LAB_004073cb
    ADD EBX,0x18                        ; 004073ce
    SHL EAX,0x2                         ; 004073d1
    ADD EAX,EBX                         ; 004073d4
    POP EBP                             ; 004073d6
    POP ESI                             ; 004073d7
    POP EBX                             ; 004073d8
    RET                                 ; 004073d9
    MOV dword ptr [0x01c00c7c],0x530322 ; 004073da | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004073da
    JMP 0x004073a6                      ; 004073e4
        ;   XREF to: 004073a6 (UNCONDITIONAL_JUMP)  ; LAB_004073a6
    CMP dword ptr [0x005b7624],0x20     ; 004073e6 | DAT_005b7624
        ;   Label: LAB_004073e6
    JNZ 0x004073fb                      ; 004073ed
        ;   XREF to: 004073fb (CONDITIONAL_JUMP)  ; LAB_004073fb
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004073ef | DAT_01c00c7c | LAB_0052f031
    JMP 0x004073a6                      ; 004073f9
        ;   XREF to: 004073a6 (UNCONDITIONAL_JUMP)  ; LAB_004073a6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004073fb | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_004073fb
    JMP 0x004073a6                      ; 00407405
        ;   XREF to: 004073a6 (UNCONDITIONAL_JUMP)  ; LAB_004073a6

