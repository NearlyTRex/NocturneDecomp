; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005723e0(CSfxSample *this_ptr,int byte_count)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   byte_count
;
; XREF[2]:
;   sound_snddx.cpp_FUN_005799b0 at 00579a5d
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00570460 at 005705ba
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005723e0
        ;   Label: sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005723e0
    MOV ECX,dword ptr [EDX + 0x108]     ; 005723e4
    IMUL ECX,dword ptr [EDX + 0x104]    ; 005723ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005723f1
    SHL EDX,0x3                         ; 005723f5
    MOV EAX,EDX                         ; 005723f8
    SAR EDX,0x1f                        ; 005723fa
    IDIV ECX                            ; 005723fd
    RET                                 ; 005723ff

