; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   GET_TEXT_EXTENT_POINT32_A_FUNC* g_GetTextExtentPoint32A = 002117b2
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2b00
        ;   Label: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
    PUSH ESI                            ; 005f2b01
    SUB ESP,0x8                         ; 005f2b02
    MOV EBX,dword ptr [ESP + 0x14]      ; 005f2b05
    MOV ESI,dword ptr [ESP + 0x18]      ; 005f2b09
    PUSH -0x1                           ; 005f2b0d
    PUSH -0x1                           ; 005f2b0f
    PUSH EBX                            ; 005f2b11
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 ; 005f2b12
        ;   XREF to: 005f2860 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005f2b17
    TEST EAX,EAX                        ; 005f2b1a
    JNZ 0x005f2b24                      ; 005f2b1c
        ;   XREF to: 005f2b24 (CONDITIONAL_JUMP)  ; LAB_005f2b24
    ADD ESP,0x8                         ; 005f2b1e
    POP ESI                             ; 005f2b21
    POP EBX                             ; 005f2b22
    RET                                 ; 005f2b23
    PUSH EDI                            ; 005f2b24
        ;   Label: LAB_005f2b24
    MOV EDI,ESI                         ; 005f2b25
    SUB ECX,ECX                         ; 005f2b27
    DEC ECX                             ; 005f2b29
    XOR EAX,EAX                         ; 005f2b2a
    SCASB.REPNE ES:EDI                  ; 005f2b2c
    NOT ECX                             ; 005f2b2e
    DEC ECX                             ; 005f2b30
    LEA EAX,[ESP + 0x4]                 ; 005f2b31
    PUSH EAX                            ; 005f2b35
    PUSH ECX                            ; 005f2b36
    PUSH ESI                            ; 005f2b37
    MOV EDX,dword ptr [EBX + 0x4]       ; 005f2b38
    PUSH EDX                            ; 005f2b3b
    CALL dword ptr CS:[0x6113e4]        ; 005f2b3c | g_GetTextExtentPoint32A
    TEST EAX,EAX                        ; 005f2b43
    JNZ 0x005f2b4b                      ; 005f2b45
        ;   XREF to: 005f2b4b (CONDITIONAL_JUMP)  ; LAB_005f2b4b
    MOV dword ptr [ESP + 0x8],EAX       ; 005f2b47
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f2b4b
        ;   Label: LAB_005f2b4b
    MOV ESI,dword ptr [EBX + 0x134]     ; 005f2b4f
    MOV EDI,dword ptr [EBX + 0x138]     ; 005f2b55
    ADD EAX,ESI                         ; 005f2b5b
    ADD EAX,EDI                         ; 005f2b5d
    POP EDI                             ; 005f2b5f
    ADD ESP,0x8                         ; 005f2b60
    POP ESI                             ; 005f2b63
    POP EBX                             ; 005f2b64
    RET                                 ; 005f2b65

