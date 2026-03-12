; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_00433820(uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y,int buffer_width)
;
; Parameters:
; uchar *          Stack[0x4]:4   color_buffer
; SEdge *          Stack[0x8]:4   edge_array
; int              Stack[0xc]:4   edge_count
; int              Stack[0x10]:4   offset_x
; int              Stack[0x14]:4   offset_y
; int              Stack[0x18]:4   buffer_width
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00433820
        ;   Label: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820
    PUSH EBP                            ; 00433821
    SUB ESP,0x10                        ; 00433822
    CMP dword ptr [ESP + 0x1c],0x0      ; 00433825
    JZ 0x004338df                       ; 0043382a
        ;   XREF to: 004338df (CONDITIONAL_JUMP)  ; LAB_004338df
    MOV ECX,dword ptr [ESP + 0x24]      ; 00433830
    XOR ESI,ESI                         ; 00433834
    TEST ECX,ECX                        ; 00433836
    JLE 0x004338df                      ; 00433838
        ;   XREF to: 004338df (CONDITIONAL_JUMP)  ; LAB_004338df
    PUSH EDI                            ; 0043383e
    PUSH EBX                            ; 0043383f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00433840
    MOV AX,word ptr [EBX]               ; 00433844
        ;   Label: LAB_00433844
    MOVSX ECX,AX                        ; 00433847
    MOV AX,word ptr [EBX + 0x2]         ; 0043384a
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043384e
    CWDE                                ; 00433852
    IMUL EDI,EAX                        ; 00433853
    MOV DX,word ptr [EBX + 0x4]         ; 00433856
    MOVSX EDX,DX                        ; 0043385a
    MOV dword ptr [ESP + 0x8],EDX       ; 0043385d
    MOV DX,word ptr [EBX + 0x6]         ; 00433861
    MOV EBP,dword ptr [ESP + 0x24]      ; 00433865
    ADD EDX,EDX                         ; 00433869
    ADD EDI,EBP                         ; 0043386b
    SAR DX,0x1                          ; 0043386d
    MOVZX EDI,byte ptr [ECX + EDI*0x1]  ; 00433870
    MOVSX EDX,DX                        ; 00433874
    MOV dword ptr [ESP + 0xc],EDI       ; 00433877
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043387b
    IMUL EDI,EDX                        ; 0043387f
    ADD EDI,EBP                         ; 00433882
    ADD EDI,dword ptr [ESP + 0x8]       ; 00433884
    MOVZX EDI,byte ptr [EDI]            ; 00433888
    MOV dword ptr [ESP + 0x10],EDI      ; 0043388b
    MOV DI,word ptr [EBX + 0x6]         ; 0043388f
    SHR DI,0xf                          ; 00433893
    MOV dword ptr [ESP + 0x14],EDI      ; 00433897
    XOR EDI,EDI                         ; 0043389b
    MOV DI,word ptr [ESP + 0x14]        ; 0043389d
    PUSH EDI                            ; 004338a2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004338a3
    PUSH EDI                            ; 004338a7
    MOV EBP,dword ptr [ESP + 0x14]      ; 004338a8
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004338ac
    PUSH EBP                            ; 004338b0
    ADD EDX,EDI                         ; 004338b1
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004338b3
    PUSH EDX                            ; 004338b7
    MOV EDX,dword ptr [ESP + 0x18]      ; 004338b8
    ADD EDX,EBP                         ; 004338bc
    PUSH EDX                            ; 004338be
    ADD EAX,EDI                         ; 004338bf
    PUSH EAX                            ; 004338c1
    ADD ECX,EBP                         ; 004338c2
    PUSH ECX                            ; 004338c4
    CALL cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 ; 004338c5
        ;   XREF to: 004339c0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x1c                        ; 004338ca
    INC ESI                             ; 004338cd
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004338ce
    ADD EBX,0x8                         ; 004338d2
    CMP ESI,EBP                         ; 004338d5
    JL 0x00433844                       ; 004338d7
        ;   XREF to: 00433844 (CONDITIONAL_JUMP)  ; LAB_00433844
    POP EBX                             ; 004338dd
    POP EDI                             ; 004338de
    ADD ESP,0x10                        ; 004338df
        ;   Label: LAB_004338df
    POP EBP                             ; 004338e2
    POP ESI                             ; 004338e3
    RET                                 ; 004338e4

