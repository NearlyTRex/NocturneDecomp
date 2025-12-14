; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 at 00488c82
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621e46
;   TerminatedCString s_Invalid_bitsPerPixel_00621e5e
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_UseRGBConversion
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
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

    PUSH EBX                            ; 00488ad0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
    PUSH ESI                            ; 00488ad1
    PUSH EDI                            ; 00488ad2
    PUSH EBP                            ; 00488ad3
    SUB ESP,0x14                        ; 00488ad4
    MOV EAX,dword ptr [ESP + 0x28]      ; 00488ad7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00488adb
    MOV ESI,dword ptr [ESP + 0x30]      ; 00488adf
    MOV EBX,dword ptr [ESP + 0x34]      ; 00488ae3
    MOV EBP,dword ptr [ESP + 0x38]      ; 00488ae7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00488aeb
    MOV ECX,dword ptr [EAX + 0xc]       ; 00488aee
    ADD EBX,EDX                         ; 00488af1
    ADD EDI,EDX                         ; 00488af3
    ADD ESI,ECX                         ; 00488af5
    MOV EDX,dword ptr [EAX + 0x10]      ; 00488af7
    ADD EBP,ECX                         ; 00488afa
    CMP EDI,EDX                         ; 00488afc
    JGE 0x00488b02                      ; 00488afe
        ;   XREF to: 00488b02 (CONDITIONAL_JUMP)  ; LAB_00488b02
    MOV EDI,EDX                         ; 00488b00
    MOV ECX,dword ptr [EAX + 0x18]      ; 00488b02
        ;   Label: LAB_00488b02
    CMP EBX,ECX                         ; 00488b05
    JLE 0x00488b0b                      ; 00488b07
        ;   XREF to: 00488b0b (CONDITIONAL_JUMP)  ; LAB_00488b0b
    MOV EBX,ECX                         ; 00488b09
    CMP EDI,EBX                         ; 00488b0b
        ;   Label: LAB_00488b0b
    JG 0x00488b50                       ; 00488b0d
        ;   XREF to: 00488b50 (CONDITIONAL_JUMP)  ; LAB_00488b50
    MOV EDX,dword ptr [EAX + 0x14]      ; 00488b0f
    CMP ESI,EDX                         ; 00488b12
    JGE 0x00488b18                      ; 00488b14
        ;   XREF to: 00488b18 (CONDITIONAL_JUMP)  ; LAB_00488b18
    MOV ESI,EDX                         ; 00488b16
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00488b18
        ;   Label: LAB_00488b18
    CMP EBP,ECX                         ; 00488b1b
    JLE 0x00488b21                      ; 00488b1d
        ;   XREF to: 00488b21 (CONDITIONAL_JUMP)  ; LAB_00488b21
    MOV EBP,ECX                         ; 00488b1f
    CMP ESI,EBP                         ; 00488b21
        ;   Label: LAB_00488b21
    JG 0x00488b50                       ; 00488b23
        ;   XREF to: 00488b50 (CONDITIONAL_JUMP)  ; LAB_00488b50
    CMP dword ptr [0x02c6d55c],0x0      ; 00488b25 | g_UseRGBConversion
    JZ 0x00488c10                       ; 00488b2c
        ;   XREF to: 00488c10 (CONDITIONAL_JUMP)  ; LAB_00488c10
    PUSH ESI                            ; 00488b32
        ;   Label: LAB_00488b32
    PUSH EBX                            ; 00488b33
    PUSH EDI                            ; 00488b34
    INC ESI                             ; 00488b35
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630 ; 00488b36
        ;   XREF to: 00487630 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 00488b3b
    CMP ESI,EBP                         ; 00488b3e
    JLE 0x00488b32                      ; 00488b40
        ;   XREF to: 00488b32 (CONDITIONAL_JUMP)  ; LAB_00488b32
    LEA EAX,[EAX]                       ; 00488b42
    LEA EDX,[EDX]                       ; 00488b48
    MOV EAX,EAX                         ; 00488b4e
    ADD ESP,0x14                        ; 00488b50
        ;   Label: LAB_00488b50
    POP EBP                             ; 00488b53
    POP EDI                             ; 00488b54
    POP ESI                             ; 00488b55
    POP EBX                             ; 00488b56
    RET                                 ; 00488b57
    SUB EBX,EDI                         ; 00488b58
        ;   Label: LAB_00488b58
    INC EBX                             ; 00488b5a
    MOV dword ptr [ESP],EBX             ; 00488b5b
    MOV EBX,EBP                         ; 00488b5e
    MOV EBP,EDX                         ; 00488b60
    MOV EDX,dword ptr [ESP]             ; 00488b62
        ;   Label: LAB_00488b62
    PUSH EDX                            ; 00488b65
    MOV ECX,dword ptr [0x02c6d550]      ; 00488b66 | g_CurrentDrawColor
    MOV EAX,dword ptr [EBX + 0x2cf6a9c] ; 00488b6c | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH ECX                            ; 00488b72
    ADD EAX,EDI                         ; 00488b73
    PUSH EAX                            ; 00488b75
    ADD EBX,0x4                         ; 00488b76
    INC ESI                             ; 00488b79
    CALL crt_memory.c_memset_FUN_005fde40 ; 00488b7a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00488b7f
    CMP EBX,EBP                         ; 00488b82
    JLE 0x00488b62                      ; 00488b84
        ;   XREF to: 00488b62 (CONDITIONAL_JUMP)  ; LAB_00488b62
    ADD ESP,0x14                        ; 00488b86
    POP EBP                             ; 00488b89
    POP EDI                             ; 00488b8a
    POP ESI                             ; 00488b8b
    POP EBX                             ; 00488b8c
    RET                                 ; 00488b8d
    MOV dword ptr [ESP + 0x8],EDX       ; 00488b8e
        ;   Label: LAB_00488b8e
    MOV EAX,dword ptr [EBP + 0x2cf6a9c] ; 00488b92 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00488b92
    MOV dword ptr [ESP + 0x10],EAX      ; 00488b98
    MOV EAX,EDI                         ; 00488b9c
    CMP EDI,EBX                         ; 00488b9e
    JG 0x00488bbe                       ; 00488ba0
        ;   XREF to: 00488bbe (CONDITIONAL_JUMP)  ; LAB_00488bbe
    MOV ECX,dword ptr [ESP + 0x10]      ; 00488ba2
    LEA EDX,[EDI + EDI*0x1]             ; 00488ba6
    ADD EDX,ECX                         ; 00488ba9
    ADD EDX,0x2                         ; 00488bab
        ;   Label: LAB_00488bab
    MOV CX,word ptr [0x02c6d550]        ; 00488bae | g_CurrentDrawColor
    INC EAX                             ; 00488bb5
    MOV word ptr [EDX + -0x2],CX        ; 00488bb6
    CMP EAX,EBX                         ; 00488bba
    JLE 0x00488bab                      ; 00488bbc
        ;   XREF to: 00488bab (CONDITIONAL_JUMP)  ; LAB_00488bab
    MOV EAX,dword ptr [ESP + 0x8]       ; 00488bbe
        ;   Label: LAB_00488bbe
    ADD EBP,0x4                         ; 00488bc2
    INC ESI                             ; 00488bc5
    CMP EBP,EAX                         ; 00488bc6
    JG 0x00488b50                       ; 00488bc8
        ;   XREF to: 00488b50 (CONDITIONAL_JUMP)  ; LAB_00488b50
    JMP 0x00488b92                      ; 00488bca
        ;   XREF to: 00488b92 (UNCONDITIONAL_JUMP)  ; LAB_00488b92
    MOV dword ptr [ESP + 0x4],EDX       ; 00488bcc
        ;   Label: LAB_00488bcc
    MOV EAX,dword ptr [EBP + 0x2cf6a9c] ; 00488bd0 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00488bd0
    MOV EDX,EDI                         ; 00488bd6
    MOV dword ptr [ESP + 0xc],EAX       ; 00488bd8
    CMP EDI,EBX                         ; 00488bdc
    JG 0x00488bfe                       ; 00488bde
        ;   XREF to: 00488bfe (CONDITIONAL_JUMP)  ; LAB_00488bfe
    MOV ECX,dword ptr [ESP + 0xc]       ; 00488be0
    LEA EAX,[EDI*0x4 + 0x0]             ; 00488be4
    ADD EAX,ECX                         ; 00488beb
    ADD EAX,0x4                         ; 00488bed
        ;   Label: LAB_00488bed
    MOV ECX,dword ptr [0x02c6d550]      ; 00488bf0 | g_CurrentDrawColor
    INC EDX                             ; 00488bf6
    MOV dword ptr [EAX + -0x4],ECX      ; 00488bf7
    CMP EDX,EBX                         ; 00488bfa
    JLE 0x00488bed                      ; 00488bfc
        ;   XREF to: 00488bed (CONDITIONAL_JUMP)  ; LAB_00488bed
    MOV EAX,dword ptr [ESP + 0x4]       ; 00488bfe
        ;   Label: LAB_00488bfe
    ADD EBP,0x4                         ; 00488c02
    INC ESI                             ; 00488c05
    CMP EBP,EAX                         ; 00488c06
    JG 0x00488b50                       ; 00488c08
        ;   XREF to: 00488b50 (CONDITIONAL_JUMP)  ; LAB_00488b50
    JMP 0x00488bd0                      ; 00488c0e
        ;   XREF to: 00488bd0 (UNCONDITIONAL_JUMP)  ; LAB_00488bd0
    LEA EDX,[EBP*0x4 + 0x0]             ; 00488c10
        ;   Label: LAB_00488c10
    MOV EAX,[0x0067939c]                ; 00488c17 | g_BitsPerPixel
    LEA EBP,[ESI*0x4 + 0x0]             ; 00488c1c
    CMP EAX,0x10                        ; 00488c23
    JNC 0x00488c33                      ; 00488c26
        ;   XREF to: 00488c33 (CONDITIONAL_JUMP)  ; LAB_00488c33
    CMP EAX,0x8                         ; 00488c28
    JZ 0x00488b58                       ; 00488c2b
        ;   XREF to: 00488b58 (CONDITIONAL_JUMP)  ; LAB_00488b58
    JMP 0x00488c3e                      ; 00488c31
        ;   XREF to: 00488c3e (UNCONDITIONAL_JUMP)  ; LAB_00488c3e
    JBE 0x00488b8e                      ; 00488c33
        ;   XREF to: 00488b8e (CONDITIONAL_JUMP)  ; LAB_00488b8e
        ;   Label: LAB_00488c33
    CMP EAX,0x20                        ; 00488c39
    JZ 0x00488bcc                       ; 00488c3c
        ;   XREF to: 00488bcc (CONDITIONAL_JUMP)  ; LAB_00488bcc
    MOV EDX,0x621e46                    ; 00488c3e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00488c3e
    MOV ECX,0x524                       ; 00488c43
    PUSH 0x621e5e                       ; 00488c48 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00488c4d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00488c53 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00488c59
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00488c5e
    ADD ESP,0x14                        ; 00488c61
    POP EBP                             ; 00488c64
    POP EDI                             ; 00488c65
    POP ESI                             ; 00488c66
    POP EBX                             ; 00488c67
    RET                                 ; 00488c68

