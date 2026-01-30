; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_FUN_0043b790(void)
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_cloth.cpp_FUN_0043b7e0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b790
        ;   Label: core_cloth.cpp_FUN_0043b790
    PUSH ESI                            ; 0043b791
    MOV ESI,dword ptr [ESP + 0xc]       ; 0043b792
    PUSH 0xff                           ; 0043b796
    MOV EDX,dword ptr [0x006703ec]      ; 0043b79b | g_CDemonRendererPtr2
    PUSH EDX                            ; 0043b7a1 | g_CDemonRendererInstance
    XOR EBX,EBX                         ; 0043b7a2
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043b7a4
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    MOV ECX,dword ptr [ESI + 0x3ce8c]   ; 0043b7a9
    ADD ESP,0x8                         ; 0043b7af
    TEST ECX,ECX                        ; 0043b7b2
    JLE 0x0043b7cf                      ; 0043b7b4
        ;   XREF to: 0043b7cf (CONDITIONAL_JUMP)  ; LAB_0043b7cf
    PUSH EDI                            ; 0043b7b6
    PUSH 0x0                            ; 0043b7b7
        ;   Label: LAB_0043b7b7
    PUSH EBX                            ; 0043b7b9
    PUSH ESI                            ; 0043b7ba
    CALL core_cloth.cpp_FUN_0043b7e0    ; 0043b7bb
        ;   XREF to: 0043b7e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043b7e0()
    INC EBX                             ; 0043b7c0
    MOV EDI,dword ptr [ESI + 0x3ce8c]   ; 0043b7c1
    ADD ESP,0xc                         ; 0043b7c7
    CMP EBX,EDI                         ; 0043b7ca
    JL 0x0043b7b7                       ; 0043b7cc
        ;   XREF to: 0043b7b7 (CONDITIONAL_JUMP)  ; LAB_0043b7b7
    POP EDI                             ; 0043b7ce
    POP ESI                             ; 0043b7cf
        ;   Label: LAB_0043b7cf
    POP EBX                             ; 0043b7d0
    RET                                 ; 0043b7d1

