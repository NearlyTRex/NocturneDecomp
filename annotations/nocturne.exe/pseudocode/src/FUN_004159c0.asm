; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004159c0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004159c0
        ;   Label: FUN_004159c0
    SUB ESP,0xc                         ; 004159c1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004159c4
    PUSH 0x0                            ; 004159c8
    LEA EAX,[ESP + 0x4]                 ; 004159ca
    PUSH EAX                            ; 004159ce
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004159cf
    ADD EAX,0x150                       ; 004159d3
    PUSH EAX                            ; 004159d8
    CALL FUN_0051d380                   ; 004159d9
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 004159de
    CMP EBX,EAX                         ; 004159e1
    JNZ 0x004159ef                      ; 004159e3
        ;   XREF to: 004159ef (CONDITIONAL_JUMP)  ; LAB_004159ef
    MOV EAX,0x1                         ; 004159e5
    ADD ESP,0xc                         ; 004159ea
    POP EBX                             ; 004159ed
    RET                                 ; 004159ee
    MOV EDX,dword ptr [EAX]             ; 004159ef
        ;   Label: LAB_004159ef
    MOV dword ptr [EBX],EDX             ; 004159f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004159f3
    MOV dword ptr [EBX + 0x4],EDX       ; 004159f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004159f9
    MOV dword ptr [EBX + 0x8],EDX       ; 004159fc
    MOV EAX,0x1                         ; 004159ff
    ADD ESP,0xc                         ; 00415a04
    POP EBX                             ; 00415a07
    RET                                 ; 00415a08

