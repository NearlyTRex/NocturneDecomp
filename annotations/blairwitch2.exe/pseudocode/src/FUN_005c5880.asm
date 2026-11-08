; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; WORD FUN_005c5880(uint *param_1)
;
;
; XREF[1]:
;   FUN_005c4030 at 005c403b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5880
        ;   Label: FUN_005c5880
    SUB ESP,0x10                        ; 005c5881
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c5884
    MOV EAX,ESP                         ; 005c5888
    PUSH EAX                            ; 005c588a
    CALL dword ptr CS:[0x5c85a4]        ; 005c588b
    XOR EAX,EAX                         ; 005c5892
    MOV AX,word ptr [ESP]               ; 005c5894
    SUB EAX,0x76c                       ; 005c5898
    MOV dword ptr [EBX + 0x14],EAX      ; 005c589d
    XOR EAX,EAX                         ; 005c58a0
    MOV AX,word ptr [ESP + 0x2]         ; 005c58a2
    DEC EAX                             ; 005c58a7
    MOV dword ptr [EBX + 0x10],EAX      ; 005c58a8
    XOR EAX,EAX                         ; 005c58ab
    MOV AX,word ptr [ESP + 0x6]         ; 005c58ad
    MOV dword ptr [EBX + 0xc],EAX       ; 005c58b2
    XOR EAX,EAX                         ; 005c58b5
    MOV AX,word ptr [ESP + 0x8]         ; 005c58b7
    MOV dword ptr [EBX + 0x8],EAX       ; 005c58bc
    XOR EAX,EAX                         ; 005c58bf
    MOV AX,word ptr [ESP + 0xa]         ; 005c58c1
    MOV dword ptr [EBX + 0x4],EAX       ; 005c58c6
    XOR EAX,EAX                         ; 005c58c9
    MOV AX,word ptr [ESP + 0xc]         ; 005c58cb
    MOV dword ptr [EBX + 0x20],0xffffffff ; 005c58d0
    MOV dword ptr [EBX],EAX             ; 005c58d7
    XOR EAX,EAX                         ; 005c58d9
    MOV AX,word ptr [ESP + 0xe]         ; 005c58db
    ADD ESP,0x10                        ; 005c58e0
    POP EBX                             ; 005c58e3
    RET                                 ; 005c58e4

