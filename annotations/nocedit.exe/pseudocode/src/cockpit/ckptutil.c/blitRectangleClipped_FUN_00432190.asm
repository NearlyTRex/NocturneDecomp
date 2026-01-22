; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190(void * sprite_data, int dest_x, int dest_y, int width, int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
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
;   int g_ClipLeft
;   int g_ClipRight
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432190
        ;   Label: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
    PUSH ESI                            ; 00432191
    PUSH EDI                            ; 00432192
    PUSH EBP                            ; 00432193
    SUB ESP,0x1c                        ; 00432194
    MOV EBX,dword ptr [ESP + 0x30]      ; 00432197
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043219b
    MOV EAX,[0x02d02560]                ; 0043219f | g_ClipRight
    SUB EAX,EBP                         ; 004321a4
    MOV EDX,dword ptr [0x02cf6a9c]      ; 004321a6 | g_ScreenBufferArray
    MOV dword ptr [ESP],EAX             ; 004321ac
    MOV EAX,[0x02cf6aa0]                ; 004321af | g_ScreenBufferArray[1]
    MOV ESI,dword ptr [0x02d02558]      ; 004321b4 | g_ClipLeft
    SUB EAX,EDX                         ; 004321ba
    SUB ESI,EBP                         ; 004321bc
    MOV dword ptr [ESP + 0x14],EAX      ; 004321be
    TEST EBX,EBX                        ; 004321c2
    JNZ 0x004321d8                      ; 004321c4
        ;   XREF to: 004321d8 (CONDITIONAL_JUMP)  ; LAB_004321d8
    LEA EAX,[EAX]                       ; 004321c6
    LEA EDX,[EDX]                       ; 004321cc
    ADD ESP,0x1c                        ; 004321d0
        ;   Label: LAB_004321d0
    POP EBP                             ; 004321d3
    POP EDI                             ; 004321d4
    POP ESI                             ; 004321d5
    POP EBX                             ; 004321d6
    RET                                 ; 004321d7
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 004321d8
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_004321d8
    MOV ECX,dword ptr [ESP + 0x38]      ; 004321dd
    MOV EDI,dword ptr [0x0067939c]      ; 004321e1 | g_BitsPerPixel
    MOV dword ptr [ESP + 0x18],EAX      ; 004321e7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004321eb
    SHL ECX,0x2                         ; 004321ef
    DEC EAX                             ; 004321f2
    CMP EDI,0x8                         ; 004321f3
    JNZ 0x0043225d                      ; 004321f6
        ;   XREF to: 0043225d (CONDITIONAL_JUMP)  ; LAB_0043225d
    MOV EDI,dword ptr [ECX + 0x2cf6a9c] ; 004321f8 | g_ScreenBufferArray
    MOV ECX,EAX                         ; 004321fe
    ADD EDI,EBP                         ; 00432200
    XOR EBP,EBP                         ; 00432202
    TEST ESI,ESI                        ; 00432204
    JLE 0x0043220e                      ; 00432206
        ;   XREF to: 0043220e (CONDITIONAL_JUMP)  ; LAB_0043220e
    CMP EAX,ESI                         ; 00432208
    JL 0x004321d0                       ; 0043220a
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    MOV EBP,ESI                         ; 0043220c
    MOV EDX,dword ptr [ESP]             ; 0043220e
        ;   Label: LAB_0043220e
    CMP ECX,EDX                         ; 00432211
    JLE 0x0043221b                      ; 00432213
        ;   XREF to: 0043221b (CONDITIONAL_JUMP)  ; LAB_0043221b
    CMP EBP,EDX                         ; 00432215
    JG 0x004321d0                       ; 00432217
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    MOV ECX,EDX                         ; 00432219
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043221b
        ;   Label: LAB_0043221b
    XOR ESI,ESI                         ; 0043221f
    TEST EAX,EAX                        ; 00432221
    JLE 0x004321d0                      ; 00432223
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    SUB ECX,EBP                         ; 00432225
    INC ECX                             ; 00432227
    MOV dword ptr [ESP + 0x4],ECX       ; 00432228
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043222c
        ;   Label: LAB_0043222c
    PUSH ECX                            ; 00432230
    LEA EAX,[EBX + EBP*0x1]             ; 00432231
    PUSH EAX                            ; 00432234
    LEA EAX,[EDI + EBP*0x1]             ; 00432235
    PUSH EAX                            ; 00432238
    CALL dword ptr [ESP + 0x24]         ; 00432239
    ADD ESP,0xc                         ; 0043223d
    INC ESI                             ; 00432240
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432241
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00432245
    MOV ECX,dword ptr [ESP + 0x40]      ; 00432249
    ADD EDI,EAX                         ; 0043224d
    ADD EBX,EDX                         ; 0043224f
    CMP ESI,ECX                         ; 00432251
    JL 0x0043222c                       ; 00432253
        ;   XREF to: 0043222c (CONDITIONAL_JUMP)  ; LAB_0043222c
    ADD ESP,0x1c                        ; 00432255
    POP EBP                             ; 00432258
    POP EDI                             ; 00432259
    POP ESI                             ; 0043225a
    POP EBX                             ; 0043225b
    RET                                 ; 0043225c
    MOV EDI,dword ptr [ECX + 0x2cf6a9c] ; 0043225d | g_ScreenBufferArray
        ;   Label: LAB_0043225d
    ADD EBP,EBP                         ; 00432263
    MOV ECX,EAX                         ; 00432265
    ADD EDI,EBP                         ; 00432267
    XOR EBP,EBP                         ; 00432269
    TEST ESI,ESI                        ; 0043226b
    JLE 0x00432279                      ; 0043226d
        ;   XREF to: 00432279 (CONDITIONAL_JUMP)  ; LAB_00432279
    CMP EAX,ESI                         ; 0043226f
    JL 0x004321d0                       ; 00432271
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    MOV EBP,ESI                         ; 00432277
    MOV EAX,dword ptr [ESP]             ; 00432279
        ;   Label: LAB_00432279
    CMP ECX,EAX                         ; 0043227c
    JLE 0x0043228a                      ; 0043227e
        ;   XREF to: 0043228a (CONDITIONAL_JUMP)  ; LAB_0043228a
    CMP EBP,EAX                         ; 00432280
    JG 0x004321d0                       ; 00432282
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    MOV ECX,EAX                         ; 00432288
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043228a
        ;   Label: LAB_0043228a
    MOV EDX,EAX                         ; 0043228e
    SAR EDX,0x1f                        ; 00432290
    SUB EAX,EDX                         ; 00432293
    SAR EAX,0x1                         ; 00432295
    MOV dword ptr [ESP + 0x14],EAX      ; 00432297
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043229b
    XOR ESI,ESI                         ; 0043229f
    TEST EAX,EAX                        ; 004322a1
    JLE 0x004321d0                      ; 004322a3
        ;   XREF to: 004321d0 (CONDITIONAL_JUMP)  ; LAB_004321d0
    SUB ECX,EBP                         ; 004322a9
    LEA EAX,[EBP + EBP*0x1]             ; 004322ab
    MOV dword ptr [ESP + 0xc],EAX       ; 004322af
    MOV EAX,dword ptr [ESP + 0x14]      ; 004322b3
    INC ECX                             ; 004322b7
    ADD EAX,EAX                         ; 004322b8
    MOV dword ptr [ESP + 0x10],ECX      ; 004322ba
    MOV dword ptr [ESP + 0x8],EAX       ; 004322be
    MOV EDX,dword ptr [ESP + 0x10]      ; 004322c2
        ;   Label: LAB_004322c2
    PUSH EDX                            ; 004322c6
    LEA EAX,[EBX + EBP*0x1]             ; 004322c7
    PUSH EAX                            ; 004322ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 004322cb
    ADD EAX,EDI                         ; 004322cf
    PUSH EAX                            ; 004322d1
    CALL dword ptr [ESP + 0x24]         ; 004322d2
    ADD ESP,0xc                         ; 004322d6
    INC ESI                             ; 004322d9
    MOV ECX,dword ptr [ESP + 0x8]       ; 004322da
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004322de
    MOV EDX,dword ptr [ESP + 0x40]      ; 004322e2
    ADD EDI,ECX                         ; 004322e6
    ADD EBX,EAX                         ; 004322e8
    CMP ESI,EDX                         ; 004322ea
    JL 0x004322c2                       ; 004322ec
        ;   XREF to: 004322c2 (CONDITIONAL_JUMP)  ; LAB_004322c2
    ADD ESP,0x1c                        ; 004322ee
    POP EBP                             ; 004322f1
    POP EDI                             ; 004322f2
    POP ESI                             ; 004322f3
    POP EBX                             ; 004322f4
    RET                                 ; 004322f5

