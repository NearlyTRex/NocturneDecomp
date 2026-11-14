; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_00555fb0(int buffer_id)
;
; Parameters:
; int              Stack[0x4]:4   buffer_id
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00555fb0
        ;   Label: sound_snddx.cpp_isValidSampleBuffer_FUN_00555fb0
    TEST EDX,EDX                        ; 00555fb4
    JLE 0x00555fdb                      ; 00555fb6
        ;   XREF to: 00555fdb (CONDITIONAL_JUMP)  ; LAB_00555fdb
    CMP EDX,0x41                        ; 00555fb8
    JGE 0x00555fdb                      ; 00555fbb
        ;   XREF to: 00555fdb (CONDITIONAL_JUMP)  ; LAB_00555fdb
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555fbd
    SUB EAX,EDX                         ; 00555fc4
    SHL EAX,0x3                         ; 00555fc6
    CMP dword ptr [EAX + 0x264a5f4],0x0 ; 00555fc9
    JZ 0x00555fdb                       ; 00555fd0
        ;   XREF to: 00555fdb (CONDITIONAL_JUMP)  ; LAB_00555fdb
    CMP dword ptr [EAX + 0x264a5fc],0x1 ; 00555fd2
    JGE 0x00555fde                      ; 00555fd9
        ;   XREF to: 00555fde (CONDITIONAL_JUMP)  ; LAB_00555fde
    XOR EAX,EAX                         ; 00555fdb
        ;   Label: LAB_00555fdb
    RET                                 ; 00555fdd
    MOV EAX,0x1                         ; 00555fde
        ;   Label: LAB_00555fde
    RET                                 ; 00555fe3

