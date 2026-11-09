; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_FUN_004af7b0(CBitFont *this_ptr,uint flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045a8d0 at 0045a8f6
;
; Called Functions:
;   engine_font.cpp_FUN_004b0480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af7b0
        ;   Label: engine_font.cpp_FUN_004af7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af7b1
    PUSH EBX                            ; 004af7b5
    CALL engine_font.cpp_FUN_004b0480   ; 004af7b6
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0480()
    ADD ESP,0x4                         ; 004af7bb
    MOV EAX,EBX                         ; 004af7be
    POP EBX                             ; 004af7c0
    RET                                 ; 004af7c1

