; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00590d80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02665a48
;
; *****************************************************************************

section .text

    ADD dword ptr [EAX],EAX             ; 00590d80
        ;   Label: wincore_winrun.cpp_FUN_00590d80
    ADD byte ptr [EDI],CL               ; 00590d82
    MOV DS,word ptr [EBP + 0x8b000000]  ; 00590d84
    TEST byte ptr [ESP],AH              ; 00590d8a
    ADD byte ptr [EAX],AL               ; 00590d8d
    ADD byte ptr [EBX + 0xa824ac],CL    ; 00590d8f
    ADD byte ptr [EAX],AL               ; 00590d95
    ADD EAX,EAX                         ; 00590d97
    ADD EBP,EBP                         ; 00590d99
    MOV dword ptr [ESP + 0xa4],EAX      ; 00590d9b
    MOV dword ptr [ESP + 0xa8],EBP      ; 00590da2
    MOV EAX,dword ptr [ESP + 0x94]      ; 00590da9
    MOV EDX,EAX                         ; 00590db0
    SAR EDX,0x1f                        ; 00590db2
    SUB EAX,EDX                         ; 00590db5
    SAR EAX,0x1                         ; 00590db7
    MOV EBX,EAX                         ; 00590db9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00590dbb
    MOV EDX,EAX                         ; 00590dc2
    SAR EDX,0x1f                        ; 00590dc4
    SUB EAX,EDX                         ; 00590dc7
    SAR EAX,0x1                         ; 00590dc9
    SUB EBX,EAX                         ; 00590dcb
    MOV EAX,dword ptr [ESP + 0x98]      ; 00590dcd
    MOV EDX,EAX                         ; 00590dd4
    SAR EDX,0x1f                        ; 00590dd6
    SUB EAX,EDX                         ; 00590dd9
    SAR EAX,0x1                         ; 00590ddb
    MOV ECX,EAX                         ; 00590ddd
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00590ddf
    MOV EDX,EAX                         ; 00590de6
    SAR EDX,0x1f                        ; 00590de8
    SUB EAX,EDX                         ; 00590deb
    SAR EAX,0x1                         ; 00590ded
    PUSH 0x1                            ; 00590def
    MOV EDX,dword ptr [ESP + 0xac]      ; 00590df1
    PUSH EDX                            ; 00590df8
    MOV ESI,dword ptr [ESP + 0xac]      ; 00590df9
    PUSH ESI                            ; 00590e00
    SUB ECX,EAX                         ; 00590e01
    PUSH ECX                            ; 00590e03
    PUSH EBX                            ; 00590e04
    MOV EDI,dword ptr [0x02665a48]      ; 00590e05 | DAT_02665a48
    PUSH EDI                            ; 00590e0b
    CALL dword ptr CS:[0x5c84d0]        ; 00590e0c
    POP EBX                             ; 00590e13
    POP ESI                             ; 00590e14
    POP EDI                             ; 00590e15
    ADD ESP,0xa0                        ; 00590e16
    POP EBP                             ; 00590e1c
    RET                                 ; 00590e1d

