; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429f70(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   FUN_0040b0d0
;   FUN_0040e0e0
;   FUN_0040e120
;   FUN_004e1660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429f70
        ;   Label: FUN_00429f70
    PUSH ESI                            ; 00429f71
    PUSH EDI                            ; 00429f72
    MOV EDI,dword ptr [ESP + 0x10]      ; 00429f73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00429f77
    PUSH EBX                            ; 00429f7b
    PUSH EDI                            ; 00429f7c
    CALL FUN_0040b0d0                   ; 00429f7d
        ;   XREF to: 0040b0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b0d0()
    ADD ESP,0x8                         ; 00429f82
    PUSH dword ptr [EDI + 0x2434]       ; 00429f85
    LEA ESI,[EDI + 0x150]               ; 00429f8b
    PUSH EBX                            ; 00429f91
    ADD EDI,0x23b0                      ; 00429f92
    CALL FUN_0040e0e0                   ; 00429f98
        ;   XREF to: 0040e0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e0e0()
    MOV AH,byte ptr [EDI]               ; 00429f9d
    ADD ESP,0x8                         ; 00429f9f
    TEST AH,AH                          ; 00429fa2
    JNZ 0x00429faa                      ; 00429fa4
        ;   XREF to: 00429faa (CONDITIONAL_JUMP)  ; LAB_00429faa
    POP EDI                             ; 00429fa6
    POP ESI                             ; 00429fa7
    POP EBX                             ; 00429fa8
    RET                                 ; 00429fa9
    PUSH EDI                            ; 00429faa
        ;   Label: LAB_00429faa
    PUSH EBX                            ; 00429fab
    CALL FUN_0040e120                   ; 00429fac
        ;   XREF to: 0040e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e120()
    ADD ESP,0x8                         ; 00429fb1
    PUSH ESI                            ; 00429fb4
    CALL FUN_004e1660                   ; 00429fb5
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    ADD ESP,0x4                         ; 00429fba
    PUSH EAX                            ; 00429fbd
    PUSH EBX                            ; 00429fbe
    CALL FUN_0040e120                   ; 00429fbf
        ;   XREF to: 0040e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e120()
    ADD ESP,0x8                         ; 00429fc4
    SUB ESP,0x4                         ; 00429fc7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00429fca
    MOV dword ptr [ESP],EAX             ; 00429fcd
    PUSH EBX                            ; 00429fd0
    CALL FUN_0040e0e0                   ; 00429fd1
        ;   XREF to: 0040e0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e0e0()
    ADD ESP,0x8                         ; 00429fd6
    POP EDI                             ; 00429fd9
    POP ESI                             ; 00429fda
    POP EBX                             ; 00429fdb
    RET                                 ; 00429fdc

