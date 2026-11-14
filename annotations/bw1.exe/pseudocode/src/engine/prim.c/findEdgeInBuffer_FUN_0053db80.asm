; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_0053db80(int y_value,SSoftwareEdge *edge_ptr)
;
; Parameters:
; int              Stack[0x4]:4   y_value
; SSoftwareEdge *  Stack[0x8]:4   edge_ptr
;
; XREF[2]:
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650 at 0053e841
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e2a9
;
; Referenced Globals:
;   undefined4 DAT_01e7d5b8
;   undefined4 DAT_01e7d5bc
;   undefined4 DAT_01e7d60c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053db80
        ;   Label: engine_prim.c_findEdgeInBuffer_FUN_0053db80
    PUSH ESI                            ; 0053db81
    MOV EBX,dword ptr [0x01e7d5b8]      ; 0053db82 | DAT_01e7d5b8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053db88
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053db8c
    MOV EAX,0x1e7d5bc                   ; 0053db90
    XOR EDX,EDX                         ; 0053db95
    TEST EBX,EBX                        ; 0053db97
    JLE 0x0053dbab                      ; 0053db99
        ;   XREF to: 0053dbab (CONDITIONAL_JUMP)  ; LAB_0053dbab
    CMP ECX,dword ptr [EAX]             ; 0053db9b | DAT_01e7d5bc | DAT_01e7d60c
        ;   Label: LAB_0053db9b
    JNZ 0x0053dba3                      ; 0053db9d
        ;   XREF to: 0053dba3 (CONDITIONAL_JUMP)  ; LAB_0053dba3
    CMP EAX,ESI                         ; 0053db9f
    JNZ 0x0053dbad                      ; 0053dba1
        ;   XREF to: 0053dbad (CONDITIONAL_JUMP)  ; LAB_0053dbad
    INC EDX                             ; 0053dba3
        ;   Label: LAB_0053dba3
    ADD EAX,0x50                        ; 0053dba4 | DAT_01e7d60c
    CMP EDX,EBX                         ; 0053dba7
    JL 0x0053db9b                       ; 0053dba9
        ;   XREF to: 0053db9b (CONDITIONAL_JUMP)  ; LAB_0053db9b
    XOR EAX,EAX                         ; 0053dbab
        ;   Label: LAB_0053dbab
    MOV dword ptr [0x01e7d5b8],EBX      ; 0053dbad | DAT_01e7d5b8
        ;   Label: LAB_0053dbad
    POP ESI                             ; 0053dbb3
    POP EBX                             ; 0053dbb4
    RET                                 ; 0053dbb5

