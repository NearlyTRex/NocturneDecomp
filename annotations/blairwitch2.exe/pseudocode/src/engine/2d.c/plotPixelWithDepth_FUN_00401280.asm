; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401280(int x_coord,int y_coord,uint depth_value)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
; uint             Stack[0xc]:4   depth_value
;
; XREF[1]:
;   engine_2d.c_drawLine3D_FUN_00401310 at 0040139a
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401280
        ;   Label: engine_2d.c_plotPixelWithDepth_FUN_00401280
    PUSH EDI                            ; 00401281
    PUSH EBP                            ; 00401282
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401283
    MOV EAX,dword ptr [ESP + 0x14]      ; 00401287
    SHL EAX,0x2                         ; 0040128b
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040128e
    MOV ECX,dword ptr [EAX + 0x1c2b64c] ; 00401295
    ADD ECX,EDX                         ; 0040129b
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040129d
    CMP EDI,dword ptr [ECX]             ; 004012a1
    JBE 0x004012d9                      ; 004012a3
        ;   XREF to: 004012d9 (CONDITIONAL_JUMP)  ; LAB_004012d9
    MOV EBP,dword ptr [0x006141c0]      ; 004012a5 | DAT_006141c0
    MOV dword ptr [ECX],EDI             ; 004012ab
    CMP EBP,0x8                         ; 004012ad
    JZ 0x004012dd                       ; 004012b0
        ;   XREF to: 004012dd (CONDITIONAL_JUMP)  ; LAB_004012dd
    MOV ECX,dword ptr [0x01c35e60]      ; 004012b2 | DAT_01c35e60
    AND ECX,0xff                        ; 004012b8
    CMP EBP,0x10                        ; 004012be
    JNZ 0x004012f1                      ; 004012c1
        ;   XREF to: 004012f1 (CONDITIONAL_JUMP)  ; LAB_004012f1
    LEA EDX,[EBX + EBX*0x1]             ; 004012c3
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004012c6
    ADD EDX,EAX                         ; 004012cc
    MOV AX,word ptr [ECX*0x2 + 0x1c34910] ; 004012ce
    MOV word ptr [EDX],AX               ; 004012d6
    POP EBP                             ; 004012d9
        ;   Label: LAB_004012d9
    POP EDI                             ; 004012da
    POP EBX                             ; 004012db
    RET                                 ; 004012dc
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004012dd
        ;   Label: LAB_004012dd
    LEA EDX,[EAX + EBX*0x1]             ; 004012e3
    MOV AL,[0x01c35e60]                 ; 004012e6 | DAT_01c35e60
    MOV byte ptr [EDX],AL               ; 004012eb
    POP EBP                             ; 004012ed
    POP EDI                             ; 004012ee
    POP EBX                             ; 004012ef
    RET                                 ; 004012f0
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004012f1
        ;   Label: LAB_004012f1
    ADD EDX,EAX                         ; 004012f7
    MOV EAX,dword ptr [ECX*0x4 + 0x1c34b10] ; 004012f9
    MOV dword ptr [EDX],EAX             ; 00401300
    POP EBP                             ; 00401302
    POP EDI                             ; 00401303
    POP EBX                             ; 00401304
    RET                                 ; 00401305

