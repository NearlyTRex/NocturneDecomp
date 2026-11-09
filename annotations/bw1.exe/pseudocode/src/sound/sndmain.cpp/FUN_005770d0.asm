; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005770d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c745e4
;   undefined4 DAT_02c745e8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005770d0
        ;   Label: sound_sndmain.cpp_FUN_005770d0
    PUSH ESI                            ; 005770d1
    PUSH EDI                            ; 005770d2
    PUSH EBP                            ; 005770d3
    SUB ESP,0x20                        ; 005770d4
    MOV EDX,dword ptr [0x02c745e4]      ; 005770d7 | DAT_02c745e4
    TEST EDX,EDX                        ; 005770dd
    JZ 0x005770ee                       ; 005770df
        ;   XREF to: 005770ee (CONDITIONAL_JUMP)  ; LAB_005770ee
    MOV EAX,0x1                         ; 005770e1
    ADD ESP,0x20                        ; 005770e6
    POP EBP                             ; 005770e9
    POP EDI                             ; 005770ea
    POP ESI                             ; 005770eb
    POP EBX                             ; 005770ec
    RET                                 ; 005770ed
    PUSH 0x14                           ; 005770ee
        ;   Label: LAB_005770ee
    PUSH EDX                            ; 005770f0
    LEA EAX,[ESP + 0x8]                 ; 005770f1
    PUSH EAX                            ; 005770f5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005770f6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005770fb
    MOV EAX,ESP                         ; 005770fe
    PUSH EAX                            ; 00577100
    PUSH 0x2102                         ; 00577101
    PUSH 0x803                          ; 00577106
    XOR EBX,EBX                         ; 0057710b
    MOV ECX,0x5f4638                    ; 0057710d
    PUSH EBX                            ; 00577112
    MOV dword ptr [ESP + 0x18],ECX      ; 00577113
    MOV dword ptr [ESP + 0x14],EBX      ; 00577117
    CALL dword ptr CS:[0x5d0448]        ; 0057711b
    TEST EAX,EAX                        ; 00577122
    JNZ 0x0057717c                      ; 00577124
        ;   XREF to: 0057717c (CONDITIONAL_JUMP)  ; LAB_0057717c
    PUSH 0xc                            ; 00577126
    PUSH EBX                            ; 00577128
    LEA EAX,[ESP + 0x1c]                ; 00577129
    PUSH EAX                            ; 0057712d
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057712e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00577133
    LEA EAX,[ESP + 0x14]                ; 00577136
    PUSH EAX                            ; 0057713a
    PUSH 0x400                          ; 0057713b
    PUSH 0x80d                          ; 00577140
    MOV EDI,dword ptr [ESP + 0x10]      ; 00577145
    MOV ESI,0xa                         ; 00577149
    PUSH EDI                            ; 0057714e
    MOV dword ptr [ESP + 0x28],ESI      ; 0057714f
    CALL dword ptr CS:[0x5d0448]        ; 00577153
    TEST EAX,EAX                        ; 0057715a
    JNZ 0x00577193                      ; 0057715c
        ;   XREF to: 00577193 (CONDITIONAL_JUMP)  ; LAB_00577193
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057715e
    MOV EBP,0x1                         ; 00577162
    MOV [0x02c745e8],EAX                ; 00577167 | DAT_02c745e8
    MOV dword ptr [0x02c745e4],EBP      ; 0057716c | DAT_02c745e4
    MOV EAX,EBP                         ; 00577172
    ADD ESP,0x20                        ; 00577174
    POP EBP                             ; 00577177
    POP EDI                             ; 00577178
    POP ESI                             ; 00577179
    POP EBX                             ; 0057717a
    RET                                 ; 0057717b
    PUSH 0x5f4640                       ; 0057717c
        ;   Label: LAB_0057717c
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00577181
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 00577186
    XOR EAX,EAX                         ; 00577189
    ADD ESP,0x20                        ; 0057718b
    POP EBP                             ; 0057718e
    POP EDI                             ; 0057718f
    POP ESI                             ; 00577190
    POP EBX                             ; 00577191
    RET                                 ; 00577192
    PUSH 0x5f4658                       ; 00577193
        ;   Label: LAB_00577193
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00577198
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057719d
    XOR EAX,EAX                         ; 005771a0
    ADD ESP,0x20                        ; 005771a2
    POP EBP                             ; 005771a5
    POP EDI                             ; 005771a6
    POP ESI                             ; 005771a7
    POP EBX                             ; 005771a8
    RET                                 ; 005771a9

