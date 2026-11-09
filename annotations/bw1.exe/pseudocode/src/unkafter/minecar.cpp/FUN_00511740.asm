; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_00511740(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   undefined4 DAT_01d22518
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00511740
        ;   Label: unkafter_minecar.cpp_FUN_00511740
    SUB ESP,0x18                        ; 00511741
    MOV EAX,ESI                         ; 00511744
    MOV EDX,dword ptr [0x01d22510]      ; 00511746 | DAT_01d22510
    MOV dword ptr [ESP + 0x14],EDX      ; 0051174c
    MOV EDX,dword ptr [0x01d22514]      ; 00511750 | DAT_01d22514
    MOV dword ptr [ESP + 0xc],EDX       ; 00511756
    MOV EDX,dword ptr [0x01d22518]      ; 0051175a | DAT_01d22518
    MOV dword ptr [ESP + 0x10],EDX      ; 00511760
    MOV EDX,dword ptr [ESP + 0x14]      ; 00511764
    MOV dword ptr [ESP],EDX             ; 00511768
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051176b
    MOV EDI,ESI                         ; 0051176f
    MOV dword ptr [ESP + 0x4],EDX       ; 00511771
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511775
    MOV ESI,ESP                         ; 00511779
    MOV dword ptr [ESP + 0x8],EDX       ; 0051177b
    MOVSD ES:EDI,ESI                    ; 0051177f
    MOVSD ES:EDI,ESI                    ; 00511780
    MOVSD ES:EDI,ESI                    ; 00511781
    ADD ESP,0x18                        ; 00511782
    POP EDI                             ; 00511785
    RET                                 ; 00511786

