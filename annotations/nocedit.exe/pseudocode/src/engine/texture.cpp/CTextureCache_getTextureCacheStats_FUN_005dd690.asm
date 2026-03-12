; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_005dd690(CTextureCache *this_ptr,char *output_buffer)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_getTextureCacheStats_FUN_005dd970 at 005dd97c
;
; Referenced Globals:
;   TerminatedCString s_Texture_cache_has_wrappe_006553e2
;   TerminatedCString s_Total_d_32_d_64_d_128_d__00655416
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd690
        ;   Label: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
    PUSH ESI                            ; 005dd691
    PUSH EDI                            ; 005dd692
    PUSH EBP                            ; 005dd693
    SUB ESP,0x8                         ; 005dd694
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005dd697
    XOR ESI,ESI                         ; 005dd69b
    XOR EDI,EDI                         ; 005dd69d
    XOR ECX,ECX                         ; 005dd69f
    XOR EBX,EBX                         ; 005dd6a1
    MOV dword ptr [ESP + 0x4],ESI       ; 005dd6a3
    MOV EDX,dword ptr [EAX]             ; 005dd6a7
    MOV dword ptr [ESP],ESI             ; 005dd6a9
    TEST EDX,EDX                        ; 005dd6ac
    JNZ 0x005dd741                      ; 005dd6ae
        ;   XREF to: 005dd741 (CONDITIONAL_JUMP)  ; LAB_005dd741
    CMP dword ptr [EAX + 0x14008],0x0   ; 005dd6b4
    JLE 0x005dd708                      ; 005dd6bb
        ;   XREF to: 005dd708 (CONDITIONAL_JUMP)  ; LAB_005dd708
    CMP dword ptr [EAX + 0x8],0x20      ; 005dd6bd
        ;   Label: LAB_005dd6bd
    JNZ 0x005dd6c4                      ; 005dd6c1
        ;   XREF to: 005dd6c4 (CONDITIONAL_JUMP)  ; LAB_005dd6c4
    INC ESI                             ; 005dd6c3
    CMP dword ptr [EAX + 0x8],0x40      ; 005dd6c4
        ;   Label: LAB_005dd6c4
    JNZ 0x005dd6cb                      ; 005dd6c8
        ;   XREF to: 005dd6cb (CONDITIONAL_JUMP)  ; LAB_005dd6cb
    INC EDI                             ; 005dd6ca
    CMP dword ptr [EAX + 0x8],0x80      ; 005dd6cb
        ;   Label: LAB_005dd6cb
    JNZ 0x005dd6d5                      ; 005dd6d2
        ;   XREF to: 005dd6d5 (CONDITIONAL_JUMP)  ; LAB_005dd6d5
    INC ECX                             ; 005dd6d4
    CMP dword ptr [EAX + 0x8],0x100     ; 005dd6d5
        ;   Label: LAB_005dd6d5
    JNZ 0x005dd6e2                      ; 005dd6dc
        ;   XREF to: 005dd6e2 (CONDITIONAL_JUMP)  ; LAB_005dd6e2
    INC dword ptr [ESP + 0x4]           ; 005dd6de
    CMP dword ptr [EAX + 0x8],0x200     ; 005dd6e2
        ;   Label: LAB_005dd6e2
    JNZ 0x005dd6ec                      ; 005dd6e9
        ;   XREF to: 005dd6ec (CONDITIONAL_JUMP)  ; LAB_005dd6ec
    INC EBX                             ; 005dd6eb
    CMP dword ptr [EAX + 0x8],0x400     ; 005dd6ec
        ;   Label: LAB_005dd6ec
    JNZ 0x005dd6f8                      ; 005dd6f3
        ;   XREF to: 005dd6f8 (CONDITIONAL_JUMP)  ; LAB_005dd6f8
    INC dword ptr [ESP]                 ; 005dd6f5
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005dd6f8
        ;   Label: LAB_005dd6f8
    INC EDX                             ; 005dd6fc
    ADD EAX,0x4                         ; 005dd6fd
    CMP EDX,dword ptr [EBP + 0x14008]   ; 005dd700
    JL 0x005dd6bd                       ; 005dd706
        ;   XREF to: 005dd6bd (CONDITIONAL_JUMP)  ; LAB_005dd6bd
    MOV EDX,dword ptr [ESP]             ; 005dd708
        ;   Label: LAB_005dd708
    PUSH EDX                            ; 005dd70b
    PUSH EBX                            ; 005dd70c
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dd70d
    PUSH EBX                            ; 005dd711
    PUSH ECX                            ; 005dd712
    PUSH EDI                            ; 005dd713
    MOV EAX,dword ptr [ESP + 0x30]      ; 005dd714
    PUSH ESI                            ; 005dd718
    MOV ESI,dword ptr [EAX + 0x14008]   ; 005dd719
    PUSH ESI                            ; 005dd71f
    PUSH 0x655416                       ; 005dd720 | = "Total: %d, 32: %d, 64: %d, 128: %d, 2..."
    MOV EDI,dword ptr [ESP + 0x40]      ; 005dd725
    PUSH EDI                            ; 005dd729
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005dd72a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x24                        ; 005dd72f
    ADD ESP,0x8                         ; 005dd732
    POP EBP                             ; 005dd735
    POP EDI                             ; 005dd736
    POP ESI                             ; 005dd737
    POP EBX                             ; 005dd738
    LEA EAX,[EAX]                       ; 005dd739
    NOP                                 ; 005dd73f
    RET                                 ; 005dd740
    PUSH 0x6553e2                       ; 005dd741 | = "Texture cache has wrapped.  Make it b..."
        ;   Label: LAB_005dd741
    MOV EAX,dword ptr [ESP + 0x24]      ; 005dd746
    PUSH EAX                            ; 005dd74a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005dd74b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 005dd750
    ADD ESP,0x8                         ; 005dd753
    POP EBP                             ; 005dd756
    POP EDI                             ; 005dd757
    POP ESI                             ; 005dd758
    POP EBX                             ; 005dd759
    RET                                 ; 005dd75a

