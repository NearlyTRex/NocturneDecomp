; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; CRect            Stack[-0x34]:16  local_34
; CRect *          Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539541
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c1f5
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ScanlineSpanCount
;   int[256] g_ScanlineSpanLeft
;   undefined4 g_ScanlineSpanLeft[1]
;   int[256] g_ScanlineSpanRight
;   undefined4 g_ScanlineSpanRight[1]
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
;   core_dstrender.cpp_memcpyMMX_FUN_00492001
;   wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c860
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
    PUSH ESI                            ; 0044c861
    PUSH EDI                            ; 0044c862
    PUSH EBP                            ; 0044c863
    SUB ESP,0x24                        ; 0044c864
    MOV EDX,dword ptr [0x02d03e94]      ; 0044c867 | g_UseExternalRenderer
    TEST EDX,EDX                        ; 0044c86d
    JNZ 0x0044caa0                      ; 0044c86f
        ;   XREF to: 0044caa0 (CONDITIONAL_JUMP)  ; LAB_0044caa0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c875
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0044c879
    CMP ECX,0x100                       ; 0044c87f
    JG 0x0044cac4                       ; 0044c885
        ;   XREF to: 0044cac4 (CONDITIONAL_JUMP)  ; LAB_0044cac4
    XOR EBX,EBX                         ; 0044c88b
    TEST ECX,ECX                        ; 0044c88d
    JLE 0x0044c8eb                      ; 0044c88f
        ;   XREF to: 0044c8eb (CONDITIONAL_JUMP)  ; LAB_0044c8eb
    LEA EDX,[EAX + 0x1d4]               ; 0044c891
    MOV EBP,dword ptr [EDX]             ; 0044c897
        ;   Label: LAB_0044c897
    MOV EAX,EDX                         ; 0044c899
    TEST EBP,EBP                        ; 0044c89b
    JL 0x0044cafd                       ; 0044c89d
        ;   XREF to: 0044cafd (CONDITIONAL_JUMP)  ; LAB_0044cafd
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044c8a3
        ;   Label: LAB_0044c8a3
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044c8a7
    MOV EDI,dword ptr [ESI + 0x144]     ; 0044c8aa
    CMP ECX,EDI                         ; 0044c8b0
    JGE 0x0044cb08                      ; 0044c8b2
        ;   XREF to: 0044cb08 (CONDITIONAL_JUMP)  ; LAB_0044cb08
    CMP dword ptr [EAX + 0x8],0x0       ; 0044c8b8
        ;   Label: LAB_0044c8b8
    JL 0x0044cb13                       ; 0044c8bc
        ;   XREF to: 0044cb13 (CONDITIONAL_JUMP)  ; LAB_0044cb13
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044c8c2
        ;   Label: LAB_0044c8c2
    MOV ECX,dword ptr [EAX + 0xc]       ; 0044c8c6
    MOV EDI,dword ptr [ESI + 0x148]     ; 0044c8c9
    CMP ECX,EDI                         ; 0044c8cf
    JL 0x0044c8d9                       ; 0044c8d1
        ;   XREF to: 0044c8d9 (CONDITIONAL_JUMP)  ; LAB_0044c8d9
    LEA ECX,[EDI + -0x1]                ; 0044c8d3
    MOV dword ptr [EAX + 0xc],ECX       ; 0044c8d6
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c8d9
        ;   Label: LAB_0044c8d9
    INC EBX                             ; 0044c8dd
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 0044c8de
    ADD EDX,0x10                        ; 0044c8e4
    CMP EBX,ECX                         ; 0044c8e7
    JL 0x0044c897                       ; 0044c8e9
        ;   XREF to: 0044c897 (CONDITIONAL_JUMP)  ; LAB_0044c897
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c8eb
        ;   Label: LAB_0044c8eb
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044c8ef
    XOR ESI,ESI                         ; 0044c8f3
    XOR ECX,ECX                         ; 0044c8f5
    MOV dword ptr [ESP + 0x18],ESI      ; 0044c8f7
    MOV EDI,dword ptr [EAX + 0x1d0]     ; 0044c8fb
    MOV EBX,dword ptr [EBX + 0x148]     ; 0044c901
    TEST EDI,EDI                        ; 0044c907
    JLE 0x0044c93c                      ; 0044c909
        ;   XREF to: 0044c93c (CONDITIONAL_JUMP)  ; LAB_0044c93c
    ADD EAX,0x1d4                       ; 0044c90b
    MOV ESI,dword ptr [EAX + 0x8]       ; 0044c910
        ;   Label: LAB_0044c910
    MOV EDX,EAX                         ; 0044c913
    CMP EBX,ESI                         ; 0044c915
    JLE 0x0044c91b                      ; 0044c917
        ;   XREF to: 0044c91b (CONDITIONAL_JUMP)  ; LAB_0044c91b
    MOV EBX,ESI                         ; 0044c919
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044c91b
        ;   Label: LAB_0044c91b
    MOV ESI,dword ptr [EDX + 0xc]       ; 0044c91f
    CMP ESI,EDI                         ; 0044c922
    JLE 0x0044c92a                      ; 0044c924
        ;   XREF to: 0044c92a (CONDITIONAL_JUMP)  ; LAB_0044c92a
    MOV dword ptr [ESP + 0x18],ESI      ; 0044c926
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044c92a
        ;   Label: LAB_0044c92a
    INC ECX                             ; 0044c92e
    MOV EBP,dword ptr [EDX + 0x1d0]     ; 0044c92f
    ADD EAX,0x10                        ; 0044c935
    CMP ECX,EBP                         ; 0044c938
    JL 0x0044c910                       ; 0044c93a
        ;   XREF to: 0044c910 (CONDITIONAL_JUMP)  ; LAB_0044c910
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044c93c
        ;   Label: LAB_0044c93c
    MOV dword ptr [ESP + 0x20],EBX      ; 0044c940
    CMP EBX,EAX                         ; 0044c944
    JG 0x0044ca98                       ; 0044c946
        ;   XREF to: 0044ca98 (CONDITIONAL_JUMP)  ; LAB_0044ca98
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c94c
    SHL EBX,0x2                         ; 0044c950
    ADD EAX,0x1d4                       ; 0044c953
    MOV dword ptr [ESP + 0x14],EBX      ; 0044c958
    MOV dword ptr [ESP + 0x10],EAX      ; 0044c95c
    XOR ECX,ECX                         ; 0044c960
        ;   Label: LAB_0044c960
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044c962
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044c966
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 0044c96a
    MOV dword ptr [0x0151a3ac],ECX      ; 0044c970 | g_ScanlineSpanCount
    TEST ESI,ESI                        ; 0044c976
    JLE 0x0044ca00                      ; 0044c978
        ;   XREF to: 0044ca00 (CONDITIONAL_JUMP)  ; LAB_0044ca00
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044c97e
    XOR EBP,EBP                         ; 0044c982
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044c984
        ;   Label: LAB_0044c984
    MOV ESI,dword ptr [EDI + 0x8]       ; 0044c988
    MOV EDX,EDI                         ; 0044c98b
    CMP EAX,ESI                         ; 0044c98d
    JL 0x0044c9e6                       ; 0044c98f
        ;   XREF to: 0044c9e6 (CONDITIONAL_JUMP)  ; LAB_0044c9e6
    CMP EAX,dword ptr [EDI + 0xc]       ; 0044c991
    JG 0x0044c9e6                       ; 0044c994
        ;   XREF to: 0044c9e6 (CONDITIONAL_JUMP)  ; LAB_0044c9e6
    MOV EBX,dword ptr [0x0151a3ac]      ; 0044c996 | g_ScanlineSpanCount
    XOR ECX,ECX                         ; 0044c99c
    TEST EBX,EBX                        ; 0044c99e
    JLE 0x0044c9c1                      ; 0044c9a0
        ;   XREF to: 0044c9c1 (CONDITIONAL_JUMP)  ; LAB_0044c9c1
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044c9a2
    XOR EAX,EAX                         ; 0044c9a9
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044c9ab
        ;   Label: LAB_0044c9ab
    CMP EBX,dword ptr [EAX + 0x151a3b0] ; 0044c9ae | g_ScanlineSpanLeft | g_ScanlineSpanLeft[1]
    JGE 0x0044cb1f                      ; 0044c9b4
        ;   XREF to: 0044cb1f (CONDITIONAL_JUMP)  ; LAB_0044cb1f
    ADD EAX,0x4                         ; 0044c9ba
        ;   Label: LAB_0044c9ba
    CMP EAX,ESI                         ; 0044c9bd
    JL 0x0044c9ab                       ; 0044c9bf
        ;   XREF to: 0044c9ab (CONDITIONAL_JUMP)  ; LAB_0044c9ab
    TEST ECX,ECX                        ; 0044c9c1
        ;   Label: LAB_0044c9c1
    JNZ 0x0044c9e6                      ; 0044c9c3
        ;   XREF to: 0044c9e6 (CONDITIONAL_JUMP)  ; LAB_0044c9e6
    MOV EAX,dword ptr [EDX]             ; 0044c9c5
    MOV dword ptr [EBP + 0x151a3b0],EAX ; 0044c9c7 | g_ScanlineSpanLeft | g_ScanlineSpanLeft[1]
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044c9cd
    MOV EDX,dword ptr [0x0151a3ac]      ; 0044c9d0 | g_ScanlineSpanCount
    ADD EBP,0x4                         ; 0044c9d6
    INC EDX                             ; 0044c9d9
    MOV dword ptr [EBP + 0x151a7ac],EAX ; 0044c9da | g_ScanlineSpanRight | g_ScanlineSpanRight[1]
    MOV dword ptr [0x0151a3ac],EDX      ; 0044c9e0 | g_ScanlineSpanCount
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044c9e6
        ;   Label: LAB_0044c9e6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044c9ea
    ADD EDI,0x10                        ; 0044c9ee
    INC EAX                             ; 0044c9f1
    MOV ECX,dword ptr [EDX + 0x1d0]     ; 0044c9f2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044c9f8
    CMP EAX,ECX                         ; 0044c9fc
    JL 0x0044c984                       ; 0044c9fe
        ;   XREF to: 0044c984 (CONDITIONAL_JUMP)  ; LAB_0044c984
    MOV EBX,dword ptr [0x0151a3ac]      ; 0044ca00 | g_ScanlineSpanCount
        ;   Label: LAB_0044ca00
    XOR EDI,EDI                         ; 0044ca06
    TEST EBX,EBX                        ; 0044ca08
    JLE 0x0044ca78                      ; 0044ca0a
        ;   XREF to: 0044ca78 (CONDITIONAL_JUMP)  ; LAB_0044ca78
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044ca0c
    XOR ESI,ESI                         ; 0044ca10
    MOV EAX,dword ptr [ESI + 0x151a3b0] ; 0044ca12 | g_ScanlineSpanLeft | g_ScanlineSpanLeft[1]
        ;   Label: LAB_0044ca12
    MOV EDX,dword ptr [EBP + 0x2cf7d5c] ; 0044ca18 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    SHL EAX,0x2                         ; 0044ca1e
    LEA ECX,[EDX + EAX*0x1]             ; 0044ca21
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044ca24
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044ca28
    IMUL EAX,dword ptr [EDX + 0x144]    ; 0044ca2c
    ADD EAX,dword ptr [ESI + 0x151a3b0] ; 0044ca33 | g_ScanlineSpanLeft | g_ScanlineSpanLeft[1]
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044ca39
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044ca40
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0044ca44
    MOV EBX,dword ptr [ESI + 0x151a3b0] ; 0044ca4a | g_ScanlineSpanLeft | g_ScanlineSpanLeft[1]
    ADD EDX,EAX                         ; 0044ca50
    MOV EAX,dword ptr [ESI + 0x151a7b0] ; 0044ca52 | g_ScanlineSpanRight | g_ScanlineSpanRight[1]
    SUB EAX,EBX                         ; 0044ca58
    SHL EAX,0x2                         ; 0044ca5a
    ADD EAX,0x4                         ; 0044ca5d
    PUSH EAX                            ; 0044ca60
    PUSH EDX                            ; 0044ca61
    PUSH ECX                            ; 0044ca62
    ADD ESI,0x4                         ; 0044ca63
    INC EDI                             ; 0044ca66
    CALL core_dstrender.cpp_memcpyMMX_FUN_00492001 ; 0044ca67
        ;   XREF to: 00492001 (UNCONDITIONAL_CALL)  ; void core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
    MOV EAX,[0x0151a3ac]                ; 0044ca6c | g_ScanlineSpanCount
    ADD ESP,0xc                         ; 0044ca71
    CMP EDI,EAX                         ; 0044ca74
    JL 0x0044ca12                       ; 0044ca76
        ;   XREF to: 0044ca12 (CONDITIONAL_JUMP)  ; LAB_0044ca12
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044ca78
        ;   Label: LAB_0044ca78
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044ca7c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044ca80
    ADD EBP,0x4                         ; 0044ca84
    INC EAX                             ; 0044ca87
    MOV dword ptr [ESP + 0x14],EBP      ; 0044ca88
    MOV dword ptr [ESP + 0x20],EAX      ; 0044ca8c
    CMP EAX,EDX                         ; 0044ca90
    JLE 0x0044c960                      ; 0044ca92
        ;   XREF to: 0044c960 (CONDITIONAL_JUMP)  ; LAB_0044c960
    ADD ESP,0x24                        ; 0044ca98
        ;   Label: LAB_0044ca98
    POP EBP                             ; 0044ca9b
    POP EDI                             ; 0044ca9c
    POP ESI                             ; 0044ca9d
    POP EBX                             ; 0044ca9e
    RET                                 ; 0044ca9f
    MOV EAX,[0x00679398]                ; 0044caa0 | g_WindowHeight
        ;   Label: LAB_0044caa0
    DEC EAX                             ; 0044caa5
    PUSH EAX                            ; 0044caa6
    MOV EAX,[0x00679394]                ; 0044caa7 | g_WindowWidth
    DEC EAX                             ; 0044caac
    PUSH EAX                            ; 0044caad
    PUSH 0x0                            ; 0044caae
    PUSH 0x0                            ; 0044cab0
    PUSH 0x0                            ; 0044cab2
    CALL wincore_windll.cpp_restoreZBuffer_FUN_005b7d20 ; 0044cab4
        ;   XREF to: 005b7d20 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_restoreZBuffer_FUN_005b7d20(int left, int top, int mode, int right, ...)
    ADD ESP,0x14                        ; 0044cab9
    ADD ESP,0x24                        ; 0044cabc
    POP EBP                             ; 0044cabf
    POP EDI                             ; 0044cac0
    POP ESI                             ; 0044cac1
    POP EBX                             ; 0044cac2
    RET                                 ; 0044cac3
    MOV dword ptr [ESP],EDX             ; 0044cac4
        ;   Label: LAB_0044cac4
    MOV dword ptr [ESP + 0x8],EDX       ; 0044cac7
    MOV EAX,dword ptr [EAX + 0x144]     ; 0044cacb
    DEC EAX                             ; 0044cad1
    MOV dword ptr [ESP + 0x4],EAX       ; 0044cad2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044cad6
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044cada
    DEC EAX                             ; 0044cae0
    MOV dword ptr [ESP + 0xc],EAX       ; 0044cae1
    MOV EAX,ESP                         ; 0044cae5
    PUSH EAX                            ; 0044cae7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044cae8
    PUSH EAX                            ; 0044caec
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 ; 0044caed
        ;   XREF to: 0044c780 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera * this_ptr, CRect * rect_ptr)
    ADD ESP,0x8                         ; 0044caf2
    ADD ESP,0x24                        ; 0044caf5
    POP EBP                             ; 0044caf8
    POP EDI                             ; 0044caf9
    POP ESI                             ; 0044cafa
    POP EBX                             ; 0044cafb
    RET                                 ; 0044cafc
    MOV dword ptr [EDX],0x0             ; 0044cafd
        ;   Label: LAB_0044cafd
    JMP 0x0044c8a3                      ; 0044cb03
        ;   XREF to: 0044c8a3 (UNCONDITIONAL_JUMP)  ; LAB_0044c8a3
    LEA ECX,[EDI + -0x1]                ; 0044cb08
        ;   Label: LAB_0044cb08
    MOV dword ptr [EAX + 0x4],ECX       ; 0044cb0b
    JMP 0x0044c8b8                      ; 0044cb0e
        ;   XREF to: 0044c8b8 (UNCONDITIONAL_JUMP)  ; LAB_0044c8b8
    MOV dword ptr [EAX + 0x8],0x0       ; 0044cb13
        ;   Label: LAB_0044cb13
    JMP 0x0044c8c2                      ; 0044cb1a
        ;   XREF to: 0044c8c2 (UNCONDITIONAL_JUMP)  ; LAB_0044c8c2
    MOV EBX,dword ptr [EDX]             ; 0044cb1f
        ;   Label: LAB_0044cb1f
    CMP EBX,dword ptr [EAX + 0x151a7b0] ; 0044cb21 | g_ScanlineSpanRight[1]
    JG 0x0044c9ba                       ; 0044cb27
        ;   XREF to: 0044c9ba (CONDITIONAL_JUMP)  ; LAB_0044c9ba
    CMP EBX,dword ptr [EAX + 0x151a3b0] ; 0044cb2d | g_ScanlineSpanLeft[1]
    JL 0x0044cb44                       ; 0044cb33
        ;   XREF to: 0044cb44 (CONDITIONAL_JUMP)  ; LAB_0044cb44
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044cb35
    CMP EBX,dword ptr [EAX + 0x151a7b0] ; 0044cb38 | g_ScanlineSpanRight[1]
    JLE 0x0044c9e6                      ; 0044cb3e
        ;   XREF to: 0044c9e6 (CONDITIONAL_JUMP)  ; LAB_0044c9e6
    MOV EBX,dword ptr [EDX]             ; 0044cb44
        ;   Label: LAB_0044cb44
    CMP EBX,dword ptr [EAX + 0x151a3b0] ; 0044cb46 | g_ScanlineSpanLeft[1]
    JGE 0x0044cb59                      ; 0044cb4c
        ;   XREF to: 0044cb59 (CONDITIONAL_JUMP)  ; LAB_0044cb59
    MOV ECX,0x1                         ; 0044cb4e
    MOV dword ptr [EAX + 0x151a3b0],EBX ; 0044cb53 | g_ScanlineSpanLeft[1]
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044cb59
        ;   Label: LAB_0044cb59
    CMP EBX,dword ptr [EAX + 0x151a7b0] ; 0044cb5c | g_ScanlineSpanRight[1]
    JLE 0x0044cb6f                      ; 0044cb62
        ;   XREF to: 0044cb6f (CONDITIONAL_JUMP)  ; LAB_0044cb6f
    MOV dword ptr [EAX + 0x151a7b0],EBX ; 0044cb64 | g_ScanlineSpanRight[1]
    JMP 0x0044c9e6                      ; 0044cb6a
        ;   XREF to: 0044c9e6 (UNCONDITIONAL_JUMP)  ; LAB_0044c9e6
    TEST ECX,ECX                        ; 0044cb6f
        ;   Label: LAB_0044cb6f
    JNZ 0x0044c9c1                      ; 0044cb71
        ;   XREF to: 0044c9c1 (CONDITIONAL_JUMP)  ; LAB_0044c9c1
    JMP 0x0044c9ba                      ; 0044cb77
        ;   XREF to: 0044c9ba (UNCONDITIONAL_JUMP)  ; LAB_0044c9ba

