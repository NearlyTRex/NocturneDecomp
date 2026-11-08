; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056efa0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_flashlit_wav_005ebf64+1
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b64
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056efa0
        ;   Label: FUN_0056efa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056efa4
    MOV dword ptr [EDX + 0x25640],EAX   ; 0056efa8
    TEST EAX,EAX                        ; 0056efae
    JNZ 0x0056efc0                      ; 0056efb0
        ;   XREF to: 0056efc0 (CONDITIONAL_JUMP)  ; LAB_0056efc0
    MOV EAX,[0x00616494]                ; 0056efb2 | DAT_00616494 | DAT_01cb6900
    CMP dword ptr [EAX + 0x264],0x0     ; 0056efb7 | DAT_01cb6b64
    JNZ 0x0056efc1                      ; 0056efbe
        ;   XREF to: 0056efc1 (CONDITIONAL_JUMP)  ; LAB_0056efc1
    RET                                 ; 0056efc0
        ;   Label: LAB_0056efc0
    PUSH 0x5ebf65                       ; 0056efc1 | s_flashlit_wav_005ebf64+1
        ;   Label: LAB_0056efc1
    MOV dword ptr [EAX + 0x264],0x0     ; 0056efc6 | DAT_01cb6b64
    PUSH EDX                            ; 0056efd0
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0056efd1
    CALL dword ptr [EAX + 0x34]         ; 0056efd7
    ADD ESP,0x8                         ; 0056efda
    RET                                 ; 0056efdd

