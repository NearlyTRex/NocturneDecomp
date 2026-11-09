; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005c9594(char *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005c969c at 005c972d
;
; Called Functions:
;   crt_unknown.c_FUN_005c9448
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9594
        ;   Label: crt_unknown.c_FUN_005c9594
    PUSH ESI                            ; 005c9595
    SUB ESP,0x10                        ; 005c9596
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c9599
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c959d
    MOV AH,byte ptr [EDX]               ; 005c95a1
    MOV ESI,0xffffffff                  ; 005c95a3
    CMP AH,0x4a                         ; 005c95a8
    JNZ 0x005c95b4                      ; 005c95ab
        ;   XREF to: 005c95b4 (CONDITIONAL_JUMP)  ; LAB_005c95b4
    MOV ESI,0x1                         ; 005c95ad
    ADD EDX,ESI                         ; 005c95b2
    CMP byte ptr [EDX],0x4d             ; 005c95b4
        ;   Label: LAB_005c95b4
    JNZ 0x005c95bc                      ; 005c95b7
        ;   XREF to: 005c95bc (CONDITIONAL_JUMP)  ; LAB_005c95bc
    INC EDX                             ; 005c95b9
    XOR ESI,ESI                         ; 005c95ba
    LEA EAX,[ESP + 0xc]                 ; 005c95bc
        ;   Label: LAB_005c95bc
    PUSH EAX                            ; 005c95c0
    PUSH EDX                            ; 005c95c1
    MOV dword ptr [EBX + 0x20],ESI      ; 005c95c2
    CALL crt_unknown.c_FUN_005c9448     ; 005c95c5
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    MOV ECX,EAX                         ; 005c95ca
    ADD ESP,0x8                         ; 005c95cc
    MOV EDX,EAX                         ; 005c95cf
    TEST ESI,ESI                        ; 005c95d1
    JZ 0x005c95de                       ; 005c95d3
        ;   XREF to: 005c95de (CONDITIONAL_JUMP)  ; LAB_005c95de
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c95d5
    MOV dword ptr [EBX + 0x1c],EAX      ; 005c95d9
    JMP 0x005c9629                      ; 005c95dc
        ;   XREF to: 005c9629 (UNCONDITIONAL_JUMP)  ; LAB_005c9629
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c95de
        ;   Label: LAB_005c95de
    DEC EAX                             ; 005c95e2
    MOV dword ptr [EBX + 0x10],EAX      ; 005c95e3
    CMP byte ptr [ECX],0x2e             ; 005c95e6
    JNZ 0x005c9622                      ; 005c95e9
        ;   XREF to: 005c9622 (CONDITIONAL_JUMP)  ; LAB_005c9622
    LEA EAX,[ESP + 0xc]                 ; 005c95eb
    PUSH EAX                            ; 005c95ef
    INC ECX                             ; 005c95f0
    PUSH ECX                            ; 005c95f1
    CALL crt_unknown.c_FUN_005c9448     ; 005c95f2
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    MOV ECX,EAX                         ; 005c95f7
    ADD ESP,0x8                         ; 005c95f9
    MOV EDX,EAX                         ; 005c95fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c95fe
    MOV dword ptr [EBX + 0xc],EAX       ; 005c9602
    CMP byte ptr [ECX],0x2e             ; 005c9605
    JNZ 0x005c9622                      ; 005c9608
        ;   XREF to: 005c9622 (CONDITIONAL_JUMP)  ; LAB_005c9622
    LEA EAX,[ESP + 0xc]                 ; 005c960a
    PUSH EAX                            ; 005c960e
    INC ECX                             ; 005c960f
    PUSH ECX                            ; 005c9610
    CALL crt_unknown.c_FUN_005c9448     ; 005c9611
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c9616
    MOV EDX,EAX                         ; 005c9619
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c961b
    MOV dword ptr [EBX + 0x18],EAX      ; 005c961f
    MOV dword ptr [EBX + 0x1c],0x0      ; 005c9622
        ;   Label: LAB_005c9622
    MOV ECX,0x2                         ; 005c9629
        ;   Label: LAB_005c9629
    XOR ESI,ESI                         ; 005c962e
    MOV dword ptr [ESP + 0x8],ECX       ; 005c9630
    MOV dword ptr [ESP],ESI             ; 005c9634
    MOV dword ptr [ESP + 0x4],ESI       ; 005c9637
    CMP byte ptr [EDX],0x2f             ; 005c963b
    JNZ 0x005c967f                      ; 005c963e
        ;   XREF to: 005c967f (CONDITIONAL_JUMP)  ; LAB_005c967f
    LEA EAX,[ESP + 0x8]                 ; 005c9640
    PUSH EAX                            ; 005c9644
    INC EDX                             ; 005c9645
    PUSH EDX                            ; 005c9646
    CALL crt_unknown.c_FUN_005c9448     ; 005c9647
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c964c
    MOV CH,byte ptr [EAX]               ; 005c964f
    MOV EDX,EAX                         ; 005c9651
    CMP CH,0x3a                         ; 005c9653
    JNZ 0x005c967f                      ; 005c9656
        ;   XREF to: 005c967f (CONDITIONAL_JUMP)  ; LAB_005c967f
    LEA EDX,[ESP + 0x4]                 ; 005c9658
    PUSH EDX                            ; 005c965c
    INC EAX                             ; 005c965d
    PUSH EAX                            ; 005c965e
    CALL crt_unknown.c_FUN_005c9448     ; 005c965f
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c9664
    MOV CL,byte ptr [EAX]               ; 005c9667
    MOV EDX,EAX                         ; 005c9669
    CMP CL,0x3a                         ; 005c966b
    JNZ 0x005c967f                      ; 005c966e
        ;   XREF to: 005c967f (CONDITIONAL_JUMP)  ; LAB_005c967f
    MOV EDX,ESP                         ; 005c9670
    PUSH EDX                            ; 005c9672
    INC EAX                             ; 005c9673
    PUSH EAX                            ; 005c9674
    CALL crt_unknown.c_FUN_005c9448     ; 005c9675
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c967a
    MOV EDX,EAX                         ; 005c967d
    MOV EAX,dword ptr [ESP]             ; 005c967f
        ;   Label: LAB_005c967f
    MOV dword ptr [EBX],EAX             ; 005c9682
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c9684
    MOV dword ptr [EBX + 0x4],EAX       ; 005c9688
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c968b
    MOV dword ptr [EBX + 0x8],EAX       ; 005c968f
    MOV EAX,EDX                         ; 005c9692
    ADD ESP,0x10                        ; 005c9694
    POP ESI                             ; 005c9697
    POP EBX                             ; 005c9698
    RET                                 ; 005c9699

