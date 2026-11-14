; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_mini3d_cpp_getCameraRotation_FUN_00511790(CVector3f *output)
;
;
; Referenced Globals:
;   undefined4 DAT_01d2251c
;   undefined4 DAT_01d22520
;   undefined4 DAT_01d22524
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00511790
        ;   Label: engine_mini3d.cpp_getCameraRotation_FUN_00511790
    SUB ESP,0xc                         ; 00511791
    MOV EAX,ESI                         ; 00511794
    MOV EDX,dword ptr [0x01d2251c]      ; 00511796 | DAT_01d2251c
    MOV dword ptr [ESP],EDX             ; 0051179c
    MOV EDX,dword ptr [0x01d22520]      ; 0051179f | DAT_01d22520
    MOV EDI,ESI                         ; 005117a5
    MOV dword ptr [ESP + 0x8],EDX       ; 005117a7
    MOV EDX,dword ptr [0x01d22524]      ; 005117ab | DAT_01d22524
    MOV ESI,ESP                         ; 005117b1
    MOV dword ptr [ESP + 0x4],EDX       ; 005117b3
    MOVSD ES:EDI,ESI                    ; 005117b7
    MOVSD ES:EDI,ESI                    ; 005117b8
    MOVSD ES:EDI,ESI                    ; 005117b9
    ADD ESP,0xc                         ; 005117ba
    POP EDI                             ; 005117bd
    RET                                 ; 005117be

