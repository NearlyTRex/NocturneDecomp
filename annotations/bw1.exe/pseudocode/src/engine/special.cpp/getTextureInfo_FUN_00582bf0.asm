; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_getTextureInfo_FUN_00582bf0(int texture_size)
;
; Parameters:
; int              Stack[0x4]:4   texture_size
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004ce580 at 004cedb4
;
; Referenced Globals:
;   int g_INT_01c50948
;   void* g_PTR_02c8342c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582bf0 | g_INT_01c50948
        ;   Label: engine_special.cpp_getTextureInfo_FUN_00582bf0
    JNZ 0x00582bfc                      ; 00582bf7
        ;   XREF to: 00582bfc (CONDITIONAL_JUMP)  ; LAB_00582bfc
    XOR EAX,EAX                         ; 00582bf9
    RET                                 ; 00582bfb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582bfc
        ;   Label: LAB_00582bfc
    PUSH ECX                            ; 00582c00
    CALL dword ptr [0x02c8342c]         ; 00582c01 | g_PTR_02c8342c
    ADD ESP,0x4                         ; 00582c07
    RET                                 ; 00582c0a

