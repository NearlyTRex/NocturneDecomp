; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_1000a170(ushort *param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_1000a240 at 1000a26c
;   FUN_1000cf00 at 1000cf32
;
; Called Functions:
;   __RoundMan
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 1000a170
        ;   Label: FUN_1000a170
    SUB ESP,0xc                         ; 1000a174
    PUSH EBX                            ; 1000a177
    PUSH ESI                            ; 1000a178
    PUSH EDI                            ; 1000a179
    XOR EBX,EBX                         ; 1000a17a
    MOV DI,word ptr [ECX + 0xa]         ; 1000a17c
    MOV EAX,dword ptr [ECX + 0x6]       ; 1000a180
    MOV SI,DI                           ; 1000a183
    MOV EDX,dword ptr [ECX + 0x2]       ; 1000a186
    AND SI,0x7fff                       ; 1000a189
    MOV dword ptr [ESP + 0xc],EAX       ; 1000a18e
    AND DI,0x8000                       ; 1000a192
    XOR EAX,EAX                         ; 1000a197
    MOV AX,word ptr [ECX]               ; 1000a199
    PUSH 0x40                           ; 1000a19c
    SHL EAX,0x10                        ; 1000a19e
    LEA ECX,[ESP + 0x10]                ; 1000a1a1
    MOV dword ptr [ESP + 0x14],EDX      ; 1000a1a5
    PUSH ECX                            ; 1000a1a9
    MOV dword ptr [ESP + 0x1c],EAX      ; 1000a1aa
    CALL __RoundMan                     ; 1000a1ae
        ;   XREF to: 10009db0 (UNCONDITIONAL_CALL)  ; undefined __RoundMan()
    ADD ESP,0x8                         ; 1000a1b3
    TEST EAX,EAX                        ; 1000a1b6
    JZ 0x1000a1c4                       ; 1000a1b8
        ;   XREF to: 1000a1c4 (CONDITIONAL_JUMP)  ; LAB_1000a1c4
    MOV dword ptr [ESP + 0xc],0x80000000 ; 1000a1ba
    INC SI                              ; 1000a1c2
    CMP SI,0x7fff                       ; 1000a1c4
        ;   Label: LAB_1000a1c4
    JNZ 0x1000a1d0                      ; 1000a1c9
        ;   XREF to: 1000a1d0 (CONDITIONAL_JUMP)  ; LAB_1000a1d0
    MOV EBX,0x1                         ; 1000a1cb
    OR DI,SI                            ; 1000a1d0
        ;   Label: LAB_1000a1d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000a1d3
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000a1d7
    MOV EDX,dword ptr [ESP + 0x10]      ; 1000a1db
    MOV word ptr [ECX + 0x8],DI         ; 1000a1df
    MOV dword ptr [ECX + 0x4],EAX       ; 1000a1e3
    MOV EAX,EBX                         ; 1000a1e6
    POP EDI                             ; 1000a1e8
    POP ESI                             ; 1000a1e9
    MOV dword ptr [ECX],EDX             ; 1000a1ea
    POP EBX                             ; 1000a1ec
    ADD ESP,0xc                         ; 1000a1ed
    RET                                 ; 1000a1f0

