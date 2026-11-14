; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005558e0(CSfxSample *this_ptr,int byte_count)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   byte_count
;
; XREF[2]:
;   sound_snddx.cpp_FUN_0055cb20 at 0055cbcd
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00553960 at 00553aba
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005558e0
        ;   Label: sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005558e0
    MOV ECX,dword ptr [EDX + 0x108]     ; 005558e4
    IMUL ECX,dword ptr [EDX + 0x104]    ; 005558ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005558f1
    SHL EDX,0x3                         ; 005558f5
    MOV EAX,EDX                         ; 005558f8
    SAR EDX,0x1f                        ; 005558fa
    IDIV ECX                            ; 005558fd
    RET                                 ; 005558ff

