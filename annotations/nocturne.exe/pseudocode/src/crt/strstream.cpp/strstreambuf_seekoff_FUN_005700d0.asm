; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_strstream_cpp_strstreambuf_seekoff_FUN_005700d0(int param_1,int param_2,int param_3,uint param_4)
;
;
; Called Functions:
;   crt_iostream.cpp_validateBufferSeek_FUN_00571e75
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005700d0
        ;   Label: crt_strstream.cpp_strstreambuf_seekoff_FUN_005700d0
    PUSH ESI                            ; 005700d1
    PUSH EDI                            ; 005700d2
    PUSH EBP                            ; 005700d3
    MOV EBP,ESP                         ; 005700d4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005700d6
    MOV EDX,dword ptr [EBP + 0x20]      ; 005700d9
    AND EDX,0x3                         ; 005700dc
    MOV dword ptr [EBP + 0x20],EDX      ; 005700df
    JZ 0x00570195                       ; 005700e2
        ;   XREF to: 00570195 (CONDITIONAL_JUMP)  ; LAB_00570195
    CMP dword ptr [EBP + 0x1c],0x1      ; 005700e8
    JNZ 0x005700f7                      ; 005700ec
        ;   XREF to: 005700f7 (CONDITIONAL_JUMP)  ; LAB_005700f7
    CMP EDX,0x3                         ; 005700ee
    JZ 0x00570195                       ; 005700f1
        ;   XREF to: 00570195 (CONDITIONAL_JUMP)  ; LAB_00570195
    TEST byte ptr [EBP + 0x20],0x1      ; 005700f7
        ;   Label: LAB_005700f7
    JZ 0x00570146                       ; 005700fb
        ;   XREF to: 00570146 (CONDITIONAL_JUMP)  ; LAB_00570146
    MOV EAX,dword ptr [EBX + 0x20]      ; 005700fd
    MOV EDX,EAX                         ; 00570100
    TEST EAX,EAX                        ; 00570102
    JNZ 0x0057019f                      ; 00570104
        ;   XREF to: 0057019f (CONDITIONAL_JUMP)  ; LAB_0057019f
    MOV EDX,dword ptr [EBX + 0x10]      ; 0057010a
        ;   Label: LAB_0057010a
    PUSH EDX                            ; 0057010d
        ;   Label: LAB_0057010d
    MOV EAX,dword ptr [EBX + 0x10]      ; 0057010e
    PUSH EAX                            ; 00570111
    MOV EAX,dword ptr [EBX + 0x14]      ; 00570112
    PUSH EAX                            ; 00570115
    MOV EAX,dword ptr [EBX + 0xc]       ; 00570116
    PUSH EAX                            ; 00570119
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0057011a
    PUSH EDX                            ; 0057011d
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057011e
    PUSH ECX                            ; 00570121
    CALL crt_iostream.cpp_validateBufferSeek_FUN_00571e75 ; 00570122
        ;   XREF to: 00571e75 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_validateBufferSeek_FUN_00571e75(int seek_distance, int whence, char * buffer_start, char * current_ptr, ...)
    ADD ESP,0x18                        ; 00570127
    MOV ECX,EAX                         ; 0057012a
    CMP EAX,-0x1                        ; 0057012c
    JZ 0x00570146                       ; 0057012f
        ;   XREF to: 00570146 (CONDITIONAL_JUMP)  ; LAB_00570146
    MOV EDX,dword ptr [EBX + 0xc]       ; 00570131
    MOV ESI,dword ptr [EBX + 0x10]      ; 00570134
    ADD EAX,EDX                         ; 00570137
    CMP EAX,ESI                         ; 00570139
    JBE 0x00570140                      ; 0057013b
        ;   XREF to: 00570140 (CONDITIONAL_JUMP)  ; LAB_00570140
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0057013d
    MOV dword ptr [EBX + 0x14],EAX      ; 00570140
        ;   Label: LAB_00570140
    MOV dword ptr [EBX + 0x10],ESI      ; 00570143
    TEST byte ptr [EBP + 0x20],0x2      ; 00570146
        ;   Label: LAB_00570146
    JZ 0x0057018e                       ; 0057014a
        ;   XREF to: 0057018e (CONDITIONAL_JUMP)  ; LAB_0057018e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0057014c
    PUSH EAX                            ; 0057014f
    PUSH EAX                            ; 00570150
    MOV EAX,dword ptr [EBX + 0x20]      ; 00570151
    PUSH EAX                            ; 00570154
    MOV EAX,dword ptr [EBX + 0x18]      ; 00570155
    PUSH EAX                            ; 00570158
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00570159
    PUSH ESI                            ; 0057015c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0057015d
    PUSH EDI                            ; 00570160
    CALL crt_iostream.cpp_validateBufferSeek_FUN_00571e75 ; 00570161
        ;   XREF to: 00571e75 (UNCONDITIONAL_CALL)  ; int crt_iostream.cpp_validateBufferSeek_FUN_00571e75(int seek_distance, int whence, char * buffer_start, char * current_ptr, ...)
    ADD ESP,0x18                        ; 00570166
    MOV ECX,EAX                         ; 00570169
    CMP EAX,-0x1                        ; 0057016b
    JZ 0x0057018e                       ; 0057016e
        ;   XREF to: 0057018e (CONDITIONAL_JUMP)  ; LAB_0057018e
    MOV EDX,dword ptr [EBX + 0x18]      ; 00570170
    MOV dword ptr [EBX + 0x20],EDX      ; 00570173
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00570176
    MOV EDX,dword ptr [EBX + 0x20]      ; 00570179
    MOV dword ptr [EBX + 0x1c],ESI      ; 0057017c
    ADD EDX,EAX                         ; 0057017f
    MOV ESI,dword ptr [EBX + 0x38]      ; 00570181
    MOV dword ptr [EBX + 0x20],EDX      ; 00570184
    CMP EAX,ESI                         ; 00570187
    JLE 0x0057018e                      ; 00570189
        ;   XREF to: 0057018e (CONDITIONAL_JUMP)  ; LAB_0057018e
    MOV dword ptr [EBX + 0x38],EAX      ; 0057018b
    MOV EAX,ECX                         ; 0057018e
        ;   Label: LAB_0057018e
    POP EBP                             ; 00570190
    POP EDI                             ; 00570191
    POP ESI                             ; 00570192
    POP EBX                             ; 00570193
    RET                                 ; 00570194
    MOV EAX,0xffffffff                  ; 00570195
        ;   Label: LAB_00570195
    POP EBP                             ; 0057019a
    POP EDI                             ; 0057019b
    POP ESI                             ; 0057019c
    POP EBX                             ; 0057019d
    RET                                 ; 0057019e
    MOV ECX,dword ptr [EBX + 0x10]      ; 0057019f
        ;   Label: LAB_0057019f
    CMP EAX,ECX                         ; 005701a2
    JC 0x0057010a                       ; 005701a4
        ;   XREF to: 0057010a (CONDITIONAL_JUMP)  ; LAB_0057010a
    JMP 0x0057010d                      ; 005701aa
        ;   XREF to: 0057010d (UNCONDITIONAL_JUMP)  ; LAB_0057010d

