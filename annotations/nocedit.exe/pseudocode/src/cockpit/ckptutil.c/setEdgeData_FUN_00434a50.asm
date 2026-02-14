; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00434a50(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)
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

    PUSH EBX                            ; 00434a50
        ;   Label: cockpit_ckptutil.c_setEdgeData_FUN_00434a50
    PUSH ESI                            ; 00434a51
    PUSH EDI                            ; 00434a52
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434a53
    MOV EDX,dword ptr [ESP + 0x10]      ; 00434a57
    SHL EAX,0x3                         ; 00434a5b
    ADD EAX,EDX                         ; 00434a5e
    MOV EDX,dword ptr [ESP + 0x18]      ; 00434a60
    MOV BX,word ptr [EAX]               ; 00434a64
    MOV SI,word ptr [EAX + 0x2]         ; 00434a67
    AND EBX,0xffff0000                  ; 00434a6b
    AND ESI,0xffff0000                  ; 00434a71
    MOV word ptr [EAX],BX               ; 00434a77
    MOV ECX,EBX                         ; 00434a7a
    MOV word ptr [EAX + 0x2],SI         ; 00434a7c
    MOV EDI,ESI                         ; 00434a80
    MOV BX,word ptr [EAX + 0x4]         ; 00434a82
    MOV SI,word ptr [EAX + 0x6]         ; 00434a86
    OR ECX,EDX                          ; 00434a8a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00434a8c
    AND EBX,0xffff0000                  ; 00434a90
    AND ESI,0xffff8000                  ; 00434a96
    MOV word ptr [EAX],CX               ; 00434a9c
    MOV ECX,EBX                         ; 00434a9f
    OR EDI,EDX                          ; 00434aa1
    MOV word ptr [EAX + 0x4],BX         ; 00434aa3
    MOV EDX,dword ptr [ESP + 0x20]      ; 00434aa7
    MOV word ptr [EAX + 0x2],DI         ; 00434aab
    OR ECX,EDX                          ; 00434aaf
    MOV EDX,dword ptr [ESP + 0x24]      ; 00434ab1
    MOV EDI,ESI                         ; 00434ab5
    AND DH,0x7f                         ; 00434ab7
    MOV word ptr [EAX + 0x6],SI         ; 00434aba
    OR EDI,EDX                          ; 00434abe
    MOV word ptr [EAX + 0x6],DI         ; 00434ac0
    MOV EDX,dword ptr [ESP + 0x28]      ; 00434ac4
    MOV BL,byte ptr [EAX + 0x7]         ; 00434ac8
    XOR DH,DH                           ; 00434acb
    AND BL,0x7f                         ; 00434acd
    AND DL,0x1                          ; 00434ad0
    MOV byte ptr [EAX + 0x7],BL         ; 00434ad3
    SHL EDX,0xf                         ; 00434ad6
    MOV BX,word ptr [EAX + 0x6]         ; 00434ad9
    MOV word ptr [EAX + 0x4],CX         ; 00434add
    OR EBX,EDX                          ; 00434ae1
    MOV word ptr [EAX + 0x6],BX         ; 00434ae3
    POP EDI                             ; 00434ae7
    POP ESI                             ; 00434ae8
    POP EBX                             ; 00434ae9
    RET                                 ; 00434aea

