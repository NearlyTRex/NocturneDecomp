; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface *this_ptr,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0047ee70 at 0047eedc
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80 at 0047ec9f
;   cockpit_drawsurf.cpp_FUN_0047ef60 at 0047f0e5
;   cockpit_drawsurf.cpp_FUN_0047fb20 at 0047fb98
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481355
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11f0
;   undefined4 DAT_01bc11f4
;   undefined4 DAT_01bc1204
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e870
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870
    PUSH ESI                            ; 0047e871
    PUSH EDI                            ; 0047e872
    PUSH EBP                            ; 0047e873
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047e874
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047e878
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047e87c
    MOV EBX,dword ptr [EDX + 0x8]       ; 0047e880
    MOV ESI,dword ptr [EDX + 0xc]       ; 0047e883
    MOV EDI,dword ptr [EDX + 0x10]      ; 0047e886
    ADD EAX,EBX                         ; 0047e889
    ADD ECX,ESI                         ; 0047e88b
    CMP EAX,EDI                         ; 0047e88d
    JL 0x0047e8db                       ; 0047e88f
        ;   XREF to: 0047e8db (CONDITIONAL_JUMP)  ; LAB_0047e8db
    CMP EAX,dword ptr [EDX + 0x18]      ; 0047e891
    JG 0x0047e8db                       ; 0047e894
        ;   XREF to: 0047e8db (CONDITIONAL_JUMP)  ; LAB_0047e8db
    CMP ECX,dword ptr [EDX + 0x14]      ; 0047e896
    JL 0x0047e8db                       ; 0047e899
        ;   XREF to: 0047e8db (CONDITIONAL_JUMP)  ; LAB_0047e8db
    CMP ECX,dword ptr [EDX + 0x1c]      ; 0047e89b
    JG 0x0047e8db                       ; 0047e89e
        ;   XREF to: 0047e8db (CONDITIONAL_JUMP)  ; LAB_0047e8db
    MOV EDI,dword ptr [0x01bc11f0]      ; 0047e8a0 | DAT_01bc11f0
    LEA ESI,[EAX + EAX*0x1]             ; 0047e8a6
    SHL ECX,0x2                         ; 0047e8a9
    LEA EBX,[EAX*0x4 + 0x0]             ; 0047e8ac
    TEST EDI,EDI                        ; 0047e8b3
    JNZ 0x0047e982                      ; 0047e8b5
        ;   XREF to: 0047e982 (CONDITIONAL_JUMP)  ; LAB_0047e982
    MOV EDX,dword ptr [0x0061b4a0]      ; 0047e8bb | DAT_0061b4a0
    CMP EDX,0x10                        ; 0047e8c1
    JNC 0x0047e932                      ; 0047e8c4
        ;   XREF to: 0047e932 (CONDITIONAL_JUMP)  ; LAB_0047e932
    CMP EDX,0x8                         ; 0047e8c6
    JNZ 0x0047e90a                      ; 0047e8c9
        ;   XREF to: 0047e90a (CONDITIONAL_JUMP)  ; LAB_0047e90a
    MOV EDX,dword ptr [ECX + 0x1c4354c] ; 0047e8cb
    ADD EAX,EDX                         ; 0047e8d1
    MOV DL,byte ptr [0x01bc11e4]        ; 0047e8d3 | DAT_01bc11e4
    MOV byte ptr [EAX],DL               ; 0047e8d9
    POP EBP                             ; 0047e8db
        ;   Label: LAB_0047e8db
    POP EDI                             ; 0047e8dc
    POP ESI                             ; 0047e8dd
    POP EBX                             ; 0047e8de
    RET                                 ; 0047e8df
    MOV EAX,dword ptr [ECX + 0x1c4354c] ; 0047e8e0
        ;   Label: LAB_0047e8e0
    ADD ESI,EAX                         ; 0047e8e6
    MOV AX,[0x01bc11e4]                 ; 0047e8e8 | DAT_01bc11e4
    MOV word ptr [ESI],AX               ; 0047e8ee
    POP EBP                             ; 0047e8f1
    POP EDI                             ; 0047e8f2
    POP ESI                             ; 0047e8f3
    POP EBX                             ; 0047e8f4
    RET                                 ; 0047e8f5
    MOV EAX,dword ptr [ECX + 0x1c4354c] ; 0047e8f6
        ;   Label: LAB_0047e8f6
    ADD EBX,EAX                         ; 0047e8fc
    MOV EAX,[0x01bc11e4]                ; 0047e8fe | DAT_01bc11e4
    MOV dword ptr [EBX],EAX             ; 0047e903
    POP EBP                             ; 0047e905
    POP EDI                             ; 0047e906
    POP ESI                             ; 0047e907
    POP EBX                             ; 0047e908
    RET                                 ; 0047e909
    MOV ECX,0x5db07b                    ; 0047e90a
        ;   Label: LAB_0047e90a
    MOV EBX,0x18e                       ; 0047e90f
    PUSH 0x5db093                       ; 0047e914
    MOV dword ptr [0x01d1d400],ECX      ; 0047e919 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0047e91f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047e925
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047e92a
    POP EBP                             ; 0047e92d
    POP EDI                             ; 0047e92e
    POP ESI                             ; 0047e92f
    POP EBX                             ; 0047e930
    RET                                 ; 0047e931
    JBE 0x0047e8e0                      ; 0047e932
        ;   XREF to: 0047e8e0 (CONDITIONAL_JUMP)  ; LAB_0047e8e0
        ;   Label: LAB_0047e932
    CMP EDX,0x20                        ; 0047e934
    JZ 0x0047e8f6                       ; 0047e937
        ;   XREF to: 0047e8f6 (CONDITIONAL_JUMP)  ; LAB_0047e8f6
    JMP 0x0047e90a                      ; 0047e939
        ;   XREF to: 0047e90a (UNCONDITIONAL_JUMP)  ; LAB_0047e90a
    MOV EAX,dword ptr [ECX + 0x1c4354c] ; 0047e93b
        ;   Label: LAB_0047e93b
    XOR EDX,EDX                         ; 0047e941
    MOV CL,byte ptr [0x01bc11f4]        ; 0047e943 | DAT_01bc11f4
    MOV DX,word ptr [ESI + EAX*0x1]     ; 0047e949
    MOV EBP,dword ptr [0x01bc1204]      ; 0047e94d | DAT_01bc1204
    SHR EDX,CL                          ; 0047e953
    AND EDX,EBP                         ; 0047e955
    MOV word ptr [ESI + EAX*0x1],DX     ; 0047e957
    POP EBP                             ; 0047e95b
    POP EDI                             ; 0047e95c
    POP ESI                             ; 0047e95d
    POP EBX                             ; 0047e95e
    RET                                 ; 0047e95f
    MOV EDX,dword ptr [ECX + 0x1c4354c] ; 0047e960
        ;   Label: LAB_0047e960
    MOV CL,byte ptr [0x01bc11f4]        ; 0047e966 | DAT_01bc11f4
    MOV EAX,dword ptr [EDX + EBX*0x1]   ; 0047e96c
    SHR EAX,CL                          ; 0047e96f
    MOV ECX,EAX                         ; 0047e971
    MOV EAX,[0x01bc1204]                ; 0047e973 | DAT_01bc1204
    AND ECX,EAX                         ; 0047e978
    MOV dword ptr [EDX + EBX*0x1],ECX   ; 0047e97a
    POP EBP                             ; 0047e97d
    POP EDI                             ; 0047e97e
    POP ESI                             ; 0047e97f
    POP EBX                             ; 0047e980
    RET                                 ; 0047e981
    MOV EAX,[0x0061b4a0]                ; 0047e982 | DAT_0061b4a0
        ;   Label: LAB_0047e982
    CMP EAX,0x10                        ; 0047e987
    JNC 0x0047e997                      ; 0047e98a
        ;   XREF to: 0047e997 (CONDITIONAL_JUMP)  ; LAB_0047e997
    CMP EAX,0x8                         ; 0047e98c
    JZ 0x0047e8db                       ; 0047e98f
        ;   XREF to: 0047e8db (CONDITIONAL_JUMP)  ; LAB_0047e8db
    JMP 0x0047e99e                      ; 0047e995
        ;   XREF to: 0047e99e (UNCONDITIONAL_JUMP)  ; LAB_0047e99e
    JBE 0x0047e93b                      ; 0047e997
        ;   XREF to: 0047e93b (CONDITIONAL_JUMP)  ; LAB_0047e93b
        ;   Label: LAB_0047e997
    CMP EAX,0x20                        ; 0047e999
    JZ 0x0047e960                       ; 0047e99c
        ;   XREF to: 0047e960 (CONDITIONAL_JUMP)  ; LAB_0047e960
    MOV EAX,0x5db0a9                    ; 0047e99e
        ;   Label: LAB_0047e99e
    MOV EDX,0x19f                       ; 0047e9a3
    PUSH 0x5db0c1                       ; 0047e9a8
    MOV [0x01d1d400],EAX                ; 0047e9ad | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0047e9b2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047e9b8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047e9bd
    POP EBP                             ; 0047e9c0
    POP EDI                             ; 0047e9c1
    POP ESI                             ; 0047e9c2
    POP EBX                             ; 0047e9c3
    RET                                 ; 0047e9c4

