; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface *this_ptr,int start_x,int y,int end_x)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   end_x
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 at 004884ec
;   cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0 at 00488ee2
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621daf
;   TerminatedCString s_Invalid_bitsPerPixel_00621dc7
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_UseRGBConversion
;   void*[1200] g_ScreenBufferArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488110
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
    PUSH ESI                            ; 00488111
    PUSH EDI                            ; 00488112
    PUSH EBP                            ; 00488113
    MOV EDX,dword ptr [ESP + 0x14]      ; 00488114
    MOV EAX,dword ptr [ESP + 0x18]      ; 00488118
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048811c
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488120
    MOV ESI,dword ptr [EDX + 0x8]       ; 00488124
    MOV EDI,dword ptr [EDX + 0xc]       ; 00488127
    ADD ECX,ESI                         ; 0048812a
    ADD EAX,ESI                         ; 0048812c
    ADD EBX,EDI                         ; 0048812e
    CMP EBX,dword ptr [EDX + 0x14]      ; 00488130
    JL 0x004881a0                       ; 00488133
        ;   XREF to: 004881a0 (CONDITIONAL_JUMP)  ; LAB_004881a0
    CMP EBX,dword ptr [EDX + 0x1c]      ; 00488139
    JG 0x004881a0                       ; 0048813c
        ;   XREF to: 004881a0 (CONDITIONAL_JUMP)  ; LAB_004881a0
    MOV EBP,dword ptr [EDX + 0x10]      ; 0048813e
    CMP EAX,EBP                         ; 00488141
    JGE 0x00488147                      ; 00488143
        ;   XREF to: 00488147 (CONDITIONAL_JUMP)  ; LAB_00488147
    MOV EAX,EBP                         ; 00488145
    MOV ESI,dword ptr [EDX + 0x18]      ; 00488147
        ;   Label: LAB_00488147
    CMP ECX,ESI                         ; 0048814a
    JLE 0x00488150                      ; 0048814c
        ;   XREF to: 00488150 (CONDITIONAL_JUMP)  ; LAB_00488150
    MOV ECX,ESI                         ; 0048814e
    CMP EAX,ECX                         ; 00488150
        ;   Label: LAB_00488150
    JG 0x004881a0                       ; 00488152
        ;   XREF to: 004881a0 (CONDITIONAL_JUMP)  ; LAB_004881a0
    CMP dword ptr [0x02c6d55c],0x0      ; 00488154 | g_UseRGBConversion
    JNZ 0x004881a5                      ; 0048815b
        ;   XREF to: 004881a5 (CONDITIONAL_JUMP)  ; LAB_004881a5
    MOV EDX,dword ptr [0x0067939c]      ; 0048815d | g_BitsPerPixel
    SHL EBX,0x2                         ; 00488163
    CMP EDX,0x10                        ; 00488166
    JNC 0x004881fd                      ; 00488169
        ;   XREF to: 004881fd (CONDITIONAL_JUMP)  ; LAB_004881fd
    CMP EDX,0x8                         ; 0048816f
    JNZ 0x00488204                      ; 00488172
        ;   XREF to: 00488204 (CONDITIONAL_JUMP)  ; LAB_00488204
    SUB ECX,EAX                         ; 00488178
    INC ECX                             ; 0048817a
    PUSH ECX                            ; 0048817b
    MOV ECX,dword ptr [0x02c6d550]      ; 0048817c | g_CurrentDrawColor
    MOV EDX,dword ptr [EBX + 0x2cf6a9c] ; 00488182 | g_ScreenBufferArray
    PUSH ECX                            ; 00488188
    ADD EDX,EAX                         ; 00488189
    PUSH EDX                            ; 0048818b
    CALL crt_memory.c_memset_FUN_005fde40 ; 0048818c
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00488191
    LEA EAX,[EAX]                       ; 00488194
    LEA EDX,[EDX]                       ; 0048819a
    POP EBP                             ; 004881a0
        ;   Label: LAB_004881a0
    POP EDI                             ; 004881a1
    POP ESI                             ; 004881a2
    POP EBX                             ; 004881a3
    RET                                 ; 004881a4
    PUSH EBX                            ; 004881a5
        ;   Label: LAB_004881a5
    PUSH ECX                            ; 004881a6
    PUSH EAX                            ; 004881a7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630 ; 004881a8
        ;   XREF to: 00487630 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 004881ad
    POP EBP                             ; 004881b0
    POP EDI                             ; 004881b1
    POP ESI                             ; 004881b2
    POP EBX                             ; 004881b3
    RET                                 ; 004881b4
    LEA EDX,[EAX + EAX*0x1]             ; 004881b5
        ;   Label: LAB_004881b5
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004881b8 | g_ScreenBufferArray
    ADD EDX,EBX                         ; 004881be
    ADD EDX,0x2                         ; 004881c0
        ;   Label: LAB_004881c0
    MOV BX,word ptr [0x02c6d550]        ; 004881c3 | g_CurrentDrawColor
    INC EAX                             ; 004881ca
    MOV word ptr [EDX + -0x2],BX        ; 004881cb
    CMP EAX,ECX                         ; 004881cf
    JLE 0x004881c0                      ; 004881d1
        ;   XREF to: 004881c0 (CONDITIONAL_JUMP)  ; LAB_004881c0
    POP EBP                             ; 004881d3
    POP EDI                             ; 004881d4
    POP ESI                             ; 004881d5
    POP EBX                             ; 004881d6
    RET                                 ; 004881d7
    LEA EDX,[EAX*0x4 + 0x0]             ; 004881d8
        ;   Label: LAB_004881d8
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004881df | g_ScreenBufferArray
    ADD EDX,EBX                         ; 004881e5
    ADD EDX,0x4                         ; 004881e7
        ;   Label: LAB_004881e7
    MOV EBX,dword ptr [0x02c6d550]      ; 004881ea | g_CurrentDrawColor
    INC EAX                             ; 004881f0
    MOV dword ptr [EDX + -0x4],EBX      ; 004881f1
    CMP EAX,ECX                         ; 004881f4
    JLE 0x004881e7                      ; 004881f6
        ;   XREF to: 004881e7 (CONDITIONAL_JUMP)  ; LAB_004881e7
    POP EBP                             ; 004881f8
    POP EDI                             ; 004881f9
    POP ESI                             ; 004881fa
    POP EBX                             ; 004881fb
    RET                                 ; 004881fc
    JBE 0x004881b5                      ; 004881fd
        ;   XREF to: 004881b5 (CONDITIONAL_JUMP)  ; LAB_004881b5
        ;   Label: LAB_004881fd
    CMP EDX,0x20                        ; 004881ff
    JZ 0x004881d8                       ; 00488202
        ;   XREF to: 004881d8 (CONDITIONAL_JUMP)  ; LAB_004881d8
    MOV EBP,0x621daf                    ; 00488204 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00488204
    MOV EAX,0x3a5                       ; 00488209
    PUSH 0x621dc7                       ; 0048820e | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00488213 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00488219 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048821e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00488223
    POP EBP                             ; 00488226
    POP EDI                             ; 00488227
    POP ESI                             ; 00488228
    POP EBX                             ; 00488229
    RET                                 ; 0048822a

