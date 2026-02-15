; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005af150(int buffer_id)
;
; Parameters:
; int              Stack[0x4]:4   buffer_id
;
; Referenced Globals:
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005af150
        ;   Label: sound_snddx.cpp_isValidSampleBuffer_FUN_005af150
    TEST EDX,EDX                        ; 005af154
    JLE 0x005af17a                      ; 005af156
        ;   XREF to: 005af17a (CONDITIONAL_JUMP)  ; LAB_005af17a
    CMP EDX,0x19                        ; 005af158
    JGE 0x005af17a                      ; 005af15b
        ;   XREF to: 005af17a (CONDITIONAL_JUMP)  ; LAB_005af17a
    CMP dword ptr [EDX*0x4 + 0x3f6a9e0],0x0 ; 005af15d | g_DirectSoundSampleBuffers
    JZ 0x005af17a                       ; 005af165
        ;   XREF to: 005af17a (CONDITIONAL_JUMP)  ; LAB_005af17a
    LEA EAX,[EDX*0x4 + 0x0]             ; 005af167
    ADD EAX,EDX                         ; 005af16e
    CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1 ; 005af170 | g_DirectSoundBufferMetadata
    JGE 0x005af17d                      ; 005af178
        ;   XREF to: 005af17d (CONDITIONAL_JUMP)  ; LAB_005af17d
    XOR EAX,EAX                         ; 005af17a
        ;   Label: LAB_005af17a
    RET                                 ; 005af17c
    MOV EAX,0x1                         ; 005af17d
        ;   Label: LAB_005af17d
    RET                                 ; 005af182

