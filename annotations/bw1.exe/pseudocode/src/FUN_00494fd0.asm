; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00494fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)
;
; Local Variables:
; undefined4       Stack[-0x8d4]:4  local_8d4
; undefined        Stack[-0x514]:1  local_514
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
;
; XREF[3]:
;   FUN_004d6990 at 004d6e22
;   FUN_004d7250 at 004d76fb
;   FUN_004d85f0 at 004d86a5
;
; Referenced Globals:
;   TerminatedCString s_No_files_found_005dbe05
;
; Called Functions:
;   FUN_004795b0
;   FUN_004943a0
;   FUN_004997f0
;   FUN_004998b0
;   FUN_00499ed0
;   FUN_0049a620
;   FUN_0049a710
;   FUN_0049a8b0
;   FUN_00531090
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494fd0
        ;   Label: FUN_00494fd0
    PUSH ESI                            ; 00494fd1
    PUSH EDI                            ; 00494fd2
    PUSH EBP                            ; 00494fd3
    SUB ESP,0x8c4                       ; 00494fd4
    MOV ESI,dword ptr [ESP + 0x8e8]     ; 00494fda
    MOV EAX,ESP                         ; 00494fe1
    PUSH EAX                            ; 00494fe3
    CALL FUN_0049a620                   ; 00494fe4
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a620()
    ADD ESP,0x4                         ; 00494fe9
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 00494fec
    PUSH EDX                            ; 00494ff3
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 00494ff4
    PUSH ECX                            ; 00494ffb
    LEA EAX,[ESP + 0x8]                 ; 00494ffc
    PUSH EAX                            ; 00495000
    CALL FUN_00499ed0                   ; 00495001
        ;   XREF to: 00499ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00499ed0()
    ADD ESP,0xc                         ; 00495006
    CMP dword ptr [ESP],0x1             ; 00495009
    JL 0x00495137                       ; 0049500d
        ;   XREF to: 00495137 (CONDITIONAL_JUMP)  ; LAB_00495137
    MOV EAX,ESP                         ; 00495013
    PUSH EAX                            ; 00495015
    CALL FUN_004997f0                   ; 00495016
        ;   XREF to: 004997f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004997f0()
    ADD ESP,0x4                         ; 0049501b
    MOV AH,byte ptr [ESP + 0x8ec]       ; 0049501e
    MOV EDI,0xffffffff                  ; 00495025
    TEST AH,0x1                         ; 0049502a
    JZ 0x004950a7                       ; 0049502d
        ;   XREF to: 004950a7 (CONDITIONAL_JUMP)  ; LAB_004950a7
    MOV EBP,dword ptr [ESP]             ; 0049502f
    XOR EBX,EBX                         ; 00495032
    TEST EBP,EBP                        ; 00495034
    JLE 0x004950a7                      ; 00495036
        ;   XREF to: 004950a7 (CONDITIONAL_JUMP)  ; LAB_004950a7
    PUSH 0x0                            ; 00495038
        ;   Label: LAB_00495038
    PUSH EBX                            ; 0049503a
    LEA EAX,[ESP + 0x5c8]               ; 0049503b
    PUSH EAX                            ; 00495042
    LEA EAX,[ESP + 0xc]                 ; 00495043
    PUSH EAX                            ; 00495047
    CALL FUN_004998b0                   ; 00495048
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998b0()
    ADD ESP,0x10                        ; 0049504d
    PUSH 0x1                            ; 00495050
    PUSH EBX                            ; 00495052
    LEA EAX,[ESP + 0x3c8]               ; 00495053
    PUSH EAX                            ; 0049505a
    LEA EAX,[ESP + 0xc]                 ; 0049505b
    PUSH EAX                            ; 0049505f
    CALL FUN_004998b0                   ; 00495060
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998b0()
    ADD ESP,0x10                        ; 00495065
    LEA EAX,[ESP + 0x3c0]               ; 00495068
    PUSH EAX                            ; 0049506f
    LEA EAX,[ESP + 0x5c4]               ; 00495070
    PUSH EAX                            ; 00495077
    PUSH 0x0                            ; 00495078
    PUSH 0x0                            ; 0049507a
    LEA EAX,[ESP + 0x7d0]               ; 0049507c
    PUSH EAX                            ; 00495083
    CALL FUN_004795b0                   ; 00495084
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00495089
    PUSH ESI                            ; 0049508c
    LEA EAX,[ESP + 0x7c4]               ; 0049508d
    PUSH EAX                            ; 00495094
    CALL FUN_005c04e0                   ; 00495095
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0049509a
    TEST EAX,EAX                        ; 0049509d
    JNZ 0x0049515f                      ; 0049509f
        ;   XREF to: 0049515f (CONDITIONAL_JUMP)  ; LAB_0049515f
    MOV EDI,EBX                         ; 004950a5
    PUSH 0x0                            ; 004950a7
        ;   Label: LAB_004950a7
    PUSH EDI                            ; 004950a9
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 004950aa
    PUSH ECX                            ; 004950b1
    LEA EAX,[ESP + 0xc]                 ; 004950b2
    PUSH EAX                            ; 004950b6
    CALL FUN_0049a8b0                   ; 004950b7
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8b0()
    MOV EBX,EAX                         ; 004950bc
    ADD ESP,0x10                        ; 004950be
    TEST EAX,EAX                        ; 004950c1
    JL 0x00495170                       ; 004950c3
        ;   XREF to: 00495170 (CONDITIONAL_JUMP)  ; LAB_00495170
    PUSH 0x0                            ; 004950c9
    PUSH EAX                            ; 004950cb
    LEA EAX,[ESP + 0x5c8]               ; 004950cc
    PUSH EAX                            ; 004950d3
    LEA EAX,[ESP + 0xc]                 ; 004950d4
    PUSH EAX                            ; 004950d8
    CALL FUN_004998b0                   ; 004950d9
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998b0()
    ADD ESP,0x10                        ; 004950de
    PUSH 0x1                            ; 004950e1
    PUSH EBX                            ; 004950e3
    LEA EAX,[ESP + 0x3c8]               ; 004950e4
    PUSH EAX                            ; 004950eb
    LEA EAX,[ESP + 0xc]                 ; 004950ec
    PUSH EAX                            ; 004950f0
    CALL FUN_004998b0                   ; 004950f1
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998b0()
    ADD ESP,0x10                        ; 004950f6
    LEA EAX,[ESP + 0x3c0]               ; 004950f9
    PUSH EAX                            ; 00495100
    LEA EAX,[ESP + 0x5c4]               ; 00495101
    PUSH EAX                            ; 00495108
    PUSH 0x0                            ; 00495109
    PUSH 0x0                            ; 0049510b
    PUSH ESI                            ; 0049510d
    CALL FUN_004795b0                   ; 0049510e
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00495113
    PUSH 0x0                            ; 00495116
    LEA EAX,[ESP + 0x4]                 ; 00495118
    PUSH EAX                            ; 0049511c
    MOV EBX,0x1                         ; 0049511d
    CALL FUN_0049a710                   ; 00495122
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
        ;   Label: LAB_00495122
    ADD ESP,0x8                         ; 00495127
    MOV EAX,EBX                         ; 0049512a
    ADD ESP,0x8c4                       ; 0049512c
    POP EBP                             ; 00495132
    POP EDI                             ; 00495133
    POP ESI                             ; 00495134
    POP EBX                             ; 00495135
    RET                                 ; 00495136
    PUSH 0x5dbe05                       ; 00495137 | = "No files found"
        ;   Label: LAB_00495137
    CALL FUN_00531090                   ; 0049513c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00495141
    PUSH EAX                            ; 00495144
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 00495145
    PUSH EAX                            ; 0049514c
    CALL FUN_004943a0                   ; 0049514d
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 00495152
    XOR EBX,EBX                         ; 00495155
    PUSH EBX                            ; 00495157
    LEA EAX,[ESP + 0x4]                 ; 00495158
    PUSH EAX                            ; 0049515c
    JMP 0x00495122                      ; 0049515d
        ;   XREF to: 00495122 (UNCONDITIONAL_JUMP)  ; LAB_00495122
    MOV EDX,dword ptr [ESP]             ; 0049515f
        ;   Label: LAB_0049515f
    INC EBX                             ; 00495162
    CMP EBX,EDX                         ; 00495163
    JL 0x00495038                       ; 00495165
        ;   XREF to: 00495038 (CONDITIONAL_JUMP)  ; LAB_00495038
    JMP 0x004950a7                      ; 0049516b
        ;   XREF to: 004950a7 (UNCONDITIONAL_JUMP)  ; LAB_004950a7
    PUSH 0x0                            ; 00495170
        ;   Label: LAB_00495170
    XOR EBX,EAX                         ; 00495172
    LEA EAX,[ESP + 0x4]                 ; 00495174
    PUSH EAX                            ; 00495178
    JMP 0x00495122                      ; 00495179
        ;   XREF to: 00495122 (UNCONDITIONAL_JUMP)  ; LAB_00495122

