; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(CDrawSurface *this_ptr,int x,int start_y,int end_y)
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 at 0045cb4c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d9ed
;   TerminatedCString s_Invalid_bitsPerPixel_0057da05
;   TerminatedCString s_cockpit_drawsurf_cpp_0057da1b
;   TerminatedCString s_Invalid_bitsPerPixel_0057da33
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d71c
;   undefined4 DAT_01b4d720
;   undefined4 DAT_01b4d730
;   void*[1200] g_ScreenBufferArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c850
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850
    PUSH ESI                            ; 0045c851
    PUSH EDI                            ; 0045c852
    PUSH EBP                            ; 0045c853
    SUB ESP,0x8                         ; 0045c854
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045c857
    MOV ESI,dword ptr [ESP + 0x20]      ; 0045c85b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045c85f
    MOV EBX,dword ptr [ESP + 0x28]      ; 0045c863
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045c867
    MOV EDI,dword ptr [EDX + 0xc]       ; 0045c86a
    ADD ESI,ECX                         ; 0045c86d
    ADD EAX,EDI                         ; 0045c86f
    MOV ECX,dword ptr [EDX + 0x10]      ; 0045c871
    ADD EBX,EDI                         ; 0045c874
    CMP ESI,ECX                         ; 0045c876
    JL 0x0045c8f0                       ; 0045c878
        ;   XREF to: 0045c8f0 (CONDITIONAL_JUMP)  ; LAB_0045c8f0
    CMP ESI,dword ptr [EDX + 0x18]      ; 0045c87e
    JG 0x0045c8f0                       ; 0045c881
        ;   XREF to: 0045c8f0 (CONDITIONAL_JUMP)  ; LAB_0045c8f0
    MOV EBP,dword ptr [EDX + 0x14]      ; 0045c887
    CMP EAX,EBP                         ; 0045c88a
    JGE 0x0045c890                      ; 0045c88c
        ;   XREF to: 0045c890 (CONDITIONAL_JUMP)  ; LAB_0045c890
    MOV EAX,EBP                         ; 0045c88e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0045c890
        ;   Label: LAB_0045c890
    CMP EBX,ECX                         ; 0045c893
    JLE 0x0045c899                      ; 0045c895
        ;   XREF to: 0045c899 (CONDITIONAL_JUMP)  ; LAB_0045c899
    MOV EBX,ECX                         ; 0045c897
    CMP EAX,EBX                         ; 0045c899
        ;   Label: LAB_0045c899
    JG 0x0045c8f0                       ; 0045c89b
        ;   XREF to: 0045c8f0 (CONDITIONAL_JUMP)  ; LAB_0045c8f0
    MOV EBP,dword ptr [0x01b4d71c]      ; 0045c89d | DAT_01b4d71c
    LEA EDX,[ESI + ESI*0x1]             ; 0045c8a3
    SHL EBX,0x2                         ; 0045c8a6
    MOV dword ptr [ESP],EDX             ; 0045c8a9
    LEA EDI,[ESI*0x4 + 0x0]             ; 0045c8ac
    LEA EDX,[EAX*0x4 + 0x0]             ; 0045c8b3
    TEST EBP,EBP                        ; 0045c8ba
    JNZ 0x0045c9fa                      ; 0045c8bc
        ;   XREF to: 0045c9fa (CONDITIONAL_JUMP)  ; LAB_0045c9fa
    MOV ECX,dword ptr [0x005b7624]      ; 0045c8c2 | g_BitsPerPixel
    CMP ECX,0x10                        ; 0045c8c8
    JNC 0x0045c95e                      ; 0045c8cb
        ;   XREF to: 0045c95e (CONDITIONAL_JUMP)  ; LAB_0045c95e
    CMP ECX,0x8                         ; 0045c8d1
    JNZ 0x0045c933                      ; 0045c8d4
        ;   XREF to: 0045c933 (CONDITIONAL_JUMP)  ; LAB_0045c933
    MOV EDI,EBX                         ; 0045c8d6
    MOV BL,byte ptr [0x01b4d710]        ; 0045c8d8 | DAT_01b4d710
        ;   Label: LAB_0045c8d8
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 0045c8de | g_ScreenBufferArray
    ADD EDX,0x4                         ; 0045c8e4
    INC EAX                             ; 0045c8e7
    MOV byte ptr [ECX + ESI*0x1],BL     ; 0045c8e8
    CMP EDX,EDI                         ; 0045c8eb
    JLE 0x0045c8d8                      ; 0045c8ed
        ;   XREF to: 0045c8d8 (CONDITIONAL_JUMP)  ; LAB_0045c8d8
    NOP                                 ; 0045c8ef
    ADD ESP,0x8                         ; 0045c8f0
        ;   Label: LAB_0045c8f0
    POP EBP                             ; 0045c8f3
    POP EDI                             ; 0045c8f4
    POP ESI                             ; 0045c8f5
    POP EBX                             ; 0045c8f6
    RET                                 ; 0045c8f7
    MOV EDI,dword ptr [ESP]             ; 0045c8f8
        ;   Label: LAB_0045c8f8
    MOV ESI,EBX                         ; 0045c8fb
    MOV BX,word ptr [0x01b4d710]        ; 0045c8fd | DAT_01b4d710
        ;   Label: LAB_0045c8fd
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 0045c904 | g_ScreenBufferArray
    ADD EDX,0x4                         ; 0045c90a
    INC EAX                             ; 0045c90d
    MOV word ptr [ECX + EDI*0x1],BX     ; 0045c90e
    CMP EDX,ESI                         ; 0045c912
    JLE 0x0045c8fd                      ; 0045c914
        ;   XREF to: 0045c8fd (CONDITIONAL_JUMP)  ; LAB_0045c8fd
    JMP 0x0045c8f0                      ; 0045c916
        ;   XREF to: 0045c8f0 (UNCONDITIONAL_JUMP)  ; LAB_0045c8f0
    MOV ESI,EBX                         ; 0045c918
        ;   Label: LAB_0045c918
    MOV EBX,dword ptr [0x01b4d710]      ; 0045c91a | DAT_01b4d710
        ;   Label: LAB_0045c91a
    MOV ECX,dword ptr [EDX + 0x1bd2fa0] ; 0045c920 | g_ScreenBufferArray
    ADD EDX,0x4                         ; 0045c926
    INC EAX                             ; 0045c929
    MOV dword ptr [ECX + EDI*0x1],EBX   ; 0045c92a
    CMP EDX,ESI                         ; 0045c92d
    JLE 0x0045c91a                      ; 0045c92f
        ;   XREF to: 0045c91a (CONDITIONAL_JUMP)  ; LAB_0045c91a
    JMP 0x0045c8f0                      ; 0045c931
        ;   XREF to: 0045c8f0 (UNCONDITIONAL_JUMP)  ; LAB_0045c8f0
    MOV ECX,0x57d9ed                    ; 0045c933 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045c933
    MOV EBX,0x3db                       ; 0045c938
    PUSH 0x57da05                       ; 0045c93d | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01cc4800],ECX      ; 0045c942 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 0045c948 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0045c94e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045c953
    ADD ESP,0x8                         ; 0045c956
    POP EBP                             ; 0045c959
    POP EDI                             ; 0045c95a
    POP ESI                             ; 0045c95b
    POP EBX                             ; 0045c95c
    RET                                 ; 0045c95d
    JBE 0x0045c8f8                      ; 0045c95e
        ;   XREF to: 0045c8f8 (CONDITIONAL_JUMP)  ; LAB_0045c8f8
        ;   Label: LAB_0045c95e
    CMP ECX,0x20                        ; 0045c960
    JZ 0x0045c918                       ; 0045c963
        ;   XREF to: 0045c918 (CONDITIONAL_JUMP)  ; LAB_0045c918
    JMP 0x0045c933                      ; 0045c965
        ;   XREF to: 0045c933 (UNCONDITIONAL_JUMP)  ; LAB_0045c933
    MOV EDI,EBX                         ; 0045c967
        ;   Label: LAB_0045c967
    MOV EBX,dword ptr [EDX + 0x1bd2fa0] ; 0045c969 | g_ScreenBufferArray
        ;   Label: LAB_0045c969
    XOR ECX,ECX                         ; 0045c96f
    MOV CL,byte ptr [ESI + EBX*0x1]     ; 0045c971
    ADD EDX,0x4                         ; 0045c974
    MOV CL,byte ptr [ECX + 0x1bf5d20]   ; 0045c977
    INC EAX                             ; 0045c97d
    MOV byte ptr [ESI + EBX*0x1],CL     ; 0045c97e
    CMP EDX,EDI                         ; 0045c981
    JLE 0x0045c969                      ; 0045c983
        ;   XREF to: 0045c969 (CONDITIONAL_JUMP)  ; LAB_0045c969
    ADD ESP,0x8                         ; 0045c985
    POP EBP                             ; 0045c988
    POP EDI                             ; 0045c989
    POP ESI                             ; 0045c98a
    POP EBX                             ; 0045c98b
    RET                                 ; 0045c98c
    MOV EBP,dword ptr [ESP]             ; 0045c98d
        ;   Label: LAB_0045c98d
    MOV EDI,EBX                         ; 0045c990
    MOV EBX,dword ptr [EDX + 0x1bd2fa0] ; 0045c992 | g_ScreenBufferArray
        ;   Label: LAB_0045c992
    XOR ESI,ESI                         ; 0045c998
    MOV CL,byte ptr [0x01b4d720]        ; 0045c99a | DAT_01b4d720
    MOV SI,word ptr [EBX + EBP*0x1]     ; 0045c9a0
    SHR ESI,CL                          ; 0045c9a4
    MOV ECX,dword ptr [0x01b4d730]      ; 0045c9a6 | DAT_01b4d730
    ADD EDX,0x4                         ; 0045c9ac
    AND ESI,ECX                         ; 0045c9af
    INC EAX                             ; 0045c9b1
    MOV word ptr [EBX + EBP*0x1],SI     ; 0045c9b2
    CMP EDX,EDI                         ; 0045c9b6
    JLE 0x0045c992                      ; 0045c9b8
        ;   XREF to: 0045c992 (CONDITIONAL_JUMP)  ; LAB_0045c992
    ADD ESP,0x8                         ; 0045c9ba
    POP EBP                             ; 0045c9bd
    POP EDI                             ; 0045c9be
    POP ESI                             ; 0045c9bf
    POP EBX                             ; 0045c9c0
    RET                                 ; 0045c9c1
    MOV dword ptr [ESP + 0x4],EDI       ; 0045c9c2
        ;   Label: LAB_0045c9c2
    MOV EBP,dword ptr [ESP + 0x4]       ; 0045c9c6
    MOV EDI,EBX                         ; 0045c9ca
    MOV ESI,dword ptr [EDX + 0x1bd2fa0] ; 0045c9cc | g_ScreenBufferArray
        ;   Label: LAB_0045c9cc
    ADD ESI,EBP                         ; 0045c9d2
    MOV CL,byte ptr [0x01b4d720]        ; 0045c9d4 | DAT_01b4d720
    MOV EBX,dword ptr [ESI]             ; 0045c9da
    SHR EBX,CL                          ; 0045c9dc
    MOV ECX,EBX                         ; 0045c9de
    MOV EBX,dword ptr [0x01b4d730]      ; 0045c9e0 | DAT_01b4d730
    ADD EDX,0x4                         ; 0045c9e6
    AND ECX,EBX                         ; 0045c9e9
    INC EAX                             ; 0045c9eb
    MOV dword ptr [ESI],ECX             ; 0045c9ec
    CMP EDX,EDI                         ; 0045c9ee
    JLE 0x0045c9cc                      ; 0045c9f0
        ;   XREF to: 0045c9cc (CONDITIONAL_JUMP)  ; LAB_0045c9cc
    ADD ESP,0x8                         ; 0045c9f2
    POP EBP                             ; 0045c9f5
    POP EDI                             ; 0045c9f6
    POP ESI                             ; 0045c9f7
    POP EBX                             ; 0045c9f8
    RET                                 ; 0045c9f9
    MOV ECX,dword ptr [0x005b7624]      ; 0045c9fa | g_BitsPerPixel
        ;   Label: LAB_0045c9fa
    CMP ECX,0x10                        ; 0045ca00
    JNC 0x0045ca10                      ; 0045ca03
        ;   XREF to: 0045ca10 (CONDITIONAL_JUMP)  ; LAB_0045ca10
    CMP ECX,0x8                         ; 0045ca05
    JZ 0x0045c967                       ; 0045ca08
        ;   XREF to: 0045c967 (CONDITIONAL_JUMP)  ; LAB_0045c967
    JMP 0x0045ca1b                      ; 0045ca0e
        ;   XREF to: 0045ca1b (UNCONDITIONAL_JUMP)  ; LAB_0045ca1b
    JBE 0x0045c98d                      ; 0045ca10
        ;   XREF to: 0045c98d (CONDITIONAL_JUMP)  ; LAB_0045c98d
        ;   Label: LAB_0045ca10
    CMP ECX,0x20                        ; 0045ca16
    JZ 0x0045c9c2                       ; 0045ca19
        ;   XREF to: 0045c9c2 (CONDITIONAL_JUMP)  ; LAB_0045c9c2
    MOV EAX,0x57da1b                    ; 0045ca1b | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045ca1b
    MOV EDX,0x3fb                       ; 0045ca20
    PUSH 0x57da33                       ; 0045ca25 | = "Invalid bitsPerPixel!"
    MOV [0x01cc4800],EAX                ; 0045ca2a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0045ca2f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0045ca35
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045ca3a
    ADD ESP,0x8                         ; 0045ca3d
    POP EBP                             ; 0045ca40
    POP EDI                             ; 0045ca41
    POP ESI                             ; 0045ca42
    POP EBX                             ; 0045ca43
    RET                                 ; 0045ca44

