; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; WORD unkafter_2d_cpp_FUN_005cdb80(uint *param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cc330 at 005cc33b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdb80
        ;   Label: unkafter_2d.cpp_FUN_005cdb80
    SUB ESP,0x10                        ; 005cdb81
    MOV EBX,dword ptr [ESP + 0x18]      ; 005cdb84
    MOV EAX,ESP                         ; 005cdb88
    PUSH EAX                            ; 005cdb8a
    CALL dword ptr CS:[0x5d05b4]        ; 005cdb8b
    XOR EAX,EAX                         ; 005cdb92
    MOV AX,word ptr [ESP]               ; 005cdb94
    SUB EAX,0x76c                       ; 005cdb98
    MOV dword ptr [EBX + 0x14],EAX      ; 005cdb9d
    XOR EAX,EAX                         ; 005cdba0
    MOV AX,word ptr [ESP + 0x2]         ; 005cdba2
    DEC EAX                             ; 005cdba7
    MOV dword ptr [EBX + 0x10],EAX      ; 005cdba8
    XOR EAX,EAX                         ; 005cdbab
    MOV AX,word ptr [ESP + 0x6]         ; 005cdbad
    MOV dword ptr [EBX + 0xc],EAX       ; 005cdbb2
    XOR EAX,EAX                         ; 005cdbb5
    MOV AX,word ptr [ESP + 0x8]         ; 005cdbb7
    MOV dword ptr [EBX + 0x8],EAX       ; 005cdbbc
    XOR EAX,EAX                         ; 005cdbbf
    MOV AX,word ptr [ESP + 0xa]         ; 005cdbc1
    MOV dword ptr [EBX + 0x4],EAX       ; 005cdbc6
    XOR EAX,EAX                         ; 005cdbc9
    MOV AX,word ptr [ESP + 0xc]         ; 005cdbcb
    MOV dword ptr [EBX + 0x20],0xffffffff ; 005cdbd0
    MOV dword ptr [EBX],EAX             ; 005cdbd7
    XOR EAX,EAX                         ; 005cdbd9
    MOV AX,word ptr [ESP + 0xe]         ; 005cdbdb
    ADD ESP,0x10                        ; 005cdbe0
    POP EBX                             ; 005cdbe3
    RET                                 ; 005cdbe4

