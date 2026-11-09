; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_FUN_004c0b60(CBitFont *this_ptr,uint flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045e7a0 at 0045e7c6
;
; Called Functions:
;   engine_font.cpp_FUN_004c1830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b60
        ;   Label: engine_font.cpp_FUN_004c0b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c0b61
    PUSH EBX                            ; 004c0b65
    CALL engine_font.cpp_FUN_004c1830   ; 004c0b66
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1830()
    ADD ESP,0x4                         ; 004c0b6b
    MOV EAX,EBX                         ; 004c0b6e
    POP EBX                             ; 004c0b70
    RET                                 ; 004c0b71

