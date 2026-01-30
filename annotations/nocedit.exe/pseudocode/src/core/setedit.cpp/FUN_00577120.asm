; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_00577120(void)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uchar[32768] g_ColorCubeLookup
;   undefined4 DAT_03365cc0
;   undefined4 DAT_03365cc4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577120
        ;   Label: core_setedit.cpp_FUN_00577120
    PUSH ESI                            ; 00577121
    PUSH EDI                            ; 00577122
    PUSH EBP                            ; 00577123
    SUB ESP,0x10                        ; 00577124
    XOR EDX,EDX                         ; 00577127
    MOV dword ptr [ESP + 0xc],EDX       ; 00577129
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057712d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00577131
    SUB EAX,EDX                         ; 00577138
    SHL EAX,0xc                         ; 0057713a
    MOV dword ptr [ESP],EAX             ; 0057713d
    ADD EAX,0x100                       ; 00577140
    MOV dword ptr [ESP + 0x8],EAX       ; 00577145
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00577149
    SHL EAX,0x2                         ; 0057714d
    MOV dword ptr [ESP + 0x4],EAX       ; 00577150
    MOV ECX,dword ptr [ESP + 0x4]       ; 00577154
        ;   Label: LAB_00577154
    MOV EBX,dword ptr [ESP + 0x28]      ; 00577158
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057715c
    MOV ESI,dword ptr [ESP]             ; 00577160
    MOV EBP,dword ptr [ESP + 0x8]       ; 00577163
    MOV ECX,dword ptr [ECX + 0x2cf6a9c] ; 00577167 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x8                         ; 0057716d
    ADD ECX,EBX                         ; 00577170
    ADD EAX,ESI                         ; 00577172
    INC ECX                             ; 00577174
    MOV EDX,dword ptr [EAX + 0x3365cc0] ; 00577175 | DAT_03365cc0 | DAT_03365cc4
        ;   Label: LAB_00577175
    MOV ESI,EDX                         ; 0057717b
    MOV EBX,EDX                         ; 0057717d
    MOV EDI,EDX                         ; 0057717f
    AND ESI,0xff                        ; 00577181
    SHR EBX,0x8                         ; 00577187
    SHR EDI,0x10                        ; 0057718a
    MOV EDX,ESI                         ; 0057718d
    AND EBX,0xff                        ; 0057718f
    SHR EDX,0x3                         ; 00577195
    SHR EBX,0x3                         ; 00577198
    SHL EDX,0xa                         ; 0057719b
    SHL EBX,0x5                         ; 0057719e
    AND EDI,0xff                        ; 005771a1
    ADD EDX,EBX                         ; 005771a7
    SHR EDI,0x3                         ; 005771a9
    INC ECX                             ; 005771ac
    MOV DL,byte ptr [EDX + EDI*0x1 + 0x2cf9020] ; 005771ad | g_ColorCubeLookup
    ADD EAX,0x4                         ; 005771b4
    MOV byte ptr [ECX + -0x1],DL        ; 005771b7
    CMP EAX,EBP                         ; 005771ba
    JNZ 0x00577175                      ; 005771bc
        ;   XREF to: 00577175 (CONDITIONAL_JUMP)  ; LAB_00577175
    MOV EBP,dword ptr [ESP + 0x4]       ; 005771be
    MOV EAX,dword ptr [ESP + 0xc]       ; 005771c2
    MOV EDI,dword ptr [ESP + 0x8]       ; 005771c6
    ADD EBP,0x4                         ; 005771ca
    INC EAX                             ; 005771cd
    ADD EDI,0x100                       ; 005771ce
    MOV dword ptr [ESP + 0x4],EBP       ; 005771d4
    MOV dword ptr [ESP + 0xc],EAX       ; 005771d8
    MOV dword ptr [ESP + 0x8],EDI       ; 005771dc
    CMP EAX,0x30                        ; 005771e0
    JL 0x00577154                       ; 005771e3
        ;   XREF to: 00577154 (CONDITIONAL_JUMP)  ; LAB_00577154
    ADD ESP,0x10                        ; 005771e9
    POP EBP                             ; 005771ec
    POP EDI                             ; 005771ed
    POP ESI                             ; 005771ee
    POP EBX                             ; 005771ef
    RET                                 ; 005771f0

