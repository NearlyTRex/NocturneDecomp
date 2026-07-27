; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_drawPolyList2_FUN_005327c0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_FUN_00461720 at 004619dd
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_01e52ef8
;   undefined4 DAT_02dc9dac
;   undefined4 DAT_02dc9db4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005327c0
        ;   Label: engine_special.cpp_drawPolyList2_FUN_005327c0
    PUSH ESI                            ; 005327c1
    PUSH EDI                            ; 005327c2
    PUSH EBP                            ; 005327c3
    SUB ESP,0xc                         ; 005327c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 005327c7
    MOV EDX,dword ptr [ESP + 0x24]      ; 005327cb
    CMP dword ptr [0x01c02594],0x0      ; 005327cf | DAT_01c02594
    JZ 0x005328cf                       ; 005327d6
        ;   XREF to: 005328cf (CONDITIONAL_JUMP)  ; LAB_005328cf
    MOV EBX,dword ptr [ESP + 0x28]      ; 005327dc
    MOV EAX,[0x01e52ef8]                ; 005327e0 | DAT_01e52ef8
    MOV ESI,dword ptr [0x02dc9db4]      ; 005327e5 | DAT_02dc9db4
    ADD EAX,EBX                         ; 005327eb
    TEST ESI,ESI                        ; 005327ed
    JNZ 0x005328db                      ; 005327ef
        ;   XREF to: 005328db (CONDITIONAL_JUMP)  ; LAB_005328db
    MOV [0x01e52ef8],EAX                ; 005327f5 | DAT_01e52ef8
    TEST EBX,EBX                        ; 005327fa
    JLE 0x005328c0                      ; 005327fc
        ;   XREF to: 005328c0 (CONDITIONAL_JUMP)  ; LAB_005328c0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00532802
    MOV EBX,EDX                         ; 00532806
    MOV EAX,dword ptr [EBX]             ; 00532808
        ;   Label: LAB_00532808
    XOR EDX,EDX                         ; 0053280a
    MOV DX,word ptr [EAX]               ; 0053280c
    IMUL EDX,EDX,0x30                   ; 0053280f
    LEA ECX,[EDI + EDX*0x1]             ; 00532812
    MOV dword ptr [ESP],ECX             ; 00532815
    XOR EDX,EDX                         ; 00532818
    MOV DX,word ptr [EAX + 0x2]         ; 0053281a
    IMUL EDX,EDX,0x30                   ; 0053281e
    LEA ECX,[EDI + EDX*0x1]             ; 00532821
    MOV dword ptr [ESP + 0x4],ECX       ; 00532824
    XOR EDX,EDX                         ; 00532828
    MOV DX,word ptr [EAX + 0x4]         ; 0053282a
    IMUL EDX,EDX,0x30                   ; 0053282e
    LEA ECX,[EDI + EDX*0x1]             ; 00532831
    MOV dword ptr [ESP + 0x8],ECX       ; 00532834
    XOR ECX,ECX                         ; 00532838
    MOV CX,word ptr [EAX + 0x6]         ; 0053283a
    MOV EDX,dword ptr [ESP]             ; 0053283e
    SHL ECX,0x8                         ; 00532841
    MOV dword ptr [EDX + 0x18],ECX      ; 00532844
    XOR ECX,ECX                         ; 00532847
    MOV CX,word ptr [EAX + 0xc]         ; 00532849
    MOV EDX,dword ptr [ESP]             ; 0053284d
    SHL ECX,0x8                         ; 00532850
    MOV dword ptr [EDX + 0x1c],ECX      ; 00532853
    XOR ECX,ECX                         ; 00532856
    MOV CX,word ptr [EAX + 0x8]         ; 00532858
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053285c
    SHL ECX,0x8                         ; 00532860
    MOV dword ptr [EDX + 0x18],ECX      ; 00532863
    XOR ECX,ECX                         ; 00532866
    MOV CX,word ptr [EAX + 0xe]         ; 00532868
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053286c
    SHL ECX,0x8                         ; 00532870
    MOV dword ptr [EDX + 0x1c],ECX      ; 00532873
    XOR ECX,ECX                         ; 00532876
    MOV CX,word ptr [EAX + 0xa]         ; 00532878
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053287c
    SHL ECX,0x8                         ; 00532880
    MOV dword ptr [EDX + 0x18],ECX      ; 00532883
    MOV AX,word ptr [EAX + 0x10]        ; 00532886
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053288a
    AND EAX,0xffff                      ; 0053288e
    PUSH EBP                            ; 00532893
    SHL EAX,0x8                         ; 00532894
    PUSH 0x3                            ; 00532897
    MOV dword ptr [EDX + 0x1c],EAX      ; 00532899
    LEA EAX,[ESP + 0x8]                 ; 0053289c
    PUSH EAX                            ; 005328a0
    CALL dword ptr [0x02dc9dac]         ; 005328a1 | DAT_02dc9dac
    ADD ESP,0xc                         ; 005328a7
    INC ESI                             ; 005328aa
    MOV EAX,dword ptr [ESP + 0x28]      ; 005328ab
    ADD EBX,0x4                         ; 005328af
    CMP ESI,EAX                         ; 005328b2
    JL 0x00532808                       ; 005328b4
        ;   XREF to: 00532808 (CONDITIONAL_JUMP)  ; LAB_00532808
    LEA EAX,[EAX]                       ; 005328ba
    MOV EDX,0x1                         ; 005328c0
        ;   Label: LAB_005328c0
    MOV EAX,EDX                         ; 005328c5
    ADD ESP,0xc                         ; 005328c7
    POP EBP                             ; 005328ca
    POP EDI                             ; 005328cb
    POP ESI                             ; 005328cc
    POP EBX                             ; 005328cd
    RET                                 ; 005328ce
    XOR EDX,EDX                         ; 005328cf
        ;   Label: LAB_005328cf
    MOV EAX,EDX                         ; 005328d1
    ADD ESP,0xc                         ; 005328d3
    POP EBP                             ; 005328d6
    POP EDI                             ; 005328d7
    POP ESI                             ; 005328d8
    POP EBX                             ; 005328d9
    RET                                 ; 005328da
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005328db
        ;   Label: LAB_005328db
    PUSH EBP                            ; 005328df
    PUSH EBX                            ; 005328e0
    PUSH EDX                            ; 005328e1
    PUSH EDI                            ; 005328e2
    MOV [0x01e52ef8],EAX                ; 005328e3 | DAT_01e52ef8
    CALL dword ptr [0x02dc9db4]         ; 005328e8 | DAT_02dc9db4
    ADD ESP,0x10                        ; 005328ee
    MOV EDX,EAX                         ; 005328f1
    MOV EAX,EDX                         ; 005328f3
    ADD ESP,0xc                         ; 005328f5
    POP EBP                             ; 005328f8
    POP EDI                             ; 005328f9
    POP ESI                             ; 005328fa
    POP EBX                             ; 005328fb
    RET                                 ; 005328fc

