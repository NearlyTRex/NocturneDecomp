; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005823a0(int param_1,int *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004077b0 at 00407808
;   FUN_00484280 at 004844d2
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c833c8
;   undefined4 DAT_02c833cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005823a0
        ;   Label: FUN_005823a0
    PUSH ESI                            ; 005823a1
    PUSH EDI                            ; 005823a2
    PUSH EBP                            ; 005823a3
    SUB ESP,0x10                        ; 005823a4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005823a7
    MOV EDX,dword ptr [ESP + 0x28]      ; 005823ab
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005823af
    CMP dword ptr [0x01c50948],0x0      ; 005823b3 | DAT_01c50948
    JZ 0x00582498                       ; 005823ba
        ;   XREF to: 00582498 (CONDITIONAL_JUMP)  ; LAB_00582498
    MOV EAX,[0x01e7dac8]                ; 005823c0 | DAT_01e7dac8
    MOV ESI,dword ptr [0x02c833cc]      ; 005823c5 | DAT_02c833cc
    ADD EAX,EBP                         ; 005823cb
    TEST ESI,ESI                        ; 005823cd
    JNZ 0x005824b4                      ; 005823cf
        ;   XREF to: 005824b4 (CONDITIONAL_JUMP)  ; LAB_005824b4
    MOV [0x01e7dac8],EAX                ; 005823d5 | DAT_01e7dac8
    XOR EDI,EDI                         ; 005823da
    TEST EBP,EBP                        ; 005823dc
    JLE 0x00582489                      ; 005823de
        ;   XREF to: 00582489 (CONDITIONAL_JUMP)  ; LAB_00582489
    MOV ESI,EDX                         ; 005823e4
    MOV EAX,dword ptr [ESI]             ; 005823e6
        ;   Label: LAB_005823e6
    IMUL EDX,dword ptr [EAX + 0x18],0x30 ; 005823e8
    LEA ECX,[EBX + EDX*0x1]             ; 005823ec
    MOV dword ptr [ESP],ECX             ; 005823ef
    IMUL EDX,dword ptr [EAX + 0x24],0x30 ; 005823f2
    LEA ECX,[EBX + EDX*0x1]             ; 005823f6
    MOV dword ptr [ESP + 0x4],ECX       ; 005823f9
    IMUL EDX,dword ptr [EAX + 0x30],0x30 ; 005823fd
    LEA ECX,[EBX + EDX*0x1]             ; 00582401
    MOV dword ptr [ESP + 0x8],ECX       ; 00582404
    CMP dword ptr [EAX + 0x4],0x4       ; 00582408
    JZ 0x005824a4                       ; 0058240c
        ;   XREF to: 005824a4 (CONDITIONAL_JUMP)  ; LAB_005824a4
    MOV EDX,dword ptr [ESP]             ; 00582412
        ;   Label: LAB_00582412
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00582415
    MOV dword ptr [EDX + 0x18],ECX      ; 00582418
    MOV EDX,dword ptr [ESP]             ; 0058241b
    MOV ECX,dword ptr [EAX + 0x20]      ; 0058241e
    MOV dword ptr [EDX + 0x1c],ECX      ; 00582421
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582424
    MOV EDX,dword ptr [EAX + 0x28]      ; 00582428
    MOV dword ptr [ECX + 0x18],EDX      ; 0058242b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0058242e
    MOV EDX,dword ptr [EAX + 0x2c]      ; 00582432
    MOV dword ptr [ECX + 0x1c],EDX      ; 00582435
    MOV EDX,dword ptr [ESP + 0x8]       ; 00582438
    MOV ECX,dword ptr [EAX + 0x34]      ; 0058243c
    MOV dword ptr [EDX + 0x18],ECX      ; 0058243f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00582442
    MOV ECX,dword ptr [EAX + 0x38]      ; 00582446
    MOV dword ptr [EDX + 0x1c],ECX      ; 00582449
    CMP dword ptr [EAX + 0x4],0x4       ; 0058244c
    JNZ 0x00582466                      ; 00582450
        ;   XREF to: 00582466 (CONDITIONAL_JUMP)  ; LAB_00582466
    MOV EDX,dword ptr [ESP + 0xc]       ; 00582452
    MOV ECX,dword ptr [EAX + 0x40]      ; 00582456
    MOV dword ptr [EDX + 0x18],ECX      ; 00582459
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058245c
    MOV ECX,dword ptr [EAX + 0x44]      ; 00582460
    MOV dword ptr [EDX + 0x1c],ECX      ; 00582463
    MOV EDX,dword ptr [ESP + 0x30]      ; 00582466
        ;   Label: LAB_00582466
    PUSH EDX                            ; 0058246a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0058246b
    PUSH ECX                            ; 0058246e
    LEA EAX,[ESP + 0x8]                 ; 0058246f
    PUSH EAX                            ; 00582473
    ADD ESI,0x4                         ; 00582474
    INC EDI                             ; 00582477
    CALL dword ptr [0x02c833c8]         ; 00582478 | DAT_02c833c8
    ADD ESP,0xc                         ; 0058247e
    CMP EDI,EBP                         ; 00582481
    JL 0x005823e6                       ; 00582483
        ;   XREF to: 005823e6 (CONDITIONAL_JUMP)  ; LAB_005823e6
    MOV EDX,0x1                         ; 00582489
        ;   Label: LAB_00582489
    MOV EAX,EDX                         ; 0058248e
    ADD ESP,0x10                        ; 00582490
    POP EBP                             ; 00582493
    POP EDI                             ; 00582494
    POP ESI                             ; 00582495
    POP EBX                             ; 00582496
    RET                                 ; 00582497
    XOR EDX,EDX                         ; 00582498
        ;   Label: LAB_00582498
    MOV EAX,EDX                         ; 0058249a
    ADD ESP,0x10                        ; 0058249c
    POP EBP                             ; 0058249f
    POP EDI                             ; 005824a0
    POP ESI                             ; 005824a1
    POP EBX                             ; 005824a2
    RET                                 ; 005824a3
    IMUL EDX,dword ptr [EAX + 0x3c],0x30 ; 005824a4
        ;   Label: LAB_005824a4
    LEA ECX,[EBX + EDX*0x1]             ; 005824a8
    MOV dword ptr [ESP + 0xc],ECX       ; 005824ab
    JMP 0x00582412                      ; 005824af
        ;   XREF to: 00582412 (UNCONDITIONAL_JUMP)  ; LAB_00582412
    MOV EDI,dword ptr [ESP + 0x30]      ; 005824b4
        ;   Label: LAB_005824b4
    PUSH EDI                            ; 005824b8
    PUSH EBP                            ; 005824b9
    PUSH EDX                            ; 005824ba
    PUSH EBX                            ; 005824bb
    MOV [0x01e7dac8],EAX                ; 005824bc | DAT_01e7dac8
    CALL dword ptr [0x02c833cc]         ; 005824c1 | DAT_02c833cc
    ADD ESP,0x10                        ; 005824c7
    MOV EDX,EAX                         ; 005824ca
    MOV EAX,EDX                         ; 005824cc
    ADD ESP,0x10                        ; 005824ce
    POP EBP                             ; 005824d1
    POP EDI                             ; 005824d2
    POP ESI                             ; 005824d3
    POP EBX                             ; 005824d4
    RET                                 ; 005824d5

