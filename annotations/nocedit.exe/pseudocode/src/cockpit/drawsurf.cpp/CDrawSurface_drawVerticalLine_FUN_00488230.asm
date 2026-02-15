; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface *this_ptr,int x,int start_y,int end_y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   start_y
; int              Stack[0x10]:4   end_y
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 at 0048850c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621ddd
;   TerminatedCString s_Invalid_bitsPerPixel_00621df5
;   TerminatedCString s_cockpit_drawsurf_cpp_00621e0b
;   TerminatedCString s_Invalid_bitsPerPixel_00621e23
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_UseRGBConversion
;   int g_OriginalColorValue
;   int g_PackedPixelColor
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488230
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
    PUSH ESI                            ; 00488231
    PUSH EDI                            ; 00488232
    PUSH EBP                            ; 00488233
    SUB ESP,0x8                         ; 00488234
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00488237
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048823b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048823f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00488243
    MOV ECX,dword ptr [EDX + 0x8]       ; 00488247
    MOV EDI,dword ptr [EDX + 0xc]       ; 0048824a
    ADD ESI,ECX                         ; 0048824d
    ADD EAX,EDI                         ; 0048824f
    MOV ECX,dword ptr [EDX + 0x10]      ; 00488251
    ADD EBX,EDI                         ; 00488254
    CMP ESI,ECX                         ; 00488256
    JL 0x004882d0                       ; 00488258
        ;   XREF to: 004882d0 (CONDITIONAL_JUMP)  ; LAB_004882d0
    CMP ESI,dword ptr [EDX + 0x18]      ; 0048825e
    JG 0x004882d0                       ; 00488261
        ;   XREF to: 004882d0 (CONDITIONAL_JUMP)  ; LAB_004882d0
    MOV EBP,dword ptr [EDX + 0x14]      ; 00488267
    CMP EAX,EBP                         ; 0048826a
    JGE 0x00488270                      ; 0048826c
        ;   XREF to: 00488270 (CONDITIONAL_JUMP)  ; LAB_00488270
    MOV EAX,EBP                         ; 0048826e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00488270
        ;   Label: LAB_00488270
    CMP EBX,ECX                         ; 00488273
    JLE 0x00488279                      ; 00488275
        ;   XREF to: 00488279 (CONDITIONAL_JUMP)  ; LAB_00488279
    MOV EBX,ECX                         ; 00488277
    CMP EAX,EBX                         ; 00488279
        ;   Label: LAB_00488279
    JG 0x004882d0                       ; 0048827b
        ;   XREF to: 004882d0 (CONDITIONAL_JUMP)  ; LAB_004882d0
    LEA EDI,[ESI + ESI*0x1]             ; 0048827d
    MOV EBP,dword ptr [0x02c6d55c]      ; 00488280 | g_UseRGBConversion
    LEA EDX,[ESI*0x4 + 0x0]             ; 00488286
    SHL EBX,0x2                         ; 0048828d
    MOV dword ptr [ESP],EDX             ; 00488290
    LEA EDX,[EAX*0x4 + 0x0]             ; 00488293
    TEST EBP,EBP                        ; 0048829a
    JNZ 0x004883b6                      ; 0048829c
        ;   XREF to: 004883b6 (CONDITIONAL_JUMP)  ; LAB_004883b6
    MOV ECX,dword ptr [0x0067939c]      ; 004882a2 | g_BitsPerPixel
    CMP ECX,0x10                        ; 004882a8
    JNC 0x0048833e                      ; 004882ab
        ;   XREF to: 0048833e (CONDITIONAL_JUMP)  ; LAB_0048833e
    CMP ECX,0x8                         ; 004882b1
    JNZ 0x00488313                      ; 004882b4
        ;   XREF to: 00488313 (CONDITIONAL_JUMP)  ; LAB_00488313
    MOV EDI,EBX                         ; 004882b6
    MOV CL,byte ptr [0x02c6d550]        ; 004882b8 | g_CurrentDrawColor
        ;   Label: LAB_004882b8
    MOV EBX,dword ptr [EDX + 0x2cf6a9c] ; 004882be | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,0x4                         ; 004882c4
    INC EAX                             ; 004882c7
    MOV byte ptr [ESI + EBX*0x1],CL     ; 004882c8
    CMP EDX,EDI                         ; 004882cb
    JLE 0x004882b8                      ; 004882cd
        ;   XREF to: 004882b8 (CONDITIONAL_JUMP)  ; LAB_004882b8
    NOP                                 ; 004882cf
    ADD ESP,0x8                         ; 004882d0
        ;   Label: LAB_004882d0
    POP EBP                             ; 004882d3
    POP EDI                             ; 004882d4
    POP ESI                             ; 004882d5
    POP EBX                             ; 004882d6
    RET                                 ; 004882d7
    MOV ESI,EBX                         ; 004882d8
        ;   Label: LAB_004882d8
    MOV BX,word ptr [0x02c6d550]        ; 004882da | g_CurrentDrawColor
        ;   Label: LAB_004882da
    MOV ECX,dword ptr [EDX + 0x2cf6a9c] ; 004882e1 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,0x4                         ; 004882e7
    INC EAX                             ; 004882ea
    MOV word ptr [ECX + EDI*0x1],BX     ; 004882eb
    CMP EDX,ESI                         ; 004882ef
    JLE 0x004882da                      ; 004882f1
        ;   XREF to: 004882da (CONDITIONAL_JUMP)  ; LAB_004882da
    JMP 0x004882d0                      ; 004882f3
        ;   XREF to: 004882d0 (UNCONDITIONAL_JUMP)  ; LAB_004882d0
    MOV EDI,dword ptr [ESP]             ; 004882f5
        ;   Label: LAB_004882f5
    MOV ESI,EBX                         ; 004882f8
    MOV EBX,dword ptr [0x02c6d550]      ; 004882fa | g_CurrentDrawColor
        ;   Label: LAB_004882fa
    MOV ECX,dword ptr [EDX + 0x2cf6a9c] ; 00488300 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,0x4                         ; 00488306
    INC EAX                             ; 00488309
    MOV dword ptr [ECX + EDI*0x1],EBX   ; 0048830a
    CMP EDX,ESI                         ; 0048830d
    JLE 0x004882fa                      ; 0048830f
        ;   XREF to: 004882fa (CONDITIONAL_JUMP)  ; LAB_004882fa
    JMP 0x004882d0                      ; 00488311
        ;   XREF to: 004882d0 (UNCONDITIONAL_JUMP)  ; LAB_004882d0
    MOV ECX,0x621ddd                    ; 00488313 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00488313
    MOV EBX,0x3db                       ; 00488318
    PUSH 0x621df5                       ; 0048831d | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00488322 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00488328 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048832e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00488333
    ADD ESP,0x8                         ; 00488336
    POP EBP                             ; 00488339
    POP EDI                             ; 0048833a
    POP ESI                             ; 0048833b
    POP EBX                             ; 0048833c
    RET                                 ; 0048833d
    JBE 0x004882d8                      ; 0048833e
        ;   XREF to: 004882d8 (CONDITIONAL_JUMP)  ; LAB_004882d8
        ;   Label: LAB_0048833e
    CMP ECX,0x20                        ; 00488340
    JZ 0x004882f5                       ; 00488343
        ;   XREF to: 004882f5 (CONDITIONAL_JUMP)  ; LAB_004882f5
    JMP 0x00488313                      ; 00488345
        ;   XREF to: 00488313 (UNCONDITIONAL_JUMP)  ; LAB_00488313
    MOV EBP,EDI                         ; 00488347
        ;   Label: LAB_00488347
    MOV EDI,EBX                         ; 00488349
    MOV EBX,dword ptr [EDX + 0x2cf6a9c] ; 0048834b | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_0048834b
    XOR ESI,ESI                         ; 00488351
    MOV CL,byte ptr [0x02c6d560]        ; 00488353 | g_OriginalColorValue
    MOV SI,word ptr [EBX + EBP*0x1]     ; 00488359
    SHR ESI,CL                          ; 0048835d
    MOV ECX,dword ptr [0x02c6d570]      ; 0048835f | g_PackedPixelColor
    ADD EDX,0x4                         ; 00488365
    AND ESI,ECX                         ; 00488368
    INC EAX                             ; 0048836a
    MOV word ptr [EBX + EBP*0x1],SI     ; 0048836b
    CMP EDX,EDI                         ; 0048836f
    JLE 0x0048834b                      ; 00488371
        ;   XREF to: 0048834b (CONDITIONAL_JUMP)  ; LAB_0048834b
    ADD ESP,0x8                         ; 00488373
    POP EBP                             ; 00488376
    POP EDI                             ; 00488377
    POP ESI                             ; 00488378
    POP EBX                             ; 00488379
    RET                                 ; 0048837a
    MOV ECX,dword ptr [ESP]             ; 0048837b
        ;   Label: LAB_0048837b
    MOV dword ptr [ESP + 0x4],ECX       ; 0048837e
    MOV EDI,EBX                         ; 00488382
    MOV EBP,dword ptr [ESP + 0x4]       ; 00488384
    MOV ESI,dword ptr [EDX + 0x2cf6a9c] ; 00488388 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00488388
    ADD ESI,EBP                         ; 0048838e
    MOV CL,byte ptr [0x02c6d560]        ; 00488390 | g_OriginalColorValue
    MOV EBX,dword ptr [ESI]             ; 00488396
    SHR EBX,CL                          ; 00488398
    MOV ECX,EBX                         ; 0048839a
    MOV EBX,dword ptr [0x02c6d570]      ; 0048839c | g_PackedPixelColor
    ADD EDX,0x4                         ; 004883a2
    AND ECX,EBX                         ; 004883a5
    INC EAX                             ; 004883a7
    MOV dword ptr [ESI],ECX             ; 004883a8
    CMP EDX,EDI                         ; 004883aa
    JLE 0x00488388                      ; 004883ac
        ;   XREF to: 00488388 (CONDITIONAL_JUMP)  ; LAB_00488388
    ADD ESP,0x8                         ; 004883ae
    POP EBP                             ; 004883b1
    POP EDI                             ; 004883b2
    POP ESI                             ; 004883b3
    POP EBX                             ; 004883b4
    RET                                 ; 004883b5
    MOV ECX,dword ptr [0x0067939c]      ; 004883b6 | g_BitsPerPixel
        ;   Label: LAB_004883b6
    CMP ECX,0x10                        ; 004883bc
    JNC 0x004883cc                      ; 004883bf
        ;   XREF to: 004883cc (CONDITIONAL_JUMP)  ; LAB_004883cc
    CMP ECX,0x8                         ; 004883c1
    JZ 0x004882d0                       ; 004883c4
        ;   XREF to: 004882d0 (CONDITIONAL_JUMP)  ; LAB_004882d0
    JMP 0x004883d7                      ; 004883ca
        ;   XREF to: 004883d7 (UNCONDITIONAL_JUMP)  ; LAB_004883d7
    JBE 0x00488347                      ; 004883cc
        ;   XREF to: 00488347 (CONDITIONAL_JUMP)  ; LAB_00488347
        ;   Label: LAB_004883cc
    CMP ECX,0x20                        ; 004883d2
    JZ 0x0048837b                       ; 004883d5
        ;   XREF to: 0048837b (CONDITIONAL_JUMP)  ; LAB_0048837b
    MOV EAX,0x621e0b                    ; 004883d7 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_004883d7
    MOV EDX,0x3fb                       ; 004883dc
    PUSH 0x621e23                       ; 004883e1 | = "Invalid bitsPerPixel!"
    MOV [0x02f0ca48],EAX                ; 004883e6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004883eb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004883f1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004883f6
    ADD ESP,0x8                         ; 004883f9
    POP EBP                             ; 004883fc
    POP EDI                             ; 004883fd
    POP ESI                             ; 004883fe
    POP EBX                             ; 004883ff
    RET                                 ; 00488400

