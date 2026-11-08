; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005790a0(undefined4 param_1,ushort param_2)
;
; Local Variables:
; undefined2       Stack[-0x10]:2  local_10
;
; XREF[1]:
;   FUN_0050b790 at 0050b7e4
;
; Called Functions:
;   Ordinal_2
;   Ordinal_9
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005790a0
        ;   Label: FUN_005790a0
    XOR EAX,EAX                         ; 005790a3
    MOV AX,word ptr [ESP + 0x18]        ; 005790a5
    MOV EDX,0x2                         ; 005790aa
    PUSH EAX                            ; 005790af
    MOV word ptr [ESP + 0x4],DX         ; 005790b0
    CALL Ordinal_9                      ; 005790b5
        ;   XREF to: 005c752c (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH 0x10                           ; 005790ba
    MOV word ptr [ESP + 0x6],AX         ; 005790bc
    LEA EAX,[ESP + 0x4]                 ; 005790c1
    XOR EDX,EDX                         ; 005790c5
    PUSH EAX                            ; 005790c7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005790c8
    MOV dword ptr [ESP + 0xc],EDX       ; 005790cc
    MOV ECX,dword ptr [EAX]             ; 005790d0
    PUSH ECX                            ; 005790d2
    CALL Ordinal_2                      ; 005790d3
        ;   XREF to: 005c7520 (UNCONDITIONAL_CALL)  ; undefined Ordinal_2()
    TEST EAX,EAX                        ; 005790d8
    SETZ AL                             ; 005790da
    AND EAX,0xff                        ; 005790dd
    ADD ESP,0x10                        ; 005790e2
    RET                                 ; 005790e5

