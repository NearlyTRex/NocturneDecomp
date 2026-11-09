; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_FUN_0056a700(CTextureCache *this_ptr,char *output_buffer)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_getTextureCacheStats_FUN_0056acc0 at 0056accc
;
; Referenced Globals:
;   TerminatedCString s_Texture_cache_has_wrappe_005d6117
;   TerminatedCString s_Total_d_32_d_64_d_128_d_005d614b
;
; Called Functions:
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a700
        ;   Label: engine_texture.cpp_FUN_0056a700
    PUSH ESI                            ; 0056a701
    PUSH EDI                            ; 0056a702
    PUSH EBP                            ; 0056a703
    SUB ESP,0x8                         ; 0056a704
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056a707
    XOR ESI,ESI                         ; 0056a70b
    XOR EDI,EDI                         ; 0056a70d
    XOR ECX,ECX                         ; 0056a70f
    XOR EBX,EBX                         ; 0056a711
    MOV dword ptr [ESP + 0x4],ESI       ; 0056a713
    MOV EDX,dword ptr [EAX]             ; 0056a717
    MOV dword ptr [ESP],ESI             ; 0056a719
    TEST EDX,EDX                        ; 0056a71c
    JNZ 0x0056a7b1                      ; 0056a71e
        ;   XREF to: 0056a7b1 (CONDITIONAL_JUMP)  ; LAB_0056a7b1
    CMP dword ptr [EAX + 0x18004],0x0   ; 0056a724
    JLE 0x0056a778                      ; 0056a72b
        ;   XREF to: 0056a778 (CONDITIONAL_JUMP)  ; LAB_0056a778
    CMP dword ptr [EAX + 0x4],0x20      ; 0056a72d
        ;   Label: LAB_0056a72d
    JNZ 0x0056a734                      ; 0056a731
        ;   XREF to: 0056a734 (CONDITIONAL_JUMP)  ; LAB_0056a734
    INC ESI                             ; 0056a733
    CMP dword ptr [EAX + 0x4],0x40      ; 0056a734
        ;   Label: LAB_0056a734
    JNZ 0x0056a73b                      ; 0056a738
        ;   XREF to: 0056a73b (CONDITIONAL_JUMP)  ; LAB_0056a73b
    INC EDI                             ; 0056a73a
    CMP dword ptr [EAX + 0x4],0x80      ; 0056a73b
        ;   Label: LAB_0056a73b
    JNZ 0x0056a745                      ; 0056a742
        ;   XREF to: 0056a745 (CONDITIONAL_JUMP)  ; LAB_0056a745
    INC ECX                             ; 0056a744
    CMP dword ptr [EAX + 0x4],0x100     ; 0056a745
        ;   Label: LAB_0056a745
    JNZ 0x0056a752                      ; 0056a74c
        ;   XREF to: 0056a752 (CONDITIONAL_JUMP)  ; LAB_0056a752
    INC dword ptr [ESP + 0x4]           ; 0056a74e
    CMP dword ptr [EAX + 0x4],0x200     ; 0056a752
        ;   Label: LAB_0056a752
    JNZ 0x0056a75c                      ; 0056a759
        ;   XREF to: 0056a75c (CONDITIONAL_JUMP)  ; LAB_0056a75c
    INC EBX                             ; 0056a75b
    CMP dword ptr [EAX + 0x4],0x400     ; 0056a75c
        ;   Label: LAB_0056a75c
    JNZ 0x0056a768                      ; 0056a763
        ;   XREF to: 0056a768 (CONDITIONAL_JUMP)  ; LAB_0056a768
    INC dword ptr [ESP]                 ; 0056a765
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056a768
        ;   Label: LAB_0056a768
    INC EDX                             ; 0056a76c
    ADD EAX,0x60                        ; 0056a76d
    CMP EDX,dword ptr [EBP + 0x18004]   ; 0056a770
    JL 0x0056a72d                       ; 0056a776
        ;   XREF to: 0056a72d (CONDITIONAL_JUMP)  ; LAB_0056a72d
    MOV EDX,dword ptr [ESP]             ; 0056a778
        ;   Label: LAB_0056a778
    PUSH EDX                            ; 0056a77b
    PUSH EBX                            ; 0056a77c
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056a77d
    PUSH EBX                            ; 0056a781
    PUSH ECX                            ; 0056a782
    PUSH EDI                            ; 0056a783
    MOV EAX,dword ptr [ESP + 0x30]      ; 0056a784
    PUSH ESI                            ; 0056a788
    MOV ESI,dword ptr [EAX + 0x18004]   ; 0056a789
    PUSH ESI                            ; 0056a78f
    PUSH 0x5d614b                       ; 0056a790 | = "Total: %d, 32: %d, 64: %d, 128: %d, 2..."
    MOV EDI,dword ptr [ESP + 0x40]      ; 0056a795
    PUSH EDI                            ; 0056a799
    CALL crt_unknown.c_FUN_005a28c0     ; 0056a79a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x24                        ; 0056a79f
    ADD ESP,0x8                         ; 0056a7a2
    POP EBP                             ; 0056a7a5
    POP EDI                             ; 0056a7a6
    POP ESI                             ; 0056a7a7
    POP EBX                             ; 0056a7a8
    LEA EAX,[EAX]                       ; 0056a7a9
    NOP                                 ; 0056a7af
    RET                                 ; 0056a7b0
    PUSH 0x5d6117                       ; 0056a7b1 | = "Texture cache has wrapped.  Make it b..."
        ;   Label: LAB_0056a7b1
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a7b6
    PUSH EAX                            ; 0056a7ba
    CALL crt_unknown.c_FUN_005a28c0     ; 0056a7bb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0056a7c0
    ADD ESP,0x8                         ; 0056a7c3
    POP EBP                             ; 0056a7c6
    POP EDI                             ; 0056a7c7
    POP ESI                             ; 0056a7c8
    POP EBX                             ; 0056a7c9
    RET                                 ; 0056a7ca

