; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0(int param_1,int *param_2)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004ea84c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb3f0
        ;   Label: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0
    PUSH ESI                            ; 004eb3f1
    PUSH EDI                            ; 004eb3f2
    PUSH EBP                            ; 004eb3f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004eb3f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eb3f8
    MOV ECX,dword ptr [EDI + 0x1c]      ; 004eb3fc
    XOR EDX,EDX                         ; 004eb3ff
    TEST ECX,ECX                        ; 004eb401
    JLE 0x004eb423                      ; 004eb403
        ;   XREF to: 004eb423 (CONDITIONAL_JUMP)  ; LAB_004eb423
    LEA EAX,[EDI + 0x3c]                ; 004eb405
    MOV CX,word ptr [EAX + 0x4]         ; 004eb408
        ;   Label: LAB_004eb408
    CMP CX,word ptr [ESI + 0x4]         ; 004eb40c
    JNZ 0x004eb418                      ; 004eb410
        ;   XREF to: 004eb418 (CONDITIONAL_JUMP)  ; LAB_004eb418
    MOV EBP,dword ptr [EAX]             ; 004eb412
    CMP EBP,dword ptr [ESI]             ; 004eb414
    JZ 0x004eb42d                       ; 004eb416
        ;   XREF to: 004eb42d (CONDITIONAL_JUMP)  ; LAB_004eb42d
    INC EDX                             ; 004eb418
        ;   Label: LAB_004eb418
    MOV EBX,dword ptr [EDI + 0x1c]      ; 004eb419
    ADD EAX,0x78                        ; 004eb41c
    CMP EDX,EBX                         ; 004eb41f
    JL 0x004eb408                       ; 004eb421
        ;   XREF to: 004eb408 (CONDITIONAL_JUMP)  ; LAB_004eb408
    MOV EAX,0xffffffff                  ; 004eb423
        ;   Label: LAB_004eb423
    POP EBP                             ; 004eb428
    POP EDI                             ; 004eb429
    POP ESI                             ; 004eb42a
    POP EBX                             ; 004eb42b
    RET                                 ; 004eb42c
    MOV EAX,EDX                         ; 004eb42d
        ;   Label: LAB_004eb42d
    POP EBP                             ; 004eb42f
    POP EDI                             ; 004eb430
    POP ESI                             ; 004eb431
    POP EBX                             ; 004eb432
    RET                                 ; 004eb433

