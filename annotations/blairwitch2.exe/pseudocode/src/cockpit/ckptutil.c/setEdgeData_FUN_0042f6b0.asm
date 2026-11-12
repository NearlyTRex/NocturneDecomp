; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_setEdgeData_FUN_0042f6b0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,ushort param_6,byte param_7)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f6b0
        ;   Label: cockpit_ckptutil.c_setEdgeData_FUN_0042f6b0
    PUSH ESI                            ; 0042f6b1
    PUSH EDI                            ; 0042f6b2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042f6b3
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042f6b7
    SHL EAX,0x3                         ; 0042f6bb
    ADD EAX,EDX                         ; 0042f6be
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042f6c0
    MOV BX,word ptr [EAX]               ; 0042f6c4
    MOV SI,word ptr [EAX + 0x2]         ; 0042f6c7
    AND EBX,0xffff0000                  ; 0042f6cb
    AND ESI,0xffff0000                  ; 0042f6d1
    MOV word ptr [EAX],BX               ; 0042f6d7
    MOV ECX,EBX                         ; 0042f6da
    MOV word ptr [EAX + 0x2],SI         ; 0042f6dc
    MOV EDI,ESI                         ; 0042f6e0
    MOV BX,word ptr [EAX + 0x4]         ; 0042f6e2
    MOV SI,word ptr [EAX + 0x6]         ; 0042f6e6
    OR ECX,EDX                          ; 0042f6ea
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042f6ec
    AND EBX,0xffff0000                  ; 0042f6f0
    AND ESI,0xffff8000                  ; 0042f6f6
    MOV word ptr [EAX],CX               ; 0042f6fc
    MOV ECX,EBX                         ; 0042f6ff
    OR EDI,EDX                          ; 0042f701
    MOV word ptr [EAX + 0x4],BX         ; 0042f703
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042f707
    MOV word ptr [EAX + 0x2],DI         ; 0042f70b
    OR ECX,EDX                          ; 0042f70f
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042f711
    MOV EDI,ESI                         ; 0042f715
    AND DH,0x7f                         ; 0042f717
    MOV word ptr [EAX + 0x6],SI         ; 0042f71a
    OR EDI,EDX                          ; 0042f71e
    MOV word ptr [EAX + 0x6],DI         ; 0042f720
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042f724
    MOV BL,byte ptr [EAX + 0x7]         ; 0042f728
    XOR DH,DH                           ; 0042f72b
    AND BL,0x7f                         ; 0042f72d
    AND DL,0x1                          ; 0042f730
    MOV byte ptr [EAX + 0x7],BL         ; 0042f733
    SHL EDX,0xf                         ; 0042f736
    MOV BX,word ptr [EAX + 0x6]         ; 0042f739
    MOV word ptr [EAX + 0x4],CX         ; 0042f73d
    OR EBX,EDX                          ; 0042f741
    MOV word ptr [EAX + 0x6],BX         ; 0042f743
    POP EDI                             ; 0042f747
    POP ESI                             ; 0042f748
    POP EBX                             ; 0042f749
    RET                                 ; 0042f74a

