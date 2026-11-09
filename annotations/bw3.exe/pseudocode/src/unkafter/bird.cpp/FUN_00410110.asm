; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bird_cpp_FUN_00410110(CCharacter *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6452
;   undefined4 DAT_005b6456
;   CDemonActorType g_CBirdClassInfo
;
; Called Functions:
;   core_charactr.cpp_FUN_00430d60
;   core_charactr.cpp_FUN_00431ce0
;   unkafter_bird.cpp_FUN_00410030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410110
        ;   Label: unkafter_bird.cpp_FUN_00410110
    PUSH ESI                            ; 00410111
    PUSH EDI                            ; 00410112
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410113
    MOV EDI,dword ptr [ESP + 0x14]      ; 00410117
    PUSH EBX                            ; 0041011b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041011c
    CALL dword ptr [EAX + 0xcc]         ; 00410122
    ADD ESP,0x4                         ; 00410128
    CMP EAX,0x7dff10                    ; 0041012b | g_CBirdClassInfo
    JNZ 0x00410173                      ; 00410130
        ;   XREF to: 00410173 (CONDITIONAL_JUMP)  ; LAB_00410173
    FLD float ptr [EDI + 0x4]           ; 00410132
    FSUBR float ptr [EBX + 0x2538]      ; 00410135
    LEA ESI,[EBX + 0x158]               ; 0041013b
    FST float ptr [EBX + 0x2538]        ; 00410141
    FLDZ                                ; 00410147
    FCOMPP                              ; 00410149
    FNSTSW AX                           ; 0041014b
    SAHF                                ; 0041014d
    JNC 0x00410181                      ; 0041014e
        ;   XREF to: 00410181 (CONDITIONAL_JUMP)  ; LAB_00410181
    FLD float ptr [EDI + 0x4]           ; 00410150
    FLDZ                                ; 00410153
    FCOMPP                              ; 00410155
    FNSTSW AX                           ; 00410157
    SAHF                                ; 00410159
    JNC 0x00410173                      ; 0041015a
        ;   XREF to: 00410173 (CONDITIONAL_JUMP)  ; LAB_00410173
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0041015c
    JNZ 0x00410173                      ; 00410163
        ;   XREF to: 00410173 (CONDITIONAL_JUMP)  ; LAB_00410173
    PUSH 0x5b6456                       ; 00410165 | DAT_005b6456
    PUSH ESI                            ; 0041016a
        ;   Label: LAB_0041016a
    CALL unkafter_bird.cpp_FUN_00410030 ; 0041016b
        ;   XREF to: 00410030 (UNCONDITIONAL_CALL)  ; undefined unkafter_bird.cpp_FUN_00410030()
    ADD ESP,0x8                         ; 00410170
    PUSH EDI                            ; 00410173
        ;   Label: LAB_00410173
    PUSH EBX                            ; 00410174
    CALL core_charactr.cpp_FUN_00430d60 ; 00410175
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430d60()
    ADD ESP,0x8                         ; 0041017a
    POP EDI                             ; 0041017d
    POP ESI                             ; 0041017e
    POP EBX                             ; 0041017f
    RET                                 ; 00410180
    PUSH 0x41c80000                     ; 00410181
        ;   Label: LAB_00410181
    PUSH 0x32                           ; 00410186
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410188
    PUSH EBX                            ; 0041018e
    MOV dword ptr [EBX + 0x2538],0x0    ; 0041018f
    CALL dword ptr [EAX + 0xa8]         ; 00410199
    ADD ESP,0xc                         ; 0041019f
    PUSH EBX                            ; 004101a2
    CALL core_charactr.cpp_FUN_00431ce0 ; 004101a3
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431ce0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004101a8
    PUSH 0x5b6452                       ; 004101ab | DAT_005b6452
    JMP 0x0041016a                      ; 004101b0
        ;   XREF to: 0041016a (UNCONDITIONAL_JUMP)  ; LAB_0041016a

