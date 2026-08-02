; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_DetectDeviceAndSetBuffering_FUN_0056bbb0(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[2]:
;   crt_unknown.c_FUN_00568ed0 at 00568ed7
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c at 0056561f
;
; Called Functions:
;   crt_io.c_IsSpecialDevice_FUN_005705c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bbb0
        ;   Label: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056bbb1
    TEST byte ptr [EBX + 0xd],0x20      ; 0056bbb5
    JNZ 0x0056bbe1                      ; 0056bbb9
        ;   XREF to: 0056bbe1 (CONDITIONAL_JUMP)  ; LAB_0056bbe1
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056bbbb
    PUSH EDX                            ; 0056bbbe
    CALL crt_io.c_IsSpecialDevice_FUN_005705c0 ; 0056bbbf
        ;   XREF to: 005705c0 (UNCONDITIONAL_CALL)  ; int crt_io.c_IsSpecialDevice_FUN_005705c0(int handle_index)
    ADD ESP,0x4                         ; 0056bbc4
    TEST EAX,EAX                        ; 0056bbc7
    JZ 0x0056bbe1                       ; 0056bbc9
        ;   XREF to: 0056bbe1 (CONDITIONAL_JUMP)  ; LAB_0056bbe1
    MOV DL,byte ptr [EBX + 0xd]         ; 0056bbcb
    OR DL,0x20                          ; 0056bbce
    MOV byte ptr [EBX + 0xd],DL         ; 0056bbd1
    TEST DL,0x7                         ; 0056bbd4
    JNZ 0x0056bbe1                      ; 0056bbd7
        ;   XREF to: 0056bbe1 (CONDITIONAL_JUMP)  ; LAB_0056bbe1
    MOV CL,DL                           ; 0056bbd9
    OR CL,0x2                           ; 0056bbdb
    MOV byte ptr [EBX + 0xd],CL         ; 0056bbde
    POP EBX                             ; 0056bbe1
        ;   Label: LAB_0056bbe1
    RET                                 ; 0056bbe2

