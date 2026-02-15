; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setShadowColor_FUN_004ce0f0(uint red,uint green,uint blue)
;
; Parameters:
; uint             Stack[0x4]:4   red
; uint             Stack[0x8]:4   green
; uint             Stack[0xc]:4   blue
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a6df
;   TerminatedCString s_Invalid_bitsPerPixel_in__0062a6f2
;   int g_BitsPerPixel = 0x8
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;   ushort g_ShadowColor16
;   int g_ShadowColor32
;   int g_ShadowColorRed
;   int g_ShadowColorGreen
;   int g_ShadowColorBlue
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce0f0
        ;   Label: engine_font.cpp_setShadowColor_FUN_004ce0f0
    PUSH ESI                            ; 004ce0f1
    PUSH EDI                            ; 004ce0f2
    PUSH EBP                            ; 004ce0f3
    SUB ESP,0xc                         ; 004ce0f4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004ce0f7
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ce0fb
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ce0ff
    MOV EDX,dword ptr [0x0067939c]      ; 004ce103 | g_BitsPerPixel
    CMP EDX,0x8                         ; 004ce109
    JZ 0x004ce14e                       ; 004ce10c
        ;   XREF to: 004ce14e (CONDITIONAL_JUMP)  ; LAB_004ce14e
    CMP EDX,0x10                        ; 004ce10e
    JZ 0x004ce168                       ; 004ce111
        ;   XREF to: 004ce168 (CONDITIONAL_JUMP)  ; LAB_004ce168
    CMP EDX,0x20                        ; 004ce113
    JNZ 0x004ce1ea                      ; 004ce116
        ;   XREF to: 004ce1ea (CONDITIONAL_JUMP)  ; LAB_004ce1ea
    CMP EDX,EDX                         ; 004ce11c
    JNZ 0x004ce1d7                      ; 004ce11e
        ;   XREF to: 004ce1d7 (CONDITIONAL_JUMP)  ; LAB_004ce1d7
    MOV CL,byte ptr [0x02d01f24]        ; 004ce124 | g_RedBitPosition
    MOV EAX,EDI                         ; 004ce12a
    MOV EDX,EBX                         ; 004ce12c
    SHL EAX,CL                          ; 004ce12e
    MOV CL,byte ptr [0x02d01f30]        ; 004ce130 | g_GreenBitPosition
    SHL EDX,CL                          ; 004ce136
    MOV CL,byte ptr [0x02d01f3c]        ; 004ce138 | g_BlueBitPosition
    OR EAX,EDX                          ; 004ce13e
    MOV EDX,ESI                         ; 004ce140
    SHL EDX,CL                          ; 004ce142
    MOV ECX,EDX                         ; 004ce144
    OR ECX,EAX                          ; 004ce146
    MOV dword ptr [0x02d7b414],ECX      ; 004ce148 | g_ShadowColor32
        ;   Label: LAB_004ce148
    MOV dword ptr [0x02d7b41c],EBX      ; 004ce14e | g_ShadowColorGreen
        ;   Label: LAB_004ce14e
    MOV dword ptr [0x02d7b420],ESI      ; 004ce154 | g_ShadowColorBlue
    MOV dword ptr [0x02d7b418],EDI      ; 004ce15a | g_ShadowColorRed
    ADD ESP,0xc                         ; 004ce160
    POP EBP                             ; 004ce163
    POP EDI                             ; 004ce164
    POP ESI                             ; 004ce165
    POP EBX                             ; 004ce166
    RET                                 ; 004ce167
    MOV EBP,dword ptr [0x02d01f28]      ; 004ce168 | g_RedScaleFactor
        ;   Label: LAB_004ce168
    MOV EAX,EDI                         ; 004ce16e
    XOR EDX,EDX                         ; 004ce170
    DIV EBP                             ; 004ce172
    MOV dword ptr [ESP],EDI             ; 004ce174
    MOV ECX,dword ptr [0x02d01f34]      ; 004ce177 | g_GreenScaleFactor
    MOV dword ptr [ESP],EAX             ; 004ce17d
    XOR EDX,EDX                         ; 004ce180
    MOV EAX,EBX                         ; 004ce182
    DIV ECX                             ; 004ce184
    MOV dword ptr [ESP + 0x4],EBX       ; 004ce186
    MOV EBP,dword ptr [0x02d01f40]      ; 004ce18a | g_BlueScaleFactor
    MOV dword ptr [ESP + 0x4],EAX       ; 004ce190
    XOR EDX,EDX                         ; 004ce194
    MOV EAX,ESI                         ; 004ce196
    DIV EBP                             ; 004ce198
    MOV dword ptr [ESP + 0x8],ESI       ; 004ce19a
    MOV CL,byte ptr [0x02d01f24]        ; 004ce19e | g_RedBitPosition
    MOV dword ptr [ESP + 0x8],EAX       ; 004ce1a4
    MOV EAX,dword ptr [ESP]             ; 004ce1a8
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ce1ab
    SHL EAX,CL                          ; 004ce1af
    MOV CL,byte ptr [0x02d01f30]        ; 004ce1b1 | g_GreenBitPosition
    SHL EDX,CL                          ; 004ce1b7
    MOV CL,byte ptr [0x02d01f3c]        ; 004ce1b9 | g_BlueBitPosition
    OR EAX,EDX                          ; 004ce1bf
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce1c1
    SHL EDX,CL                          ; 004ce1c5
    MOV ECX,EDX                         ; 004ce1c7
    OR ECX,EAX                          ; 004ce1c9
    MOV word ptr [0x02d7b412],CX        ; 004ce1cb | g_ShadowColor16
    JMP 0x004ce14e                      ; 004ce1d2
        ;   XREF to: 004ce14e (UNCONDITIONAL_JUMP)  ; LAB_004ce14e
    MOV EAX,EBX                         ; 004ce1d7
        ;   Label: LAB_004ce1d7
    MOV ECX,EDI                         ; 004ce1d9
    SHL EAX,0x8                         ; 004ce1db
    SHL ECX,0x10                        ; 004ce1de
    OR ECX,EAX                          ; 004ce1e1
    OR ECX,ESI                          ; 004ce1e3
    JMP 0x004ce148                      ; 004ce1e5
        ;   XREF to: 004ce148 (UNCONDITIONAL_JUMP)  ; LAB_004ce148
    MOV EAX,0x62a6df                    ; 004ce1ea | = "..\\engine\\font.cpp"
        ;   Label: LAB_004ce1ea
    MOV EDX,0x398                       ; 004ce1ef
    PUSH 0x62a6f2                       ; 004ce1f4 | = "Invalid bitsPerPixel in CBitFont::set..."
    MOV [0x02f0ca48],EAX                ; 004ce1f9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004ce1fe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ce204
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ce209
    JMP 0x004ce14e                      ; 004ce20c
        ;   XREF to: 004ce14e (UNCONDITIONAL_JUMP)  ; LAB_004ce14e

