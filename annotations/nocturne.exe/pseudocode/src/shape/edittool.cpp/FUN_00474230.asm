; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00474230(int *param_1,int param_2,char *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ece7
;   TerminatedCString s_CStrList_set_invalid_ind_0057ecfd
;   undefined1 DAT_0057ed1b
;   TerminatedCString s_shape_edittool_cpp_0057ed1c
;   undefined4 s_shape_edittool_cpp_0057ed1c+1
;   undefined4 s_shape_edittool_cpp_0057ed1c+2
;   TerminatedCString s_CStrList_set_out_of_memo_0057ed32
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474230
        ;   Label: shape_edittool.cpp_FUN_00474230
    PUSH ESI                            ; 00474231
    PUSH EDI                            ; 00474232
    PUSH EBP                            ; 00474233
    MOV EBP,dword ptr [ESP + 0x14]      ; 00474234
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00474238
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047423c
    TEST EDX,EDX                        ; 00474240
    JL 0x00474249                       ; 00474242
        ;   XREF to: 00474249 (CONDITIONAL_JUMP)  ; LAB_00474249
    CMP EDX,dword ptr [EBP]             ; 00474244
    JL 0x0047426c                       ; 00474247
        ;   XREF to: 0047426c (CONDITIONAL_JUMP)  ; LAB_0047426c
    MOV EBX,0x57ece7                    ; 00474249 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00474249
    MOV EDI,0xa9b                       ; 0047424e
    PUSH 0x57ecfd                       ; 00474253 | = "CStrList::set - invalid index"
    MOV dword ptr [0x01cc4800],EBX      ; 00474258 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0047425e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00474264
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00474269
    TEST ESI,ESI                        ; 0047426c
        ;   Label: LAB_0047426c
    JNZ 0x00474275                      ; 0047426e
        ;   XREF to: 00474275 (CONDITIONAL_JUMP)  ; LAB_00474275
    MOV ESI,0x57ed1b                    ; 00474270 | DAT_0057ed1b
    MOV EDI,ESI                         ; 00474275
        ;   Label: LAB_00474275
    MOV EBX,dword ptr [ESP + 0x18]      ; 00474277
    SUB ECX,ECX                         ; 0047427b
    DEC ECX                             ; 0047427d
    XOR EAX,EAX                         ; 0047427e
    SCASB.REPNE ES:EDI                  ; 00474280 | DAT_0057ed1b | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 00474282
    DEC ECX                             ; 00474284
    INC ECX                             ; 00474285
    MOV EAX,dword ptr [EBP + 0x8]       ; 00474286
    PUSH ECX                            ; 00474289
    MOV EDX,dword ptr [EAX + EBX*0x4]   ; 0047428a
    PUSH EDX                            ; 0047428d
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0047428e
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV ECX,dword ptr [EBP + 0x8]       ; 00474293
    MOV dword ptr [ECX + EBX*0x4],EAX   ; 00474296
    MOV EAX,dword ptr [EBP + 0x8]       ; 00474299
    MOV ECX,dword ptr [EAX + EBX*0x4]   ; 0047429c
    ADD ESP,0x8                         ; 0047429f
    TEST ECX,ECX                        ; 004742a2
    JZ 0x004742cf                       ; 004742a4
        ;   XREF to: 004742cf (CONDITIONAL_JUMP)  ; LAB_004742cf
    MOV ECX,dword ptr [ESP + 0x18]      ; 004742a6
        ;   Label: LAB_004742a6
    MOV EAX,dword ptr [EBP + 0x8]       ; 004742aa
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 004742ad
    PUSH EDI                            ; 004742b0
    MOV AL,byte ptr [ESI]               ; 004742b1 | DAT_0057ed1b | s_shape_edittool_cpp_0057ed1c+1
        ;   Label: LAB_004742b1
    MOV byte ptr [EDI],AL               ; 004742b3
    CMP AL,0x0                          ; 004742b5
    JZ 0x004742c9                       ; 004742b7
        ;   XREF to: 004742c9 (CONDITIONAL_JUMP)  ; LAB_004742c9
    MOV AL,byte ptr [ESI + 0x1]         ; 004742b9 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0057ed1c+2
    ADD ESI,0x2                         ; 004742bc
    MOV byte ptr [EDI + 0x1],AL         ; 004742bf
    ADD EDI,0x2                         ; 004742c2
    CMP AL,0x0                          ; 004742c5
    JNZ 0x004742b1                      ; 004742c7
        ;   XREF to: 004742b1 (CONDITIONAL_JUMP)  ; LAB_004742b1
    POP EDI                             ; 004742c9
        ;   Label: LAB_004742c9
    POP EBP                             ; 004742ca
    POP EDI                             ; 004742cb
    POP ESI                             ; 004742cc
    POP EBX                             ; 004742cd
    RET                                 ; 004742ce
    MOV EBX,0x57ed1c                    ; 004742cf | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004742cf
    MOV EDI,0xaa4                       ; 004742d4
    PUSH 0x57ed32                       ; 004742d9 | = "CStrList::set - out of memory!"
    MOV dword ptr [0x01cc4800],EBX      ; 004742de | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004742e4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004742ea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004742ef
    JMP 0x004742a6                      ; 004742f2
        ;   XREF to: 004742a6 (UNCONDITIONAL_JUMP)  ; LAB_004742a6

