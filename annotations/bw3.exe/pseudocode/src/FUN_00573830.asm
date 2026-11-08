; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573830(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573830
        ;   Label: FUN_00573830
    SUB ESP,0x4                         ; 00573831
    MOV EBX,dword ptr [ESP + 0xc]       ; 00573834
    PUSH EBX                            ; 00573838
    MOV EAX,dword ptr [EBX]             ; 00573839
    CALL dword ptr [EAX + 0x4]          ; 0057383b
    ADD ESP,0x4                         ; 0057383e
    MOV dword ptr [ESP],EAX             ; 00573841
    TEST EAX,EAX                        ; 00573844
    JL 0x00573870                       ; 00573846
        ;   XREF to: 00573870 (CONDITIONAL_JUMP)  ; LAB_00573870
    MOV AL,byte ptr [ESP]               ; 00573848
        ;   Label: LAB_00573848
    INC AL                              ; 0057384b
    AND EAX,0xff                        ; 0057384d
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00573852 | DAT_006074b8
    JZ 0x0057387c                       ; 00573859
        ;   XREF to: 0057387c (CONDITIONAL_JUMP)  ; LAB_0057387c
    PUSH EBX                            ; 0057385b
    MOV EAX,dword ptr [EBX]             ; 0057385c
    CALL dword ptr [EAX + 0x4]          ; 0057385e
    ADD ESP,0x4                         ; 00573861
    MOV dword ptr [ESP],EAX             ; 00573864
    CMP EAX,-0x1                        ; 00573867
    JZ 0x00573875                       ; 0057386a
        ;   XREF to: 00573875 (CONDITIONAL_JUMP)  ; LAB_00573875
    TEST EAX,EAX                        ; 0057386c
    JGE 0x00573848                      ; 0057386e
        ;   XREF to: 00573848 (CONDITIONAL_JUMP)  ; LAB_00573848
    ADD ESP,0x4                         ; 00573870
        ;   Label: LAB_00573870
    POP EBX                             ; 00573873
    RET                                 ; 00573874
    XOR EAX,EAX                         ; 00573875
        ;   Label: LAB_00573875
    ADD ESP,0x4                         ; 00573877
    POP EBX                             ; 0057387a
    RET                                 ; 0057387b
    MOV EDX,dword ptr [ESP]             ; 0057387c
        ;   Label: LAB_0057387c
    PUSH EDX                            ; 0057387f
    MOV EAX,dword ptr [EBX]             ; 00573880
    PUSH EBX                            ; 00573882
    CALL dword ptr [EAX + 0x8]          ; 00573883
    ADD ESP,0x8                         ; 00573886
    TEST EAX,EAX                        ; 00573889
    JZ 0x00573894                       ; 0057388b
        ;   XREF to: 00573894 (CONDITIONAL_JUMP)  ; LAB_00573894
    XOR EAX,EAX                         ; 0057388d
    ADD ESP,0x4                         ; 0057388f
    POP EBX                             ; 00573892
    RET                                 ; 00573893
    MOV EAX,0xfffffffe                  ; 00573894
        ;   Label: LAB_00573894
    ADD ESP,0x4                         ; 00573899
    POP EBX                             ; 0057389c
    RET                                 ; 0057389d

