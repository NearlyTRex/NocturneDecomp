; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_computeSortedPolygonKey_FUN_004059c0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; XREF[1]:
;   engine_3d.c_queueSortedPolygon_FUN_00405ab0 at 00405af6
;
; Referenced Globals:
;   undefined4 DAT_005c501c
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b0268
;   undefined4 DAT_006b02e8
;   undefined4 DAT_006b02ec
;   undefined4 DAT_006b02f0
;   undefined4 DAT_006b02f4
;   undefined4 DAT_006b02f8
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004059c0
        ;   Label: engine_3d.c_computeSortedPolygonKey_FUN_004059c0
    PUSH ESI                            ; 004059c1
    PUSH EDI                            ; 004059c2
    PUSH EBP                            ; 004059c3
    MOV EDI,dword ptr [0x006b0264]      ; 004059c4 | DAT_006b0264
    MOV ESI,dword ptr [ESP + 0x14]      ; 004059ca
    MOV EDX,dword ptr [ESI + 0x18]      ; 004059ce
    ADD EDX,EDI                         ; 004059d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004059d3
    SUB EAX,EDX                         ; 004059da
    MOV ECX,dword ptr [ESI + 0x4]       ; 004059dc
    SHL EAX,0x4                         ; 004059df
    MOV EDX,0x1                         ; 004059e2
    MOV EBX,dword ptr [EAX + 0x5c501c]  ; 004059e7 | DAT_005c501c
    CMP ECX,EDX                         ; 004059ed
    JLE 0x00405a13                      ; 004059ef
        ;   XREF to: 00405a13 (CONDITIONAL_JUMP)  ; LAB_00405a13
    LEA ECX,[ESI + 0xc]                 ; 004059f1
    MOV EAX,dword ptr [ECX + 0x18]      ; 004059f4
        ;   Label: LAB_004059f4
    ADD EAX,EDI                         ; 004059f7
    IMUL EAX,EAX,0x30                   ; 004059f9
    MOV EBP,dword ptr [EAX + 0x5c501c]  ; 004059fc | DAT_005c501c
    CMP EBX,EBP                         ; 00405a02
    JLE 0x00405a08                      ; 00405a04
        ;   XREF to: 00405a08 (CONDITIONAL_JUMP)  ; LAB_00405a08
    MOV EBX,EBP                         ; 00405a06
    INC EDX                             ; 00405a08
        ;   Label: LAB_00405a08
    MOV EBP,dword ptr [ESI + 0x4]       ; 00405a09
    ADD ECX,0xc                         ; 00405a0c
    CMP EDX,EBP                         ; 00405a0f
    JL 0x004059f4                       ; 00405a11
        ;   XREF to: 004059f4 (CONDITIONAL_JUMP)  ; LAB_004059f4
    MOV EAX,[0x006b0268]                ; 00405a13 | DAT_006b0268
        ;   Label: LAB_00405a13
    SHL EAX,0x5                         ; 00405a18
    MOV dword ptr [EAX + 0x6b02e8],EBX  ; 00405a1b | DAT_006b02e8
    MOV EDX,dword ptr [0x01c039dc]      ; 00405a21 | DAT_01c039dc
    MOV dword ptr [EAX + 0x6b02ec],EDI  ; 00405a27 | DAT_006b02ec
    MOV dword ptr [EAX + 0x6b02f0],EDX  ; 00405a2d | DAT_006b02f0
    MOV EDX,dword ptr [0x01c039e0]      ; 00405a33 | DAT_01c039e0
    MOV dword ptr [EAX + 0x6b02f4],EDX  ; 00405a39 | DAT_006b02f4
    MOV EDX,dword ptr [0x01c039e4]      ; 00405a3f | DAT_01c039e4
    MOV dword ptr [EAX + 0x6b02f8],EDX  ; 00405a45 | DAT_006b02f8
    MOV dword ptr [0x006b0264],EDI      ; 00405a4b | DAT_006b0264
    POP EBP                             ; 00405a51
    POP EDI                             ; 00405a52
    POP ESI                             ; 00405a53
    POP EBX                             ; 00405a54
    RET                                 ; 00405a55

