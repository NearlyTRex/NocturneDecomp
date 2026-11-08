; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00447090(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00492c10 at 00492c18
;
; Called Functions:
;   FUN_00408790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00447090
        ;   Label: FUN_00447090
    PUSH EDI                            ; 00447091
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447092
    PUSH EDX                            ; 00447096
    MOV ESI,0x5cea54                    ; 00447097
    CALL FUN_00408790                   ; 0044709c
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    MOV EDX,EAX                         ; 004470a1
    ADD ESP,0x4                         ; 004470a3
    LEA EDI,[EAX + 0x2e4]               ; 004470a6
    MOV dword ptr [EAX + 0x2b0],0x5f4e94 ; 004470ac
    PUSH EDI                            ; 004470b6
    MOV AL,byte ptr [ESI]               ; 004470b7
        ;   Label: LAB_004470b7
    MOV byte ptr [EDI],AL               ; 004470b9
    CMP AL,0x0                          ; 004470bb
    JZ 0x004470cf                       ; 004470bd
        ;   XREF to: 004470cf (CONDITIONAL_JUMP)  ; LAB_004470cf
    MOV AL,byte ptr [ESI + 0x1]         ; 004470bf
    ADD ESI,0x2                         ; 004470c2
    MOV byte ptr [EDI + 0x1],AL         ; 004470c5
    ADD EDI,0x2                         ; 004470c8
    CMP AL,0x0                          ; 004470cb
    JNZ 0x004470b7                      ; 004470cd
        ;   XREF to: 004470b7 (CONDITIONAL_JUMP)  ; LAB_004470b7
    POP EDI                             ; 004470cf
        ;   Label: LAB_004470cf
    MOV dword ptr [EDX + 0x2b4],0x0     ; 004470d0
    MOV byte ptr [EDX + 0x2b8],0x0      ; 004470da
    MOV dword ptr [EDX + 0x34c],0x1     ; 004470e1
    MOV EAX,EDX                         ; 004470eb
    MOV dword ptr [EDX + 0x348],0x1     ; 004470ed
    POP EDI                             ; 004470f7
    POP ESI                             ; 004470f8
    RET                                 ; 004470f9

