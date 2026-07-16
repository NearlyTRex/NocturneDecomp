; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 dll_dx7_cpp_FUN_10003400(void)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   dll_dx7.cpp_FUN_10003100 at 1000330b
;
; Referenced Globals:
;   undefined4 DAT_100121f8
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   undefined4 DAT_100141fc
;   undefined4 DAT_10014214
;   undefined1 DAT_101386a8
;   undefined4 DAT_10138f30
;   undefined4 DAT_10139048
;   undefined4 DAT_1013b8d0
;   undefined4 DAT_101b88d8
;   undefined4 DAT_10226848
;   undefined4 DAT_102268b0
;   undefined4 DAT_10226a58
;   undefined4 DAT_10226a5c
;   undefined4 DAT_10226a78
;   undefined1 DAT_10226e80
;   ... and 2 more
;
; Called Functions:
;   dll_dx7.cpp_FUN_10001200
;   dll_dx7.cpp_FUN_10002ea0
;
; *****************************************************************************

section .text

    SUB ESP,0x80                        ; 10003400
        ;   Label: dll_dx7.cpp_FUN_10003400
    PUSH EBX                            ; 10003406
    PUSH ESI                            ; 10003407
    PUSH EDI                            ; 10003408
    PUSH EBP                            ; 10003409
    CALL dll_dx7.cpp_FUN_10002ea0       ; 1000340a
        ;   XREF to: 10002ea0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002ea0()
    MOV dword ptr [ESP + 0x10],0x0      ; 1000340f
    XOR EBX,EBX                         ; 10003417
        ;   Label: LAB_10003417
    MOV EBP,dword ptr [ESP + 0x10]      ; 10003419
    LEA EDI,[ESP + 0x14]                ; 1000341d
        ;   Label: LAB_1000341d
    XOR EAX,EAX                         ; 10003421
    MOV ECX,0x1f                        ; 10003423
    PUSH 0x0                            ; 10003428
    STOSD.REP ES:EDI                    ; 1000342a
    MOV ESI,0x10226a58                  ; 1000342c | DAT_10226a58
    LEA EDI,[ESP + 0x60]                ; 10003431
    MOV ECX,0x8                         ; 10003435
    MOVSD.REP ES:EDI,ESI                ; 1000343a | DAT_10226a58 | DAT_10226a5c
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000343c
    LEA ESI,[EBP + 0x10139048]          ; 10003440 | DAT_10139048
    LEA ECX,[ESP + 0x18]                ; 10003446
    PUSH ESI                            ; 1000344a
    MOV EAX,dword ptr [EAX + 0x10226848] ; 1000344b | DAT_10226848
    PUSH ECX                            ; 10003451
    MOV dword ptr [ESP + 0x2c],EAX      ; 10003452
    MOV dword ptr [ESP + 0x28],EAX      ; 10003456
    MOV dword ptr [ESP + 0x20],0x7c     ; 1000345a
    MOV dword ptr [ESP + 0x24],0x1007   ; 10003462
    MOV dword ptr [ESP + 0x88],0x1800   ; 1000346a
    MOV EAX,[0x10014188]                ; 10003475 | g_DirectDraw4
    PUSH EAX                            ; 1000347a
    MOV EAX,dword ptr [EAX]             ; 1000347b
    CALL dword ptr [EAX + 0x18]         ; 1000347d
    TEST EAX,EAX                        ; 10003480
    JNZ 0x10003558                      ; 10003482
        ;   XREF to: 10003558 (CONDITIONAL_JUMP)  ; LAB_10003558
    MOV EAX,dword ptr [ESI]             ; 10003488 | DAT_10139048
    LEA ECX,[EBP + 0x10138f30]          ; 1000348a | DAT_10138f30
    PUSH ECX                            ; 10003490
    PUSH 0x100121f8                     ; 10003491 | DAT_100121f8
    PUSH EAX                            ; 10003496
    MOV ESI,dword ptr [EAX]             ; 10003497
    CALL dword ptr [ESI]                ; 10003499
    TEST EAX,EAX                        ; 1000349b
    JNZ 0x10003565                      ; 1000349d
        ;   XREF to: 10003565 (CONDITIONAL_JUMP)  ; LAB_10003565
    ADD EBP,0x20                        ; 100034a3
    INC EBX                             ; 100034a6
    CMP EBX,0x4                         ; 100034a7
    JL 0x1000341d                       ; 100034aa
        ;   XREF to: 1000341d (CONDITIONAL_JUMP)  ; LAB_1000341d
    ADD dword ptr [ESP + 0x10],0x4      ; 100034b0
    CMP dword ptr [ESP + 0x10],0x20     ; 100034b5
    JL 0x10003417                       ; 100034ba
        ;   XREF to: 10003417 (CONDITIONAL_JUMP)  ; LAB_10003417
    XOR ECX,ECX                         ; 100034c0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 100034c2
    TEST AL,0x1                         ; 100034c6
    JNZ 0x100034d2                      ; 100034c8
        ;   XREF to: 100034d2 (CONDITIONAL_JUMP)  ; LAB_100034d2
    SHR EAX,0x1                         ; 100034ca
        ;   Label: LAB_100034ca
    INC ECX                             ; 100034cd
    TEST AL,0x1                         ; 100034ce
    JZ 0x100034ca                       ; 100034d0
        ;   XREF to: 100034ca (CONDITIONAL_JUMP)  ; LAB_100034ca
    MOV ESI,dword ptr [ESP + 0x6c]      ; 100034d2
        ;   Label: LAB_100034d2
    MOV EAX,0xff                        ; 100034d6
    SUB EDX,EDX                         ; 100034db
    MOV dword ptr [0x101386a8],ECX      ; 100034dd | DAT_101386a8
    SHR ESI,CL                          ; 100034e3
    DIV ESI                             ; 100034e5
    XOR ECX,ECX                         ; 100034e7
    MOV [0x10226a78],EAX                ; 100034e9 | DAT_10226a78
    MOV EAX,dword ptr [ESP + 0x70]      ; 100034ee
    TEST AL,0x1                         ; 100034f2
    JNZ 0x100034fe                      ; 100034f4
        ;   XREF to: 100034fe (CONDITIONAL_JUMP)  ; LAB_100034fe
    SHR EAX,0x1                         ; 100034f6
        ;   Label: LAB_100034f6
    INC ECX                             ; 100034f9
    TEST AL,0x1                         ; 100034fa
    JZ 0x100034f6                       ; 100034fc
        ;   XREF to: 100034f6 (CONDITIONAL_JUMP)  ; LAB_100034f6
    MOV ESI,dword ptr [ESP + 0x70]      ; 100034fe
        ;   Label: LAB_100034fe
    MOV EAX,0xff                        ; 10003502
    SUB EDX,EDX                         ; 10003507
    MOV dword ptr [0x10240620],ECX      ; 10003509 | DAT_10240620
    SHR ESI,CL                          ; 1000350f
    DIV ESI                             ; 10003511
    XOR ECX,ECX                         ; 10003513
    MOV [0x102268b0],EAX                ; 10003515 | DAT_102268b0
    MOV EAX,dword ptr [ESP + 0x74]      ; 1000351a
    TEST AL,0x1                         ; 1000351e
    JNZ 0x1000352a                      ; 10003520
        ;   XREF to: 1000352a (CONDITIONAL_JUMP)  ; LAB_1000352a
    SHR EAX,0x1                         ; 10003522
        ;   Label: LAB_10003522
    INC ECX                             ; 10003525
    TEST AL,0x1                         ; 10003526
    JZ 0x10003522                       ; 10003528
        ;   XREF to: 10003522 (CONDITIONAL_JUMP)  ; LAB_10003522
    MOV ESI,dword ptr [ESP + 0x74]      ; 1000352a
        ;   Label: LAB_1000352a
    MOV EAX,0xff                        ; 1000352e
    SUB EDX,EDX                         ; 10003533
    MOV dword ptr [0x10226e80],ECX      ; 10003535 | DAT_10226e80
    SHR ESI,CL                          ; 1000353b
    DIV ESI                             ; 1000353d
    CMP dword ptr [0x100141fc],0x0      ; 1000353f | DAT_100141fc
    MOV [0x101b88d8],EAX                ; 10003546 | DAT_101b88d8
    JZ 0x10003572                       ; 1000354b
        ;   XREF to: 10003572 (CONDITIONAL_JUMP)  ; LAB_10003572
    MOV EAX,dword ptr [ESP + 0x78]      ; 1000354d
    MOV [0x1013b8d0],EAX                ; 10003551 | DAT_1013b8d0
    JMP 0x1000357c                      ; 10003556
        ;   XREF to: 1000357c (UNCONDITIONAL_JUMP)  ; LAB_1000357c
    XOR EAX,EAX                         ; 10003558
        ;   Label: LAB_10003558
    POP EBP                             ; 1000355a
    POP EDI                             ; 1000355b
    POP ESI                             ; 1000355c
    POP EBX                             ; 1000355d
    ADD ESP,0x80                        ; 1000355e
    RET                                 ; 10003564
    XOR EAX,EAX                         ; 10003565
        ;   Label: LAB_10003565
    POP EBP                             ; 10003567
    POP EDI                             ; 10003568
    POP ESI                             ; 10003569
    POP EBX                             ; 1000356a
    ADD ESP,0x80                        ; 1000356b
    RET                                 ; 10003571
    MOV dword ptr [0x1013b8d0],0x0      ; 10003572 | DAT_1013b8d0
        ;   Label: LAB_10003572
    MOV dword ptr [0x10014214],0x0      ; 1000357c | DAT_10014214
        ;   Label: LAB_1000357c
    MOV EAX,dword ptr [ESP + 0x68]      ; 10003586
    MOV [0x10240628],EAX                ; 1000358a | DAT_10240628
    CALL dll_dx7.cpp_FUN_10001200       ; 1000358f
        ;   XREF to: 10001200 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10001200()
    MOV EAX,0x1                         ; 10003594
    POP EBP                             ; 10003599
    POP EDI                             ; 1000359a
    POP ESI                             ; 1000359b
    POP EBX                             ; 1000359c
    ADD ESP,0x80                        ; 1000359d
    RET                                 ; 100035a3

