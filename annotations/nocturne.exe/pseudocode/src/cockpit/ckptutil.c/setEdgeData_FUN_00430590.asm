; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00430590(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)
;
; Parameters:
; SEdge *          Stack[0x4]:4   edge_array
; int              Stack[0x8]:4   edge_index
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   x2
; int              Stack[0x18]:4   y2
; int              Stack[0x1c]:4   flag_bit
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430590
        ;   Label: cockpit_ckptutil.c_setEdgeData_FUN_00430590
    PUSH ESI                            ; 00430591
    PUSH EDI                            ; 00430592
    MOV EAX,dword ptr [ESP + 0x14]      ; 00430593
    MOV EDX,dword ptr [ESP + 0x10]      ; 00430597
    SHL EAX,0x3                         ; 0043059b
    ADD EAX,EDX                         ; 0043059e
    MOV EDX,dword ptr [ESP + 0x18]      ; 004305a0
    MOV BX,word ptr [EAX]               ; 004305a4
    MOV SI,word ptr [EAX + 0x2]         ; 004305a7
    AND EBX,0xffff0000                  ; 004305ab
    AND ESI,0xffff0000                  ; 004305b1
    MOV word ptr [EAX],BX               ; 004305b7
    MOV ECX,EBX                         ; 004305ba
    MOV word ptr [EAX + 0x2],SI         ; 004305bc
    MOV EDI,ESI                         ; 004305c0
    MOV BX,word ptr [EAX + 0x4]         ; 004305c2
    MOV SI,word ptr [EAX + 0x6]         ; 004305c6
    OR ECX,EDX                          ; 004305ca
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004305cc
    AND EBX,0xffff0000                  ; 004305d0
    AND ESI,0xffff8000                  ; 004305d6
    MOV word ptr [EAX],CX               ; 004305dc
    MOV ECX,EBX                         ; 004305df
    OR EDI,EDX                          ; 004305e1
    MOV word ptr [EAX + 0x4],BX         ; 004305e3
    MOV EDX,dword ptr [ESP + 0x20]      ; 004305e7
    MOV word ptr [EAX + 0x2],DI         ; 004305eb
    OR ECX,EDX                          ; 004305ef
    MOV EDX,dword ptr [ESP + 0x24]      ; 004305f1
    MOV EDI,ESI                         ; 004305f5
    AND DH,0x7f                         ; 004305f7
    MOV word ptr [EAX + 0x6],SI         ; 004305fa
    OR EDI,EDX                          ; 004305fe
    MOV word ptr [EAX + 0x6],DI         ; 00430600
    MOV EDX,dword ptr [ESP + 0x28]      ; 00430604
    MOV BL,byte ptr [EAX + 0x7]         ; 00430608
    XOR DH,DH                           ; 0043060b
    AND BL,0x7f                         ; 0043060d
    AND DL,0x1                          ; 00430610
    MOV byte ptr [EAX + 0x7],BL         ; 00430613
    SHL EDX,0xf                         ; 00430616
    MOV BX,word ptr [EAX + 0x6]         ; 00430619
    MOV word ptr [EAX + 0x4],CX         ; 0043061d
    OR EBX,EDX                          ; 00430621
    MOV word ptr [EAX + 0x6],BX         ; 00430623
    POP EDI                             ; 00430627
    POP ESI                             ; 00430628
    POP EBX                             ; 00430629
    RET                                 ; 0043062a

