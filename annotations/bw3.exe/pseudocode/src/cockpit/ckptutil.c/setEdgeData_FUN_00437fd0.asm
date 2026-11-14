; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00437fd0(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)
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

    PUSH EBX                            ; 00437fd0
        ;   Label: cockpit_ckptutil.c_setEdgeData_FUN_00437fd0
    PUSH ESI                            ; 00437fd1
    PUSH EDI                            ; 00437fd2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437fd3
    MOV EDX,dword ptr [ESP + 0x10]      ; 00437fd7
    SHL EAX,0x3                         ; 00437fdb
    ADD EAX,EDX                         ; 00437fde
    MOV EDX,dword ptr [ESP + 0x18]      ; 00437fe0
    MOV BX,word ptr [EAX]               ; 00437fe4
    MOV SI,word ptr [EAX + 0x2]         ; 00437fe7
    AND EBX,0xffff0000                  ; 00437feb
    AND ESI,0xffff0000                  ; 00437ff1
    MOV word ptr [EAX],BX               ; 00437ff7
    MOV ECX,EBX                         ; 00437ffa
    MOV word ptr [EAX + 0x2],SI         ; 00437ffc
    MOV EDI,ESI                         ; 00438000
    MOV BX,word ptr [EAX + 0x4]         ; 00438002
    MOV SI,word ptr [EAX + 0x6]         ; 00438006
    OR ECX,EDX                          ; 0043800a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043800c
    AND EBX,0xffff0000                  ; 00438010
    AND ESI,0xffff8000                  ; 00438016
    MOV word ptr [EAX],CX               ; 0043801c
    MOV ECX,EBX                         ; 0043801f
    OR EDI,EDX                          ; 00438021
    MOV word ptr [EAX + 0x4],BX         ; 00438023
    MOV EDX,dword ptr [ESP + 0x20]      ; 00438027
    MOV word ptr [EAX + 0x2],DI         ; 0043802b
    OR ECX,EDX                          ; 0043802f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00438031
    MOV EDI,ESI                         ; 00438035
    AND DH,0x7f                         ; 00438037
    MOV word ptr [EAX + 0x6],SI         ; 0043803a
    OR EDI,EDX                          ; 0043803e
    MOV word ptr [EAX + 0x6],DI         ; 00438040
    MOV EDX,dword ptr [ESP + 0x28]      ; 00438044
    MOV BL,byte ptr [EAX + 0x7]         ; 00438048
    XOR DH,DH                           ; 0043804b
    AND BL,0x7f                         ; 0043804d
    AND DL,0x1                          ; 00438050
    MOV byte ptr [EAX + 0x7],BL         ; 00438053
    SHL EDX,0xf                         ; 00438056
    MOV BX,word ptr [EAX + 0x6]         ; 00438059
    MOV word ptr [EAX + 0x4],CX         ; 0043805d
    OR EBX,EDX                          ; 00438061
    MOV word ptr [EAX + 0x6],BX         ; 00438063
    POP EDI                             ; 00438067
    POP ESI                             ; 00438068
    POP EBX                             ; 00438069
    RET                                 ; 0043806a

