; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c040(char *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004c0fa0 at 004c10e3
;   FUN_004d8720 at 004d8a20
;
; Referenced Globals:
;   undefined4 s_..\\core\\actor.cpp_005779d8+1
;   string s_CDemonActor::save_-_tried_to_sav_005779eb
;   string s_%s{_%s_\"%s\"_00577a2c
;   string s_%s}_%s_\"%s\"_00577a39
;   string s_..\\core\\actor.cpp_00577a46
;   string s_IO_Error_after_writing_actor_of_t_00577a58
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e8c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00409fa0
;   FUN_0040bff0
;   FUN_0040d8c0
;   FUN_004c8440
;   FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c040
        ;   Label: FUN_0040c040
    PUSH ESI                            ; 0040c041
    PUSH EDI                            ; 0040c042
    PUSH EBP                            ; 0040c043
    SUB ESP,0x8                         ; 0040c044
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040c047
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040c04b
    CALL FUN_0040d8c0                   ; 0040c04f
        ;   XREF to: 0040d8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d8c0()
    PUSH EBX                            ; 0040c054
    CALL FUN_00409fa0                   ; 0040c055
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fa0()
    ADD ESP,0x4                         ; 0040c05a
    MOV DL,byte ptr [EBX]               ; 0040c05d
    MOV ESI,EAX                         ; 0040c05f
    TEST DL,DL                          ; 0040c061
    JNZ 0x0040c089                      ; 0040c063
        ;   XREF to: 0040c089 (CONDITIONAL_JUMP)  ; LAB_0040c089
    PUSH EAX                            ; 0040c065
    MOV EDX,0x5779d9                    ; 0040c066 | s_..\core\actor.cpp_005779d8+1
    MOV ECX,0x787                       ; 0040c06b
    PUSH 0x5779eb                       ; 0040c070 | = "CDemonActor::save - tried to save act..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040c075 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040c07b | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c081
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040c086
    PUSH EBX                            ; 0040c089
        ;   Label: LAB_0040c089
    PUSH ESI                            ; 0040c08a
    PUSH 0x5acc90                       ; 0040c08b | DAT_005acc90
    PUSH 0x577a2c                       ; 0040c090 | = "%s{ %s \"%s\"\n"
    PUSH EDI                            ; 0040c095
    CALL FUN_005644f0                   ; 0040c096
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x14                        ; 0040c09b
    MOV EAX,[0x00763e84]                ; 0040c09e | DAT_00763e84
    MOV EBP,dword ptr [0x00763e8c]      ; 0040c0a3 | DAT_00763e8c
    PUSH 0x1                            ; 0040c0a9
    MOV dword ptr [ESP + 0x8],EAX       ; 0040c0ab
    MOV EAX,[0x00763e88]                ; 0040c0af | DAT_00763e88
    MOV dword ptr [0x00763e84],EDI      ; 0040c0b4 | DAT_00763e84
    MOV dword ptr [ESP + 0x4],EAX       ; 0040c0ba
    MOV EAX,0x2                         ; 0040c0be
    MOV dword ptr [0x00763e8c],EBX      ; 0040c0c3 | DAT_00763e8c
    MOV [0x00763e88],EAX                ; 0040c0c9 | DAT_00763e88
    CALL FUN_0040bff0                   ; 0040c0ce
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bff0()
    ADD ESP,0x4                         ; 0040c0d3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040c0d6
    PUSH EBX                            ; 0040c0dc
    CALL dword ptr [EAX + 0xcc]         ; 0040c0dd
    ADD ESP,0x4                         ; 0040c0e3
    PUSH -0x1                           ; 0040c0e6
    CALL FUN_0040bff0                   ; 0040c0e8
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bff0()
    ADD ESP,0x4                         ; 0040c0ed
    PUSH EBX                            ; 0040c0f0
    PUSH ESI                            ; 0040c0f1
    PUSH 0x5acc90                       ; 0040c0f2 | DAT_005acc90
    PUSH 0x577a39                       ; 0040c0f7 | = "%s} %s \"%s\"\n"
    PUSH EDI                            ; 0040c0fc
    CALL FUN_005644f0                   ; 0040c0fd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    MOV DH,byte ptr [EDI + 0xc]         ; 0040c102
    ADD ESP,0x14                        ; 0040c105
    TEST DH,0x20                        ; 0040c108
    JNZ 0x0040c12c                      ; 0040c10b
        ;   XREF to: 0040c12c (CONDITIONAL_JUMP)  ; LAB_0040c12c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c10d
        ;   Label: LAB_0040c10d
    MOV [0x00763e84],EAX                ; 0040c111 | DAT_00763e84
    MOV EAX,dword ptr [ESP]             ; 0040c116
    MOV dword ptr [0x00763e8c],EBP      ; 0040c119 | DAT_00763e8c
    MOV [0x00763e88],EAX                ; 0040c11f | DAT_00763e88
    ADD ESP,0x8                         ; 0040c124
    POP EBP                             ; 0040c127
    POP EDI                             ; 0040c128
    POP ESI                             ; 0040c129
    POP EBX                             ; 0040c12a
    RET                                 ; 0040c12b
    PUSH ESI                            ; 0040c12c
        ;   Label: LAB_0040c12c
    MOV EDX,0x577a46                    ; 0040c12d | = "..\\core\\actor.cpp"
    MOV ECX,0x7a9                       ; 0040c132
    PUSH 0x577a58                       ; 0040c137 | = "IO Error after writing actor of type %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0040c13c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040c142 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c148
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040c14d
    JMP 0x0040c10d                      ; 0040c150
        ;   XREF to: 0040c10d (UNCONDITIONAL_JUMP)  ; LAB_0040c10d

