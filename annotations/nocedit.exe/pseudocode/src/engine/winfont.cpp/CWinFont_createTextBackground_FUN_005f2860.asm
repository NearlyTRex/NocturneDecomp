; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
;
; XREF[3]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0 at 005f23fb
;   engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00 at 005f2b12
;   engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0 at 005f2ab1
;
; Referenced Globals:
;   CreateBrushIndirect* CreateBrushIndirect = 00211736
;   CreateCompatibleDC* CreateCompatibleDC = 0021174c
;   CreateDIBSection* CreateDIBSection = 00211762
;   DeleteObject* DeleteObject = 00211790
;   Rectangle* Rectangle = 002117ca
;   SelectObject* SelectObject = 002117d6
;   SetBkColor* SetBkColor = 002117e6
;   SetBkMode* SetBkMode = 002117f4
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   undefined4 g_ColorMagenta
;
; Called Functions:
;   CreateBrushIndirect
;   CreateCompatibleDC
;   CreateDIBSection
;   crt_memory.c_memset_FUN_005fde40
;   DeleteObject
;   engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
;   Rectangle
;   SelectObject
;   SetBkColor
;   SetBkMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2860
        ;   Label: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
    PUSH ESI                            ; 005f2861
    PUSH EDI                            ; 005f2862
    PUSH EBP                            ; 005f2863
    SUB ESP,0x38                        ; 005f2864
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005f2867
    MOV EDI,dword ptr [ESP + 0x50]      ; 005f286b
    MOV ESI,dword ptr [ESP + 0x54]      ; 005f286f
    TEST EDI,EDI                        ; 005f2873
    JLE 0x005f28c8                      ; 005f2875 | LAB_005f28c8
        ;   XREF to: 005f28c8 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005f2877
        ;   Label: LAB_005f2877
    JLE 0x005f28d0                      ; 005f2879 | LAB_005f28d0
        ;   XREF to: 005f28d0 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x4],0x0       ; 005f287b
        ;   Label: LAB_005f287b
    SETZ AL                             ; 005f287f
    MOV ECX,dword ptr [EBX + 0x120]     ; 005f2882
    AND EAX,0xff                        ; 005f2888
    CMP EDI,ECX                         ; 005f288d
    SETG DL                             ; 005f288f
    MOVZX EBP,DL                        ; 005f2892
    OR EAX,EBP                          ; 005f2895
    CMP ESI,dword ptr [EBX + 0x124]     ; 005f2897
    SETG DL                             ; 005f289d
    MOVZX EBP,DL                        ; 005f28a0
    MOV ECX,dword ptr [EBX + 0x128]     ; 005f28a3
    OR EAX,EBP                          ; 005f28a9
    CMP ECX,dword ptr [0x0067939c]      ; 005f28ab | int g_BitsPerPixel
    SETNZ DL                            ; 005f28b1
    MOVZX EBP,DL                        ; 005f28b4
    OR EAX,EBP                          ; 005f28b7
    JNZ 0x005f28d7                      ; 005f28b9 | LAB_005f28d7
        ;   XREF to: 005f28d7 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005f28bb
    ADD ESP,0x38                        ; 005f28c0
        ;   Label: LAB_005f28c0
    POP EBP                             ; 005f28c3
    POP EDI                             ; 005f28c4
    POP ESI                             ; 005f28c5
    POP EBX                             ; 005f28c6
    RET                                 ; 005f28c7
    MOV EDI,dword ptr [0x00679394]      ; 005f28c8 | int g_WindowWidth
        ;   Label: LAB_005f28c8
    JMP 0x005f2877                      ; 005f28ce | LAB_005f2877
        ;   XREF to: 005f2877 (UNCONDITIONAL_JUMP)
    MOV ESI,0x64                        ; 005f28d0
        ;   Label: LAB_005f28d0
    JMP 0x005f287b                      ; 005f28d5 | LAB_005f287b
        ;   XREF to: 005f287b (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005f28d7
        ;   Label: LAB_005f28d7
    CALL engine_winfont.cpp_CWinFont_reset_FUN_005f2a30 ; 005f28d8 | void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)
        ;   XREF to: 005f2a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f28dd
    PUSH 0x0                            ; 005f28e0
    CALL dword ptr CS:[0x6113cc]        ; 005f28e2 | CreateCompatibleDC * CreateCompatibleDC
    PUSH 0x2c                           ; 005f28e9
    PUSH 0x0                            ; 005f28eb
    MOV dword ptr [EBX + 0x4],EAX       ; 005f28ed
    LEA EAX,[ESP + 0x8]                 ; 005f28f0
    PUSH EAX                            ; 005f28f4
    MOV EBP,0x28                        ; 005f28f5
    CALL crt_memory.c_memset_FUN_005fde40 ; 005f28fa | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EDX,0x1                         ; 005f28ff
    ADD ESP,0xc                         ; 005f2904
    MOV ECX,ESI                         ; 005f2907
    XOR EAX,EAX                         ; 005f2909
    MOV dword ptr [ESP],EBP             ; 005f290b
    MOV word ptr [ESP + 0xc],DX         ; 005f290e
    MOV dword ptr [ESP + 0x14],EAX      ; 005f2913
    MOV dword ptr [ESP + 0x20],EAX      ; 005f2917
    MOV dword ptr [ESP + 0x4],EDI       ; 005f291b
    MOV dword ptr [ESP + 0x8],ESI       ; 005f291f
    NEG ECX                             ; 005f2923
    MOV AX,[0x0067939c]                 ; 005f2925 | int g_BitsPerPixel
    XOR EBP,EBP                         ; 005f292b
    MOV dword ptr [ESP + 0x8],ECX       ; 005f292d
    PUSH EBP                            ; 005f2931
    XOR EDX,EDX                         ; 005f2932
    MOV word ptr [ESP + 0x12],AX        ; 005f2934
    PUSH EBP                            ; 005f2939
    LEA EAX,[EBX + 0x14]                ; 005f293a
    MOV dword ptr [ESP + 0x18],EBP      ; 005f293d
    PUSH EAX                            ; 005f2941
    MOV dword ptr [ESP + 0x24],EBP      ; 005f2942
    MOV dword ptr [ESP + 0x28],EDX      ; 005f2946
    PUSH EBP                            ; 005f294a
    LEA EAX,[ESP + 0x10]                ; 005f294b
    MOV dword ptr [ESP + 0x34],EBP      ; 005f294f
    PUSH EAX                            ; 005f2953
    MOV EBP,dword ptr [EBX + 0x4]       ; 005f2954
    PUSH EBP                            ; 005f2957
    CALL dword ptr CS:[0x6113d0]        ; 005f2958 | CreateDIBSection * CreateDIBSection
    MOV dword ptr [EBX + 0x8],EAX       ; 005f295f
    TEST EAX,EAX                        ; 005f2962
    JZ 0x005f28c0                       ; 005f2964 | LAB_005f28c0
        ;   XREF to: 005f28c0 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005f296a
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f296b
    PUSH ECX                            ; 005f296e
    CALL dword ptr CS:[0x6113ec]        ; 005f296f | SelectObject * SelectObject
    PUSH 0x2                            ; 005f2976
    MOV EBP,dword ptr [EBX + 0x4]       ; 005f2978
    PUSH EBP                            ; 005f297b
    CALL dword ptr CS:[0x6113f4]        ; 005f297c | SetBkMode * SetBkMode
    PUSH 0xff00ff                       ; 005f2983 | g_ColorMagenta
    MOV EAX,dword ptr [EBX + 0x4]       ; 005f2988
    PUSH EAX                            ; 005f298b
    CALL dword ptr CS:[0x6113f0]        ; 005f298c | SetBkColor * SetBkColor
    MOV ECX,0xff00ff                    ; 005f2993
    XOR EDX,EDX                         ; 005f2998
    LEA EAX,[ESP + 0x2c]                ; 005f299a
    MOV dword ptr [ESP + 0x2c],EDX      ; 005f299e
    PUSH EAX                            ; 005f29a2
    MOV dword ptr [ESP + 0x34],ECX      ; 005f29a3 | g_ColorMagenta
    MOV dword ptr [ESP + 0x38],EDX      ; 005f29a7
    CALL dword ptr CS:[0x6113c8]        ; 005f29ab | CreateBrushIndirect * CreateBrushIndirect
    PUSH EAX                            ; 005f29b2
    MOV EBP,EAX                         ; 005f29b3
    MOV EAX,dword ptr [EBX + 0x4]       ; 005f29b5
    PUSH EAX                            ; 005f29b8
    CALL dword ptr CS:[0x6113ec]        ; 005f29b9 | SelectObject * SelectObject
    PUSH 0x0                            ; 005f29c0
    MOV EDX,dword ptr [EBX + 0x120]     ; 005f29c2
    MOV EAX,dword ptr [EBX + 0x124]     ; 005f29c8
    PUSH EDX                            ; 005f29ce
    NEG EAX                             ; 005f29cf
    PUSH EAX                            ; 005f29d1
    PUSH 0x0                            ; 005f29d2
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f29d4
    PUSH ECX                            ; 005f29d7
    CALL dword ptr CS:[0x6113e8]        ; 005f29d8 | Rectangle * Rectangle
    PUSH EBP                            ; 005f29df
    CALL dword ptr CS:[0x6113dc]        ; 005f29e0 | DeleteObject * DeleteObject
    MOV EBP,dword ptr [EBX + 0xc]       ; 005f29e7
    PUSH EBP                            ; 005f29ea
    MOV EAX,dword ptr [EBX + 0x4]       ; 005f29eb
    PUSH EAX                            ; 005f29ee
    CALL dword ptr CS:[0x6113ec]        ; 005f29ef | SelectObject * SelectObject
    MOV dword ptr [EBX + 0x10],EAX      ; 005f29f6
    MOV dword ptr [EBX + 0x120],EDI     ; 005f29f9
    MOV dword ptr [EBX + 0x124],ESI     ; 005f29ff
    MOV EAX,[0x0067939c]                ; 005f2a05 | int g_BitsPerPixel
    MOV EDX,dword ptr [EBX + 0x4]       ; 005f2a0a
    MOV dword ptr [EBX + 0x128],EAX     ; 005f2a0d
    TEST EDX,EDX                        ; 005f2a13
    SETNZ AL                            ; 005f2a15
    AND EAX,0xff                        ; 005f2a18
    ADD ESP,0x38                        ; 005f2a1d
    POP EBP                             ; 005f2a20
    POP EDI                             ; 005f2a21
    POP ESI                             ; 005f2a22
    POP EBX                             ; 005f2a23
    RET                                 ; 005f2a24

