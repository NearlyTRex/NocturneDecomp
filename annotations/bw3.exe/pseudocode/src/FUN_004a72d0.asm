; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a72d0(int param_1)
;
;
; Called Functions:
;   FUN_004a6090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a72d0
        ;   Label: FUN_004a72d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a72d1
    CMP dword ptr [EBX + 0x5e4],0x0     ; 004a72d5
    JNZ 0x004a72e6                      ; 004a72dc
        ;   XREF to: 004a72e6 (CONDITIONAL_JUMP)  ; LAB_004a72e6
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004a72de
    POP EBX                             ; 004a72e4
    RET                                 ; 004a72e5
    LEA EAX,[EBX + 0x340]               ; 004a72e6
        ;   Label: LAB_004a72e6
    PUSH EAX                            ; 004a72ec
    CALL FUN_004a6090                   ; 004a72ed
        ;   XREF to: 004a6090 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6090()
    ADD ESP,0x4                         ; 004a72f2
    MOV EAX,dword ptr [EBX + 0x5e4]     ; 004a72f5
    POP EBX                             ; 004a72fb
    RET                                 ; 004a72fc

