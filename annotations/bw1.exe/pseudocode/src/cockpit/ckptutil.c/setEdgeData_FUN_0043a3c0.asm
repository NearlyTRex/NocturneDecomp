; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_setEdgeData_FUN_0043a3c0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,ushort param_6,byte param_7)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a3c0
        ;   Label: cockpit_ckptutil.c_setEdgeData_FUN_0043a3c0
    PUSH ESI                            ; 0043a3c1
    PUSH EDI                            ; 0043a3c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043a3c3
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043a3c7
    SHL EAX,0x3                         ; 0043a3cb
    ADD EAX,EDX                         ; 0043a3ce
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043a3d0
    MOV BX,word ptr [EAX]               ; 0043a3d4
    MOV SI,word ptr [EAX + 0x2]         ; 0043a3d7
    AND EBX,0xffff0000                  ; 0043a3db
    AND ESI,0xffff0000                  ; 0043a3e1
    MOV word ptr [EAX],BX               ; 0043a3e7
    MOV ECX,EBX                         ; 0043a3ea
    MOV word ptr [EAX + 0x2],SI         ; 0043a3ec
    MOV EDI,ESI                         ; 0043a3f0
    MOV BX,word ptr [EAX + 0x4]         ; 0043a3f2
    MOV SI,word ptr [EAX + 0x6]         ; 0043a3f6
    OR ECX,EDX                          ; 0043a3fa
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043a3fc
    AND EBX,0xffff0000                  ; 0043a400
    AND ESI,0xffff8000                  ; 0043a406
    MOV word ptr [EAX],CX               ; 0043a40c
    MOV ECX,EBX                         ; 0043a40f
    OR EDI,EDX                          ; 0043a411
    MOV word ptr [EAX + 0x4],BX         ; 0043a413
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043a417
    MOV word ptr [EAX + 0x2],DI         ; 0043a41b
    OR ECX,EDX                          ; 0043a41f
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043a421
    MOV EDI,ESI                         ; 0043a425
    AND DH,0x7f                         ; 0043a427
    MOV word ptr [EAX + 0x6],SI         ; 0043a42a
    OR EDI,EDX                          ; 0043a42e
    MOV word ptr [EAX + 0x6],DI         ; 0043a430
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043a434
    MOV BL,byte ptr [EAX + 0x7]         ; 0043a438
    XOR DH,DH                           ; 0043a43b
    AND BL,0x7f                         ; 0043a43d
    AND DL,0x1                          ; 0043a440
    MOV byte ptr [EAX + 0x7],BL         ; 0043a443
    SHL EDX,0xf                         ; 0043a446
    MOV BX,word ptr [EAX + 0x6]         ; 0043a449
    MOV word ptr [EAX + 0x4],CX         ; 0043a44d
    OR EBX,EDX                          ; 0043a451
    MOV word ptr [EAX + 0x6],BX         ; 0043a453
    POP EDI                             ; 0043a457
    POP ESI                             ; 0043a458
    POP EBX                             ; 0043a459
    RET                                 ; 0043a45a

