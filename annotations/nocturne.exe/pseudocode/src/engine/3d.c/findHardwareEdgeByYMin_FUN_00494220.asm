; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SHardwareEdge * __cdecl engine_3d_c_findHardwareEdgeByYMin_FUN_00494220(int y_min,SHardwareEdge *exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   y_min
; SHardwareEdge *  Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   undefined4 DAT_01c70f78
;   undefined4 DAT_01c70f7c
;   undefined4 DAT_01c70fb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494220
        ;   Label: engine_3d.c_findHardwareEdgeByYMin_FUN_00494220
    PUSH ESI                            ; 00494221
    MOV EBX,dword ptr [0x01c70f78]      ; 00494222 | DAT_01c70f78
    MOV ECX,dword ptr [ESP + 0xc]       ; 00494228
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049422c
    MOV EAX,0x1c70f7c                   ; 00494230
    XOR EDX,EDX                         ; 00494235
    TEST EBX,EBX                        ; 00494237
    JLE 0x0049424b                      ; 00494239
        ;   XREF to: 0049424b (CONDITIONAL_JUMP)  ; LAB_0049424b
    CMP ECX,dword ptr [EAX]             ; 0049423b | DAT_01c70f7c | DAT_01c70fb4
        ;   Label: LAB_0049423b
    JNZ 0x00494243                      ; 0049423d
        ;   XREF to: 00494243 (CONDITIONAL_JUMP)  ; LAB_00494243
    CMP EAX,ESI                         ; 0049423f
    JNZ 0x0049424d                      ; 00494241
        ;   XREF to: 0049424d (CONDITIONAL_JUMP)  ; LAB_0049424d
    INC EDX                             ; 00494243
        ;   Label: LAB_00494243
    ADD EAX,0x38                        ; 00494244 | DAT_01c70fb4
    CMP EDX,EBX                         ; 00494247
    JL 0x0049423b                       ; 00494249
        ;   XREF to: 0049423b (CONDITIONAL_JUMP)  ; LAB_0049423b
    XOR EAX,EAX                         ; 0049424b
        ;   Label: LAB_0049424b
    MOV dword ptr [0x01c70f78],EBX      ; 0049424d | DAT_01c70f78
        ;   Label: LAB_0049424d
    POP ESI                             ; 00494253
    POP EBX                             ; 00494254
    RET                                 ; 00494255

