; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_005158e0(int y_value,SSoftwareEdge *edge_ptr)
;
; Parameters:
; int              Stack[0x4]:4   y_value
; SSoftwareEdge *  Stack[0x8]:4   edge_ptr
;
; XREF[2]:
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_005163b0 at 005165a1
;   engine_prim.c_renderPolygonSoftware_FUN_00515e80 at 00516009
;
; Referenced Globals:
;   undefined4 DAT_01ed2c88
;   undefined4 DAT_01ed2c8c
;   undefined4 DAT_01ed2cdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005158e0
        ;   Label: engine_prim.c_findEdgeInBuffer_FUN_005158e0
    PUSH ESI                            ; 005158e1
    MOV EBX,dword ptr [0x01ed2c88]      ; 005158e2 | DAT_01ed2c88
    MOV ECX,dword ptr [ESP + 0xc]       ; 005158e8
    MOV ESI,dword ptr [ESP + 0x10]      ; 005158ec
    MOV EAX,0x1ed2c8c                   ; 005158f0
    XOR EDX,EDX                         ; 005158f5
    TEST EBX,EBX                        ; 005158f7
    JLE 0x0051590b                      ; 005158f9
        ;   XREF to: 0051590b (CONDITIONAL_JUMP)  ; LAB_0051590b
    CMP ECX,dword ptr [EAX]             ; 005158fb | DAT_01ed2c8c | DAT_01ed2cdc
        ;   Label: LAB_005158fb
    JNZ 0x00515903                      ; 005158fd
        ;   XREF to: 00515903 (CONDITIONAL_JUMP)  ; LAB_00515903
    CMP EAX,ESI                         ; 005158ff
    JNZ 0x0051590d                      ; 00515901
        ;   XREF to: 0051590d (CONDITIONAL_JUMP)  ; LAB_0051590d
    INC EDX                             ; 00515903
        ;   Label: LAB_00515903
    ADD EAX,0x50                        ; 00515904 | DAT_01ed2cdc
    CMP EDX,EBX                         ; 00515907
    JL 0x005158fb                       ; 00515909
        ;   XREF to: 005158fb (CONDITIONAL_JUMP)  ; LAB_005158fb
    XOR EAX,EAX                         ; 0051590b
        ;   Label: LAB_0051590b
    MOV dword ptr [0x01ed2c88],EBX      ; 0051590d | DAT_01ed2c88
        ;   Label: LAB_0051590d
    POP ESI                             ; 00515913
    POP EBX                             ; 00515914
    RET                                 ; 00515915

