; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockTexture_FUN_00582bb0(int texture_id)
;
; Parameters:
; int              Stack[0x4]:4   texture_id
;
; Referenced Globals:
;   void* g_PTR_02c83424
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83424],0x0      ; 00582bb0 | g_PTR_02c83424
        ;   Label: engine_special.cpp_lockTexture_FUN_00582bb0
    JNZ 0x00582bbc                      ; 00582bb7
        ;   XREF to: 00582bbc (CONDITIONAL_JUMP)  ; LAB_00582bbc
    XOR EAX,EAX                         ; 00582bb9
    RET                                 ; 00582bbb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582bbc
        ;   Label: LAB_00582bbc
    PUSH ECX                            ; 00582bc0
    CALL dword ptr [0x02c83424]         ; 00582bc1 | g_PTR_02c83424
    ADD ESP,0x4                         ; 00582bc7
    RET                                 ; 00582bca

