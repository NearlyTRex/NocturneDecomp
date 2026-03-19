; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_render_FUN_00574f20(CZThumb *this_ptr,int screen_x,int screen_y)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; Local Variables:
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70 at 005760a3
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   undefined4 g_LightBufferPool[13][93687]
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[2]
;   undefined4 UCHAR_ARRAY_02d0101f
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574f20
        ;   Label: core_setdir.cpp_CZThumb_render_FUN_00574f20
    PUSH ESI                            ; 00574f21
    PUSH EDI                            ; 00574f22
    PUSH EBP                            ; 00574f23
    SUB ESP,0x10                        ; 00574f24
    MOV EBX,dword ptr [ESP + 0x24]      ; 00574f27
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00574f2b
    MOV EDX,dword ptr [ESP + 0x28]      ; 00574f2f
    TEST EDX,EDX                        ; 00574f33
    JL 0x00575098                       ; 00574f35
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    TEST EAX,EAX                        ; 00574f3b
    JL 0x00575098                       ; 00574f3d
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    MOV ECX,dword ptr [EBX]             ; 00574f43
    MOV ESI,dword ptr [0x00679394]      ; 00574f45 | g_WindowWidth
    ADD EDX,ECX                         ; 00574f4b
    CMP EDX,ESI                         ; 00574f4d
    JGE 0x00575098                      ; 00574f4f
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    MOV EDX,dword ptr [EBX + 0x4]       ; 00574f55
    MOV EDI,dword ptr [0x00679398]      ; 00574f58 | g_WindowHeight
    ADD EDX,EAX                         ; 00574f5e
    CMP EDX,EDI                         ; 00574f60
    JGE 0x00575098                      ; 00574f62
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    CMP dword ptr [0x0067939c],0x20     ; 00574f68 | g_BitsPerPixel
    JNZ 0x0057500a                      ; 00574f6f
        ;   XREF to: 0057500a (CONDITIONAL_JUMP)  ; LAB_0057500a
    SHL EAX,0x2                         ; 00574f75
    MOV EDX,0x1                         ; 00574f78
    ADD EAX,0x4                         ; 00574f7d
    MOV dword ptr [ESP + 0xc],EDX       ; 00574f80
    MOV dword ptr [ESP + 0x4],EAX       ; 00574f84
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574f88
        ;   Label: LAB_00574f88
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574f8b
    DEC EAX                             ; 00574f8f
    CMP EAX,EDX                         ; 00574f90
    JLE 0x00575098                      ; 00574f92
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    MOV EAX,dword ptr [ESP + 0x28]      ; 00574f98
    MOV EBP,dword ptr [ESP + 0x4]       ; 00574f9c
    SHL EAX,0x2                         ; 00574fa0
    MOV ECX,0x1                         ; 00574fa3
    LEA ESI,[EAX + 0x4]                 ; 00574fa8
    MOV EAX,dword ptr [EBX]             ; 00574fab
        ;   Label: LAB_00574fab
    DEC EAX                             ; 00574fad
    CMP ECX,EAX                         ; 00574fae
    JL 0x00574fc8                       ; 00574fb0
        ;   XREF to: 00574fc8 (CONDITIONAL_JUMP)  ; LAB_00574fc8
    MOV ESI,dword ptr [ESP + 0xc]       ; 00574fb2
    MOV ECX,dword ptr [ESP + 0x4]       ; 00574fb6
    INC ESI                             ; 00574fba
    ADD ECX,0x4                         ; 00574fbb
    MOV dword ptr [ESP + 0xc],ESI       ; 00574fbe
    MOV dword ptr [ESP + 0x4],ECX       ; 00574fc2
    JMP 0x00574f88                      ; 00574fc6
        ;   XREF to: 00574f88 (UNCONDITIONAL_JUMP)  ; LAB_00574f88
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574fc8
        ;   Label: LAB_00574fc8
    IMUL EAX,dword ptr [EBX]            ; 00574fcc
    MOV EDI,dword ptr [EBX + 0x24]      ; 00574fcf
    ADD EAX,ECX                         ; 00574fd2
    XOR EDX,EDX                         ; 00574fd4
    MOV EDI,dword ptr [EDI + EAX*0x4]   ; 00574fd6
    MOV EAX,0xffffff                    ; 00574fd9
    INC EDI                             ; 00574fde
    DIV EDI                             ; 00574fdf
    CMP EAX,0xff                        ; 00574fe1
    JBE 0x00574fed                      ; 00574fe6
        ;   XREF to: 00574fed (CONDITIONAL_JUMP)  ; LAB_00574fed
    MOV EAX,0xff                        ; 00574fe8
    MOV EDI,dword ptr [EBP + 0x2cf6a9c] ; 00574fed | g_ScreenBufferArray[1] | g_ScreenBufferArray[2]
        ;   Label: LAB_00574fed
    LEA EDX,[EDI + ESI*0x1]             ; 00574ff3
    MOV EDI,EAX                         ; 00574ff6
    SHL EDI,0x8                         ; 00574ff8
    ADD EDI,EAX                         ; 00574ffb
    SHL EAX,0x10                        ; 00574ffd
    INC ECX                             ; 00575000
    ADD EDI,EAX                         ; 00575001
    ADD ESI,0x4                         ; 00575003
    MOV dword ptr [EDX],EDI             ; 00575006 | g_LightBufferPool[13][93687]
    JMP 0x00574fab                      ; 00575008
        ;   XREF to: 00574fab (UNCONDITIONAL_JUMP)  ; LAB_00574fab
    MOV EBP,0x1                         ; 0057500a
        ;   Label: LAB_0057500a
    ADD EAX,EBP                         ; 0057500f
    MOV dword ptr [ESP],EAX             ; 00575011
    MOV EAX,dword ptr [EBX + 0x4]       ; 00575014
        ;   Label: LAB_00575014
    DEC EAX                             ; 00575017
    CMP EBP,EAX                         ; 00575018
    JGE 0x00575098                      ; 0057501a
        ;   XREF to: 00575098 (CONDITIONAL_JUMP)  ; LAB_00575098
    MOV EAX,dword ptr [ESP]             ; 00575020
    MOV EDI,dword ptr [ESP + 0x28]      ; 00575023
    MOV ESI,0x1                         ; 00575027
    MOV dword ptr [ESP + 0x8],EAX       ; 0057502c
    ADD EDI,ESI                         ; 00575030
    MOV EAX,dword ptr [EBX]             ; 00575032
        ;   Label: LAB_00575032
    DEC EAX                             ; 00575034
    CMP ESI,EAX                         ; 00575035
    JL 0x00575043                       ; 00575037
        ;   XREF to: 00575043 (CONDITIONAL_JUMP)  ; LAB_00575043
    MOV ECX,dword ptr [ESP]             ; 00575039
    INC ECX                             ; 0057503c
    INC EBP                             ; 0057503d
    MOV dword ptr [ESP],ECX             ; 0057503e
    JMP 0x00575014                      ; 00575041
        ;   XREF to: 00575014 (UNCONDITIONAL_JUMP)  ; LAB_00575014
    MOV EAX,dword ptr [EBX]             ; 00575043
        ;   Label: LAB_00575043
    IMUL EAX,EBP                        ; 00575045
    MOV EDX,dword ptr [EBX + 0x24]      ; 00575048
    ADD EAX,ESI                         ; 0057504b
    MOV ECX,dword ptr [EDX + EAX*0x4]   ; 0057504d
    MOV EAX,0xffffff                    ; 00575050
    INC ECX                             ; 00575055
    XOR EDX,EDX                         ; 00575056
    DIV ECX                             ; 00575058
    CMP EAX,0xff                        ; 0057505a
    JBE 0x00575066                      ; 0057505f
        ;   XREF to: 00575066 (CONDITIONAL_JUMP)  ; LAB_00575066
    MOV EAX,0xff                        ; 00575061
    SHR EAX,0x3                         ; 00575066
        ;   Label: LAB_00575066
    MOV EDX,EAX                         ; 00575069
    MOV ECX,EAX                         ; 0057506b
    SHL EDX,0xa                         ; 0057506d
    SHL ECX,0x5                         ; 00575070
    ADD EDX,ECX                         ; 00575073
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020] ; 00575075 | UCHAR_ARRAY_02d0101f
    AND EAX,0xff                        ; 0057507c
    MOV [0x02d02570],EAX                ; 00575081 | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x8]       ; 00575086
    PUSH EAX                            ; 0057508a
    PUSH EDI                            ; 0057508b
    INC ESI                             ; 0057508c
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0057508d
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00575092
    INC EDI                             ; 00575095
    JMP 0x00575032                      ; 00575096
        ;   XREF to: 00575032 (UNCONDITIONAL_JUMP)  ; LAB_00575032
    ADD ESP,0x10                        ; 00575098
        ;   Label: LAB_00575098
    POP EBP                             ; 0057509b
    POP EDI                             ; 0057509c
    POP ESI                             ; 0057509d
    POP EBX                             ; 0057509e
    RET                                 ; 0057509f

