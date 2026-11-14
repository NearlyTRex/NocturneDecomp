; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(CInputString *this_ptr,int char_index)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_index
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047afb0 at 0047b0cb
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1eb3
;   TerminatedCString s_CInputString_calcX_strin_005d1ec9
;   undefined4 DAT_01c25590
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047aef0
        ;   Label: shape_edittool.cpp_CInputString_calcX_FUN_0047aef0
    PUSH EBP                            ; 0047aef1
    SUB ESP,0x4                         ; 0047aef2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047aef5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047aef9
    TEST EBX,EBX                        ; 0047aefd
    JL 0x0047af78                       ; 0047aeff
        ;   XREF to: 0047af78 (CONDITIONAL_JUMP)  ; LAB_0047af78
    MOV EDX,dword ptr [EAX + 0x130]     ; 0047af05
    CMP EBX,EDX                         ; 0047af0b
    JLE 0x0047af11                      ; 0047af0d
        ;   XREF to: 0047af11 (CONDITIONAL_JUMP)  ; LAB_0047af11
    MOV EBX,EDX                         ; 0047af0f
    PUSH EDI                            ; 0047af11
        ;   Label: LAB_0047af11
    CMP dword ptr [EAX + 0x13c],0x0     ; 0047af12
    JZ 0x0047af7c                       ; 0047af19
        ;   XREF to: 0047af7c (CONDITIONAL_JUMP)  ; LAB_0047af7c
    CMP EBX,0x400                       ; 0047af1b
    JC 0x0047af46                       ; 0047af21
        ;   XREF to: 0047af46 (CONDITIONAL_JUMP)  ; LAB_0047af46
    MOV EDI,0x5d1eb3                    ; 0047af23 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x205                       ; 0047af28
    PUSH 0x5d1ec9                       ; 0047af2d | = "CInputString::calcX - string too big ..."
    MOV dword ptr [0x01d046a0],EDI      ; 0047af32 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0047af38 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047af3e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047af43
    PUSH EBX                            ; 0047af46
        ;   Label: LAB_0047af46
    PUSH 0x2a                           ; 0047af47
    PUSH 0x1c25f88                      ; 0047af49
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0047af4e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047af53
    XOR AH,AH                           ; 0047af56
    PUSH 0x1c25f88                      ; 0047af58
    MOV byte ptr [EBX + 0x1c25f88],AH   ; 0047af5d
    MOV EAX,[0x01c25590]                ; 0047af63 | DAT_01c25590
    PUSH EAX                            ; 0047af68
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047af69
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047af6e
    POP EDI                             ; 0047af71
    ADD ESP,0x4                         ; 0047af72
        ;   Label: LAB_0047af72
    POP EBP                             ; 0047af75
    POP EBX                             ; 0047af76
    RET                                 ; 0047af77
    XOR EAX,EAX                         ; 0047af78
        ;   Label: LAB_0047af78
    JMP 0x0047af72                      ; 0047af7a
        ;   XREF to: 0047af72 (UNCONDITIONAL_JUMP)  ; LAB_0047af72
    PUSH ESI                            ; 0047af7c
        ;   Label: LAB_0047af7c
    PUSH EAX                            ; 0047af7d
    ADD EBX,EAX                         ; 0047af7e
    XOR EDX,EDX                         ; 0047af80
    MOV ESI,dword ptr [0x01c25590]      ; 0047af82 | DAT_01c25590
    MOV DL,byte ptr [EBX]               ; 0047af88
    PUSH ESI                            ; 0047af8a
    MOV dword ptr [ESP + 0x10],EDX      ; 0047af8b
    MOV byte ptr [EBX],0x0              ; 0047af8f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047af92
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0047af97
    MOV DL,byte ptr [ESP + 0x8]         ; 0047af9a
    MOV byte ptr [EBX],DL               ; 0047af9e
    POP ESI                             ; 0047afa0
    POP EDI                             ; 0047afa1
    ADD ESP,0x4                         ; 0047afa2
    POP EBP                             ; 0047afa5
    POP EBX                             ; 0047afa6
    RET                                 ; 0047afa7

