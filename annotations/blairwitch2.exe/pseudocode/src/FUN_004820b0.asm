; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004820b0(int param_1,byte param_2)
;
;
; XREF[7]:
;   FUN_0047c970 at 0047cac2
;   FUN_004b6170 at 004b6c4e
;   FUN_004ed260 at 004ee13e
;   FUN_004eed60 at 004efadc
;   FUN_004fd280 at 004fd3e8
;   FUN_0055b110 at 0055b17d
;   FUN_0059c3d0 at 0059c406
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f5d34 = 004820b0
;   undefined4 DAT_005f5db0
;
; Called Functions:
;   FUN_00480d40
;   FUN_00483d10
;   FUN_00484350
;   FUN_00484e50
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004820b0
        ;   Label: FUN_004820b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004820b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004820b5
    JNZ 0x0048211b                      ; 004820ba
        ;   XREF to: 0048211b (CONDITIONAL_JUMP)  ; LAB_0048211b
    PUSH EBX                            ; 004820bc
    MOV dword ptr [EBX + 0xc],0x5f5d34  ; 004820bd | PTR_FUN_005f5d34
    CALL FUN_00483d10                   ; 004820c4
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    ADD ESP,0x4                         ; 004820c9
    PUSH 0x0                            ; 004820cc
    ADD EBX,0x2d8                       ; 004820ce
    PUSH EBX                            ; 004820d4
    CALL FUN_00484e50                   ; 004820d5
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e50()
    ADD ESP,0x8                         ; 004820da
    PUSH 0x0                            ; 004820dd
    SUB EAX,0xe4                        ; 004820df
    PUSH EAX                            ; 004820e4
    CALL FUN_00484e50                   ; 004820e5
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e50()
    ADD ESP,0x8                         ; 004820ea
    PUSH 0x0                            ; 004820ed
    SUB EAX,0x38                        ; 004820ef
    PUSH EAX                            ; 004820f2
    CALL FUN_00484350                   ; 004820f3
        ;   XREF to: 00484350 (UNCONDITIONAL_CALL)  ; undefined FUN_00484350()
    ADD ESP,0x8                         ; 004820f8
    PUSH 0x1                            ; 004820fb
    LEA EBX,[EAX + 0xfffffe44]          ; 004820fd
    PUSH EBX                            ; 00482103
    CALL FUN_00480d40                   ; 00482104
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d40()
    ADD ESP,0x8                         ; 00482109
    MOV DL,byte ptr [ESP + 0xc]         ; 0048210c
    MOV EBX,EAX                         ; 00482110
    TEST DL,0x2                         ; 00482112
    JNZ 0x00482136                      ; 00482115
        ;   XREF to: 00482136 (CONDITIONAL_JUMP)  ; LAB_00482136
    MOV EAX,EBX                         ; 00482117
    POP EBX                             ; 00482119
    RET                                 ; 0048211a
    PUSH 0x5f5db0                       ; 0048211b | DAT_005f5db0
        ;   Label: LAB_0048211b
    PUSH EBX                            ; 00482120
    CALL FUN_005b7fa7                   ; 00482121
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00482126
    PUSH EAX                            ; 00482129
    CALL FUN_005b7fce                   ; 0048212a
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0048212f
    MOV EAX,EBX                         ; 00482132
    POP EBX                             ; 00482134
    RET                                 ; 00482135
    PUSH EAX                            ; 00482136
        ;   Label: LAB_00482136
    CALL FUN_005b7fdc                   ; 00482137
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0048213c
    MOV EAX,EBX                         ; 0048213f
    POP EBX                             ; 00482141
    RET                                 ; 00482142

