; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawVLine_FUN_00403040(int x,int y1,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   y2
;
; XREF[6]:
;   engine_2d.c_drawRect_FUN_00403170 at 0040319d
;   shape_edittool.cpp_FUN_0047b9b0 at 0047b9d4
;   shape_edittool.cpp_FUN_0047ee50 at 0047f3a8
;   shape_edittool.cpp_FUN_0047fa80 at 0048019a
;   shape_edittool.cpp_FUN_004850a0 at 00485259
;   shape_edittool.cpp_FUN_004852f0 at 00485424
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005b51ba
;   TerminatedCString s_vLine_invalid_bitsPerPix_005b51c9
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403040
        ;   Label: engine_2d.c_drawVLine_FUN_00403040
    PUSH ESI                            ; 00403041
    PUSH EDI                            ; 00403042
    PUSH EBP                            ; 00403043
    MOV ESI,dword ptr [ESP + 0x14]      ; 00403044
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403048
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040304c
    CMP ESI,dword ptr [0x01c6b5a8]      ; 00403050 | DAT_01c6b5a8
    JL 0x00403100                       ; 00403056
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    CMP ESI,dword ptr [0x01c6b5b0]      ; 0040305c | DAT_01c6b5b0
    JG 0x00403100                       ; 00403062
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV EDI,dword ptr [0x01c6b5ac]      ; 00403068 | DAT_01c6b5ac
    CMP EAX,EDI                         ; 0040306e
    JGE 0x00403074                      ; 00403070
        ;   XREF to: 00403074 (CONDITIONAL_JUMP)  ; LAB_00403074
    MOV EAX,EDI                         ; 00403072
    MOV EBP,dword ptr [0x01c6b5b4]      ; 00403074 | DAT_01c6b5b4
        ;   Label: LAB_00403074
    CMP EDX,EBP                         ; 0040307a
    JLE 0x00403080                      ; 0040307c
        ;   XREF to: 00403080 (CONDITIONAL_JUMP)  ; LAB_00403080
    MOV EDX,EBP                         ; 0040307e
    CMP EAX,EDX                         ; 00403080
        ;   Label: LAB_00403080
    JG 0x00403100                       ; 00403082
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV EBX,dword ptr [0x005fba20]      ; 00403088 | DAT_005fba20
    LEA ECX,[EDX*0x4 + 0x0]             ; 0040308e
    LEA EBP,[EAX*0x4 + 0x0]             ; 00403095
    CMP EBX,0x10                        ; 0040309c
    JNC 0x00403137                      ; 0040309f
        ;   XREF to: 00403137 (CONDITIONAL_JUMP)  ; LAB_00403137
    CMP EBX,0x8                         ; 004030a5
    JNZ 0x0040313e                      ; 004030a8
        ;   XREF to: 0040313e (CONDITIONAL_JUMP)  ; LAB_0040313e
    MOV EDI,ECX                         ; 004030ae
    MOV EDX,EBP                         ; 004030b0
    CMP EDX,EDI                         ; 004030b2
        ;   Label: LAB_004030b2
    JG 0x00403100                       ; 004030b4
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV BL,byte ptr [0x01c6b5c0]        ; 004030b6 | DAT_01c6b5c0
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 004030bc | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,0x4                         ; 004030c2
    INC EAX                             ; 004030c5
    MOV byte ptr [ECX + ESI*0x1],BL     ; 004030c6
    JMP 0x004030b2                      ; 004030c9
        ;   XREF to: 004030b2 (UNCONDITIONAL_JUMP)  ; LAB_004030b2
    MOV EBX,dword ptr [0x01c6b5c0]      ; 004030cb | DAT_01c6b5c0
        ;   Label: LAB_004030cb
    MOV BX,word ptr [EBX*0x2 + 0x1c6a070] ; 004030d1
    CMP EAX,EDX                         ; 004030d9
    JG 0x00403100                       ; 004030db
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    LEA EDI,[ESI + ESI*0x1]             ; 004030dd
    MOV EDX,EBP                         ; 004030e0
    MOV ESI,ECX                         ; 004030e2
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 004030e4 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_004030e4
    ADD EDX,0x4                         ; 004030ea
    INC EAX                             ; 004030ed
    MOV word ptr [ECX + EDI*0x1],BX     ; 004030ee
    CMP EDX,ESI                         ; 004030f2
    JLE 0x004030e4                      ; 004030f4
        ;   XREF to: 004030e4 (CONDITIONAL_JUMP)  ; LAB_004030e4
    LEA EAX,[EAX]                       ; 004030f6
    LEA EDX,[EDX]                       ; 004030fc
    POP EBP                             ; 00403100
        ;   Label: LAB_00403100
    POP EDI                             ; 00403101
    POP ESI                             ; 00403102
    POP EBX                             ; 00403103
    RET                                 ; 00403104
    MOV EDI,dword ptr [0x01c6b5c0]      ; 00403105 | DAT_01c6b5c0
        ;   Label: LAB_00403105
    MOV EDI,dword ptr [EDI*0x4 + 0x1c6a270] ; 0040310b
    CMP EAX,EDX                         ; 00403112
    JG 0x00403100                       ; 00403114
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    LEA EBX,[ESI*0x4 + 0x0]             ; 00403116
    MOV EDX,EBP                         ; 0040311d
    MOV ESI,ECX                         ; 0040311f
    MOV ECX,dword ptr [EDX + 0x1c5faec] ; 00403121 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_00403121
    ADD EDX,0x4                         ; 00403127
    INC EAX                             ; 0040312a
    MOV dword ptr [ECX + EBX*0x1],EDI   ; 0040312b
    CMP EDX,ESI                         ; 0040312e
    JLE 0x00403121                      ; 00403130
        ;   XREF to: 00403121 (CONDITIONAL_JUMP)  ; LAB_00403121
    POP EBP                             ; 00403132
    POP EDI                             ; 00403133
    POP ESI                             ; 00403134
    POP EBX                             ; 00403135
    RET                                 ; 00403136
    JBE 0x004030cb                      ; 00403137
        ;   XREF to: 004030cb (CONDITIONAL_JUMP)  ; LAB_004030cb
        ;   Label: LAB_00403137
    CMP EBX,0x20                        ; 00403139
    JZ 0x00403105                       ; 0040313c
        ;   XREF to: 00403105 (CONDITIONAL_JUMP)  ; LAB_00403105
    MOV EAX,0x5b51ba                    ; 0040313e | = "..\\engine\\2d.c"
        ;   Label: LAB_0040313e
    MOV EDX,0x8d3                       ; 00403143
    PUSH 0x5b51c9                       ; 00403148 | = "vLine - invalid bitsPerPixel"
    MOV [0x01d71de0],EAX                ; 0040314d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00403152 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00403158
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040315d
    POP EBP                             ; 00403160
    POP EDI                             ; 00403161
    POP ESI                             ; 00403162
    POP EBX                             ; 00403163
    RET                                 ; 00403164

