; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482010(int param_1,float param_2)
;
;
; Referenced Globals:
;   string s_35-loop.wav_00580fe1
;   string s_..\\core\\filmreel.cpp_00580fed
;   string s_CFilmProjector::Need_to_put_CFil_00581002
;   string s_35-start.wav_00581031
;   string s_35-end.wav_0058103e
;   undefined4 DAT_0058104b
;   undefined4 DAT_005ad550
;   undefined4 DAT_005b7650
;   undefined4 DAT_01c08cc4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0040d890
;   FUN_0044b850
;   FUN_0044c310
;   FUN_0047ab70
;   FUN_004c8440
;   FUN_00526c50
;   FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482010
        ;   Label: FUN_00482010
    PUSH ESI                            ; 00482011
    PUSH EDI                            ; 00482012
    PUSH EBP                            ; 00482013
    SUB ESP,0x10                        ; 00482014
    MOV EBX,dword ptr [ESP + 0x24]      ; 00482017
    MOV EDX,dword ptr [EBX + 0x17c]     ; 0048201b
    TEST EDX,EDX                        ; 00482021
    JNZ 0x00482053                      ; 00482023
        ;   XREF to: 00482053 (CONDITIONAL_JUMP)  ; LAB_00482053
    CMP dword ptr [EBX + 0x3d4],0x0     ; 00482025
    JNZ 0x00482161                      ; 0048202c
        ;   XREF to: 00482161 (CONDITIONAL_JUMP)  ; LAB_00482161
    PUSH dword ptr [ESP + 0x28]         ; 00482032
        ;   Label: LAB_00482032
    MOV EAX,dword ptr [EBX + 0x17c]     ; 00482036
    PUSH EBX                            ; 0048203c
    MOV dword ptr [EBX + 0x3d4],EAX     ; 0048203d
    CALL FUN_0044b850                   ; 00482043
        ;   XREF to: 0044b850 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b850()
    ADD ESP,0x8                         ; 00482048
    ADD ESP,0x10                        ; 0048204b
    POP EBP                             ; 0048204e
    POP EDI                             ; 0048204f
    POP ESI                             ; 00482050
    POP EBX                             ; 00482051
    RET                                 ; 00482052
    FLD float ptr [ESP + 0x28]          ; 00482053
        ;   Label: LAB_00482053
    MOV EAX,dword ptr [EBX + 0x150]     ; 00482057
    FMUL double ptr [0x0058104b]        ; 0048205d | DAT_0058104b
    FLD float ptr [EAX + 0x38]          ; 00482063
    FLD ST0                             ; 00482066
    FSUB ST0,ST2                        ; 00482068
    FSTP ST1                            ; 0048206a
    FSTP float ptr [EAX + 0x38]         ; 0048206c
    FLD float ptr [EBX + 0x3d0]         ; 0048206f
    FSUBR ST1,ST0                       ; 00482075
    MOV EBP,dword ptr [EBX + 0x3d4]     ; 00482077
    FXCH                                ; 0048207d
    FSTP ST1                            ; 0048207f
    FSTP float ptr [EBX + 0x3d0]        ; 00482081
    TEST EBP,EBP                        ; 00482087
    JZ 0x004820e1                       ; 00482089
        ;   XREF to: 004820e1 (CONDITIONAL_JUMP)  ; LAB_004820e1
    MOV EDX,dword ptr [EBX + 0x3d8]     ; 0048208b
    PUSH EDX                            ; 00482091
    CALL FUN_00526c50                   ; 00482092
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 00482097
    TEST EAX,EAX                        ; 0048209a
    JZ 0x004820c7                       ; 0048209c
        ;   XREF to: 004820c7 (CONDITIONAL_JUMP)  ; LAB_004820c7
    MOV ECX,dword ptr [EBX + 0x368]     ; 0048209e
        ;   Label: LAB_0048209e
    CMP ECX,dword ptr [EBX + 0x150]     ; 004820a4
    JNZ 0x00482032                      ; 004820aa
        ;   XREF to: 00482032 (CONDITIONAL_JUMP)  ; LAB_00482032
    LEA EAX,[EBX + 0x36c]               ; 004820ac
    PUSH EAX                            ; 004820b2
    MOV ESI,dword ptr [0x005b7650]      ; 004820b3 | DAT_005b7650
    PUSH ESI                            ; 004820b9
    CALL FUN_0047ab70                   ; 004820ba
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab70()
    ADD ESP,0x8                         ; 004820bf
    JMP 0x00482032                      ; 004820c2
        ;   XREF to: 00482032 (UNCONDITIONAL_JUMP)  ; LAB_00482032
    PUSH 0x580fe1                       ; 004820c7 | = "35-loop.wav"
        ;   Label: LAB_004820c7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004820cc
    PUSH EBX                            ; 004820d2
    CALL dword ptr [EAX + 0x24]         ; 004820d3
    ADD ESP,0x8                         ; 004820d6
    MOV dword ptr [EBX + 0x3d8],EAX     ; 004820d9
    JMP 0x0048209e                      ; 004820df
        ;   XREF to: 0048209e (UNCONDITIONAL_JUMP)  ; LAB_0048209e
    MOV EAX,[0x01c08cc4]                ; 004820e1 | DAT_01c08cc4
        ;   Label: LAB_004820e1
    PUSH EAX                            ; 004820e6
    MOV EDX,dword ptr [EBX + 0x150]     ; 004820e7
    PUSH EDX                            ; 004820ed
    CALL FUN_0040d890                   ; 004820ee
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004820f3
    MOV ESI,EAX                         ; 004820f6
    TEST EAX,EAX                        ; 004820f8
    JNZ 0x0048211f                      ; 004820fa
        ;   XREF to: 0048211f (CONDITIONAL_JUMP)  ; LAB_0048211f
    MOV ECX,0x580fed                    ; 004820fc | = "..\\core\\filmreel.cpp"
    MOV EDI,0x11e                       ; 00482101
    PUSH 0x581002                       ; 00482106 | = "CFilmProjector::Need to put CFilmReel..."
    MOV dword ptr [0x01cc4800],ECX      ; 0048210b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00482111 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00482117
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0048211c
    LEA EAX,[ESI + 0x2d0]               ; 0048211f
        ;   Label: LAB_0048211f
    PUSH EAX                            ; 00482125
    MOV EBP,dword ptr [0x005ad550]      ; 00482126 | DAT_005ad550
    PUSH EBP                            ; 0048212c
    CALL FUN_0044c310                   ; 0048212d
        ;   XREF to: 0044c310 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c310()
    ADD ESP,0x8                         ; 00482132
    MOV EAX,dword ptr [EBX + 0x3d8]     ; 00482135
    PUSH EAX                            ; 0048213b
    CALL FUN_00527230                   ; 0048213c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 00482141
    PUSH 0x581031                       ; 00482144 | = "35-start.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00482149
    PUSH EBX                            ; 0048214f
    CALL dword ptr [EAX + 0x24]         ; 00482150
    ADD ESP,0x8                         ; 00482153
    MOV dword ptr [EBX + 0x3d8],EAX     ; 00482156
    JMP 0x0048209e                      ; 0048215c
        ;   XREF to: 0048209e (UNCONDITIONAL_JUMP)  ; LAB_0048209e
    PUSH EDX                            ; 00482161
        ;   Label: LAB_00482161
    MOV ESI,dword ptr [0x005ad550]      ; 00482162 | DAT_005ad550
    PUSH ESI                            ; 00482168
    CALL FUN_0044c310                   ; 00482169
        ;   XREF to: 0044c310 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c310()
    ADD ESP,0x8                         ; 0048216e
    MOV EDI,dword ptr [EBX + 0x3d8]     ; 00482171
    PUSH EDI                            ; 00482177
    CALL FUN_00527230                   ; 00482178
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 0048217d
    PUSH 0x58103e                       ; 00482180 | = "35-end.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00482185
    PUSH EBX                            ; 0048218b
    CALL dword ptr [EAX + 0x24]         ; 0048218c
    ADD ESP,0x8                         ; 0048218f
    MOV dword ptr [EBX + 0x3d8],EAX     ; 00482192
    JMP 0x00482032                      ; 00482198
        ;   XREF to: 00482032 (UNCONDITIONAL_JUMP)  ; LAB_00482032

