; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; WORD crt_unknown_c_FUN_005b0910(uint *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005aefa0 at 005aefab
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0910
        ;   Label: crt_unknown.c_FUN_005b0910
    SUB ESP,0x10                        ; 005b0911
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b0914
    MOV EAX,ESP                         ; 005b0918
    PUSH EAX                            ; 005b091a
    CALL dword ptr CS:[0x5b35b4]        ; 005b091b
    XOR EAX,EAX                         ; 005b0922
    MOV AX,word ptr [ESP]               ; 005b0924
    SUB EAX,0x76c                       ; 005b0928
    MOV dword ptr [EBX + 0x14],EAX      ; 005b092d
    XOR EAX,EAX                         ; 005b0930
    MOV AX,word ptr [ESP + 0x2]         ; 005b0932
    DEC EAX                             ; 005b0937
    MOV dword ptr [EBX + 0x10],EAX      ; 005b0938
    XOR EAX,EAX                         ; 005b093b
    MOV AX,word ptr [ESP + 0x6]         ; 005b093d
    MOV dword ptr [EBX + 0xc],EAX       ; 005b0942
    XOR EAX,EAX                         ; 005b0945
    MOV AX,word ptr [ESP + 0x8]         ; 005b0947
    MOV dword ptr [EBX + 0x8],EAX       ; 005b094c
    XOR EAX,EAX                         ; 005b094f
    MOV AX,word ptr [ESP + 0xa]         ; 005b0951
    MOV dword ptr [EBX + 0x4],EAX       ; 005b0956
    XOR EAX,EAX                         ; 005b0959
    MOV AX,word ptr [ESP + 0xc]         ; 005b095b
    MOV dword ptr [EBX + 0x20],0xffffffff ; 005b0960
    MOV dword ptr [EBX],EAX             ; 005b0967
    XOR EAX,EAX                         ; 005b0969
    MOV AX,word ptr [ESP + 0xe]         ; 005b096b
    ADD ESP,0x10                        ; 005b0970
    POP EBX                             ; 005b0973
    RET                                 ; 005b0974

