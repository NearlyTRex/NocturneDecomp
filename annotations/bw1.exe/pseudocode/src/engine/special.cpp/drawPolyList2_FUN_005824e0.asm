; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_drawPolyList2_FUN_005824e0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 00484775
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c833c8
;   undefined4 DAT_02c833d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005824e0
        ;   Label: engine_special.cpp_drawPolyList2_FUN_005824e0
    PUSH ESI                            ; 005824e1
    PUSH EDI                            ; 005824e2
    PUSH EBP                            ; 005824e3
    SUB ESP,0xc                         ; 005824e4
    MOV EDI,dword ptr [ESP + 0x20]      ; 005824e7
    MOV EDX,dword ptr [ESP + 0x24]      ; 005824eb
    CMP dword ptr [0x01c50948],0x0      ; 005824ef | DAT_01c50948
    JZ 0x005825ef                       ; 005824f6
        ;   XREF to: 005825ef (CONDITIONAL_JUMP)  ; LAB_005825ef
    MOV EBX,dword ptr [ESP + 0x28]      ; 005824fc
    MOV EAX,[0x01e7dac8]                ; 00582500 | DAT_01e7dac8
    MOV ESI,dword ptr [0x02c833d0]      ; 00582505 | DAT_02c833d0
    ADD EAX,EBX                         ; 0058250b
    TEST ESI,ESI                        ; 0058250d
    JNZ 0x005825fb                      ; 0058250f
        ;   XREF to: 005825fb (CONDITIONAL_JUMP)  ; LAB_005825fb
    MOV [0x01e7dac8],EAX                ; 00582515 | DAT_01e7dac8
    TEST EBX,EBX                        ; 0058251a
    JLE 0x005825e0                      ; 0058251c
        ;   XREF to: 005825e0 (CONDITIONAL_JUMP)  ; LAB_005825e0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00582522
    MOV EBX,EDX                         ; 00582526
    MOV EAX,dword ptr [EBX]             ; 00582528
        ;   Label: LAB_00582528
    XOR EDX,EDX                         ; 0058252a
    MOV DX,word ptr [EAX]               ; 0058252c
    IMUL EDX,EDX,0x30                   ; 0058252f
    LEA ECX,[EDI + EDX*0x1]             ; 00582532
    MOV dword ptr [ESP],ECX             ; 00582535
    XOR EDX,EDX                         ; 00582538
    MOV DX,word ptr [EAX + 0x2]         ; 0058253a
    IMUL EDX,EDX,0x30                   ; 0058253e
    LEA ECX,[EDI + EDX*0x1]             ; 00582541
    MOV dword ptr [ESP + 0x4],ECX       ; 00582544
    XOR EDX,EDX                         ; 00582548
    MOV DX,word ptr [EAX + 0x4]         ; 0058254a
    IMUL EDX,EDX,0x30                   ; 0058254e
    LEA ECX,[EDI + EDX*0x1]             ; 00582551
    MOV dword ptr [ESP + 0x8],ECX       ; 00582554
    XOR ECX,ECX                         ; 00582558
    MOV CX,word ptr [EAX + 0x6]         ; 0058255a
    MOV EDX,dword ptr [ESP]             ; 0058255e
    SHL ECX,0x8                         ; 00582561
    MOV dword ptr [EDX + 0x18],ECX      ; 00582564
    XOR ECX,ECX                         ; 00582567
    MOV CX,word ptr [EAX + 0xc]         ; 00582569
    MOV EDX,dword ptr [ESP]             ; 0058256d
    SHL ECX,0x8                         ; 00582570
    MOV dword ptr [EDX + 0x1c],ECX      ; 00582573
    XOR ECX,ECX                         ; 00582576
    MOV CX,word ptr [EAX + 0x8]         ; 00582578
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058257c
    SHL ECX,0x8                         ; 00582580
    MOV dword ptr [EDX + 0x18],ECX      ; 00582583
    XOR ECX,ECX                         ; 00582586
    MOV CX,word ptr [EAX + 0xe]         ; 00582588
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058258c
    SHL ECX,0x8                         ; 00582590
    MOV dword ptr [EDX + 0x1c],ECX      ; 00582593
    XOR ECX,ECX                         ; 00582596
    MOV CX,word ptr [EAX + 0xa]         ; 00582598
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058259c
    SHL ECX,0x8                         ; 005825a0
    MOV dword ptr [EDX + 0x18],ECX      ; 005825a3
    MOV AX,word ptr [EAX + 0x10]        ; 005825a6
    MOV EDX,dword ptr [ESP + 0x8]       ; 005825aa
    AND EAX,0xffff                      ; 005825ae
    PUSH EBP                            ; 005825b3
    SHL EAX,0x8                         ; 005825b4
    PUSH 0x3                            ; 005825b7
    MOV dword ptr [EDX + 0x1c],EAX      ; 005825b9
    LEA EAX,[ESP + 0x8]                 ; 005825bc
    PUSH EAX                            ; 005825c0
    CALL dword ptr [0x02c833c8]         ; 005825c1 | DAT_02c833c8
    ADD ESP,0xc                         ; 005825c7
    INC ESI                             ; 005825ca
    MOV EAX,dword ptr [ESP + 0x28]      ; 005825cb
    ADD EBX,0x4                         ; 005825cf
    CMP ESI,EAX                         ; 005825d2
    JL 0x00582528                       ; 005825d4
        ;   XREF to: 00582528 (CONDITIONAL_JUMP)  ; LAB_00582528
    LEA EAX,[EAX]                       ; 005825da
    MOV EDX,0x1                         ; 005825e0
        ;   Label: LAB_005825e0
    MOV EAX,EDX                         ; 005825e5
    ADD ESP,0xc                         ; 005825e7
    POP EBP                             ; 005825ea
    POP EDI                             ; 005825eb
    POP ESI                             ; 005825ec
    POP EBX                             ; 005825ed
    RET                                 ; 005825ee
    XOR EDX,EDX                         ; 005825ef
        ;   Label: LAB_005825ef
    MOV EAX,EDX                         ; 005825f1
    ADD ESP,0xc                         ; 005825f3
    POP EBP                             ; 005825f6
    POP EDI                             ; 005825f7
    POP ESI                             ; 005825f8
    POP EBX                             ; 005825f9
    RET                                 ; 005825fa
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005825fb
        ;   Label: LAB_005825fb
    PUSH EBP                            ; 005825ff
    PUSH EBX                            ; 00582600
    PUSH EDX                            ; 00582601
    PUSH EDI                            ; 00582602
    MOV [0x01e7dac8],EAX                ; 00582603 | DAT_01e7dac8
    CALL dword ptr [0x02c833d0]         ; 00582608 | DAT_02c833d0
    ADD ESP,0x10                        ; 0058260e
    MOV EDX,EAX                         ; 00582611
    MOV EAX,EDX                         ; 00582613
    ADD ESP,0xc                         ; 00582615
    POP EBP                             ; 00582618
    POP EDI                             ; 00582619
    POP ESI                             ; 0058261a
    POP EBX                             ; 0058261b
    RET                                 ; 0058261c

