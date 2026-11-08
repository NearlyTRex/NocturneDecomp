; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438a90(int *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00438af0 at 00438b7b
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_005cdfe2
;   TerminatedCString s_CCourse_allocMemory_out_005cdff5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00438c20
;   FUN_004e4500
;   FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438a90
        ;   Label: FUN_00438a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438a91
    PUSH EBX                            ; 00438a95
    CALL FUN_00438c20                   ; 00438a96
        ;   XREF to: 00438c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00438c20()
    ADD ESP,0x4                         ; 00438a9b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00438a9e
    MOV dword ptr [EBX],EAX             ; 00438aa2
    SHL EAX,0x2                         ; 00438aa4
    MOV EDX,EAX                         ; 00438aa7
    SHL EAX,0x3                         ; 00438aa9
    SUB EAX,EDX                         ; 00438aac
    PUSH EAX                            ; 00438aae
    CALL FUN_005b8df8                   ; 00438aaf
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8df8()
    ADD ESP,0x4                         ; 00438ab4
    MOV dword ptr [EBX + 0x4],EAX       ; 00438ab7
    TEST EAX,EAX                        ; 00438aba
    JZ 0x00438ac0                       ; 00438abc
        ;   XREF to: 00438ac0 (CONDITIONAL_JUMP)  ; LAB_00438ac0
    POP EBX                             ; 00438abe
    RET                                 ; 00438abf
    MOV ECX,0x5cdfe2                    ; 00438ac0 | = "..\\core\\course.cpp"
        ;   Label: LAB_00438ac0
    MOV EBX,0x6e                        ; 00438ac5
    PUSH 0x5cdff5                       ; 00438aca | = "CCourse::allocMemory - out of hunk!"
    MOV dword ptr [0x01d046a0],ECX      ; 00438acf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00438ad5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00438adb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00438ae0
    POP EBX                             ; 00438ae3
    RET                                 ; 00438ae4

