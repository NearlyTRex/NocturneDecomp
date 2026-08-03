; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_FUN_0048fe30 at 0048fe36
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0 at 004901d8
;
; Called Functions:
;   engine_font.cpp_CBitFont_reset_FUN_0048fe50
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490420
        ;   Label: engine_font.cpp_CBitFont_free_FUN_00490420
    PUSH ESI                            ; 00490421
    PUSH EDI                            ; 00490422
    MOV EDI,dword ptr [ESP + 0x10]      ; 00490423
    MOV EBX,EDI                         ; 00490427
    LEA ESI,[EDI + 0x10]                ; 00490429
    MOV EDX,dword ptr [EBX + 0x144]     ; 0049042c
        ;   Label: LAB_0049042c
    PUSH EDX                            ; 00490432
    ADD EBX,0x4                         ; 00490433
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00490436
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0049043b
    MOV dword ptr [EBX + 0x140],0x0     ; 0049043e
    CMP EBX,ESI                         ; 00490448
    JNZ 0x0049042c                      ; 0049044a
        ;   XREF to: 0049042c (CONDITIONAL_JUMP)  ; LAB_0049042c
    PUSH EDI                            ; 0049044c
    CALL engine_font.cpp_CBitFont_reset_FUN_0048fe50 ; 0049044d
        ;   XREF to: 0048fe50 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_0048fe50(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00490452
    POP EDI                             ; 00490455
    POP ESI                             ; 00490456
    POP EBX                             ; 00490457
    RET                                 ; 00490458

