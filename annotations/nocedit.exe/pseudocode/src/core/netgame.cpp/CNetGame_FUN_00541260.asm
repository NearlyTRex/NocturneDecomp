; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_CNetGame_FUN_00541260()
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 005406bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541260
        ;   Label: core_netgame.cpp_CNetGame_FUN_00541260
    PUSH ESI                            ; 00541261
    PUSH EDI                            ; 00541262
    PUSH EBP                            ; 00541263
    MOV EDI,dword ptr [ESP + 0x14]      ; 00541264
    MOV ESI,dword ptr [ESP + 0x18]      ; 00541268
    MOV ECX,dword ptr [EDI + 0x1c]      ; 0054126c
    XOR EDX,EDX                         ; 0054126f
    TEST ECX,ECX                        ; 00541271
    JLE 0x00541293                      ; 00541273 | LAB_00541293
        ;   XREF to: 00541293 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x3c]                ; 00541275
    MOV CX,word ptr [EAX + 0x4]         ; 00541278
        ;   Label: LAB_00541278
    CMP CX,word ptr [ESI + 0x4]         ; 0054127c
    JNZ 0x00541288                      ; 00541280 | LAB_00541288
        ;   XREF to: 00541288 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX]             ; 00541282
    CMP EBP,dword ptr [ESI]             ; 00541284
    JZ 0x0054129d                       ; 00541286 | LAB_0054129d
        ;   XREF to: 0054129d (CONDITIONAL_JUMP)
    INC EDX                             ; 00541288
        ;   Label: LAB_00541288
    MOV EBX,dword ptr [EDI + 0x1c]      ; 00541289
    ADD EAX,0x78                        ; 0054128c
    CMP EDX,EBX                         ; 0054128f
    JL 0x00541278                       ; 00541291 | LAB_00541278
        ;   XREF to: 00541278 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 00541293
        ;   Label: LAB_00541293
    POP EBP                             ; 00541298
    POP EDI                             ; 00541299
    POP ESI                             ; 0054129a
    POP EBX                             ; 0054129b
    RET                                 ; 0054129c
    MOV EAX,EDX                         ; 0054129d
        ;   Label: LAB_0054129d
    POP EBP                             ; 0054129f
    POP EDI                             ; 005412a0
    POP ESI                             ; 005412a1
    POP EBX                             ; 005412a2
    RET                                 ; 005412a3

