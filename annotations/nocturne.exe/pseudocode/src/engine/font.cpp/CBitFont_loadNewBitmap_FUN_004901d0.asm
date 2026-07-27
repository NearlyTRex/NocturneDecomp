; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[2]:
;   engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 at 0048ff63
;   engine_font.cpp_FUN_00490210 at 004903a9
;
; Called Functions:
;   engine_font.cpp_CBitFont_free_FUN_00490420
;   engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004901d0
        ;   Label: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
    PUSH ESI                            ; 004901d1
    PUSH EDI                            ; 004901d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004901d3
    PUSH EBX                            ; 004901d7
    CALL engine_font.cpp_CBitFont_free_FUN_00490420 ; 004901d8
        ;   XREF to: 00490420 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_free_FUN_00490420()
    ADD ESP,0x4                         ; 004901dd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004901e0
    PUSH EDX                            ; 004901e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004901e5
    PUSH ECX                            ; 004901e9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004901ea
    PUSH ESI                            ; 004901ee
    MOV EDI,dword ptr [ESP + 0x20]      ; 004901ef
    PUSH EDI                            ; 004901f3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004901f4
    PUSH EBX                            ; 004901f8
    MOV dword ptr [EBX + 0x3188],EAX    ; 004901f9
    CALL engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70 ; 004901ff
        ;   XREF to: 0048ff70 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70()
    ADD ESP,0x14                        ; 00490204
    POP EDI                             ; 00490207
    POP ESI                             ; 00490208
    POP EBX                             ; 00490209
    RET                                 ; 0049020a

