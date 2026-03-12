; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_FormatWideString_FUN_006031c0(wchar_t *wide_string_offset,ushort segment,FormatSpec *spec_info,OUTPUT_CALLBACK output_func)
;
; Parameters:
; wchar_t *        Stack[0x4]:4   wide_string_offset
; ushort           Stack[0x8]:2   segment
; FormatSpec *     Stack[0xc]:4   spec_info
; OUTPUT_CALLBACK  Stack[0x10]:4   output_func
; Local Variables:
; undefined1[4]    Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_stdio.c_FormatEngine_FUN_00602950 at 00602c62
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006031c0
        ;   Label: crt_stdio.c_FormatWideString_FUN_006031c0
    PUSH ESI                            ; 006031c1
    PUSH EDI                            ; 006031c2
    PUSH ES                             ; 006031c3
    PUSH EBP                            ; 006031c4
    SUB ESP,0x4                         ; 006031c5
    MOV EBX,dword ptr [ESP + 0x24]      ; 006031c8
    MOV ES,word ptr [ESP + 0x20]        ; 006031cc
    MOV EDX,dword ptr [EBX + 0x28]      ; 006031d0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 006031d3
    TEST EDX,EDX                        ; 006031d7
    JLE 0x0060322d                      ; 006031d9
        ;   XREF to: 0060322d (CONDITIONAL_JUMP)  ; LAB_0060322d
    XOR EAX,EAX                         ; 006031db
        ;   Label: LAB_006031db
    MOV AX,word ptr ES:[EBP]            ; 006031dd
    PUSH EAX                            ; 006031e2
    LEA EAX,[ESP + 0x4]                 ; 006031e3
    PUSH EAX                            ; 006031e7
    ADD EBP,0x2                         ; 006031e8
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 006031eb
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 006031f0
    MOV ESI,EAX                         ; 006031f3
    CMP EAX,-0x1                        ; 006031f5
    JZ 0x00603207                       ; 006031f8
        ;   XREF to: 00603207 (CONDITIONAL_JUMP)  ; LAB_00603207
    CMP EAX,dword ptr [EBX + 0x28]      ; 006031fa
    JG 0x00603226                       ; 006031fd
        ;   XREF to: 00603226 (CONDITIONAL_JUMP)  ; LAB_00603226
    MOV EDI,ESP                         ; 006031ff
    DEC ESI                             ; 00603201
        ;   Label: LAB_00603201
    CMP ESI,-0x1                        ; 00603202
    JNZ 0x0060320f                      ; 00603205
        ;   XREF to: 0060320f (CONDITIONAL_JUMP)  ; LAB_0060320f
    CMP dword ptr [EBX + 0x28],0x0      ; 00603207
        ;   Label: LAB_00603207
    JG 0x006031db                       ; 0060320b
        ;   XREF to: 006031db (CONDITIONAL_JUMP)  ; LAB_006031db
    JMP 0x0060322d                      ; 0060320d
        ;   XREF to: 0060322d (UNCONDITIONAL_JUMP)  ; LAB_0060322d
    XOR EAX,EAX                         ; 0060320f
        ;   Label: LAB_0060320f
    MOV AL,byte ptr [EDI]               ; 00603211
    PUSH EAX                            ; 00603213
    PUSH EBX                            ; 00603214
    CALL dword ptr [ESP + 0x30]         ; 00603215
    MOV EAX,dword ptr [EBX + 0x28]      ; 00603219
    INC EDI                             ; 0060321c
    DEC EAX                             ; 0060321d
    ADD ESP,0x8                         ; 0060321e
    MOV dword ptr [EBX + 0x28],EAX      ; 00603221
    JMP 0x00603201                      ; 00603224
        ;   XREF to: 00603201 (UNCONDITIONAL_JUMP)  ; LAB_00603201
    MOV dword ptr [EBX + 0x28],0x0      ; 00603226
        ;   Label: LAB_00603226
    ADD ESP,0x4                         ; 0060322d
        ;   Label: LAB_0060322d
    POP EBP                             ; 00603230
    POP ES                              ; 00603231
    POP EDI                             ; 00603232
    POP ESI                             ; 00603233
    POP EBX                             ; 00603234
    RET                                 ; 00603235

