; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056f970(undefined4 param_1,ushort param_2)
;
; Local Variables:
; undefined2       Stack[-0x10]:2  local_10
;
; XREF[1]:
;   FUN_00504270 at 005042c4
;
; Called Functions:
;   Ordinal_2
;   Ordinal_9
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0056f970
        ;   Label: FUN_0056f970
    XOR EAX,EAX                         ; 0056f973
    MOV AX,word ptr [ESP + 0x18]        ; 0056f975
    MOV EDX,0x2                         ; 0056f97a
    PUSH EAX                            ; 0056f97f
    MOV word ptr [ESP + 0x4],DX         ; 0056f980
    CALL Ordinal_9                      ; 0056f985
        ;   XREF to: 005b25ce (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH 0x10                           ; 0056f98a
    MOV word ptr [ESP + 0x6],AX         ; 0056f98c
    LEA EAX,[ESP + 0x4]                 ; 0056f991
    XOR EDX,EDX                         ; 0056f995
    PUSH EAX                            ; 0056f997
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056f998
    MOV dword ptr [ESP + 0xc],EDX       ; 0056f99c
    MOV ECX,dword ptr [EAX]             ; 0056f9a0
    PUSH ECX                            ; 0056f9a2
    CALL Ordinal_2                      ; 0056f9a3
        ;   XREF to: 005b25c2 (UNCONDITIONAL_CALL)  ; undefined Ordinal_2()
    TEST EAX,EAX                        ; 0056f9a8
    SETZ AL                             ; 0056f9aa
    AND EAX,0xff                        ; 0056f9ad
    ADD ESP,0x10                        ; 0056f9b2
    RET                                 ; 0056f9b5

