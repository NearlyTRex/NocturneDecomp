; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_00577330(void)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_RedBitPosition
;   int g_GreenBitPosition
;   int g_BlueBitPosition
;   undefined4 DAT_03365cc0
;   undefined4 DAT_03365cc4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577330
        ;   Label: core_setedit.cpp_FUN_00577330
    PUSH ESI                            ; 00577331
    PUSH EDI                            ; 00577332
    PUSH EBP                            ; 00577333
    SUB ESP,0x14                        ; 00577334
    XOR EDX,EDX                         ; 00577337
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00577339
    MOV dword ptr [ESP + 0x10],EDX      ; 0057733d
    SHL EAX,0x2                         ; 00577341
    MOV EDX,dword ptr [ESP + 0x28]      ; 00577344
    MOV dword ptr [ESP],EAX             ; 00577348
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057734b
    SUB EAX,EDX                         ; 00577352
    SHL EAX,0xc                         ; 00577354
    MOV dword ptr [ESP + 0x4],EAX       ; 00577357
    ADD EAX,0x100                       ; 0057735b
    MOV dword ptr [ESP + 0xc],EAX       ; 00577360
    MOV EAX,dword ptr [ESP + 0x30]      ; 00577364
    SHL EAX,0x2                         ; 00577368
    MOV dword ptr [ESP + 0x8],EAX       ; 0057736b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057736f
        ;   Label: LAB_0057736f
    MOV ECX,dword ptr [ESP]             ; 00577373
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00577376 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,ECX                         ; 0057737c
    LEA EBX,[EAX + 0x4]                 ; 0057737e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00577381
    MOV ESI,dword ptr [ESP + 0x4]       ; 00577385
    SHL EAX,0x8                         ; 00577389
    MOV EBP,dword ptr [ESP + 0xc]       ; 0057738c
    ADD EAX,ESI                         ; 00577390
    MOV EDX,dword ptr [EAX + 0x3365cc0] ; 00577392 | DAT_03365cc0 | DAT_03365cc4
        ;   Label: LAB_00577392
    MOV ECX,dword ptr [0x0067939c]      ; 00577398 | g_BitsPerPixel
    MOV EDI,EDX                         ; 0057739e
    MOV ESI,EDX                         ; 005773a0
    AND EDI,0xff                        ; 005773a2
    SHR ESI,0x8                         ; 005773a8
    SHR EDX,0x10                        ; 005773ab
    AND ESI,0xff                        ; 005773ae
    AND EDX,0xff                        ; 005773b4
    CMP ECX,0x20                        ; 005773ba
    JNZ 0x0057741d                      ; 005773bd
        ;   XREF to: 0057741d (CONDITIONAL_JUMP)  ; LAB_0057741d
    MOV CL,byte ptr [0x02d01f24]        ; 005773bf | g_RedBitPosition
    SHL EDI,CL                          ; 005773c5
    MOV CL,byte ptr [0x02d01f30]        ; 005773c7 | g_GreenBitPosition
    SHL ESI,CL                          ; 005773cd
    MOV CL,byte ptr [0x02d01f3c]        ; 005773cf | g_BlueBitPosition
    OR EDI,ESI                          ; 005773d5
    SHL EDX,CL                          ; 005773d7
    MOV ECX,EDI                         ; 005773d9
    OR ECX,EDX                          ; 005773db
        ;   Label: LAB_005773db
    ADD EBX,0x4                         ; 005773dd
    ADD EAX,0x4                         ; 005773e0
    MOV dword ptr [EBX + -0x4],ECX      ; 005773e3
    CMP EAX,EBP                         ; 005773e6
    JNZ 0x00577392                      ; 005773e8
        ;   XREF to: 00577392 (CONDITIONAL_JUMP)  ; LAB_00577392
    MOV ESI,dword ptr [ESP + 0x8]       ; 005773ea
    MOV EDI,dword ptr [ESP + 0x10]      ; 005773ee
    MOV EBX,dword ptr [ESP + 0xc]       ; 005773f2
    ADD ESI,0x4                         ; 005773f6
    INC EDI                             ; 005773f9
    ADD EBX,0x100                       ; 005773fa
    MOV dword ptr [ESP + 0x8],ESI       ; 00577400
    MOV dword ptr [ESP + 0x10],EDI      ; 00577404
    MOV dword ptr [ESP + 0xc],EBX       ; 00577408
    CMP EDI,0x30                        ; 0057740c
    JL 0x0057736f                       ; 0057740f
        ;   XREF to: 0057736f (CONDITIONAL_JUMP)  ; LAB_0057736f
    ADD ESP,0x14                        ; 00577415
    POP EBP                             ; 00577418
    POP EDI                             ; 00577419
    POP ESI                             ; 0057741a
    POP EBX                             ; 0057741b
    RET                                 ; 0057741c
    MOV ECX,EDI                         ; 0057741d
        ;   Label: LAB_0057741d
    SHL ESI,0x8                         ; 0057741f
    SHL ECX,0x10                        ; 00577422
    OR ECX,ESI                          ; 00577425
    JMP 0x005773db                      ; 00577427
        ;   XREF to: 005773db (UNCONDITIONAL_JUMP)  ; LAB_005773db

