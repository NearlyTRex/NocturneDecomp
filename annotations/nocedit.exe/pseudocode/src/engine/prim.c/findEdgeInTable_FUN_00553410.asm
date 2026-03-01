; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl engine_prim_c_findEdgeInTable_FUN_00553410(int scanline,SSoftwareEdge *target_edge)
;
; Parameters:
; int              Stack[0x4]:4   scanline
; SSoftwareEdge *  Stack[0x8]:4   target_edge
;
; Referenced Globals:
;   int g_ActiveEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeTable
;   undefined4 g_SoftwareEdgeTable[1].base.y_min
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553410
        ;   Label: engine_prim.c_findEdgeInTable_FUN_00553410
    PUSH ESI                            ; 00553411
    MOV EBX,dword ptr [0x030e56bc]      ; 00553412 | g_ActiveEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00553418
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055341c
    MOV EAX,0x30e56c0                   ; 00553420 | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 00553425
    TEST EBX,EBX                        ; 00553427
    JLE 0x0055343b                      ; 00553429
        ;   XREF to: 0055343b (CONDITIONAL_JUMP)  ; LAB_0055343b
    CMP ECX,dword ptr [EAX]             ; 0055342b | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].base.y_min
        ;   Label: LAB_0055342b
    JNZ 0x00553433                      ; 0055342d
        ;   XREF to: 00553433 (CONDITIONAL_JUMP)  ; LAB_00553433
    CMP EAX,ESI                         ; 0055342f
    JNZ 0x0055343d                      ; 00553431
        ;   XREF to: 0055343d (CONDITIONAL_JUMP)  ; LAB_0055343d
    INC EDX                             ; 00553433
        ;   Label: LAB_00553433
    ADD EAX,0x48                        ; 00553434 | g_SoftwareEdgeTable[1].base.y_min
    CMP EDX,EBX                         ; 00553437
    JL 0x0055342b                       ; 00553439
        ;   XREF to: 0055342b (CONDITIONAL_JUMP)  ; LAB_0055342b
    XOR EAX,EAX                         ; 0055343b
        ;   Label: LAB_0055343b
    MOV dword ptr [0x030e56bc],EBX      ; 0055343d | g_ActiveEdgeCount
        ;   Label: LAB_0055343d
    POP ESI                             ; 00553443
    POP EBX                             ; 00553444
    RET                                 ; 00553445

