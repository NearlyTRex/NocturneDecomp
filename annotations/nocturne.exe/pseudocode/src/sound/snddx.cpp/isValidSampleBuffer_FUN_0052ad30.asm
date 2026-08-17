; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_0052ad30(int buffer_id)
;
; Parameters:
; int              Stack[0x4]:4   buffer_id
;
; Referenced Globals:
;   undefined4 DAT_02dc9244
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052ad30
        ;   Label: sound_snddx.cpp_isValidSampleBuffer_FUN_0052ad30
    TEST EAX,EAX                        ; 0052ad34
    JLE 0x0052ad47                      ; 0052ad36
        ;   XREF to: 0052ad47 (CONDITIONAL_JUMP)  ; LAB_0052ad47
    CMP EAX,0x19                        ; 0052ad38
    JGE 0x0052ad47                      ; 0052ad3b
        ;   XREF to: 0052ad47 (CONDITIONAL_JUMP)  ; LAB_0052ad47
    CMP dword ptr [EAX*0x4 + 0x2dc9244],0x0 ; 0052ad3d | DAT_02dc9244
    JNZ 0x0052ad4a                      ; 0052ad45
        ;   XREF to: 0052ad4a (CONDITIONAL_JUMP)  ; LAB_0052ad4a
    XOR EAX,EAX                         ; 0052ad47
        ;   Label: LAB_0052ad47
    RET                                 ; 0052ad49
    MOV EAX,0x1                         ; 0052ad4a
        ;   Label: LAB_0052ad4a
    RET                                 ; 0052ad4f

