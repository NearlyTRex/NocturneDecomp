; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
; Local Variables:
; SRenderVertex    Stack[-0x70]:48  local_70
; SRenderVertex    Stack[-0x40]:48  local_40
;
; XREF[1]:
;   core_course.cpp_renderCourseGizmo_FUN_00443760 at 00443ac5
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_3d.c_setActiveRenderColor_FUN_00404540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404570
        ;   Label: engine_3d.c_drawLineStrip2D_FUN_00404570
    PUSH ESI                            ; 00404571
    PUSH EDI                            ; 00404572
    PUSH EBP                            ; 00404573
    SUB ESP,0x60                        ; 00404574
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 00404577
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404540()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040457c
    XOR EBP,EBP                         ; 00404580
    ADD EBX,0x8                         ; 00404582
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404585
        ;   Label: LAB_00404585
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404589
    DEC ESI                             ; 0040458c
    CMP EBP,ESI                         ; 0040458d
    JL 0x004045a8                       ; 0040458f
        ;   XREF to: 004045a8 (CONDITIONAL_JUMP)  ; LAB_004045a8
    MOV EBX,dword ptr [ESP + 0x74]      ; 00404591
    MOV EAX,dword ptr [EAX + 0x4]       ; 00404595
    ADD EBX,0x8                         ; 00404598
    SHL EAX,0x2                         ; 0040459b
    ADD EAX,EBX                         ; 0040459e
    ADD ESP,0x60                        ; 004045a0
    POP EBP                             ; 004045a3
    POP EDI                             ; 004045a4
    POP ESI                             ; 004045a5
    POP EBX                             ; 004045a6
    RET                                 ; 004045a7
    IMUL ESI,dword ptr [EBX],0x30       ; 004045a8
        ;   Label: LAB_004045a8
    JMP 0x03fc28a4                      ; 004045ab
        ;   XREF to: 03fc28a4 (UNCONDITIONAL_JUMP)  ; LAB_03fc28a4
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 004045bc
        ;   Label: LAB_004045bc
    MOV EDI,ESP                         ; 004045c0
    JMP 0x03fc2906                      ; 004045c2
        ;   XREF to: 03fc2906 (UNCONDITIONAL_JUMP)  ; LAB_03fc2906
    JMP 0x0060e072                      ; 004045cf
        ;   XREF to: 0060e072 (UNCONDITIONAL_JUMP)  ; LAB_0060e072
        ;   Label: LAB_004045cf
    MOVSD.REP ES:EDI,ESI                ; 004045dd
        ;   Label: LAB_004045dd
    JMP 0x0060e0cb                      ; 004045df
        ;   XREF to: 0060e0cb (UNCONDITIONAL_JUMP)  ; LAB_0060e0cb
    MOVSD.REP ES:EDI,ESI                ; 004045f4
        ;   Label: LAB_004045f4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004045f6
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004045fb
    JMP 0x00404585                      ; 004045fe
        ;   XREF to: 00404585 (UNCONDITIONAL_JUMP)  ; LAB_00404585
    MOV ECX,0xc                         ; 0060e072
        ;   Label: LAB_0060e072
    SUB ESP,0x30                        ; 0060e077
    LEA ESI,[ESP + 0x30]                ; 0060e07a
    MOV EDI,ESP                         ; 0060e07e
    MOV ECX,dword ptr [ESI]             ; 0060e080
    MOV dword ptr [EDI],ECX             ; 0060e082
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e084
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e087
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e08a
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e08d
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e090
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e093
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e096
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e099
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e09c
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e09f
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e0a2
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e0a5
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e0a8
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e0ab
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e0ae
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e0b1
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e0b4
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e0b7
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e0ba
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e0bd
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e0c0
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e0c3
    JMP 0x004045dd                      ; 0060e0c6
        ;   XREF to: 004045dd (UNCONDITIONAL_JUMP)  ; LAB_004045dd
    MOV ECX,0xc                         ; 0060e0cb
        ;   Label: LAB_0060e0cb
    SUB ESP,0x30                        ; 0060e0d0
    LEA ESI,[ESP + 0x90]                ; 0060e0d3
    MOV EDI,ESP                         ; 0060e0da
    ADD EBX,0x4                         ; 0060e0dc
    INC EBP                             ; 0060e0df
    MOV ECX,dword ptr [ESI]             ; 0060e0e0
    MOV dword ptr [EDI],ECX             ; 0060e0e2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e0e4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e0e7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e0ea
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e0ed
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e0f0
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e0f3
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060e0f6
    MOV dword ptr [EDI + 0x10],ECX      ; 0060e0f9
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060e0fc
    MOV dword ptr [EDI + 0x14],ECX      ; 0060e0ff
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060e102
    MOV dword ptr [EDI + 0x18],ECX      ; 0060e105
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060e108
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060e10b
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060e10e
    MOV dword ptr [EDI + 0x20],ECX      ; 0060e111
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060e114
    MOV dword ptr [EDI + 0x24],ECX      ; 0060e117
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060e11a
    MOV dword ptr [EDI + 0x28],ECX      ; 0060e11d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060e120
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060e123
    JMP 0x004045f4                      ; 0060e126
        ;   XREF to: 004045f4 (UNCONDITIONAL_JUMP)  ; LAB_004045f4
    MOV ECX,0xc                         ; 03fc28a4
        ;   Label: LAB_03fc28a4
    LEA EDI,[ESP + 0x30]                ; 03fc28a9
    LEA ESI,[ESI + 0x688014]            ; 03fc28ad
    MOV ECX,dword ptr [ESI]             ; 03fc28b3
    MOV dword ptr [EDI],ECX             ; 03fc28b5
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc28b7
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc28ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc28bd
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc28c0
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc28c3
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc28c6
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc28c9
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc28cc
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc28cf
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc28d2
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc28d5
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc28d8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc28db
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc28de
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc28e1
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc28e4
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc28e7
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc28ea
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc28ed
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc28f0
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc28f3
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc28f6
    ADD ESI,0x30                        ; 03fc28f9
    ADD EDI,0x30                        ; 03fc28fc
    XOR ECX,ECX                         ; 03fc28ff
    JMP 0x004045bc                      ; 03fc2901
        ;   XREF to: 004045bc (UNCONDITIONAL_JUMP)  ; LAB_004045bc
    MOV ECX,0xc                         ; 03fc2906
        ;   Label: LAB_03fc2906
    LEA ESI,[ESI + 0x688014]            ; 03fc290b
    MOV ECX,dword ptr [ESI]             ; 03fc2911
    MOV dword ptr [EDI],ECX             ; 03fc2913
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2915
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2918
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc291b
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc291e
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2921
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2924
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2927
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc292a
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc292d
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2930
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2933
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2936
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2939
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc293c
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc293f
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2942
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2945
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2948
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc294b
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc294e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2951
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2954
    ADD ESI,0x30                        ; 03fc2957
    ADD EDI,0x30                        ; 03fc295a
    XOR ECX,ECX                         ; 03fc295d
    JMP 0x004045cf                      ; 03fc295f
        ;   XREF to: 004045cf (UNCONDITIONAL_JUMP)  ; LAB_004045cf

