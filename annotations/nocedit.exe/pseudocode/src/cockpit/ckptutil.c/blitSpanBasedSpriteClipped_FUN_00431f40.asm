; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; int              Stack[0x14]:4   src_x
; int              Stack[0x18]:4   src_y
; int              Stack[0x1c]:4   width
; int              Stack[0x20]:4   height
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
;   cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0 at 00432b19
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_ClipLeft
;   int g_ClipRight
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431f40
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
    PUSH ESI                            ; 00431f41
    PUSH EDI                            ; 00431f42
    PUSH EBP                            ; 00431f43
    SUB ESP,0x34                        ; 00431f44
    MOV EDI,dword ptr [ESP + 0x54]      ; 00431f47
    MOV ESI,dword ptr [ESP + 0x58]      ; 00431f4b
    MOV EBX,dword ptr [ESP + 0x58]      ; 00431f4f
    MOV ECX,dword ptr [0x02d02560]      ; 00431f53 | int g_ClipRight
    MOV EAX,[0x02cf6aa0]                ; 00431f59 | g_ScreenBufferArray[1]
    MOV EBP,dword ptr [0x02cf6a9c]      ; 00431f5e | void *[1024] g_ScreenBufferArray
    MOV EDX,dword ptr [0x02d02558]      ; 00431f64 | int g_ClipLeft
    SUB EAX,EBP                         ; 00431f6a
    ADD ESI,ECX                         ; 00431f6c
    MOV dword ptr [ESP + 0x10],EAX      ; 00431f6e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00431f72
    ADD EBX,EDX                         ; 00431f76
    TEST EAX,EAX                        ; 00431f78
    JNZ 0x00431f84                      ; 00431f7a | LAB_00431f84
        ;   XREF to: 00431f84 (CONDITIONAL_JUMP)
    ADD ESP,0x34                        ; 00431f7c
        ;   Label: LAB_00431f7c
    POP EBP                             ; 00431f7f
    POP EDI                             ; 00431f80
    POP ESI                             ; 00431f81
    POP EBX                             ; 00431f82
    RET                                 ; 00431f83
    MOV EAX,dword ptr [ESP + 0x60]      ; 00431f84
        ;   Label: LAB_00431f84
    IMUL EAX,EDI                        ; 00431f88
    MOV EDX,dword ptr [ESP + 0x50]      ; 00431f8b
    MOV ECX,dword ptr [ESP + 0x48]      ; 00431f8f
    ADD EAX,EDX                         ; 00431f93
    ADD ECX,EAX                         ; 00431f95
    MOV EBP,dword ptr [ESP + 0x64]      ; 00431f97
    MOV dword ptr [ESP + 0x48],ECX      ; 00431f9b
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00431f9f | ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x30],EAX      ; 00431fa4
    MOV EAX,EBP                         ; 00431fa8
    SHL EAX,0x5                         ; 00431faa
    ADD EAX,EBP                         ; 00431fad
    SHL EAX,0x2                         ; 00431faf
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00431fb2
    MOV dword ptr [ESP],EAX             ; 00431fb6
    MOV EAX,EDI                         ; 00431fb9
    ADD EDX,EDI                         ; 00431fbb
    SHL EAX,0x5                         ; 00431fbd
    SHL EDX,0x2                         ; 00431fc0
    LEA EBP,[EDI + EAX*0x1]             ; 00431fc3
    MOV EAX,[0x0067939c]                ; 00431fc6 | int g_BitsPerPixel
    SHL EBP,0x2                         ; 00431fcb
    CMP EAX,0x8                         ; 00431fce
    JNZ 0x00432098                      ; 00431fd1 | LAB_00432098
        ;   XREF to: 00432098 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x2cf6a9c] ; 00431fd7 | void *[1024] g_ScreenBufferArray
    MOV EDX,dword ptr [ESP + 0x50]      ; 00431fdd
    ADD EDX,EAX                         ; 00431fe1
    MOV ECX,dword ptr [ESP + 0x64]      ; 00431fe3
    MOV dword ptr [ESP + 0x2c],EDX      ; 00431fe7
    CMP EDI,ECX                         ; 00431feb
    JGE 0x00431f7c                      ; 00431fed | LAB_00431f7c
        ;   XREF to: 00431f7c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00431fef
    MOV dword ptr [ESP + 0x14],EBP      ; 00431ff2
    MOV dword ptr [ESP + 0x8],EAX       ; 00431ff6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00431ffa
        ;   Label: LAB_00431ffa
    XOR EBP,EBP                         ; 00431ffe
    XOR EDI,EDI                         ; 00432000
    MOV dword ptr [ESP + 0x24],EAX      ; 00432002
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00432006
        ;   Label: LAB_00432006
    ADD EAX,dword ptr [ESP + 0x24]      ; 0043200a
    CMP EDI,dword ptr [EAX]             ; 0043200e
    JGE 0x0043202c                      ; 00432010 | LAB_0043202c
        ;   XREF to: 0043202c (CONDITIONAL_JUMP)
    LEA EDX,[EAX + EBP*0x1]             ; 00432012
    MOV EAX,dword ptr [EDX + 0x4]       ; 00432015
    MOV EDX,dword ptr [EDX + 0x44]      ; 00432018
    ADD EDX,EAX                         ; 0043201b
    DEC EDX                             ; 0043201d
    CMP EAX,EBX                         ; 0043201e
    JGE 0x00432066                      ; 00432020 | LAB_00432066
        ;   XREF to: 00432066 (CONDITIONAL_JUMP)
    CMP EDX,EBX                         ; 00432022
    JGE 0x00432064                      ; 00432024 | LAB_00432064
        ;   XREF to: 00432064 (CONDITIONAL_JUMP)
    INC EDI                             ; 00432026
        ;   Label: LAB_00432026
    ADD EBP,0x4                         ; 00432027
    JMP 0x00432006                      ; 0043202a | LAB_00432006
        ;   XREF to: 00432006 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043202c
        ;   Label: LAB_0043202c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432030
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00432034
    MOV EDX,dword ptr [ESP + 0x48]      ; 00432038
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043203c
    ADD EDI,0x84                        ; 00432040
    ADD EBP,EAX                         ; 00432046
    MOV EAX,dword ptr [ESP + 0x60]      ; 00432048
    MOV dword ptr [ESP + 0x14],EDI      ; 0043204c
    ADD EDX,EAX                         ; 00432050
    MOV dword ptr [ESP + 0x2c],EBP      ; 00432052
    MOV dword ptr [ESP + 0x48],EDX      ; 00432056
    CMP EDI,ECX                         ; 0043205a
    JGE 0x00431f7c                      ; 0043205c | LAB_00431f7c
        ;   XREF to: 00431f7c (CONDITIONAL_JUMP)
    JMP 0x00431ffa                      ; 00432062 | LAB_00431ffa
        ;   XREF to: 00431ffa (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00432064
        ;   Label: LAB_00432064
    CMP EDX,ESI                         ; 00432066
        ;   Label: LAB_00432066
    JLE 0x00432070                      ; 00432068 | LAB_00432070
        ;   XREF to: 00432070 (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 0043206a
    JG 0x00432026                       ; 0043206c | LAB_00432026
        ;   XREF to: 00432026 (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0043206e
    SUB EDX,EAX                         ; 00432070
        ;   Label: LAB_00432070
    INC EDX                             ; 00432072
    PUSH EDX                            ; 00432073
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00432074
    ADD EDX,EAX                         ; 00432078
    PUSH EDX                            ; 0043207a
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043207b
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043207f
    ADD EAX,EDX                         ; 00432083
    SUB EAX,ECX                         ; 00432085
    PUSH EAX                            ; 00432087
    CALL dword ptr [ESP + 0x3c]         ; 00432088
    ADD ESP,0xc                         ; 0043208c
    INC EDI                             ; 0043208f
    ADD EBP,0x4                         ; 00432090
    JMP 0x00432006                      ; 00432093 | LAB_00432006
        ;   XREF to: 00432006 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x50]      ; 00432098
        ;   Label: LAB_00432098
    MOV EDX,dword ptr [EDX + 0x2cf6a9c] ; 0043209c | void *[1024] g_ScreenBufferArray
    ADD EAX,EAX                         ; 004320a2
    ADD EDX,EAX                         ; 004320a4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004320a6
    MOV dword ptr [ESP + 0x28],EDX      ; 004320aa
    MOV EDX,EAX                         ; 004320ae
    SAR EDX,0x1f                        ; 004320b0
    SUB EAX,EDX                         ; 004320b3
    SAR EAX,0x1                         ; 004320b5
    MOV EDX,dword ptr [ESP + 0x64]      ; 004320b7
    MOV dword ptr [ESP + 0x10],EAX      ; 004320bb
    CMP EDI,EDX                         ; 004320bf
    JGE 0x00431f7c                      ; 004320c1 | LAB_00431f7c
        ;   XREF to: 00431f7c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x58]      ; 004320c7
    ADD EAX,EAX                         ; 004320cb
    MOV dword ptr [ESP + 0x1c],EAX      ; 004320cd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004320d1
    ADD EAX,EAX                         ; 004320d5
    MOV dword ptr [ESP + 0x4],EAX       ; 004320d7
    MOV EAX,dword ptr [ESP]             ; 004320db
    MOV dword ptr [ESP + 0x18],EBP      ; 004320de
    MOV dword ptr [ESP + 0xc],EAX       ; 004320e2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004320e6
        ;   Label: LAB_004320e6
    XOR EBP,EBP                         ; 004320ea
    XOR EDI,EDI                         ; 004320ec
    MOV dword ptr [ESP + 0x20],EAX      ; 004320ee
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004320f2
        ;   Label: LAB_004320f2
    ADD EAX,dword ptr [ESP + 0x20]      ; 004320f6
    CMP EDI,dword ptr [EAX]             ; 004320fa
    JGE 0x00432118                      ; 004320fc | LAB_00432118
        ;   XREF to: 00432118 (CONDITIONAL_JUMP)
    LEA EDX,[EAX + EBP*0x1]             ; 004320fe
    MOV EAX,dword ptr [EDX + 0x4]       ; 00432101
    MOV EDX,dword ptr [EDX + 0x44]      ; 00432104
    ADD EDX,EAX                         ; 00432107
    DEC EDX                             ; 00432109
    CMP EAX,EBX                         ; 0043210a
    JGE 0x00432152                      ; 0043210c | LAB_00432152
        ;   XREF to: 00432152 (CONDITIONAL_JUMP)
    CMP EDX,EBX                         ; 0043210e
    JGE 0x00432150                      ; 00432110 | LAB_00432150
        ;   XREF to: 00432150 (CONDITIONAL_JUMP)
    INC EDI                             ; 00432112
        ;   Label: LAB_00432112
    ADD EBP,0x4                         ; 00432113
    JMP 0x004320f2                      ; 00432116 | LAB_004320f2
        ;   XREF to: 004320f2 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x18]      ; 00432118
        ;   Label: LAB_00432118
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043211c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00432120
    MOV EDX,dword ptr [ESP + 0x48]      ; 00432124
    MOV ECX,dword ptr [ESP + 0xc]       ; 00432128
    ADD EDI,0x84                        ; 0043212c
    ADD EBP,EAX                         ; 00432132
    MOV EAX,dword ptr [ESP + 0x60]      ; 00432134
    MOV dword ptr [ESP + 0x18],EDI      ; 00432138
    ADD EDX,EAX                         ; 0043213c
    MOV dword ptr [ESP + 0x28],EBP      ; 0043213e
    MOV dword ptr [ESP + 0x48],EDX      ; 00432142
    CMP EDI,ECX                         ; 00432146
    JGE 0x00431f7c                      ; 00432148 | LAB_00431f7c
        ;   XREF to: 00431f7c (CONDITIONAL_JUMP)
    JMP 0x004320e6                      ; 0043214e | LAB_004320e6
        ;   XREF to: 004320e6 (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00432150
        ;   Label: LAB_00432150
    CMP EDX,ESI                         ; 00432152
        ;   Label: LAB_00432152
    JLE 0x0043215c                      ; 00432154 | LAB_0043215c
        ;   XREF to: 0043215c (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 00432156
    JG 0x00432112                       ; 00432158 | LAB_00432112
        ;   XREF to: 00432112 (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0043215a
    SUB EDX,EAX                         ; 0043215c
        ;   Label: LAB_0043215c
    INC EDX                             ; 0043215e
    PUSH EDX                            ; 0043215f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00432160
    ADD EDX,EAX                         ; 00432164
    PUSH EDX                            ; 00432166
    ADD EAX,EAX                         ; 00432167
    MOV EDX,dword ptr [ESP + 0x30]      ; 00432169
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043216d
    ADD EAX,EDX                         ; 00432171
    SUB EAX,ECX                         ; 00432173
    PUSH EAX                            ; 00432175
    CALL dword ptr [ESP + 0x3c]         ; 00432176
    ADD ESP,0xc                         ; 0043217a
    INC EDI                             ; 0043217d
    ADD EBP,0x4                         ; 0043217e
    JMP 0x004320f2                      ; 00432181 | LAB_004320f2
        ;   XREF to: 004320f2 (UNCONDITIONAL_JUMP)

