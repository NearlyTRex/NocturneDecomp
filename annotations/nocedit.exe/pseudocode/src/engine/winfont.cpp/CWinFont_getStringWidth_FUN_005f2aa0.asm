; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont * this_ptr, char * text_string)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   GetTextExtentPoint32A* GetTextExtentPoint32A = 002117b2
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2aa0
        ;   Label: engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0
    SUB ESP,0x8                         ; 005f2aa1
    MOV EBX,dword ptr [ESP + 0x14]      ; 005f2aa4
    PUSH -0x1                           ; 005f2aa8
    PUSH -0x1                           ; 005f2aaa
    MOV EDX,dword ptr [ESP + 0x18]      ; 005f2aac
    PUSH EDX                            ; 005f2ab0
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 ; 005f2ab1 | int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)
        ;   XREF to: 005f2860 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005f2ab6
    TEST EAX,EAX                        ; 005f2ab9
    JNZ 0x005f2ac2                      ; 005f2abb | LAB_005f2ac2
        ;   XREF to: 005f2ac2 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 005f2abd
    POP EBX                             ; 005f2ac0
    RET                                 ; 005f2ac1
    PUSH EDI                            ; 005f2ac2
        ;   Label: LAB_005f2ac2
    MOV EDI,EBX                         ; 005f2ac3
    SUB ECX,ECX                         ; 005f2ac5
    DEC ECX                             ; 005f2ac7
    XOR EAX,EAX                         ; 005f2ac8
    SCASB.REPNE ES:EDI                  ; 005f2aca
    NOT ECX                             ; 005f2acc
    DEC ECX                             ; 005f2ace
    LEA EAX,[ESP + 0x4]                 ; 005f2acf
    PUSH EAX                            ; 005f2ad3
    PUSH ECX                            ; 005f2ad4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005f2ad5
    PUSH EBX                            ; 005f2ad9
    MOV ECX,dword ptr [EAX + 0x4]       ; 005f2ada
    PUSH ECX                            ; 005f2add
    CALL dword ptr CS:[0x6113e4]        ; 005f2ade | GetTextExtentPoint32A * GetTextExtentPoint32A
    TEST EAX,EAX                        ; 005f2ae5
    JNZ 0x005f2aed                      ; 005f2ae7 | LAB_005f2aed
        ;   XREF to: 005f2aed (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],EAX       ; 005f2ae9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f2aed
        ;   Label: LAB_005f2aed
    POP EDI                             ; 005f2af1
    ADD ESP,0x8                         ; 005f2af2
    POP EBX                             ; 005f2af5
    RET                                 ; 005f2af6

