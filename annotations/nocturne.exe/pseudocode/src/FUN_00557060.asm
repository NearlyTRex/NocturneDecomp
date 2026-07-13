; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557060(int param_1)
;
;
; XREF[2]:
;   FUN_00555c60 at 005567c3
;   FUN_00557940 at 00557a5b
;
; Referenced Globals:
;   string s_were?.wav_00597e29
;
; Called Functions:
;   FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557060
        ;   Label: FUN_00557060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00557061
    MOV EDX,dword ptr [EBX + 0xbd40]    ; 00557065
    PUSH EDX                            ; 0055706b
    MOV dword ptr [EBX + 0xbd44],0x41200000 ; 0055706c
    CALL FUN_00526c50                   ; 00557076
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 0055707b
    TEST EAX,EAX                        ; 0055707e
    JZ 0x00557084                       ; 00557080
        ;   XREF to: 00557084 (CONDITIONAL_JUMP)  ; LAB_00557084
    POP EBX                             ; 00557082
    RET                                 ; 00557083
    PUSH 0x597e29                       ; 00557084 | = "were?.wav"
        ;   Label: LAB_00557084
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00557089
    PUSH EBX                            ; 0055708f
    CALL dword ptr [EAX + 0x24]         ; 00557090
    MOV dword ptr [EBX + 0xbd44],0x41a00000 ; 00557093
    ADD ESP,0x8                         ; 0055709d
    MOV dword ptr [EBX + 0xbd40],EAX    ; 005570a0
    POP EBX                             ; 005570a6
    RET                                 ; 005570a7

