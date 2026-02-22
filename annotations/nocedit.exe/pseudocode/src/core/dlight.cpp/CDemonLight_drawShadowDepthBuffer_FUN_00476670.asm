; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   brightness_offset
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990 at 0056cc86
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_NoiseTableIndex
;   int[100] g_NoiseTable
;   undefined4 DAT_026a72ec
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476670
        ;   Label: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
    PUSH ESI                            ; 00476671
    PUSH EDI                            ; 00476672
    PUSH EBP                            ; 00476673
    SUB ESP,0x34                        ; 00476674
    MOV EBP,dword ptr [ESP + 0x54]      ; 00476677
    XOR ESI,ESI                         ; 0047667b
    XOR EBX,EBX                         ; 0047667d
    MOV dword ptr [0x026a72e4],ESI      ; 0047667f | g_NoiseTableIndex
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00476685
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_00476685
    AND EAX,0x1f                        ; 0047668a
    ADD EBX,0x4                         ; 0047668d
    SUB EAX,0x10                        ; 00476690
    MOV dword ptr [EBX + 0x26a72e4],EAX ; 00476693 | g_NoiseTable | DAT_026a72ec
    CMP EBX,0x190                       ; 00476699
    JNZ 0x00476685                      ; 0047669f
        ;   XREF to: 00476685 (CONDITIONAL_JUMP)  ; LAB_00476685
    MOV EDX,dword ptr [0x00679398]      ; 004766a1 | g_WindowHeight
    XOR EBX,EBX                         ; 004766a7
    TEST EDX,EDX                        ; 004766a9
    JLE 0x004766f0                      ; 004766ab
        ;   XREF to: 004766f0 (CONDITIONAL_JUMP)  ; LAB_004766f0
    XOR EDI,EDI                         ; 004766ad
    MOV EDX,dword ptr [0x00679394]      ; 004766af | g_WindowWidth
        ;   Label: LAB_004766af
    MOV ECX,dword ptr [0x0067939c]      ; 004766b5 | g_BitsPerPixel
    IMUL EDX,ECX                        ; 004766bb
    MOV EAX,EDX                         ; 004766be
    SAR EDX,0x1f                        ; 004766c0
    SHL EDX,0x3                         ; 004766c3
    SBB EAX,EDX                         ; 004766c6
    SAR EAX,0x3                         ; 004766c8
    PUSH EAX                            ; 004766cb
    PUSH 0x0                            ; 004766cc
    MOV EAX,dword ptr [EDI + 0x2cf6a9c] ; 004766ce | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EAX                            ; 004766d4
    ADD EDI,0x4                         ; 004766d5
    INC EBX                             ; 004766d8
    CALL crt_memory.c_memset_FUN_005fde40 ; 004766d9
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x00679398]      ; 004766de | g_WindowHeight
    ADD ESP,0xc                         ; 004766e4
    CMP EBX,EDX                         ; 004766e7
    JL 0x004766af                       ; 004766e9
        ;   XREF to: 004766af (CONDITIONAL_JUMP)  ; LAB_004766af
    LEA EAX,[EAX]                       ; 004766eb
    MOV ECX,ECX                         ; 004766ee
    MOV ECX,dword ptr [0x0067939c]      ; 004766f0 | g_BitsPerPixel
        ;   Label: LAB_004766f0
    MOV ESI,dword ptr [0x026a72e4]      ; 004766f6 | g_NoiseTableIndex
    CMP ECX,0x20                        ; 004766fc
    JNZ 0x004768a3                      ; 004766ff
        ;   XREF to: 004768a3 (CONDITIONAL_JUMP)  ; LAB_004768a3
    XOR EAX,EAX                         ; 00476705
    MOV dword ptr [ESP + 0x14],EAX      ; 00476707
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047670b
    CMP dword ptr [EAX + 0x1cc4],0x0    ; 0047670f
    JLE 0x0047675e                      ; 00476716
        ;   XREF to: 0047675e (CONDITIONAL_JUMP)  ; LAB_0047675e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00476718
    SHL EAX,0x2                         ; 0047671c
    MOV dword ptr [ESP + 0xc],EAX       ; 0047671f
    CMP dword ptr [0x00679398],0xf0     ; 00476723 | g_WindowHeight
        ;   Label: LAB_00476723
    JLE 0x0047676c                      ; 0047672d
        ;   XREF to: 0047676c (CONDITIONAL_JUMP)  ; LAB_0047676c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047672f
    MOV ECX,dword ptr [ESP + 0x50]      ; 00476733
    ADD EAX,EAX                         ; 00476737
    ADD EAX,ECX                         ; 00476739
    TEST EAX,EAX                        ; 0047673b
        ;   Label: LAB_0047673b
    JL 0x00476747                       ; 0047673d
        ;   XREF to: 00476747 (CONDITIONAL_JUMP)  ; LAB_00476747
    CMP EAX,dword ptr [0x00679398]      ; 0047673f | g_WindowHeight
    JL 0x00476776                       ; 00476745
        ;   XREF to: 00476776 (CONDITIONAL_JUMP)  ; LAB_00476776
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476747
        ;   Label: LAB_00476747
    MOV EDX,dword ptr [ESP + 0x48]      ; 0047674b
    INC EBX                             ; 0047674f
    MOV EDI,dword ptr [EDX + 0x1cc4]    ; 00476750
    MOV dword ptr [ESP + 0x14],EBX      ; 00476756
    CMP EBX,EDI                         ; 0047675a
    JL 0x00476723                       ; 0047675c
        ;   XREF to: 00476723 (CONDITIONAL_JUMP)  ; LAB_00476723
    MOV dword ptr [0x026a72e4],ESI      ; 0047675e | g_NoiseTableIndex
        ;   Label: LAB_0047675e
    ADD ESP,0x34                        ; 00476764
    POP EBP                             ; 00476767
    POP EDI                             ; 00476768
    POP ESI                             ; 00476769
    POP EBX                             ; 0047676a
    RET                                 ; 0047676b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047676c
        ;   Label: LAB_0047676c
    ADD EAX,dword ptr [ESP + 0x50]      ; 00476770
    JMP 0x0047673b                      ; 00476774
        ;   XREF to: 0047673b (UNCONDITIONAL_JUMP)  ; LAB_0047673b
    MOV EDX,dword ptr [ESP + 0x48]      ; 00476776
        ;   Label: LAB_00476776
    MOV EDI,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 0047677a | g_ScreenBufferArray
    MOV EAX,dword ptr [ESP + 0xc]       ; 00476781
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 00476785
    ADD EDI,EAX                         ; 0047678b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047678d
    IMUL EAX,ECX                        ; 00476791
    LEA EDX,[EAX + EAX*0x1]             ; 00476794
    MOV EAX,dword ptr [ESP + 0x48]      ; 00476797
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0047679b
    ADD EAX,EDX                         ; 004767a1
    XOR EBX,EBX                         ; 004767a3
    MOV dword ptr [ESP + 0x2c],EAX      ; 004767a5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004767a9
    MOV dword ptr [ESP + 0x20],EBX      ; 004767ad
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 004767b1
    MOV dword ptr [ESP + 0x24],EBX      ; 004767b7
    TEST EDX,EDX                        ; 004767bb
    JLE 0x00476747                      ; 004767bd
        ;   XREF to: 00476747 (CONDITIONAL_JUMP)  ; LAB_00476747
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004767bf
        ;   Label: LAB_004767bf
    XOR EBX,EBX                         ; 004767c3
    MOV BX,word ptr [EAX]               ; 004767c5
    TEST EBX,EBX                        ; 004767c8
    JZ 0x00476854                       ; 004767ca
        ;   XREF to: 00476854 (CONDITIONAL_JUMP)  ; LAB_00476854
    SHR EBX,0x6                         ; 004767d0
    MOV EAX,dword ptr [ESI*0x4 + 0x26a72e8] ; 004767d3 | g_NoiseTable | DAT_026a72ec
    INC ESI                             ; 004767da
    ADD EBX,EAX                         ; 004767db
    CMP ESI,0x64                        ; 004767dd
    JL 0x004767e4                       ; 004767e0
        ;   XREF to: 004767e4 (CONDITIONAL_JUMP)  ; LAB_004767e4
    XOR ESI,ESI                         ; 004767e2
    CMP EBX,0x7f                        ; 004767e4
        ;   Label: LAB_004767e4
    JBE 0x004767ee                      ; 004767e7
        ;   XREF to: 004767ee (CONDITIONAL_JUMP)  ; LAB_004767ee
    MOV EBX,0x7f                        ; 004767e9
    XOR BL,0x7f                         ; 004767ee
        ;   Label: LAB_004767ee
    TEST EBP,EBP                        ; 004767f1
    JLE 0x00476804                      ; 004767f3
        ;   XREF to: 00476804 (CONDITIONAL_JUMP)  ; LAB_00476804
    ADD EBX,EBP                         ; 004767f5
    CMP EBX,0xff                        ; 004767f7
    JBE 0x00476804                      ; 004767fd
        ;   XREF to: 00476804 (CONDITIONAL_JUMP)  ; LAB_00476804
    MOV EBX,0xff                        ; 004767ff
    ADD EBX,dword ptr [ESP + 0x20]      ; 00476804
        ;   Label: LAB_00476804
    SHR EBX,0x1                         ; 00476808
    MOV dword ptr [ESP + 0x20],EBX      ; 0047680a
    LEA EAX,[EBX + EBX*0x1]             ; 0047680e
    ADD EAX,EBX                         ; 00476811
    MOV ECX,dword ptr [0x0067939c]      ; 00476813 | g_BitsPerPixel
    SHR EAX,0x2                         ; 00476819
    CMP ECX,0x20                        ; 0047681c
    JNZ 0x00476890                      ; 0047681f
        ;   XREF to: 00476890 (CONDITIONAL_JUMP)  ; LAB_00476890
    MOV CL,byte ptr [0x02d01f24]        ; 00476821 | g_RedBitPosition
    MOV EDX,EAX                         ; 00476827
    SHL EDX,CL                          ; 00476829
    MOV CL,byte ptr [0x02d01f30]        ; 0047682b | g_GreenBitPosition
    SHL EAX,CL                          ; 00476831
    MOV CL,byte ptr [0x02d01f3c]        ; 00476833 | g_BlueBitPosition
    SHL EBX,CL                          ; 00476839
    OR EAX,EDX                          ; 0047683b
    MOV ECX,EBX                         ; 0047683d
    OR ECX,EAX                          ; 0047683f
    MOV EBX,dword ptr [0x00679394]      ; 00476841 | g_WindowWidth
        ;   Label: LAB_00476841
    MOV dword ptr [EDI],ECX             ; 00476847
    CMP EBX,0x140                       ; 00476849
    JLE 0x00476854                      ; 0047684f
        ;   XREF to: 00476854 (CONDITIONAL_JUMP)  ; LAB_00476854
    MOV dword ptr [EDI + 0x4],ECX       ; 00476851
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00476854
        ;   Label: LAB_00476854
    ADD EAX,0x2                         ; 00476858
    MOV EDX,dword ptr [0x00679394]      ; 0047685b | g_WindowWidth
    MOV dword ptr [ESP + 0x2c],EAX      ; 00476861
    CMP EDX,0x140                       ; 00476865
    JLE 0x0047689e                      ; 0047686b
        ;   XREF to: 0047689e (CONDITIONAL_JUMP)  ; LAB_0047689e
    ADD EDI,0x8                         ; 0047686d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00476870
        ;   Label: LAB_00476870
    MOV EDX,dword ptr [ESP + 0x48]      ; 00476874
    INC ECX                             ; 00476878
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 00476879
    MOV dword ptr [ESP + 0x24],ECX      ; 0047687f
    CMP ECX,EBX                         ; 00476883
    JGE 0x00476747                      ; 00476885
        ;   XREF to: 00476747 (CONDITIONAL_JUMP)  ; LAB_00476747
    JMP 0x004767bf                      ; 0047688b
        ;   XREF to: 004767bf (UNCONDITIONAL_JUMP)  ; LAB_004767bf
    MOV ECX,EAX                         ; 00476890
        ;   Label: LAB_00476890
    SHL EAX,0x8                         ; 00476892
    SHL ECX,0x10                        ; 00476895
    OR ECX,EAX                          ; 00476898
    OR ECX,EBX                          ; 0047689a
    JMP 0x00476841                      ; 0047689c
        ;   XREF to: 00476841 (UNCONDITIONAL_JUMP)  ; LAB_00476841
    ADD EDI,0x4                         ; 0047689e
        ;   Label: LAB_0047689e
    JMP 0x00476870                      ; 004768a1
        ;   XREF to: 00476870 (UNCONDITIONAL_JUMP)  ; LAB_00476870
    MOV EAX,dword ptr [ESP + 0x48]      ; 004768a3
        ;   Label: LAB_004768a3
    XOR EBX,EBX                         ; 004768a7
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 004768a9
    MOV dword ptr [ESP + 0x18],EBX      ; 004768af
    TEST EDI,EDI                        ; 004768b3
    JLE 0x0047675e                      ; 004768b5
        ;   XREF to: 0047675e (CONDITIONAL_JUMP)  ; LAB_0047675e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004768bb
    ADD EAX,EAX                         ; 004768bf
    MOV dword ptr [ESP + 0x10],EAX      ; 004768c1
    CMP dword ptr [0x00679398],0xf0     ; 004768c5 | g_WindowHeight
        ;   Label: LAB_004768c5
    JLE 0x00476906                      ; 004768cf
        ;   XREF to: 00476906 (CONDITIONAL_JUMP)  ; LAB_00476906
    MOV EAX,dword ptr [ESP + 0x18]      ; 004768d1
    MOV ECX,dword ptr [ESP + 0x50]      ; 004768d5
    ADD EAX,EAX                         ; 004768d9
    ADD EAX,ECX                         ; 004768db
    TEST EAX,EAX                        ; 004768dd
        ;   Label: LAB_004768dd
    JL 0x004768e9                       ; 004768df
        ;   XREF to: 004768e9 (CONDITIONAL_JUMP)  ; LAB_004768e9
    CMP EAX,dword ptr [0x00679398]      ; 004768e1 | g_WindowHeight
    JL 0x00476910                       ; 004768e7
        ;   XREF to: 00476910 (CONDITIONAL_JUMP)  ; LAB_00476910
    MOV ECX,dword ptr [ESP + 0x18]      ; 004768e9
        ;   Label: LAB_004768e9
    MOV EDX,dword ptr [ESP + 0x48]      ; 004768ed
    INC ECX                             ; 004768f1
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 004768f2
    MOV dword ptr [ESP + 0x18],ECX      ; 004768f8
    CMP ECX,EBX                         ; 004768fc
    JGE 0x0047675e                      ; 004768fe
        ;   XREF to: 0047675e (CONDITIONAL_JUMP)  ; LAB_0047675e
    JMP 0x004768c5                      ; 00476904
        ;   XREF to: 004768c5 (UNCONDITIONAL_JUMP)  ; LAB_004768c5
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476906
        ;   Label: LAB_00476906
    ADD EAX,dword ptr [ESP + 0x50]      ; 0047690a
    JMP 0x004768dd                      ; 0047690e
        ;   XREF to: 004768dd (UNCONDITIONAL_JUMP)  ; LAB_004768dd
    MOV EDX,dword ptr [ESP + 0x48]      ; 00476910
        ;   Label: LAB_00476910
    MOV EDI,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 00476914 | g_ScreenBufferArray
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047691b
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0047691f
    ADD EDI,EAX                         ; 00476925
    MOV EAX,dword ptr [ESP + 0x18]      ; 00476927
    IMUL EAX,ECX                        ; 0047692b
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 0047692e
    ADD EAX,EAX                         ; 00476934
    XOR EBX,EBX                         ; 00476936
    ADD EDX,EAX                         ; 00476938
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047693a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0047693e
    MOV dword ptr [ESP + 0x30],EDX      ; 00476942
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 00476946
    MOV dword ptr [ESP + 0x28],EBX      ; 0047694c
    TEST EDX,EDX                        ; 00476950
    JLE 0x004768e9                      ; 00476952
        ;   XREF to: 004768e9 (CONDITIONAL_JUMP)  ; LAB_004768e9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00476954
        ;   Label: LAB_00476954
    XOR EBX,EBX                         ; 00476958
    MOV BX,word ptr [EAX]               ; 0047695a
    TEST EBX,EBX                        ; 0047695d
    JZ 0x00476a1e                       ; 0047695f
        ;   XREF to: 00476a1e (CONDITIONAL_JUMP)  ; LAB_00476a1e
    SHR EBX,0x6                         ; 00476965
    MOV EAX,dword ptr [ESI*0x4 + 0x26a72e8] ; 00476968 | g_NoiseTable | DAT_026a72ec
    INC ESI                             ; 0047696f
    ADD EBX,EAX                         ; 00476970
    CMP ESI,0x64                        ; 00476972
    JL 0x00476979                       ; 00476975
        ;   XREF to: 00476979 (CONDITIONAL_JUMP)  ; LAB_00476979
    XOR ESI,ESI                         ; 00476977
    CMP EBX,0x7f                        ; 00476979
        ;   Label: LAB_00476979
    JBE 0x00476983                      ; 0047697c
        ;   XREF to: 00476983 (CONDITIONAL_JUMP)  ; LAB_00476983
    MOV EBX,0x7f                        ; 0047697e
    XOR BL,0x7f                         ; 00476983
        ;   Label: LAB_00476983
    TEST EBP,EBP                        ; 00476986
    JLE 0x00476999                      ; 00476988
        ;   XREF to: 00476999 (CONDITIONAL_JUMP)  ; LAB_00476999
    ADD EBX,EBP                         ; 0047698a
    CMP EBX,0xff                        ; 0047698c
    JBE 0x00476999                      ; 00476992
        ;   XREF to: 00476999 (CONDITIONAL_JUMP)  ; LAB_00476999
    MOV EBX,0xff                        ; 00476994
    ADD EBX,dword ptr [ESP + 0x1c]      ; 00476999
        ;   Label: LAB_00476999
    SHR EBX,0x1                         ; 0047699d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0047699f
    LEA ECX,[EBX + EBX*0x1]             ; 004769a3
    ADD ECX,EBX                         ; 004769a6
    SHR ECX,0x2                         ; 004769a8
    XOR EDX,EDX                         ; 004769ab
    MOV EAX,ECX                         ; 004769ad
    DIV dword ptr [0x02d01f28]          ; 004769af | g_RedScaleFactor
    MOV dword ptr [ESP],ECX             ; 004769b5
    MOV dword ptr [ESP + 0x4],ECX       ; 004769b8
    MOV dword ptr [ESP],EAX             ; 004769bc
    XOR EDX,EDX                         ; 004769bf
    MOV EAX,ECX                         ; 004769c1
    DIV dword ptr [0x02d01f34]          ; 004769c3 | g_GreenScaleFactor
    MOV dword ptr [ESP + 0x8],EBX       ; 004769c9
    MOV dword ptr [ESP + 0x4],EAX       ; 004769cd
    XOR EDX,EDX                         ; 004769d1
    MOV EAX,EBX                         ; 004769d3
    DIV dword ptr [0x02d01f40]          ; 004769d5 | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004769db | g_RedBitPosition
    MOV EBX,dword ptr [ESP]             ; 004769e1
    MOV dword ptr [ESP + 0x8],EAX       ; 004769e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004769e8
    SHL EBX,CL                          ; 004769ec
    MOV CL,byte ptr [0x02d01f30]        ; 004769ee | g_GreenBitPosition
    SHL EAX,CL                          ; 004769f4
    MOV CL,byte ptr [0x02d01f3c]        ; 004769f6 | g_BlueBitPosition
    OR EBX,EAX                          ; 004769fc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004769fe
    SHL EAX,CL                          ; 00476a02
    OR EAX,EBX                          ; 00476a04
    XOR EBX,EBX                         ; 00476a06
    MOV word ptr [EDI],AX               ; 00476a08
    MOV BX,AX                           ; 00476a0b
    CMP dword ptr [0x00679394],0x140    ; 00476a0e | g_WindowWidth
    JLE 0x00476a1e                      ; 00476a18
        ;   XREF to: 00476a1e (CONDITIONAL_JUMP)  ; LAB_00476a1e
    MOV word ptr [EDI + 0x2],BX         ; 00476a1a
    MOV EDX,dword ptr [ESP + 0x30]      ; 00476a1e
        ;   Label: LAB_00476a1e
    ADD EDX,0x2                         ; 00476a22
    MOV ECX,dword ptr [0x00679394]      ; 00476a25 | g_WindowWidth
    MOV dword ptr [ESP + 0x30],EDX      ; 00476a2b
    CMP ECX,0x140                       ; 00476a2f
    JLE 0x00476a5a                      ; 00476a35
        ;   XREF to: 00476a5a (CONDITIONAL_JUMP)  ; LAB_00476a5a
    ADD EDI,0x4                         ; 00476a37
    MOV ECX,dword ptr [ESP + 0x28]      ; 00476a3a
        ;   Label: LAB_00476a3a
    MOV EDX,dword ptr [ESP + 0x48]      ; 00476a3e
    INC ECX                             ; 00476a42
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 00476a43
    MOV dword ptr [ESP + 0x28],ECX      ; 00476a49
    CMP ECX,EBX                         ; 00476a4d
    JGE 0x004768e9                      ; 00476a4f
        ;   XREF to: 004768e9 (CONDITIONAL_JUMP)  ; LAB_004768e9
    JMP 0x00476954                      ; 00476a55
        ;   XREF to: 00476954 (UNCONDITIONAL_JUMP)  ; LAB_00476954
    ADD EDI,0x2                         ; 00476a5a
        ;   Label: LAB_00476a5a
    JMP 0x00476a3a                      ; 00476a5d
        ;   XREF to: 00476a3a (UNCONDITIONAL_JUMP)  ; LAB_00476a3a

