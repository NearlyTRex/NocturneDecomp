; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040adb0(char *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004f95b0 at 004f96f3
;   FUN_0051ac40 at 0051af21
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2801
;   TerminatedCString s_CDemonActor_save_tried_t_005d2813
;   TerminatedCString s_s_s_s_005d2854
;   TerminatedCString s_s_s_s_005d2861
;   TerminatedCString s_core_actor_cpp_005d286e
;   TerminatedCString s_IO_Error_after_writing_a_005d2880
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;   undefined4 DAT_007c303c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408830
;   FUN_0040ad60
;   FUN_0040c630
;   FUN_005030e0
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040adb0
        ;   Label: FUN_0040adb0
    PUSH ESI                            ; 0040adb1
    PUSH EDI                            ; 0040adb2
    PUSH EBP                            ; 0040adb3
    SUB ESP,0x8                         ; 0040adb4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040adb7
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040adbb
    CALL FUN_0040c630                   ; 0040adbf
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c630()
    PUSH EBX                            ; 0040adc4
    CALL FUN_00408830                   ; 0040adc5
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040adca
    MOV DL,byte ptr [EBX]               ; 0040adcd
    MOV ESI,EAX                         ; 0040adcf
    TEST DL,DL                          ; 0040add1
    JNZ 0x0040adf9                      ; 0040add3
        ;   XREF to: 0040adf9 (CONDITIONAL_JUMP)  ; LAB_0040adf9
    PUSH EAX                            ; 0040add5
    MOV EDX,0x5d2801                    ; 0040add6 | = "..\\core\\actor.cpp"
    MOV ECX,0x7cf                       ; 0040addb
    PUSH 0x5d2813                       ; 0040ade0 | = "CDemonActor::save - tried to save act..."
    MOV dword ptr [0x01d1d400],EDX      ; 0040ade5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040adeb | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040adf1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040adf6
    PUSH EBX                            ; 0040adf9
        ;   Label: LAB_0040adf9
    PUSH ESI                            ; 0040adfa
    PUSH 0x6106c0                       ; 0040adfb | DAT_006106c0
    PUSH 0x5d2854                       ; 0040ae00 | = "%s{ %s \"%s\"\n"
    PUSH EDI                            ; 0040ae05
    CALL FUN_005c03c0                   ; 0040ae06
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x14                        ; 0040ae0b
    MOV EAX,[0x007c3034]                ; 0040ae0e | DAT_007c3034
    MOV EBP,dword ptr [0x007c303c]      ; 0040ae13 | DAT_007c303c
    PUSH 0x1                            ; 0040ae19
    MOV dword ptr [ESP + 0x8],EAX       ; 0040ae1b
    MOV EAX,[0x007c3038]                ; 0040ae1f | DAT_007c3038
    MOV dword ptr [0x007c3034],EDI      ; 0040ae24 | DAT_007c3034
    MOV dword ptr [ESP + 0x4],EAX       ; 0040ae2a
    MOV EAX,0x2                         ; 0040ae2e
    MOV dword ptr [0x007c303c],EBX      ; 0040ae33 | DAT_007c303c
    MOV [0x007c3038],EAX                ; 0040ae39 | DAT_007c3038
    CALL FUN_0040ad60                   ; 0040ae3e
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ad60()
    ADD ESP,0x4                         ; 0040ae43
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040ae46
    PUSH EBX                            ; 0040ae4c
    CALL dword ptr [EAX + 0xd4]         ; 0040ae4d
    ADD ESP,0x4                         ; 0040ae53
    PUSH -0x1                           ; 0040ae56
    CALL FUN_0040ad60                   ; 0040ae58
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ad60()
    ADD ESP,0x4                         ; 0040ae5d
    PUSH EBX                            ; 0040ae60
    PUSH ESI                            ; 0040ae61
    PUSH 0x6106c0                       ; 0040ae62 | DAT_006106c0
    PUSH 0x5d2861                       ; 0040ae67 | = "%s} %s \"%s\"\n"
    PUSH EDI                            ; 0040ae6c
    CALL FUN_005c03c0                   ; 0040ae6d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV DH,byte ptr [EDI + 0xc]         ; 0040ae72
    ADD ESP,0x14                        ; 0040ae75
    TEST DH,0x20                        ; 0040ae78
    JNZ 0x0040ae9c                      ; 0040ae7b
        ;   XREF to: 0040ae9c (CONDITIONAL_JUMP)  ; LAB_0040ae9c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ae7d
        ;   Label: LAB_0040ae7d
    MOV [0x007c3034],EAX                ; 0040ae81 | DAT_007c3034
    MOV EAX,dword ptr [ESP]             ; 0040ae86
    MOV dword ptr [0x007c303c],EBP      ; 0040ae89 | DAT_007c303c
    MOV [0x007c3038],EAX                ; 0040ae8f | DAT_007c3038
    ADD ESP,0x8                         ; 0040ae94
    POP EBP                             ; 0040ae97
    POP EDI                             ; 0040ae98
    POP ESI                             ; 0040ae99
    POP EBX                             ; 0040ae9a
    RET                                 ; 0040ae9b
    PUSH ESI                            ; 0040ae9c
        ;   Label: LAB_0040ae9c
    MOV EDX,0x5d286e                    ; 0040ae9d | = "..\\core\\actor.cpp"
    MOV ECX,0x7f1                       ; 0040aea2
    PUSH 0x5d2880                       ; 0040aea7 | = "IO Error after writing actor of type %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0040aeac | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040aeb2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040aeb8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0040aebd
    JMP 0x0040ae7d                      ; 0040aec0
        ;   XREF to: 0040ae7d (UNCONDITIONAL_JUMP)  ; LAB_0040ae7d

