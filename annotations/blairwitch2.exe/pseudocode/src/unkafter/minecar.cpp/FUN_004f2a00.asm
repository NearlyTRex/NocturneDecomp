; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004f2a00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d098bc
;   undefined4 DAT_01d098c0
;   undefined4 DAT_01d098c4
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f2a00
        ;   Label: unkafter_minecar.cpp_FUN_004f2a00
    SUB ESP,0xc                         ; 004f2a01
    MOV EAX,ESI                         ; 004f2a04
    MOV EDX,dword ptr [0x01d098bc]      ; 004f2a06 | DAT_01d098bc
    MOV dword ptr [ESP],EDX             ; 004f2a0c
    MOV EDX,dword ptr [0x01d098c0]      ; 004f2a0f | DAT_01d098c0
    MOV EDI,ESI                         ; 004f2a15
    MOV dword ptr [ESP + 0x8],EDX       ; 004f2a17
    MOV EDX,dword ptr [0x01d098c4]      ; 004f2a1b | DAT_01d098c4
    MOV ESI,ESP                         ; 004f2a21
    MOV dword ptr [ESP + 0x4],EDX       ; 004f2a23
    MOVSD ES:EDI,ESI                    ; 004f2a27
    MOVSD ES:EDI,ESI                    ; 004f2a28
    MOVSD ES:EDI,ESI                    ; 004f2a29
    ADD ESP,0xc                         ; 004f2a2a
    POP EDI                             ; 004f2a2d
    RET                                 ; 004f2a2e

