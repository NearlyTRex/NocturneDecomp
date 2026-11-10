; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setShadowColor_FUN_004a95b0(uint red,uint green,uint blue)
;
; Parameters:
; uint             Stack[0x4]:4   red
; uint             Stack[0x8]:4   green
; uint             Stack[0xc]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01cb0242
;   undefined4 DAT_01cb0244
;   undefined4 DAT_01cb0248
;   undefined4 DAT_01cb024c
;   undefined4 DAT_01cb0250
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a95b0
        ;   Label: engine_font.cpp_setShadowColor_FUN_004a95b0
    PUSH ESI                            ; 004a95b1
    PUSH EDI                            ; 004a95b2
    PUSH EBP                            ; 004a95b3
    SUB ESP,0xc                         ; 004a95b4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a95b7
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a95bb
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a95bf
    MOV EDX,dword ptr [0x006141c0]      ; 004a95c3 | DAT_006141c0
    CMP EDX,0x8                         ; 004a95c9
    JZ 0x004a960e                       ; 004a95cc
        ;   XREF to: 004a960e (CONDITIONAL_JUMP)  ; LAB_004a960e
    CMP EDX,0x10                        ; 004a95ce
    JZ 0x004a9628                       ; 004a95d1
        ;   XREF to: 004a9628 (CONDITIONAL_JUMP)  ; LAB_004a9628
    CMP EDX,0x20                        ; 004a95d3
    JNZ 0x004a96aa                      ; 004a95d6
        ;   XREF to: 004a96aa (CONDITIONAL_JUMP)  ; LAB_004a96aa
    CMP EDX,EDX                         ; 004a95dc
    JNZ 0x004a9697                      ; 004a95de
        ;   XREF to: 004a9697 (CONDITIONAL_JUMP)  ; LAB_004a9697
    MOV CL,byte ptr [0x01c35814]        ; 004a95e4 | DAT_01c35814
    MOV EAX,EDI                         ; 004a95ea
    MOV EDX,EBX                         ; 004a95ec
    SHL EAX,CL                          ; 004a95ee
    MOV CL,byte ptr [0x01c35820]        ; 004a95f0 | DAT_01c35820
    SHL EDX,CL                          ; 004a95f6
    MOV CL,byte ptr [0x01c3582c]        ; 004a95f8 | DAT_01c3582c
    OR EAX,EDX                          ; 004a95fe
    MOV EDX,ESI                         ; 004a9600
    SHL EDX,CL                          ; 004a9602
    MOV ECX,EDX                         ; 004a9604
    OR ECX,EAX                          ; 004a9606
    MOV dword ptr [0x01cb0244],ECX      ; 004a9608 | DAT_01cb0244
        ;   Label: LAB_004a9608
    MOV dword ptr [0x01cb024c],EBX      ; 004a960e | DAT_01cb024c
        ;   Label: LAB_004a960e
    MOV dword ptr [0x01cb0250],ESI      ; 004a9614 | DAT_01cb0250
    MOV dword ptr [0x01cb0248],EDI      ; 004a961a | DAT_01cb0248
    ADD ESP,0xc                         ; 004a9620
    POP EBP                             ; 004a9623
    POP EDI                             ; 004a9624
    POP ESI                             ; 004a9625
    POP EBX                             ; 004a9626
    RET                                 ; 004a9627
    MOV EBP,dword ptr [0x01c35818]      ; 004a9628 | DAT_01c35818
        ;   Label: LAB_004a9628
    MOV EAX,EDI                         ; 004a962e
    XOR EDX,EDX                         ; 004a9630
    DIV EBP                             ; 004a9632
    MOV dword ptr [ESP],EDI             ; 004a9634
    MOV ECX,dword ptr [0x01c35824]      ; 004a9637 | DAT_01c35824
    MOV dword ptr [ESP],EAX             ; 004a963d
    XOR EDX,EDX                         ; 004a9640
    MOV EAX,EBX                         ; 004a9642
    DIV ECX                             ; 004a9644
    MOV dword ptr [ESP + 0x4],EBX       ; 004a9646
    MOV EBP,dword ptr [0x01c35830]      ; 004a964a | DAT_01c35830
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9650
    XOR EDX,EDX                         ; 004a9654
    MOV EAX,ESI                         ; 004a9656
    DIV EBP                             ; 004a9658
    MOV dword ptr [ESP + 0x8],ESI       ; 004a965a
    MOV CL,byte ptr [0x01c35814]        ; 004a965e | DAT_01c35814
    MOV dword ptr [ESP + 0x8],EAX       ; 004a9664
    MOV EAX,dword ptr [ESP]             ; 004a9668
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a966b
    SHL EAX,CL                          ; 004a966f
    MOV CL,byte ptr [0x01c35820]        ; 004a9671 | DAT_01c35820
    SHL EDX,CL                          ; 004a9677
    MOV CL,byte ptr [0x01c3582c]        ; 004a9679 | DAT_01c3582c
    OR EAX,EDX                          ; 004a967f
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9681
    SHL EDX,CL                          ; 004a9685
    MOV ECX,EDX                         ; 004a9687
    OR ECX,EAX                          ; 004a9689
    MOV word ptr [0x01cb0242],CX        ; 004a968b | DAT_01cb0242
    JMP 0x004a960e                      ; 004a9692
        ;   XREF to: 004a960e (UNCONDITIONAL_JUMP)  ; LAB_004a960e
    MOV EAX,EBX                         ; 004a9697
        ;   Label: LAB_004a9697
    MOV ECX,EDI                         ; 004a9699
    SHL EAX,0x8                         ; 004a969b
    SHL ECX,0x10                        ; 004a969e
    OR ECX,EAX                          ; 004a96a1
    OR ECX,ESI                          ; 004a96a3
    JMP 0x004a9608                      ; 004a96a5
        ;   XREF to: 004a9608 (UNCONDITIONAL_JUMP)  ; LAB_004a9608
    MOV EAX,0x5d69e5                    ; 004a96aa
        ;   Label: LAB_004a96aa
    MOV EDX,0x4b9                       ; 004a96af
    PUSH 0x5d69f8                       ; 004a96b4
    MOV [0x01d046a0],EAX                ; 004a96b9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004a96be | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a96c4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a96c9
    JMP 0x004a960e                      ; 004a96cc
        ;   XREF to: 004a960e (UNCONDITIONAL_JUMP)  ; LAB_004a960e

