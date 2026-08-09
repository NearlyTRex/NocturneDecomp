; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_005fcf80(int y_start,SSoftwareEdge *exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   y_start
; SSoftwareEdge *  Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   int g_RasterizerEdgeCount
;   SSoftwareEdge[16] g_RasterizerEdgeArray
;   undefined4 g_RasterizerEdgeArray[1].base.y_min
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcf80
        ;   Label: engine_zraster.c_findRasterizerEdge_FUN_005fcf80
    PUSH ESI                            ; 005fcf81
    MOV EBX,dword ptr [0x03f9ad5c]      ; 005fcf82 | g_RasterizerEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fcf88
    MOV ESI,dword ptr [ESP + 0x10]      ; 005fcf8c
    MOV EAX,0x3f9ad60                   ; 005fcf90 | g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fcf95
    TEST EBX,EBX                        ; 005fcf97
    JLE 0x005fcfab                      ; 005fcf99
        ;   XREF to: 005fcfab (CONDITIONAL_JUMP)  ; LAB_005fcfab
    CMP ECX,dword ptr [EAX]             ; 005fcf9b | g_RasterizerEdgeArray | g_RasterizerEdgeArray[1].base.y_min
        ;   Label: LAB_005fcf9b
    JNZ 0x005fcfa3                      ; 005fcf9d
        ;   XREF to: 005fcfa3 (CONDITIONAL_JUMP)  ; LAB_005fcfa3
    CMP EAX,ESI                         ; 005fcf9f
    JNZ 0x005fcfad                      ; 005fcfa1
        ;   XREF to: 005fcfad (CONDITIONAL_JUMP)  ; LAB_005fcfad
    INC EDX                             ; 005fcfa3
        ;   Label: LAB_005fcfa3
    ADD EAX,0x48                        ; 005fcfa4 | g_RasterizerEdgeArray[1].base.y_min
    CMP EDX,EBX                         ; 005fcfa7
    JL 0x005fcf9b                       ; 005fcfa9
        ;   XREF to: 005fcf9b (CONDITIONAL_JUMP)  ; LAB_005fcf9b
    XOR EAX,EAX                         ; 005fcfab
        ;   Label: LAB_005fcfab
    MOV dword ptr [0x03f9ad5c],EBX      ; 005fcfad | g_RasterizerEdgeCount
        ;   Label: LAB_005fcfad
    POP ESI                             ; 005fcfb3
    POP EBX                             ; 005fcfb4
    RET                                 ; 005fcfb5

