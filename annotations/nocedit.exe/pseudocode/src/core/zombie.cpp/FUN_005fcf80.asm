; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_FUN_005fcf80()
;
;
; Referenced Globals:
;   int g_RasterizerEdgeCount
;   SEdgeData[16] g_RasterizerEdgeArray
;   undefined4 g_RasterizerEdgeArray[1].y_start
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcf80
        ;   Label: core_zombie.cpp_FUN_005fcf80
    PUSH ESI                            ; 005fcf81
    MOV EBX,dword ptr [0x03f9ad5c]      ; 005fcf82 | int g_RasterizerEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fcf88
    MOV ESI,dword ptr [ESP + 0x10]      ; 005fcf8c
    MOV EAX,0x3f9ad60                   ; 005fcf90 | SEdgeData[16] g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fcf95
    TEST EBX,EBX                        ; 005fcf97
    JLE 0x005fcfab                      ; 005fcf99 | LAB_005fcfab
        ;   XREF to: 005fcfab (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EAX]             ; 005fcf9b | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fcf9b
    JNZ 0x005fcfa3                      ; 005fcf9d | LAB_005fcfa3
        ;   XREF to: 005fcfa3 (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 005fcf9f
    JNZ 0x005fcfad                      ; 005fcfa1 | LAB_005fcfad
        ;   XREF to: 005fcfad (CONDITIONAL_JUMP)
    INC EDX                             ; 005fcfa3
        ;   Label: LAB_005fcfa3
    ADD EAX,0x48                        ; 005fcfa4 | g_RasterizerEdgeArray[1].y_start
    CMP EDX,EBX                         ; 005fcfa7
    JL 0x005fcf9b                       ; 005fcfa9 | LAB_005fcf9b
        ;   XREF to: 005fcf9b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005fcfab
        ;   Label: LAB_005fcfab
    MOV dword ptr [0x03f9ad5c],EBX      ; 005fcfad | int g_RasterizerEdgeCount
        ;   Label: LAB_005fcfad
    POP ESI                             ; 005fcfb3
    POP EBX                             ; 005fcfb4
    RET                                 ; 005fcfb5

