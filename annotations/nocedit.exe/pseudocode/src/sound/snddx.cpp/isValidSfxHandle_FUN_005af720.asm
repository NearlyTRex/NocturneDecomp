; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_005af720(int sfx_handle)
;
; Parameters:
; int              Stack[0x4]:4   sfx_handle
;
; Referenced Globals:
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005af720
        ;   Label: sound_snddx.cpp_isValidSfxHandle_FUN_005af720
    TEST EAX,EAX                        ; 005af724
    JLE 0x005af746                      ; 005af726
        ;   XREF to: 005af746 (CONDITIONAL_JUMP)  ; LAB_005af746
    CMP EAX,0x1f                        ; 005af728
    JGE 0x005af746                      ; 005af72b
        ;   XREF to: 005af746 (CONDITIONAL_JUMP)  ; LAB_005af746
    SHL EAX,0x2                         ; 005af72d
    CMP dword ptr [EAX + 0x3f6aa44],0x0 ; 005af730 | g_DirectSoundHardwareSfxBuffers
    JZ 0x005af746                       ; 005af737
        ;   XREF to: 005af746 (CONDITIONAL_JUMP)  ; LAB_005af746
    CMP dword ptr [EAX + 0x3f6aac0],0x0 ; 005af739 | g_DirectSound3DBufferInterfaces
    JNZ 0x005af17d                      ; 005af740
        ;   XREF to: 005af17d (CONDITIONAL_JUMP)  ; LAB_005af17d
    XOR EAX,EAX                         ; 005af746
        ;   Label: LAB_005af746
    RET                                 ; 005af748

