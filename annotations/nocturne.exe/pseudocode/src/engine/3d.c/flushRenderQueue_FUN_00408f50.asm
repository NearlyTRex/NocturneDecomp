; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_flushRenderQueue_FUN_00408f50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00761ec4
;   undefined4 DAT_01c02594
;
; Called Functions:
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
;   wincore_windll.cpp_drawPolyList_FUN_00532680
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00408f50
        ;   Label: engine_3d.c_flushRenderQueue_FUN_00408f50
    MOV EDX,dword ptr [0x00761ec4]      ; 00408f51 | DAT_00761ec4
    TEST EDX,EDX                        ; 00408f57
    JZ 0x00408f96                       ; 00408f59
        ;   XREF to: 00408f96 (CONDITIONAL_JUMP)  ; LAB_00408f96
    PUSH ESI                            ; 00408f5b
    CMP dword ptr [0x01c02594],0x0      ; 00408f5c | DAT_01c02594
    JNZ 0x00408f98                      ; 00408f63
        ;   XREF to: 00408f98 (CONDITIONAL_JUMP)  ; LAB_00408f98
    XOR ESI,ESI                         ; 00408f65
    TEST EDX,EDX                        ; 00408f67
    JLE 0x00408f8e                      ; 00408f69
        ;   XREF to: 00408f8e (CONDITIONAL_JUMP)  ; LAB_00408f8e
    PUSH EDI                            ; 00408f6b
    PUSH EBX                            ; 00408f6c
    XOR EBX,EBX                         ; 00408f6d
    MOV EDI,dword ptr [EBX + 0x761ec8]  ; 00408f6f
        ;   Label: LAB_00408f6f
    PUSH EDI                            ; 00408f75
    ADD EBX,0x4                         ; 00408f76
    INC ESI                             ; 00408f79
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120 ; 00408f7a
        ;   XREF to: 00407120 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120()
    MOV EBP,dword ptr [0x00761ec4]      ; 00408f7f | DAT_00761ec4
    ADD ESP,0x4                         ; 00408f85
    CMP ESI,EBP                         ; 00408f88
    JL 0x00408f6f                       ; 00408f8a
        ;   XREF to: 00408f6f (CONDITIONAL_JUMP)  ; LAB_00408f6f
    POP EBX                             ; 00408f8c
    POP EDI                             ; 00408f8d
    XOR EAX,EAX                         ; 00408f8e
        ;   Label: LAB_00408f8e
    MOV [0x00761ec4],EAX                ; 00408f90 | DAT_00761ec4
    POP ESI                             ; 00408f95
    POP EBP                             ; 00408f96
        ;   Label: LAB_00408f96
    RET                                 ; 00408f97
    PUSH 0xcd                           ; 00408f98
        ;   Label: LAB_00408f98
    PUSH EDX                            ; 00408f9d
    PUSH 0x761ec8                       ; 00408f9e
    PUSH 0x5c5014                       ; 00408fa3
    CALL wincore_windll.cpp_drawPolyList_FUN_00532680 ; 00408fa8
        ;   XREF to: 00532680 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_drawPolyList_FUN_00532680()
    ADD ESP,0x10                        ; 00408fad
    XOR EAX,EAX                         ; 00408fb0
    MOV [0x00761ec4],EAX                ; 00408fb2 | DAT_00761ec4
    POP ESI                             ; 00408fb7
    POP EBP                             ; 00408fb8
    RET                                 ; 00408fb9

