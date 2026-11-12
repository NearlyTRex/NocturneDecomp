; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004f9610(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   clip_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   out_intersection
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
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_004f9770 at 004f9850
;
; Referenced Globals:
;   TerminatedCString s_core_mirror_cpp_005de004
;   TerminatedCString s_Bad_clip_005de017
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9610
        ;   Label: core_mirror.cpp_computePlaneIntersection_FUN_004f9610
    PUSH ESI                            ; 004f9611
    PUSH EDI                            ; 004f9612
    PUSH EBP                            ; 004f9613
    SUB ESP,0x50                        ; 004f9614
    MOV ESI,dword ptr [ESP + 0x64]      ; 004f9617
    MOV EBX,dword ptr [ESP + 0x68]      ; 004f961b
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004f961f
    MOV EBP,dword ptr [ESP + 0x70]      ; 004f9623
    FLD float ptr [EDI + 0x4]           ; 004f9627
    FSUB float ptr [EBX + 0x4]          ; 004f962a
    FMUL float ptr [ESI + 0x4]          ; 004f962d
    FLD float ptr [EDI]                 ; 004f9630
    FSUB float ptr [EBX]                ; 004f9632
    FMUL float ptr [ESI]                ; 004f9634
    FADDP                               ; 004f9636
    FLD float ptr [EDI + 0x8]           ; 004f9638
    FSUB float ptr [EBX + 0x8]          ; 004f963b
    FMUL float ptr [ESI + 0x8]          ; 004f963e
    FADDP                               ; 004f9641
    FSTP float ptr [ESP + 0x4c]         ; 004f9643
    TEST dword ptr [ESP + 0x4c],0x7fffffff ; 004f9647
    JZ 0x004f9718                       ; 004f964f
        ;   XREF to: 004f9718 (CONDITIONAL_JUMP)  ; LAB_004f9718
    FLD float ptr [ESI]                 ; 004f9655
        ;   Label: LAB_004f9655
    FMUL float ptr [EBX]                ; 004f9657
    FADD float ptr [ESI + 0xc]          ; 004f9659
    FLD float ptr [ESI + 0x4]           ; 004f965c
    FMUL float ptr [EBX + 0x4]          ; 004f965f
    FADDP                               ; 004f9662
    FLD float ptr [ESI + 0x8]           ; 004f9664
    FMUL float ptr [EBX + 0x8]          ; 004f9667
    FADDP                               ; 004f966a
    FCHS                                ; 004f966c
    FDIV float ptr [ESP + 0x4c]         ; 004f966e
    FLD float ptr [EDI + 0x4]           ; 004f9672
    FLD float ptr [EDI + 0x8]           ; 004f9675
    FLD float ptr [EDI]                 ; 004f9678
    MOV EDI,ESP                         ; 004f967a
    FSUB float ptr [EBX]                ; 004f967c
    FXCH ST2                            ; 004f967e
    FSUB float ptr [EBX + 0x4]          ; 004f9680
    FXCH                                ; 004f9683
    FSUB float ptr [EBX + 0x8]          ; 004f9685
    FXCH ST2                            ; 004f9688
    FSTP float ptr [ESP + 0x30]         ; 004f968a
    FSTP float ptr [ESP + 0x34]         ; 004f968e
    LEA ESI,[ESP + 0x30]                ; 004f9692
    FSTP float ptr [ESP + 0x38]         ; 004f9696
    MOVSD ES:EDI,ESI                    ; 004f969a
    MOVSD ES:EDI,ESI                    ; 004f969b
    MOVSD ES:EDI,ESI                    ; 004f969c
    FLD float ptr [ESP]                 ; 004f969d
    FXCH                                ; 004f96a0
    FSTP float ptr [ESP + 0x48]         ; 004f96a2
    FMUL float ptr [ESP + 0x48]         ; 004f96a6
    FLD float ptr [ESP + 0x4]           ; 004f96aa
    FMUL float ptr [ESP + 0x48]         ; 004f96ae
    FLD float ptr [ESP + 0x8]           ; 004f96b2
    FMUL float ptr [ESP + 0x48]         ; 004f96b6
    LEA EDI,[ESP + 0x24]                ; 004f96ba
    LEA ESI,[ESP + 0x3c]                ; 004f96be
    FXCH ST2                            ; 004f96c2
    FSTP float ptr [ESP + 0x3c]         ; 004f96c4
    FSTP float ptr [ESP + 0x40]         ; 004f96c8
    FSTP float ptr [ESP + 0x44]         ; 004f96cc
    MOVSD ES:EDI,ESI                    ; 004f96d0
    MOVSD ES:EDI,ESI                    ; 004f96d1
    MOVSD ES:EDI,ESI                    ; 004f96d2
    LEA EAX,[ESP + 0x18]                ; 004f96d3
    FLD float ptr [EBX]                 ; 004f96d7
    FLD float ptr [EBX + 0x4]           ; 004f96d9
    FLD float ptr [EBX + 0x8]           ; 004f96dc
    LEA EDI,[ESP + 0x18]                ; 004f96df
    LEA ESI,[ESP + 0xc]                 ; 004f96e3
    FXCH ST2                            ; 004f96e7
    FADD float ptr [ESP + 0x24]         ; 004f96e9
    FXCH                                ; 004f96ed
    FADD float ptr [ESP + 0x28]         ; 004f96ef
    FXCH ST2                            ; 004f96f3
    FADD float ptr [ESP + 0x2c]         ; 004f96f5
    FXCH                                ; 004f96f9
    FSTP float ptr [ESP + 0xc]          ; 004f96fb
    FXCH                                ; 004f96ff
    FSTP float ptr [ESP + 0x10]         ; 004f9701
    FSTP float ptr [ESP + 0x14]         ; 004f9705
    MOVSD ES:EDI,ESI                    ; 004f9709
    MOVSD ES:EDI,ESI                    ; 004f970a
    MOVSD ES:EDI,ESI                    ; 004f970b
    CMP EBP,EAX                         ; 004f970c
    JNZ 0x004f973f                      ; 004f970e
        ;   XREF to: 004f973f (CONDITIONAL_JUMP)  ; LAB_004f973f
    ADD ESP,0x50                        ; 004f9710
    POP EBP                             ; 004f9713
    POP EDI                             ; 004f9714
    POP ESI                             ; 004f9715
    POP EBX                             ; 004f9716
    RET                                 ; 004f9717
    MOV ECX,0x5de004                    ; 004f9718 | = "..\\core\\mirror.cpp"
        ;   Label: LAB_004f9718
    MOV EAX,0x42                        ; 004f971d
    PUSH 0x5de017                       ; 004f9722 | = "Bad clip!"
    MOV dword ptr [0x01d046a0],ECX      ; 004f9727 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004f972d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f9732
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f9737
    JMP 0x004f9655                      ; 004f973a
        ;   XREF to: 004f9655 (UNCONDITIONAL_JUMP)  ; LAB_004f9655
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f973f
        ;   Label: LAB_004f973f
    MOV dword ptr [EBP],EAX             ; 004f9743
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f9746
    MOV dword ptr [EBP + 0x4],EAX       ; 004f974a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f974d
    MOV dword ptr [EBP + 0x8],EAX       ; 004f9751
    ADD ESP,0x50                        ; 004f9754
    POP EBP                             ; 004f9757
    POP EDI                             ; 004f9758
    POP ESI                             ; 004f9759
    POP EBX                             ; 004f975a
    RET                                 ; 004f975b

