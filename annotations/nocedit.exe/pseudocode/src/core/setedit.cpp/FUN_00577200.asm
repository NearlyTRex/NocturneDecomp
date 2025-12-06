; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_00577200()
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;   undefined4 DAT_03365cc0
;   undefined4 DAT_03365cc4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577200
        ;   Label: core_setedit.cpp_FUN_00577200
    PUSH ESI                            ; 00577201
    PUSH EDI                            ; 00577202
    PUSH EBP                            ; 00577203
    SUB ESP,0x20                        ; 00577204
    MOV EAX,dword ptr [ESP + 0x38]      ; 00577207
    ADD EAX,EAX                         ; 0057720b
    MOV ECX,dword ptr [ESP + 0x34]      ; 0057720d
    MOV dword ptr [ESP + 0x10],EAX      ; 00577211
    LEA EAX,[ECX*0x4 + 0x0]             ; 00577215
    SUB EAX,ECX                         ; 0057721c
    SHL EAX,0xc                         ; 0057721e
    MOV dword ptr [ESP + 0x4],EAX       ; 00577221
    ADD EAX,0x100                       ; 00577225
    MOV dword ptr [ESP + 0x18],EAX      ; 0057722a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057722e
    XOR EDX,EDX                         ; 00577232
    SHL EAX,0x2                         ; 00577234
    MOV dword ptr [ESP + 0x1c],EDX      ; 00577237
    MOV dword ptr [ESP + 0x14],EAX      ; 0057723b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057723f
        ;   Label: LAB_0057723f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00577243
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00577247 | void *[1024] g_ScreenBufferArray
    ADD EAX,ECX                         ; 0057724d
    ADD EAX,0x2                         ; 0057724f
    MOV dword ptr [ESP + 0xc],EAX       ; 00577252
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00577256
    MOV EBX,dword ptr [ESP + 0x4]       ; 0057725a
    SHL EAX,0x8                         ; 0057725e
    ADD EBX,EAX                         ; 00577261
    MOV EAX,dword ptr [ESP + 0x18]      ; 00577263
    MOV dword ptr [ESP + 0x8],EAX       ; 00577267
    MOV ESI,dword ptr [EBX + 0x3365cc0] ; 0057726b | DAT_03365cc0
        ;   Label: LAB_0057726b
    XOR EDX,EDX                         ; 00577271
    MOV EAX,ESI                         ; 00577273
    MOV ECX,ESI                         ; 00577275
    MOV EBP,ESI                         ; 00577277
    MOV ESI,dword ptr [0x02d01f28]      ; 00577279 | int g_RedScaleFactor
    AND EAX,0xff                        ; 0057727f
    DIV ESI                             ; 00577284
    SHR ECX,0x8                         ; 00577286
    MOV EDI,dword ptr [0x02d01f34]      ; 00577289 | int g_GreenScaleFactor
    AND ECX,0xff                        ; 0057728f
    MOV ESI,EAX                         ; 00577295
    XOR EDX,EDX                         ; 00577297
    MOV EAX,ECX                         ; 00577299
    DIV EDI                             ; 0057729b
    SHR EBP,0x10                        ; 0057729d
    MOV dword ptr [ESP],ECX             ; 005772a0
    AND EBP,0xff                        ; 005772a3
    MOV dword ptr [ESP],EAX             ; 005772a9
    XOR EDX,EDX                         ; 005772ac
    MOV EAX,EBP                         ; 005772ae
    DIV dword ptr [0x02d01f40]          ; 005772b0 | int g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 005772b6 | int g_RedBitPosition
    SHL ESI,CL                          ; 005772bc
    MOV CL,byte ptr [0x02d01f30]        ; 005772be | int g_GreenBitPosition
    MOV EDI,EAX                         ; 005772c4
    MOV EAX,dword ptr [ESP]             ; 005772c6
    SHL EAX,CL                          ; 005772c9
    MOV CL,byte ptr [0x02d01f3c]        ; 005772cb | int g_BlueBitPosition
    OR EAX,ESI                          ; 005772d1
    SHL EDI,CL                          ; 005772d3
    MOV ECX,dword ptr [ESP + 0xc]       ; 005772d5
    OR EAX,EDI                          ; 005772d9
    ADD EBX,0x4                         ; 005772db
    MOV word ptr [ECX],AX               ; 005772de
    LEA EAX,[ECX + 0x2]                 ; 005772e1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005772e4
    MOV dword ptr [ESP + 0xc],EAX       ; 005772e8
    CMP EBX,EDX                         ; 005772ec
    JNZ 0x0057726b                      ; 005772ee | LAB_0057726b
        ;   XREF to: 0057726b (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x14]      ; 005772f4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005772f8
    MOV ECX,dword ptr [ESP + 0x18]      ; 005772fc
    ADD EBX,0x4                         ; 00577300
    INC ESI                             ; 00577303
    ADD ECX,0x100                       ; 00577304
    MOV dword ptr [ESP + 0x14],EBX      ; 0057730a
    MOV dword ptr [ESP + 0x1c],ESI      ; 0057730e
    MOV dword ptr [ESP + 0x18],ECX      ; 00577312
    CMP ESI,0x30                        ; 00577316
    JL 0x0057723f                       ; 00577319 | LAB_0057723f
        ;   XREF to: 0057723f (CONDITIONAL_JUMP)
    ADD ESP,0x20                        ; 0057731f
    POP EBP                             ; 00577322
    POP EDI                             ; 00577323
    POP ESI                             ; 00577324
    POP EBX                             ; 00577325
    RET                                 ; 00577326

