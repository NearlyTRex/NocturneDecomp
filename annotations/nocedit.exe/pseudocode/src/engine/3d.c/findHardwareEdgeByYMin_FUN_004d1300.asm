; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SHardwareEdge * __cdecl engine_3d_c_findHardwareEdgeByYMin_FUN_004d1300(int y_min,SHardwareEdge *exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   y_min
; SHardwareEdge *  Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   int g_EdgeCount
;   SHardwareEdge[16] g_HardwareEdgeTable
;   undefined4 DAT_02d7b464
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1300
        ;   Label: engine_3d.c_findHardwareEdgeByYMin_FUN_004d1300
    PUSH ESI                            ; 004d1301
    MOV EBX,dword ptr [0x02d7b428]      ; 004d1302 | g_EdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d1308
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d130c
    MOV EAX,0x2d7b42c                   ; 004d1310 | g_HardwareEdgeTable
    XOR EDX,EDX                         ; 004d1315
    TEST EBX,EBX                        ; 004d1317
    JLE 0x004d132b                      ; 004d1319
        ;   XREF to: 004d132b (CONDITIONAL_JUMP)  ; LAB_004d132b
    CMP ECX,dword ptr [EAX]             ; 004d131b | g_HardwareEdgeTable | DAT_02d7b464
        ;   Label: LAB_004d131b
    JNZ 0x004d1323                      ; 004d131d
        ;   XREF to: 004d1323 (CONDITIONAL_JUMP)  ; LAB_004d1323
    CMP EAX,ESI                         ; 004d131f
    JNZ 0x004d132d                      ; 004d1321
        ;   XREF to: 004d132d (CONDITIONAL_JUMP)  ; LAB_004d132d
    INC EDX                             ; 004d1323
        ;   Label: LAB_004d1323
    ADD EAX,0x38                        ; 004d1324 | DAT_02d7b464
    CMP EDX,EBX                         ; 004d1327
    JL 0x004d131b                       ; 004d1329
        ;   XREF to: 004d131b (CONDITIONAL_JUMP)  ; LAB_004d131b
    XOR EAX,EAX                         ; 004d132b
        ;   Label: LAB_004d132b
    MOV dword ptr [0x02d7b428],EBX      ; 004d132d | g_EdgeCount
        ;   Label: LAB_004d132d
    POP ESI                             ; 004d1333
    POP EBX                             ; 004d1334
    RET                                 ; 004d1335

