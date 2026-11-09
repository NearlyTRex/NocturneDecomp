; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_00518560(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 at 005187a0
;
; Referenced Globals:
;   TerminatedCString s_core_mirror_cpp_005e904b
;   TerminatedCString s_Bad_clip_005e905e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518560
        ;   Label: core_mirror.cpp_computePlaneIntersection_FUN_00518560
    PUSH ESI                            ; 00518561
    PUSH EDI                            ; 00518562
    PUSH EBP                            ; 00518563
    SUB ESP,0x50                        ; 00518564
    MOV ESI,dword ptr [ESP + 0x64]      ; 00518567
    MOV EBX,dword ptr [ESP + 0x68]      ; 0051856b
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0051856f
    MOV EBP,dword ptr [ESP + 0x70]      ; 00518573
    FLD float ptr [EDI + 0x4]           ; 00518577
    FSUB float ptr [EBX + 0x4]          ; 0051857a
    FMUL float ptr [ESI + 0x4]          ; 0051857d
    FLD float ptr [EDI]                 ; 00518580
    FSUB float ptr [EBX]                ; 00518582
    FMUL float ptr [ESI]                ; 00518584
    FADDP                               ; 00518586
    FLD float ptr [EDI + 0x8]           ; 00518588
    FSUB float ptr [EBX + 0x8]          ; 0051858b
    FMUL float ptr [ESI + 0x8]          ; 0051858e
    FADDP                               ; 00518591
    FSTP float ptr [ESP + 0x4c]         ; 00518593
    TEST dword ptr [ESP + 0x4c],0x7fffffff ; 00518597
    JZ 0x00518668                       ; 0051859f
        ;   XREF to: 00518668 (CONDITIONAL_JUMP)  ; LAB_00518668
    FLD float ptr [ESI]                 ; 005185a5
        ;   Label: LAB_005185a5
    FMUL float ptr [EBX]                ; 005185a7
    FADD float ptr [ESI + 0xc]          ; 005185a9
    FLD float ptr [ESI + 0x4]           ; 005185ac
    FMUL float ptr [EBX + 0x4]          ; 005185af
    FADDP                               ; 005185b2
    FLD float ptr [ESI + 0x8]           ; 005185b4
    FMUL float ptr [EBX + 0x8]          ; 005185b7
    FADDP                               ; 005185ba
    FCHS                                ; 005185bc
    FDIV float ptr [ESP + 0x4c]         ; 005185be
    FLD float ptr [EDI + 0x4]           ; 005185c2
    FLD float ptr [EDI + 0x8]           ; 005185c5
    FLD float ptr [EDI]                 ; 005185c8
    MOV EDI,ESP                         ; 005185ca
    FSUB float ptr [EBX]                ; 005185cc
    FXCH ST2                            ; 005185ce
    FSUB float ptr [EBX + 0x4]          ; 005185d0
    FXCH                                ; 005185d3
    FSUB float ptr [EBX + 0x8]          ; 005185d5
    FXCH ST2                            ; 005185d8
    FSTP float ptr [ESP + 0x30]         ; 005185da
    FSTP float ptr [ESP + 0x34]         ; 005185de
    LEA ESI,[ESP + 0x30]                ; 005185e2
    FSTP float ptr [ESP + 0x38]         ; 005185e6
    MOVSD ES:EDI,ESI                    ; 005185ea
    MOVSD ES:EDI,ESI                    ; 005185eb
    MOVSD ES:EDI,ESI                    ; 005185ec
    FLD float ptr [ESP]                 ; 005185ed
    FXCH                                ; 005185f0
    FSTP float ptr [ESP + 0x48]         ; 005185f2
    FMUL float ptr [ESP + 0x48]         ; 005185f6
    FLD float ptr [ESP + 0x4]           ; 005185fa
    FMUL float ptr [ESP + 0x48]         ; 005185fe
    FLD float ptr [ESP + 0x8]           ; 00518602
    FMUL float ptr [ESP + 0x48]         ; 00518606
    LEA EDI,[ESP + 0x24]                ; 0051860a
    LEA ESI,[ESP + 0x3c]                ; 0051860e
    FXCH ST2                            ; 00518612
    FSTP float ptr [ESP + 0x3c]         ; 00518614
    FSTP float ptr [ESP + 0x40]         ; 00518618
    FSTP float ptr [ESP + 0x44]         ; 0051861c
    MOVSD ES:EDI,ESI                    ; 00518620
    MOVSD ES:EDI,ESI                    ; 00518621
    MOVSD ES:EDI,ESI                    ; 00518622
    LEA EAX,[ESP + 0x18]                ; 00518623
    FLD float ptr [EBX]                 ; 00518627
    FLD float ptr [EBX + 0x4]           ; 00518629
    FLD float ptr [EBX + 0x8]           ; 0051862c
    LEA EDI,[ESP + 0x18]                ; 0051862f
    LEA ESI,[ESP + 0xc]                 ; 00518633
    FXCH ST2                            ; 00518637
    FADD float ptr [ESP + 0x24]         ; 00518639
    FXCH                                ; 0051863d
    FADD float ptr [ESP + 0x28]         ; 0051863f
    FXCH ST2                            ; 00518643
    FADD float ptr [ESP + 0x2c]         ; 00518645
    FXCH                                ; 00518649
    FSTP float ptr [ESP + 0xc]          ; 0051864b
    FXCH                                ; 0051864f
    FSTP float ptr [ESP + 0x10]         ; 00518651
    FSTP float ptr [ESP + 0x14]         ; 00518655
    MOVSD ES:EDI,ESI                    ; 00518659
    MOVSD ES:EDI,ESI                    ; 0051865a
    MOVSD ES:EDI,ESI                    ; 0051865b
    CMP EBP,EAX                         ; 0051865c
    JNZ 0x0051868f                      ; 0051865e
        ;   XREF to: 0051868f (CONDITIONAL_JUMP)  ; LAB_0051868f
    ADD ESP,0x50                        ; 00518660
    POP EBP                             ; 00518663
    POP EDI                             ; 00518664
    POP ESI                             ; 00518665
    POP EBX                             ; 00518666
    RET                                 ; 00518667
    MOV ECX,0x5e904b                    ; 00518668 | = "..\\core\\mirror.cpp"
        ;   Label: LAB_00518668
    MOV EAX,0x42                        ; 0051866d
    PUSH 0x5e905e                       ; 00518672 | = "Bad clip!"
    MOV dword ptr [0x01d1d400],ECX      ; 00518677 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0051867d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00518682
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00518687
    JMP 0x005185a5                      ; 0051868a
        ;   XREF to: 005185a5 (UNCONDITIONAL_JUMP)  ; LAB_005185a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051868f
        ;   Label: LAB_0051868f
    MOV dword ptr [EBP],EAX             ; 00518693
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00518696
    MOV dword ptr [EBP + 0x4],EAX       ; 0051869a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051869d
    MOV dword ptr [EBP + 0x8],EAX       ; 005186a1
    ADD ESP,0x50                        ; 005186a4
    POP EBP                             ; 005186a7
    POP EDI                             ; 005186a8
    POP ESI                             ; 005186a9
    POP EBX                             ; 005186aa
    RET                                 ; 005186ab

