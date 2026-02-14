; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_004355c0(SEdge *edge_array,int edge_count,int flip_width)
;
; Parameters:
; SEdge *          Stack[0x4]:4   edge_array
; int              Stack[0x8]:4   edge_count
; int              Stack[0xc]:4   flip_width
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004355c0
        ;   Label: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0
    PUSH ESI                            ; 004355c1
    PUSH EDI                            ; 004355c2
    PUSH EBP                            ; 004355c3
    SUB ESP,0x1c                        ; 004355c4
    MOV EBP,dword ptr [ESP + 0x34]      ; 004355c7
    XOR ECX,ECX                         ; 004355cb
    TEST EBP,EBP                        ; 004355cd
    JLE 0x004356a4                      ; 004355cf
        ;   XREF to: 004356a4 (CONDITIONAL_JUMP)  ; LAB_004356a4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004355d5
    MOV SI,word ptr [EAX + 0x2]         ; 004355d9
        ;   Label: LAB_004355d9
    MOVSX ESI,SI                        ; 004355dd
    MOV dword ptr [ESP + 0x4],ESI       ; 004355e0
    MOV SI,word ptr [EAX + 0x4]         ; 004355e4
    MOVSX ESI,SI                        ; 004355e8
    MOV EDI,dword ptr [ESP + 0x38]      ; 004355eb
    MOV dword ptr [ESP],ESI             ; 004355ef
    MOV DX,word ptr [EAX]               ; 004355f2
    SUB EDI,dword ptr [ESP]             ; 004355f5
    MOVSX EBX,DX                        ; 004355f8
    MOV dword ptr [ESP + 0xc],EDI       ; 004355fb
    MOV EDI,dword ptr [ESP + 0x38]      ; 004355ff
    SUB EDI,EBX                         ; 00435603
    MOV SI,word ptr [EAX + 0x6]         ; 00435605
    MOV dword ptr [ESP + 0x8],EDI       ; 00435609
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043560d
    ADD ESI,ESI                         ; 00435611
    DEC EDI                             ; 00435613
    SAR SI,0x1                          ; 00435614
    MOV dword ptr [ESP + 0x18],EDI      ; 00435617
    MOV EDI,dword ptr [ESP + 0x8]       ; 0043561b
    MOVSX ESI,SI                        ; 0043561f
    DEC EDI                             ; 00435622
    MOV dword ptr [ESP + 0x14],ESI      ; 00435623
    MOV dword ptr [ESP + 0x10],EDI      ; 00435627
    MOV EDI,dword ptr [ESP]             ; 0043562b
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043562e
    CMP EBX,EDI                         ; 00435632
    JG 0x004356ac                       ; 00435634
        ;   XREF to: 004356ac (CONDITIONAL_JUMP)  ; LAB_004356ac
    MOV DI,word ptr [EAX + 0x2]         ; 00435636
    AND EDX,0xffff0000                  ; 0043563a
    AND EDI,0xffff0000                  ; 00435640
    MOV word ptr [EAX],DX               ; 00435646
    MOV EDX,dword ptr [ESP + 0x14]      ; 00435649
    MOV BX,word ptr [EAX]               ; 0043564d
    MOV word ptr [EAX + 0x2],DI         ; 00435650
    OR EBX,EDX                          ; 00435654
    MOV EDX,dword ptr [ESP + 0x18]      ; 00435656
    MOV word ptr [EAX],BX               ; 0043565a
    MOV EBX,EDI                         ; 0043565d
    MOV DI,word ptr [EAX + 0x4]         ; 0043565f
    OR EBX,EDX                          ; 00435663
    AND EDI,0xffff0000                  ; 00435665
    MOV word ptr [EAX + 0x2],BX         ; 0043566b
    MOV EDX,EDI                         ; 0043566f
    MOV BX,word ptr [EAX + 0x6]         ; 00435671
    MOV word ptr [EAX + 0x4],DI         ; 00435675
    OR EDX,ESI                          ; 00435679
    AND EBX,0xffff8000                  ; 0043567b
    MOV word ptr [EAX + 0x4],DX         ; 00435681
    MOV EDX,dword ptr [ESP + 0x10]      ; 00435685
    MOV ESI,EBX                         ; 00435689
    AND DH,0x7f                         ; 0043568b
    MOV word ptr [EAX + 0x6],BX         ; 0043568e
    OR ESI,EDX                          ; 00435692
    MOV word ptr [EAX + 0x6],SI         ; 00435694
    INC ECX                             ; 00435698
    ADD EAX,0x8                         ; 00435699
    CMP ECX,EBP                         ; 0043569c
    JL 0x004355d9                       ; 0043569e
        ;   XREF to: 004355d9 (CONDITIONAL_JUMP)  ; LAB_004355d9
    ADD ESP,0x1c                        ; 004356a4
        ;   Label: LAB_004356a4
    POP EBP                             ; 004356a7
    POP EDI                             ; 004356a8
    POP ESI                             ; 004356a9
    POP EBX                             ; 004356aa
    RET                                 ; 004356ab
    AND EDX,0xffff0000                  ; 004356ac
        ;   Label: LAB_004356ac
    MOV BX,word ptr [EAX + 0x2]         ; 004356b2
    MOV EDI,EDX                         ; 004356b6
    AND EBX,0xffff0000                  ; 004356b8
    MOV word ptr [EAX],DX               ; 004356be
    OR EDI,ESI                          ; 004356c1
    MOV word ptr [EAX + 0x2],BX         ; 004356c3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004356c7
    MOV word ptr [EAX],DI               ; 004356cb
    MOV ESI,EBX                         ; 004356ce
    MOV DI,word ptr [EAX + 0x4]         ; 004356d0
    OR ESI,EDX                          ; 004356d4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004356d6
    AND EDI,0xffff0000                  ; 004356da
    MOV word ptr [EAX + 0x2],SI         ; 004356e0
    MOV EBX,EDI                         ; 004356e4
    MOV SI,word ptr [EAX + 0x6]         ; 004356e6
    MOV word ptr [EAX + 0x4],DI         ; 004356ea
    AND ESI,0xffff8000                  ; 004356ee
    OR EBX,EDX                          ; 004356f4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004356f6
    MOV EDI,ESI                         ; 004356fa
    MOV word ptr [EAX + 0x4],BX         ; 004356fc
    AND DH,0x7f                         ; 00435700
    MOV word ptr [EAX + 0x6],SI         ; 00435703
    OR EDI,EDX                          ; 00435707
    MOV word ptr [EAX + 0x6],DI         ; 00435709
    INC ECX                             ; 0043570d
    ADD EAX,0x8                         ; 0043570e
    CMP ECX,EBP                         ; 00435711
    JL 0x004355d9                       ; 00435713
        ;   XREF to: 004355d9 (CONDITIONAL_JUMP)  ; LAB_004355d9
    ADD ESP,0x1c                        ; 00435719
    POP EBP                             ; 0043571c
    POP EDI                             ; 0043571d
    POP ESI                             ; 0043571e
    POP EBX                             ; 0043571f
    RET                                 ; 00435720

