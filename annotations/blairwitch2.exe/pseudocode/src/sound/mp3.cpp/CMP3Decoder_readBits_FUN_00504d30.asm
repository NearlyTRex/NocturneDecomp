; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder *this_ptr,uint num_bits)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   num_bits
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a8b0
;   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_00506cb0 at 0050701f
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240 at 005078fc
;   sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0 at 005069bc
;   sound_mp3.cpp_FUN_00504e10 at 00504e17
;   sound_mp3.cpp_FUN_00504f10 at 0050510b
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dff59
;   TerminatedCString s_Buffer_overflow_File_s_005dff6a
;   undefined4 DAT_00619250
;   undefined4 DAT_00619270
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504d30
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
    PUSH ESI                            ; 00504d31
    PUSH EDI                            ; 00504d32
    PUSH EBP                            ; 00504d33
    SUB ESP,0x4                         ; 00504d34
    MOV EBX,dword ptr [ESP + 0x18]      ; 00504d37
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00504d3b
    MOV EDX,dword ptr [EBX + 0x1314]    ; 00504d3f
    MOV ESI,EAX                         ; 00504d45
    ADD EDX,EAX                         ; 00504d47
    XOR EDI,EDI                         ; 00504d49
    MOV dword ptr [EBX + 0x1314],EDX    ; 00504d4b
    TEST EAX,EAX                        ; 00504d51
    JLE 0x00504db1                      ; 00504d53
        ;   XREF to: 00504db1 (CONDITIONAL_JUMP)  ; LAB_00504db1
    CMP dword ptr [EBX + 0x531c],0x0    ; 00504d55
        ;   Label: LAB_00504d55
    JZ 0x00504dbb                       ; 00504d5c
        ;   XREF to: 00504dbb (CONDITIONAL_JUMP)  ; LAB_00504dbb
    MOV EDX,dword ptr [EBX + 0x531c]    ; 00504d5e
        ;   Label: LAB_00504d5e
    CMP ESI,EDX                         ; 00504d64
    JNC 0x00504e08                      ; 00504d66
        ;   XREF to: 00504e08 (CONDITIONAL_JUMP)  ; LAB_00504e08
    MOV EAX,ESI                         ; 00504d6c
    MOV EDX,dword ptr [EBX + 0x1318]    ; 00504d6e
        ;   Label: LAB_00504d6e
    MOV ECX,dword ptr [EBX + 0x531c]    ; 00504d74
    SUB ESI,EAX                         ; 00504d7a
    AND EDX,0xfff                       ; 00504d7c
    MOV EBP,dword ptr [ECX*0x4 + 0x619250] ; 00504d82 | DAT_00619250 | DAT_00619270
    SUB ECX,EAX                         ; 00504d89
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c] ; 00504d8b
    MOV dword ptr [ESP],ECX             ; 00504d92
    AND EDX,EBP                         ; 00504d95
    MOV CL,byte ptr [ESP]               ; 00504d97
    MOV EAX,ESI                         ; 00504d9a
    SHR EDX,CL                          ; 00504d9c
    MOV CL,AL                           ; 00504d9e
    SHL EDX,CL                          ; 00504da0
    OR EDI,EDX                          ; 00504da2
    MOV EDX,dword ptr [ESP]             ; 00504da4
    MOV dword ptr [EBX + 0x531c],EDX    ; 00504da7
    TEST ESI,ESI                        ; 00504dad
    JG 0x00504d55                       ; 00504daf
        ;   XREF to: 00504d55 (CONDITIONAL_JUMP)  ; LAB_00504d55
    MOV EAX,EDI                         ; 00504db1
        ;   Label: LAB_00504db1
    ADD ESP,0x4                         ; 00504db3
    POP EBP                             ; 00504db6
    POP EDI                             ; 00504db7
    POP ESI                             ; 00504db8
    POP EBX                             ; 00504db9
    RET                                 ; 00504dba
    MOV EDX,dword ptr [EBX + 0x1318]    ; 00504dbb
        ;   Label: LAB_00504dbb
    MOV dword ptr [EBX + 0x531c],0x8    ; 00504dc1
    INC EDX                             ; 00504dcb
    MOV ECX,dword ptr [EBX + 0x1310]    ; 00504dcc
    MOV dword ptr [EBX + 0x1318],EDX    ; 00504dd2
    CMP EDX,ECX                         ; 00504dd8
    JBE 0x00504d5e                      ; 00504dda
        ;   XREF to: 00504d5e (CONDITIONAL_JUMP)  ; LAB_00504d5e
    PUSH 0x1d23558                      ; 00504ddc
    MOV EBP,0x5dff59                    ; 00504de1 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x30a                       ; 00504de6
    PUSH 0x5dff6a                       ; 00504deb | = "Buffer overflow!!  File: %s"
    MOV dword ptr [0x01d046a0],EBP      ; 00504df0 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00504df6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00504dfb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00504e00
    JMP 0x00504d5e                      ; 00504e03
        ;   XREF to: 00504d5e (UNCONDITIONAL_JUMP)  ; LAB_00504d5e
    MOV EAX,EDX                         ; 00504e08
        ;   Label: LAB_00504e08
    JMP 0x00504d6e                      ; 00504e0a
        ;   XREF to: 00504d6e (UNCONDITIONAL_JUMP)  ; LAB_00504d6e

