; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trisock_cpp_FUN_00570350(int *param_1,code *param_2,undefined4 param_3)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_00570420 at 0057043e
;   support_trisock.cpp_FUN_005704a0 at 0057060c
;
; Called Functions:
;   support_trisock.cpp_FUN_0056fb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570350
        ;   Label: support_trisock.cpp_FUN_00570350
    PUSH ESI                            ; 00570351
    PUSH EDI                            ; 00570352
    PUSH EBP                            ; 00570353
    MOV EBX,dword ptr [ESP + 0x14]      ; 00570354
    MOV EDI,dword ptr [ESP + 0x18]      ; 00570358
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057035c
    CMP dword ptr [EBX + 0x808],0x0     ; 00570360
    JLE 0x0057038d                      ; 00570367
        ;   XREF to: 0057038d (CONDITIONAL_JUMP)  ; LAB_0057038d
    MOV EDX,dword ptr [EBX + 0x80c]     ; 00570369
    MOV ECX,dword ptr [EBX + 0x808]     ; 0057036f
    INC EDX                             ; 00570375
    XOR EAX,EAX                         ; 00570376
    DEC ECX                             ; 00570378
    MOV AL,byte ptr [EDX + -0x1]        ; 00570379
    MOV dword ptr [EBX + 0x80c],EDX     ; 0057037c
    MOV dword ptr [EBX + 0x808],ECX     ; 00570382
    POP EBP                             ; 00570388
        ;   Label: LAB_00570388
    POP EDI                             ; 00570389
    POP ESI                             ; 0057038a
    POP EBX                             ; 0057038b
    RET                                 ; 0057038c
    LEA EAX,[EBX + 0x8]                 ; 0057038d
        ;   Label: LAB_0057038d
    MOV dword ptr [EBX + 0x808],0x0     ; 00570390
    MOV ESI,EAX                         ; 0057039a
    MOV dword ptr [EBX + 0x80c],EAX     ; 0057039c
    PUSH EBP                            ; 005703a2
        ;   Label: LAB_005703a2
    PUSH 0x0                            ; 005703a3
    CALL EDI                            ; 005703a5
    ADD ESP,0x8                         ; 005703a7
    TEST EAX,EAX                        ; 005703aa
    JNZ 0x005703b8                      ; 005703ac
        ;   XREF to: 005703b8 (CONDITIONAL_JUMP)  ; LAB_005703b8
    MOV EAX,0xffffffff                  ; 005703ae
    POP EBP                             ; 005703b3
    POP EDI                             ; 005703b4
    POP ESI                             ; 005703b5
    POP EBX                             ; 005703b6
    RET                                 ; 005703b7
    PUSH 0x0                            ; 005703b8
        ;   Label: LAB_005703b8
    PUSH 0x800                          ; 005703ba
    PUSH ESI                            ; 005703bf
    MOV EAX,dword ptr [EBX + 0x4]       ; 005703c0
    PUSH EAX                            ; 005703c3
    CALL support_trisock.cpp_FUN_0056fb10 ; 005703c4
        ;   XREF to: 0056fb10 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_FUN_0056fb10(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 005703c9
    MOV EDX,EAX                         ; 005703cc
    CMP EAX,-0x2                        ; 005703ce
    JNZ 0x005703d8                      ; 005703d1
        ;   XREF to: 005703d8 (CONDITIONAL_JUMP)  ; LAB_005703d8
    CMP dword ptr [EBX],0x0             ; 005703d3
    JNZ 0x00570388                      ; 005703d6
        ;   XREF to: 00570388 (CONDITIONAL_JUMP)  ; LAB_00570388
    TEST EDX,EDX                        ; 005703d8
        ;   Label: LAB_005703d8
    JL 0x00570400                       ; 005703da
        ;   XREF to: 00570400 (CONDITIONAL_JUMP)  ; LAB_00570400
    JLE 0x005703a2                      ; 005703dc
        ;   XREF to: 005703a2 (CONDITIONAL_JUMP)  ; LAB_005703a2
    LEA EAX,[EBX + 0x9]                 ; 005703de
    MOV dword ptr [EBX + 0x808],EDX     ; 005703e1
    LEA ESI,[EDX + -0x1]                ; 005703e7
    MOV dword ptr [EBX + 0x80c],EAX     ; 005703ea
    XOR EAX,EAX                         ; 005703f0
    MOV dword ptr [EBX + 0x808],ESI     ; 005703f2
    MOV AL,byte ptr [EBX + 0x8]         ; 005703f8
    POP EBP                             ; 005703fb
    POP EDI                             ; 005703fc
    POP ESI                             ; 005703fd
    POP EBX                             ; 005703fe
    RET                                 ; 005703ff
    PUSH 0x5d69b8                       ; 00570400
        ;   Label: LAB_00570400
    PUSH 0x1                            ; 00570405
    CALL EDI                            ; 00570407
    MOV EAX,0xffffffff                  ; 00570409
    ADD ESP,0x8                         ; 0057040e
    POP EBP                             ; 00570411
    POP EDI                             ; 00570412
    POP ESI                             ; 00570413
    POP EBX                             ; 00570414
    RET                                 ; 00570415

