; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_blitThumbnailStripAndHitTest_FUN_00577730(int start_thumbnail,int thumbnail_count,int screen_x,int screen_y)
;
; Parameters:
; int              Stack[0x4]:4   start_thumbnail
; int              Stack[0x8]:4   thumbnail_count
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; Local Variables:
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; ushort *         Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_MouseX
;   int g_MouseY
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uchar[32768] g_ColorCubeLookup
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   uint[250][3072] g_ThumbnailImageBuffer
;   ... and 2 more
;
; Called Functions:
;   engine_2d.c_drawRect_FUN_00403120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577730
        ;   Label: core_setedit.cpp_blitThumbnailStripAndHitTest_FUN_00577730
    PUSH ESI                            ; 00577731
    PUSH EDI                            ; 00577732
    PUSH EBP                            ; 00577733
    SUB ESP,0x58                        ; 00577734
    MOV EAX,dword ptr [ESP + 0x78]      ; 00577737
    ADD EAX,0x30                        ; 0057773b
    MOV dword ptr [ESP + 0xc],EAX       ; 0057773e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00577742
    MOV dword ptr [ESP + 0x10],EAX      ; 00577746
    MOV EAX,dword ptr [ESP + 0x74]      ; 0057774a
    MOV dword ptr [ESP + 0x14],EAX      ; 0057774e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00577752
    MOV EDX,dword ptr [ESP + 0x74]      ; 00577756
    SHL EAX,0x6                         ; 0057775a
    ADD EDX,EAX                         ; 0057775d
    MOV EAX,dword ptr [ESP + 0x74]      ; 0057775f
    MOV dword ptr [ESP + 0x8],EDX       ; 00577763
    CMP EAX,EDX                         ; 00577767
    JGE 0x005777a8                      ; 00577769
        ;   XREF to: 005777a8 (CONDITIONAL_JUMP)  ; LAB_005777a8
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057776b
        ;   Label: LAB_0057776b
    TEST EDI,EDI                        ; 0057776f
    JL 0x0057778c                       ; 00577771
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    MOV EBP,dword ptr [ESP + 0x78]      ; 00577773
    TEST EBP,EBP                        ; 00577777
    JL 0x0057778c                       ; 00577779
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    MOV EDX,dword ptr [0x00679394]      ; 0057777b | g_WindowWidth
    LEA EAX,[EDI + 0x40]                ; 00577781
    CMP EAX,EDX                         ; 00577784
    JLE 0x0057780d                      ; 00577786
        ;   XREF to: 0057780d (CONDITIONAL_JUMP)  ; LAB_0057780d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057778c
        ;   Label: LAB_0057778c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00577790
    MOV ESI,dword ptr [ESP + 0x8]       ; 00577794
    INC ECX                             ; 00577798
    ADD EBX,0x40                        ; 00577799
    MOV dword ptr [ESP + 0x10],ECX      ; 0057779c
    MOV dword ptr [ESP + 0x14],EBX      ; 005777a0
    CMP EBX,ESI                         ; 005777a4
    JL 0x0057776b                       ; 005777a6
        ;   XREF to: 0057776b (CONDITIONAL_JUMP)  ; LAB_0057776b
    MOV EBX,dword ptr [ESP + 0x70]      ; 005777a8
        ;   Label: LAB_005777a8
    MOV EDI,dword ptr [ESP + 0x74]      ; 005777ac
    MOV EAX,dword ptr [ESP + 0x78]      ; 005777b0
    SHL EBX,0x6                         ; 005777b4
    ADD EAX,0x2f                        ; 005777b7
    ADD EBX,EDI                         ; 005777ba
    PUSH EAX                            ; 005777bc
    LEA EAX,[EBX + -0x1]                ; 005777bd
    PUSH EAX                            ; 005777c0
    MOV EBP,dword ptr [ESP + 0x80]      ; 005777c1
    PUSH EBP                            ; 005777c8
    PUSH EDI                            ; 005777c9
    CALL engine_2d.c_drawRect_FUN_00403120 ; 005777ca
        ;   XREF to: 00403120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)
    MOV EAX,[0x02cf6a8c]                ; 005777cf | g_MouseX
    ADD ESP,0x10                        ; 005777d4
    CMP EAX,EDI                         ; 005777d7
    JL 0x00577ad6                       ; 005777d9
        ;   XREF to: 00577ad6 (CONDITIONAL_JUMP)  ; LAB_00577ad6
    CMP EBX,EAX                         ; 005777df
    JLE 0x00577ad6                      ; 005777e1
        ;   XREF to: 00577ad6 (CONDITIONAL_JUMP)  ; LAB_00577ad6
    MOV EAX,[0x02cf6a90]                ; 005777e7 | g_MouseY
    CMP EAX,EBP                         ; 005777ec
    JL 0x00577ad6                       ; 005777ee
        ;   XREF to: 00577ad6 (CONDITIONAL_JUMP)  ; LAB_00577ad6
    CMP EAX,dword ptr [ESP + 0xc]       ; 005777f4
    JGE 0x00577ad6                      ; 005777f8
        ;   XREF to: 00577ad6 (CONDITIONAL_JUMP)  ; LAB_00577ad6
    MOV EBX,0x1                         ; 005777fe
    MOV EAX,EBX                         ; 00577803
    ADD ESP,0x58                        ; 00577805
    POP EBP                             ; 00577808
    POP EDI                             ; 00577809
    POP ESI                             ; 0057780a
    POP EBX                             ; 0057780b
    RET                                 ; 0057780c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057780d
        ;   Label: LAB_0057780d
    CMP EAX,dword ptr [0x00679398]      ; 00577811 | g_WindowHeight
    JG 0x0057778c                       ; 00577817
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    IMUL EAX,dword ptr [ESP + 0x10],0x3000 ; 0057781d
    MOV ESI,dword ptr [0x0067939c]      ; 00577825 | g_BitsPerPixel
    LEA EDX,[EAX + 0x3000]              ; 0057782b
    LEA EBX,[EBP*0x4 + 0x0]             ; 00577831
    LEA ECX,[EAX + 0x100]               ; 00577838
    CMP ESI,0x8                         ; 0057783e
    JNZ 0x005778f8                      ; 00577841
        ;   XREF to: 005778f8 (CONDITIONAL_JUMP)  ; LAB_005778f8
    MOV dword ptr [ESP + 0x38],ECX      ; 00577847
    MOV dword ptr [ESP + 0x30],EBX      ; 0057784b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057784f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00577853
    MOV dword ptr [ESP + 0x24],EDI      ; 00577857
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057785b
        ;   Label: LAB_0057785b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0057785f
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00577863 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00577869
    ADD EAX,EBP                         ; 0057786d
    MOV EBP,dword ptr [ESP + 0x38]      ; 0057786f
    LEA EDX,[EAX + 0x1]                 ; 00577873
    MOV EAX,dword ptr [EBX + 0x3365cc0] ; 00577876 | g_ThumbnailImageBuffer | g_ThumbnailImageBuffer[0][1] | g_ThumbnailImageBuffer[0][64]
        ;   Label: LAB_00577876
    MOV ECX,EAX                         ; 0057787c
    MOV EDI,EAX                         ; 0057787e
    MOV ESI,EAX                         ; 00577880
    AND ECX,0xff                        ; 00577882
    SHR EDI,0x8                         ; 00577888
    SHR ESI,0x10                        ; 0057788b
    AND EDI,0xff                        ; 0057788e
    MOV EAX,ECX                         ; 00577894
    MOV ECX,EDI                         ; 00577896
    SHR EAX,0x3                         ; 00577898
    SHR ECX,0x3                         ; 0057789b
    SHL EAX,0xa                         ; 0057789e
    SHL ECX,0x5                         ; 005778a1
    AND ESI,0xff                        ; 005778a4
    ADD EAX,ECX                         ; 005778aa
    SHR ESI,0x3                         ; 005778ac
    INC EDX                             ; 005778af
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020] ; 005778b0 | g_ColorCubeLookup
    ADD EBX,0x4                         ; 005778b7
    MOV byte ptr [EDX + -0x1],AL        ; 005778ba
    CMP EBX,EBP                         ; 005778bd
    JNZ 0x00577876                      ; 005778bf
        ;   XREF to: 00577876 (CONDITIONAL_JUMP)  ; LAB_00577876
    MOV EDX,dword ptr [ESP + 0x30]      ; 005778c1
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005778c5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005778c9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005778cd
    ADD EDX,0x4                         ; 005778d1
    ADD ECX,0x100                       ; 005778d4
    ADD EAX,0x100                       ; 005778da
    MOV dword ptr [ESP + 0x30],EDX      ; 005778df
    MOV dword ptr [ESP + 0x4c],ECX      ; 005778e3
    MOV dword ptr [ESP + 0x38],EAX      ; 005778e7
    CMP ECX,EBX                         ; 005778eb
    JZ 0x0057778c                       ; 005778ed
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    JMP 0x0057785b                      ; 005778f3
        ;   XREF to: 0057785b (UNCONDITIONAL_JUMP)  ; LAB_0057785b
    CMP ESI,0x10                        ; 005778f8
        ;   Label: LAB_005778f8
    JNZ 0x005779fc                      ; 005778fb
        ;   XREF to: 005779fc (CONDITIONAL_JUMP)  ; LAB_005779fc
    MOV dword ptr [ESP + 0x3c],ECX      ; 00577901
    MOV dword ptr [ESP + 0x4],EBX       ; 00577905
    MOV dword ptr [ESP + 0x44],EAX      ; 00577909
    LEA ESI,[EDI + EDI*0x1]             ; 0057790d
    MOV dword ptr [ESP + 0x1c],EDX      ; 00577910
    MOV dword ptr [ESP + 0x28],ESI      ; 00577914
    MOV EAX,dword ptr [ESP + 0x4]       ; 00577918
        ;   Label: LAB_00577918
    MOV EDX,dword ptr [ESP + 0x28]      ; 0057791c
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00577920 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EDX                         ; 00577926
    ADD EAX,0x2                         ; 00577928
    MOV dword ptr [ESP + 0x54],EAX      ; 0057792b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057792f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00577933
    MOV dword ptr [ESP + 0x50],EAX      ; 00577937
    MOV EDX,dword ptr [EBX + 0x3365cc0] ; 0057793b | g_ThumbnailImageBuffer | g_ThumbnailImageBuffer[0][1] | g_ThumbnailImageBuffer[0][64]
        ;   Label: LAB_0057793b
    MOV ESI,dword ptr [0x02d01f28]      ; 00577941 | g_RedScaleFactor
    MOV EAX,EDX                         ; 00577947
    MOV ECX,EDX                         ; 00577949
    MOV EBP,EDX                         ; 0057794b
    AND EAX,0xff                        ; 0057794d
    XOR EDX,EDX                         ; 00577952
    DIV ESI                             ; 00577954
    SHR ECX,0x8                         ; 00577956
    MOV EDI,dword ptr [0x02d01f34]      ; 00577959 | g_GreenScaleFactor
    AND ECX,0xff                        ; 0057795f
    MOV ESI,EAX                         ; 00577965
    XOR EDX,EDX                         ; 00577967
    MOV EAX,ECX                         ; 00577969
    DIV EDI                             ; 0057796b
    SHR EBP,0x10                        ; 0057796d
    AND EBP,0xff                        ; 00577970
    MOV dword ptr [ESP],EBP             ; 00577976
    MOV EDI,EAX                         ; 00577979
    XOR EDX,EDX                         ; 0057797b
    MOV EAX,EBP                         ; 0057797d
    DIV dword ptr [0x02d01f40]          ; 0057797f | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 00577985 | g_RedBitPosition
    SHL ESI,CL                          ; 0057798b
    MOV CL,byte ptr [0x02d01f30]        ; 0057798d | g_GreenBitPosition
    SHL EDI,CL                          ; 00577993
    MOV dword ptr [ESP],EAX             ; 00577995
    MOV CL,byte ptr [0x02d01f3c]        ; 00577998 | g_BlueBitPosition
    MOV EAX,dword ptr [ESP]             ; 0057799e
    OR ESI,EDI                          ; 005779a1
    SHL EAX,CL                          ; 005779a3
    MOV EDX,dword ptr [ESP + 0x54]      ; 005779a5
    OR EAX,ESI                          ; 005779a9
    MOV word ptr [EDX],AX               ; 005779ab
    LEA EAX,[EDX + 0x2]                 ; 005779ae
    ADD EBX,0x4                         ; 005779b1
    MOV EDX,dword ptr [ESP + 0x50]      ; 005779b4
    MOV dword ptr [ESP + 0x54],EAX      ; 005779b8
    CMP EBX,EDX                         ; 005779bc
    JNZ 0x0057793b                      ; 005779be
        ;   XREF to: 0057793b (CONDITIONAL_JUMP)  ; LAB_0057793b
    MOV EBX,dword ptr [ESP + 0x4]       ; 005779c4
    MOV ESI,dword ptr [ESP + 0x44]      ; 005779c8
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005779cc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005779d0
    ADD EBX,0x4                         ; 005779d4
    ADD ESI,0x100                       ; 005779d7
    ADD ECX,0x100                       ; 005779dd
    MOV dword ptr [ESP + 0x4],EBX       ; 005779e3
    MOV dword ptr [ESP + 0x44],ESI      ; 005779e7
    MOV dword ptr [ESP + 0x3c],ECX      ; 005779eb
    CMP ESI,EDI                         ; 005779ef
    JZ 0x0057778c                       ; 005779f1
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    JMP 0x00577918                      ; 005779f7
        ;   XREF to: 00577918 (UNCONDITIONAL_JUMP)  ; LAB_00577918
    CMP ESI,0x20                        ; 005779fc
        ;   Label: LAB_005779fc
    JNZ 0x0057778c                      ; 005779ff
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    LEA ESI,[EDI*0x4 + 0x0]             ; 00577a05
    MOV dword ptr [ESP + 0x34],ECX      ; 00577a0c
    MOV dword ptr [ESP + 0x40],EBX      ; 00577a10
    MOV dword ptr [ESP + 0x48],EAX      ; 00577a14
    MOV dword ptr [ESP + 0x20],EDX      ; 00577a18
    MOV dword ptr [ESP + 0x18],ESI      ; 00577a1c
    MOV EAX,dword ptr [ESP + 0x40]      ; 00577a20
        ;   Label: LAB_00577a20
    MOV EDX,dword ptr [ESP + 0x18]      ; 00577a24
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00577a28 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [ESP + 0x48]      ; 00577a2e
    ADD EAX,EDX                         ; 00577a32
    MOV EBP,dword ptr [ESP + 0x34]      ; 00577a34
    LEA EDX,[EAX + 0x4]                 ; 00577a38
    MOV EAX,dword ptr [EBX + 0x3365cc0] ; 00577a3b | g_ThumbnailImageBuffer | g_ThumbnailImageBuffer[0][1] | g_ThumbnailImageBuffer[0][64]
        ;   Label: LAB_00577a3b
    MOV ECX,dword ptr [0x0067939c]      ; 00577a41 | g_BitsPerPixel
    MOV ESI,EAX                         ; 00577a47
    MOV EDI,EAX                         ; 00577a49
    AND ESI,0xff                        ; 00577a4b
    SHR EDI,0x8                         ; 00577a51
    SHR EAX,0x10                        ; 00577a54
    AND EDI,0xff                        ; 00577a57
    AND EAX,0xff                        ; 00577a5d
    CMP ECX,0x20                        ; 00577a62
    JNZ 0x00577aca                      ; 00577a65
        ;   XREF to: 00577aca (CONDITIONAL_JUMP)  ; LAB_00577aca
    MOV CL,byte ptr [0x02d01f24]        ; 00577a67 | g_RedBitPosition
    SHL ESI,CL                          ; 00577a6d
    MOV CL,byte ptr [0x02d01f30]        ; 00577a6f | g_GreenBitPosition
    SHL EDI,CL                          ; 00577a75
    MOV CL,byte ptr [0x02d01f3c]        ; 00577a77 | g_BlueBitPosition
    OR ESI,EDI                          ; 00577a7d
    SHL EAX,CL                          ; 00577a7f
    MOV ECX,ESI                         ; 00577a81
    OR ECX,EAX                          ; 00577a83
        ;   Label: LAB_00577a83
    ADD EDX,0x4                         ; 00577a85
    ADD EBX,0x4                         ; 00577a88
    MOV dword ptr [EDX + -0x4],ECX      ; 00577a8b
    CMP EBX,EBP                         ; 00577a8e
    JNZ 0x00577a3b                      ; 00577a90
        ;   XREF to: 00577a3b (CONDITIONAL_JUMP)  ; LAB_00577a3b
    MOV ESI,dword ptr [ESP + 0x40]      ; 00577a92
    MOV EDI,dword ptr [ESP + 0x48]      ; 00577a96
    MOV EBX,dword ptr [ESP + 0x34]      ; 00577a9a
    MOV EBP,dword ptr [ESP + 0x20]      ; 00577a9e
    ADD ESI,0x4                         ; 00577aa2
    ADD EDI,0x100                       ; 00577aa5
    ADD EBX,0x100                       ; 00577aab
    MOV dword ptr [ESP + 0x40],ESI      ; 00577ab1
    MOV dword ptr [ESP + 0x48],EDI      ; 00577ab5
    MOV dword ptr [ESP + 0x34],EBX      ; 00577ab9
    CMP EDI,EBP                         ; 00577abd
    JZ 0x0057778c                       ; 00577abf
        ;   XREF to: 0057778c (CONDITIONAL_JUMP)  ; LAB_0057778c
    JMP 0x00577a20                      ; 00577ac5
        ;   XREF to: 00577a20 (UNCONDITIONAL_JUMP)  ; LAB_00577a20
    MOV ECX,ESI                         ; 00577aca
        ;   Label: LAB_00577aca
    SHL EDI,0x8                         ; 00577acc
    SHL ECX,0x10                        ; 00577acf
    OR ECX,EDI                          ; 00577ad2
    JMP 0x00577a83                      ; 00577ad4
        ;   XREF to: 00577a83 (UNCONDITIONAL_JUMP)  ; LAB_00577a83
    XOR EBX,EBX                         ; 00577ad6
        ;   Label: LAB_00577ad6
    MOV EAX,EBX                         ; 00577ad8
    ADD ESP,0x58                        ; 00577ada
    POP EBP                             ; 00577add
    POP EDI                             ; 00577ade
    POP ESI                             ; 00577adf
    POP EBX                             ; 00577ae0
    RET                                 ; 00577ae1

