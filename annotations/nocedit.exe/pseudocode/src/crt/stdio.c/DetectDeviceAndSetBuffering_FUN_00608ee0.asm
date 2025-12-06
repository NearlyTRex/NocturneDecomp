; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0(FILE * file)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
;
; XREF[3]:
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0 at 006027e7
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c at 00601a0f
;   crt_stdio.c_setvbuf_FUN_00601490 at 006014fa
;
; Called Functions:
;   crt_io.c_IsSpecialDevice_FUN_0060c270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608ee0
        ;   Label: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00608ee1
    TEST byte ptr [EBX + 0xd],0x20      ; 00608ee5
    JNZ 0x00608f11                      ; 00608ee9 | LAB_00608f11
        ;   XREF to: 00608f11 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x10]      ; 00608eeb
    PUSH EDX                            ; 00608eee
    CALL crt_io.c_IsSpecialDevice_FUN_0060c270 ; 00608eef | int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)
        ;   XREF to: 0060c270 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608ef4
    TEST EAX,EAX                        ; 00608ef7
    JZ 0x00608f11                       ; 00608ef9 | LAB_00608f11
        ;   XREF to: 00608f11 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EBX + 0xd]         ; 00608efb
    OR DL,0x20                          ; 00608efe
    MOV byte ptr [EBX + 0xd],DL         ; 00608f01
    TEST DL,0x7                         ; 00608f04
    JNZ 0x00608f11                      ; 00608f07 | LAB_00608f11
        ;   XREF to: 00608f11 (CONDITIONAL_JUMP)
    MOV CL,DL                           ; 00608f09
    OR CL,0x2                           ; 00608f0b
    MOV byte ptr [EBX + 0xd],CL         ; 00608f0e
    POP EBX                             ; 00608f11
        ;   Label: LAB_00608f11
    RET                                 ; 00608f12

