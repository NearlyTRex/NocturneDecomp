; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_CCodec_processBuffer_FUN_00439120(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x4c]:1  local_4c
;
; Called Functions:
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439120
        ;   Label: support_codec.cpp_CCodec_processBuffer_FUN_00439120
    PUSH ESI                            ; 00439121
    PUSH EDI                            ; 00439122
    PUSH EBP                            ; 00439123
    SUB ESP,0x84                        ; 00439124
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043912a
    MOV EDX,dword ptr [EAX]             ; 00439131
    PUSH EDX                            ; 00439133
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00439134
    PUSH ECX                            ; 0043913b
    PUSH 0x0                            ; 0043913c
    LEA EBX,[ESP + 0xc]                 ; 0043913e
    PUSH EBX                            ; 00439142
    CALL crt_strstream.cpp_istrstream_ctor_FUN_00564f32 ; 00439143
        ;   XREF to: 00564f32 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_istrstream_ctor_FUN_00564f32()
    ADD ESP,0x10                        ; 00439148
    MOV EBX,dword ptr [ESP + 0xac]      ; 0043914b
    PUSH EBX                            ; 00439152
    MOV ESI,dword ptr [ESP + 0xac]      ; 00439153
    PUSH ESI                            ; 0043915a
    MOV EDI,dword ptr [ESP + 0xac]      ; 0043915b
    PUSH EDI                            ; 00439162
    MOV EBP,dword ptr [ESP + 0xac]      ; 00439163
    PUSH EBP                            ; 0043916a
    LEA EBX,[ESP + 0x58]                ; 0043916b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0043916f
    PUSH EBX                            ; 00439176
    MOV EDX,dword ptr [ESP + 0xac]      ; 00439177
    MOV EAX,dword ptr [EAX]             ; 0043917e
    PUSH EDX                            ; 00439180
    CALL dword ptr [EAX + 0x10]         ; 00439181
    ADD ESP,0x18                        ; 00439184
    PUSH 0x0                            ; 00439187
    MOV EBX,EAX                         ; 00439189
    LEA EAX,[ESP + 0x4]                 ; 0043918b
    PUSH EAX                            ; 0043918f
    CALL crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 ; 00439190
        ;   XREF to: 00564fd8 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_istrstream_dtor_FUN_00564fd8()
    ADD ESP,0x8                         ; 00439195
    MOV EAX,EBX                         ; 00439198
    ADD ESP,0x84                        ; 0043919a
    POP EBP                             ; 004391a0
    POP EDI                             ; 004391a1
    POP ESI                             ; 004391a2
    POP EBX                             ; 004391a3
    RET                                 ; 004391a4

