; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_FUN_004c0b40(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045e000 at 0045e0c4
;
; Called Functions:
;   engine_font.cpp_FUN_004c0b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b40
        ;   Label: engine_font.cpp_FUN_004c0b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c0b41
    PUSH EBX                            ; 004c0b45
    CALL engine_font.cpp_FUN_004c0b80   ; 004c0b46
        ;   XREF to: 004c0b80 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004c0b80(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004c0b4b
    MOV EAX,EBX                         ; 004c0b4e
    POP EBX                             ; 004c0b50
    RET                                 ; 004c0b51

